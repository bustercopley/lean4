/-
Copyright (c) 2020 Sebastian Ullrich. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/
import Lean.Delaborator
import Lean.PrettyPrinter.Parenthesizer
import Lean.PrettyPrinter.Formatter
import Lean.Parser.Module

namespace Lean
namespace PrettyPrinter

def ppTerm (stx : Syntax) : CoreM Format :=
parenthesizeTerm stx >>= formatTerm

def ppExpr (e : Expr) : MetaM Format := do
stx ← delab e;
liftM $ ppTerm stx

def ppCommand (stx : Syntax) : CoreM Format :=
parenthesizeCommand stx >>= formatCommand

def ppModule (stx : Syntax) : CoreM Format := do
parenthesize Lean.Parser.Module.module.parenthesizer stx >>= format Lean.Parser.Module.module.formatter

def ppExprFn (ppCtx : PPContext) (e : Expr) : IO Format := do
(fmt, _, _) ← (ppExpr e).toIO { options := ppCtx.opts } { env := ppCtx.env } { lctx := ppCtx.lctx } { mctx := ppCtx.mctx };
pure fmt

-- TODO: activate when ready
/-@[init]-/ def registerPPTerm : IO Unit := do
ppExprFnRef.set ppExprFn

end PrettyPrinter
end Lean
