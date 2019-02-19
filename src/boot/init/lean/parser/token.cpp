// Lean compiler output
// Module: init.lean.parser.token
// Imports: init.lean.parser.combinators init.lean.parser.string_literal
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__11(obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___lambda__2(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__16(obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__tokens;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__28(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__22(obj*, obj*, obj*);
obj* l_list_mfoldr___main___at_lean_parser_number_x_27___spec__13(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__10(obj*);
obj* l_lean_parser_match__token___closed__2;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__4(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_bind__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__1(obj*, obj*, obj*);
obj* l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1(obj*);
obj* l_lean_parser_unicode__symbol_lean_parser_has__tokens(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__6(uint32, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__6___boxed(obj*, obj*, obj*, obj*);
uint8 l_char_is__whitespace(uint32);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__19___rarg(obj*, obj*);
extern obj* l_lean_parser_parse__hex__digit___rarg___lambda__5___closed__1;
obj* l_lean_parser_id__part___at___private_init_lean_parser_token_4__ident_x_27___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__9(obj*, obj*, obj*);
obj* l_lean_parser_trie_match__prefix___rarg(obj*, obj*);
obj* l_lean_parser_detail__ident__suffix_has__view;
obj* l_lean_parser_match__token(obj*, obj*, obj*);
obj* l_lean_parser_number_parser_view___rarg___closed__2;
extern uint8 l_true_decidable;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__8(obj*);
obj* l_lean_parser_number_x_27___closed__1;
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__6(obj*, uint8, obj*);
obj* l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw_view___rarg(obj*, obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_detail__ident__part_has__view;
extern obj* l_lean_parser_parse__hex__digit___rarg___lambda__3___closed__1;
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_number_x_27___spec__12___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw___rarg___lambda__3(uint8, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_finish__comment__block___closed__1;
obj* l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__2(uint32, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__9(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_number;
obj* l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_token_4__ident_x_27(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1(obj*);
obj* l_lean_parser_raw__str_view__default___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_combinators_many___rarg___closed__1;
obj* l_lean_parser_symbol__or__ident___rarg(obj*, obj*);
obj* l_lean_parser_raw__str_view__default(obj*);
obj* l_lean_parser_as__substring___rarg___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux___main(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__21(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__12(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_view_value___spec__7(obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__19(obj*);
obj* l_lean_parser_ident_parser_view___rarg___lambda__1___closed__2;
obj* l_lean_parser_raw_view___rarg___lambda__2(obj*);
obj* l_lean_parser_detail__ident_parser___closed__1;
obj* l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__2;
namespace lean {
obj* nat_add(obj*, obj*);
}
extern obj* l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__6(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__4(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser___spec__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_indexed(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__20(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_parser___rarg(obj*);
obj* l_lean_parser_symbol__core___rarg(obj*, obj*, obj*, obj*);
obj* l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg(obj*, obj*, obj*, obj*);
extern obj* l_mjoin___rarg___closed__1;
obj* l_lean_parser_string__lit_parser_tokens(obj*, obj*);
obj* l_lean_parser_string__lit_parser___rarg___closed__1;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__9(obj*, obj*, obj*);
extern uint32 l_lean_id__end__escape;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__18(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__11(obj*, obj*, obj*);
obj* l_lean_parser_number_view_to__nat(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__4___boxed(obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_basic__parser__m_monad;
obj* l_reader__t_bind___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__7___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__6___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_ident_parser_view___rarg(obj*);
obj* l_lean_parser_symbol___rarg(obj*, obj*, obj*);
obj* l_lean_parser_with__trailing___rarg___lambda__1(obj*, obj*);
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_string__lit_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_parse__hex__lit(obj*, obj*, obj*);
extern obj* l_lean_parser_rec__t_run__parsec___rarg___lambda__1___closed__1;
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__2(obj*);
obj* l_lean_parser_as__substring___rarg___lambda__1(obj*, obj*, obj*);
obj* l_lean_parser_detail__ident_has__view_x_27___lambda__1(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__10(obj*, obj*, obj*);
obj* l_lean_parser_list_cons_tokens___rarg(obj*, obj*);
obj* l_lean_parser_number_parser___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_with__trailing___at_lean_parser_token___spec__3(obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw_view___rarg___closed__1;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__14(obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__1(obj*);
obj* l_lean_parser_number_has__view_x_27___lambda__1(obj*);
obj* l_lean_parser_raw___rarg___lambda__1(obj*, uint8, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___lambda__1(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_option_to__monad___main___at_lean_parser_indexed___spec__2___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_string__lit_parser___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_try__mk__res___rarg(obj*);
obj* l_lean_parser_raw__ident_parser_view___rarg(obj*);
obj* l_lean_parser_string__lit_x_27___closed__1;
obj* l_lean_parser_detail__ident__suffix_has__view_x_27;
obj* l_lean_parser_monad__parsec_whitespace___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__1(obj*, obj*, obj*);
obj* l_list_reverse___rarg(obj*);
obj* l_lean_parser_ident_parser___rarg___closed__1;
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_reader__t_alternative___rarg(obj*, obj*);
obj* l_lean_parser_unicode__symbol_view__default___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl___at___private_init_lean_parser_token_4__ident_x_27___spec__20(obj*, obj*, obj*, obj*);
obj* l_list_enum__from___main___rarg(obj*, obj*);
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__4___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident_has__view_x_27;
obj* l_lean_parser_raw__str___rarg(obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_number_parser_view___rarg___closed__1;
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_string__lit_view_value___spec__2(uint32, obj*);
uint8 l_char_is__digit(uint32);
obj* l_lean_parser_number_view_to__nat___main(obj*);
obj* l_lean_parser_as__substring___rarg___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__8___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_labels__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_id__part__default___at___private_init_lean_parser_token_4__ident_x_27___spec__3(obj*, obj*, obj*);
uint32 l_char_of__nat(obj*);
obj* l___private_init_lean_parser_token_2__whitespace__aux___main(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_number_x_27___spec__11(obj*, obj*, obj*, obj*, obj*, obj*);
uint8 l_lean_parser_syntax_is__of__kind___main(obj*, obj*);
extern obj* l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
obj* l_lean_parser_ident_parser(obj*);
obj* l_lean_parser_raw___rarg(obj*, obj*, obj*, obj*, obj*, uint8);
obj* l_string_quote(obj*);
extern obj* l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__4(uint32, obj*, obj*, obj*);
obj* l_lean_parser_raw___rarg___lambda__3___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__26(obj*, obj*, obj*);
namespace lean {
obj* string_iterator_next(obj*);
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__3___rarg(obj*, obj*);
obj* l_lean_parser_raw__str_lean_parser_has__tokens(obj*, obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_ident_parser_view___rarg___closed__1;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__5(obj*, obj*, obj*);
obj* l_lean_parser_combinators_any__of___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__2(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_longest__match___at_lean_parser_number_x_27___spec__10(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__7(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__7(obj*, obj*, obj*);
obj* l_list_mfoldl___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__16(obj*, obj*, obj*, obj*, obj*, obj*);
uint8 l_lean_is__id__end__escape(uint32);
obj* l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_has__view;
obj* l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(uint32, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_x_27___spec__4(obj*);
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__3;
obj* l_lean_parser_parse__string__literal___at_lean_parser_string__lit_view_value___spec__1(obj*);
obj* l_lean_parser_monad__parsec_observing___at_lean_parser_peek__token___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__1(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__3(obj*, uint8, obj*);
obj* l_lean_parser_raw___rarg___lambda__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw__ident_parser_tokens(obj*, obj*);
namespace lean {
obj* string_length(obj*);
}
obj* l_list_map___main___at_lean_parser_number_x_27___spec__9(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__13(uint32, obj*, obj*, obj*);
obj* l_lean_parser_symbol__or__ident(obj*);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__6___boxed(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_parser_view(obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__25___rarg(obj*, obj*);
obj* l_lean_parser_symbol__core(obj*);
uint8 l_string_is__empty(obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__10___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__25(obj*);
obj* l_lean_parser_number_parser_tokens(obj*, obj*);
obj* l_lean_parser_detail__ident__part_has__view_x_27;
obj* l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__2___rarg(obj*, obj*);
uint8 l_char_is__alpha(uint32);
obj* l_lean_parser_detail__ident_parser___lambda__1(obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint32 string_iterator_curr(obj*);
}
obj* l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_x_27___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__17___rarg(obj*, obj*);
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__29(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_token_2__whitespace__aux___main___closed__3;
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__4(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__hex__lit___spec__2(uint32, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__1;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__2(uint32, obj*, obj*, obj*);
extern obj* l_lean_name_to__string___closed__1;
obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_lean_parser_symbol__or__ident_view___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3(obj*);
obj* l_function_comp___rarg(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__14(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_4__ident_x_27___spec__19(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_parser_view___rarg___closed__2;
obj* l_lean_parser_number_view_of__nat(obj*);
obj* l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(obj*);
obj* l_lean_parser_monad__parsec_digit___at_lean_parser_string__lit_x_27___spec__6(obj*, obj*, obj*);
obj* l_lean_parser_number_parser___rarg___closed__1;
obj* l_lean_parser_number_has__view_x_27;
obj* l_reader__t_lift___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__5(obj*);
obj* l_lean_parser_unicode__symbol_view__default(obj*);
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__1;
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__4(obj*);
obj* l_lean_parser_symbol(obj*);
obj* l_lean_parser_detail__ident__suffix;
extern obj* l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_raw__str(obj*);
obj* l_lean_parser_string__lit;
obj* l_lean_parser_match__token___closed__1;
obj* l_lean_parser_raw__ident_parser___rarg(obj*);
obj* l_lean_parser_raw__ident_parser(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_parse__hex__lit___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__21___rarg(obj*, obj*);
obj* l___private_init_lean_parser_parsec_1__str__aux___main(obj*, obj*, obj*);
obj* l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(obj*, obj*);
obj* l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__4;
obj* l_option_to__monad___main___at_lean_parser_indexed___spec__2(obj*);
obj* l_lean_parser_number_has__view;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_detail__ident_x_27___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__23___rarg(obj*, obj*);
obj* l_reader__t_lift___at_lean_parser_with__trailing___spec__1(obj*);
obj* l_lean_parser_number_has__view_x_27___lambda__2___closed__2;
obj* l___private_init_lean_parser_token_2__whitespace__aux___main___closed__2;
obj* l_lean_parser_unicode__symbol(obj*);
obj* l_lean_parser_peek__token(obj*, obj*, obj*);
obj* l_lean_parser_rec__t_recurse___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__8(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_token_3__update__trailing(obj*, obj*);
obj* l_lean_parser_tokens___rarg(obj*);
obj* l_list_mfoldl___main___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__10(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_option_get__or__else___main___rarg(obj*, obj*);
uint8 l_lean_is__id__rest(uint32);
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__3___boxed(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_x_27___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__3(obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw__ident_parser_view(obj*);
obj* l_lean_parser_raw__str_lean_parser_has__view(obj*);
obj* l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
obj* l_lean_parser_string__lit_parser(obj*);
obj* l_lean_parser_with__trailing___rarg___lambda__3(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__13(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parse__quoted__char___at_lean_parser_string__lit_view_value___spec__6(obj*);
extern obj* l_lean_parser_no__kind;
obj* l_lean_parser_syntax_as__node___main(obj*);
obj* l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_view_value___closed__1;
obj* l_string_to__nat(obj*);
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__5(obj*);
obj* l_lean_parser_symbol_view___rarg(obj*, obj*, obj*);
obj* l_lean_parser_rec__t_run___at_lean_parser_detail__ident_parser___spec__2(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__27___rarg(obj*, obj*);
obj* l_lean_parser_symbol_view__default___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__17(uint32, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__6(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__2(uint32, obj*, obj*, obj*);
namespace lean {
uint8 string_iterator_has_next(obj*);
}
obj* l_lean_parser_raw_tokens___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_symbol_tokens___rarg(obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_number_x_27___spec__12(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_parse__hex__lit___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_raw_view___rarg___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_lean_parser_combinators_optional___at_lean_parser_detail__ident_x_27___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw_view___rarg___lambda__1(obj*);
obj* l_lean_parser_detail__ident_parser___closed__2;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_mk__raw__res(obj*, obj*);
obj* l_lean_parser_detail__ident_has__view;
obj* l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(obj*);
extern obj* l_char_has__repr___closed__1;
obj* l___private_init_lean_parser_token_8__to__nat__base(obj*, obj*);
obj* l_string_iterator_nextn___main(obj*, obj*);
obj* l___private_init_lean_parser_token_3__update__trailing___main(obj*, obj*);
obj* l___private_init_lean_parser_token_2__whitespace__aux___main___closed__1;
obj* l_lean_parser_token__cont(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_peek__token___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__8(obj*);
obj* l_lean_parser_detail__ident_parser(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__7(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__8___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_curr___at___private_init_lean_parser_token_4__ident_x_27___spec__2(obj*);
obj* l_lean_parser_detail__ident_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__13(uint32, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_view_value___spec__7___rarg(obj*, obj*, obj*);
obj* l_lean_parser_symbol__core___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_node_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__1;
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_unicode__symbol___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
extern obj* l_lean_parser_monad__parsec_left__over___rarg___closed__1;
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__5(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_digit___at_lean_parser_string__lit_view_value___spec__9(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__8(obj*, obj*, obj*, obj*);
obj* l_lean_parser_finish__comment__block___closed__2;
obj* l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__13___boxed(obj*, obj*, obj*, obj*);
extern obj* l_string_join___closed__1;
obj* l_lean_parser_raw__str___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_id___rarg(obj*);
obj* l_lean_parser_detail__ident__part;
obj* l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_number_x_27___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__9___boxed(obj*, obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__5(obj*);
obj* l_lean_parser_token___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__12(obj*);
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
namespace lean {
obj* uint32_to_nat(uint32);
}
obj* l_lean_parser_rec__t_lean_parser_monad__parsec___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_str__core___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw__str_lean_parser_has__view___rarg(obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_number_x_27___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__8(obj*, obj*, obj*);
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__1___rarg(obj*, obj*);
obj* l_lean_parser_syntax_mk__node(obj*, obj*);
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(uint32, obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_match__token___lambda__1(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_parse__oct__lit___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part_parser(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__2(uint32, obj*, obj*, obj*);
obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1;
obj* l_lean_parser_number_parser(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at___private_init_lean_parser_token_4__ident_x_27___spec__12(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__15(obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part_parser___lambda__2(obj*, obj*, obj*, obj*);
obj* l_lean_parser_finish__comment__block(obj*, obj*, obj*, obj*);
obj* l_lean_parser_indexed___rarg___closed__1;
obj* l___private_init_lean_parser_token_5__mk__consume__token(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw__ident_parser___rarg___closed__1;
obj* l_lean_parser_ident_parser___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__oct__lit___spec__2(uint32, obj*, obj*, obj*);
obj* l_list_map___main___at_lean_parser_number_x_27___spec__9___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_combinators_longest__choice___at_lean_parser_number_x_27___spec__8(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__24(obj*, obj*, obj*);
extern obj* l_lean_parser_parsec__t_failure___rarg___closed__1;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__13___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_token(obj*, obj*, obj*);
obj* l_lean_parser_whitespace(obj*, obj*, obj*);
obj* l_reader__t_monad__except___rarg(obj*);
obj* l_lean_parser_indexed___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_as__substring(obj*);
obj* l_lean_parser_ident_parser_view___rarg___lambda__2(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__6(uint32, obj*, obj*, obj*);
obj* l_lean_parser_with__trailing___rarg(obj*, obj*, obj*, obj*);
extern uint32 l_lean_id__begin__escape;
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__3(obj*);
namespace lean {
obj* string_iterator_offset(obj*);
}
obj* l_list_foldl___main___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__3(obj*, obj*, obj*, obj*, obj*);
obj* l_reader__t_lift___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__5___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_token_7__to__nat__core(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_curr___at___private_init_lean_parser_token_4__ident_x_27___spec__2___rarg(obj*, obj*);
obj* l_lean_parser_with__trailing___rarg___lambda__2(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4(obj*, obj*);
obj* l_lean_parser_symbol__or__ident_view(obj*);
obj* l_lean_parser_raw(obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_parse__oct__lit___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_raw_view___rarg___closed__2;
obj* l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
obj* l_lean_parser_string__lit_parser_view___rarg___closed__1;
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__2;
obj* l_lean_parser_symbol_view__default(obj*);
obj* l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15(obj*, obj*, obj*, obj*, obj*);
extern obj* l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__17(obj*);
obj* l_lean_parser_detail__ident__part_parser___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_any___at_lean_parser_string__lit_view_value___spec__5(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__6(uint32, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__18(obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_merge___rarg(obj*, obj*);
obj* l_lean_parser_indexed___rarg___lambda__1___closed__1;
obj* l_lean_parser_monad__parsec_observing___at_lean_parser_token___spec__2(obj*, obj*, obj*);
obj* l_lean_parser_substring_to__string(obj*);
obj* l_lean_parser_try__view___at_lean_parser_string__lit_parser___spec__1(obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__2;
obj* l_lean_parser_unicode__symbol_lean_parser_has__view(obj*);
obj* l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__1;
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__5(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__17___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__12___rarg(obj*, obj*);
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_x_27___spec__4___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_ident_parser_view___rarg___closed__2;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__10(obj*);
obj* l_lean_parser_detail__ident__part__escaped_has__view;
obj* l_lean_parser_id__part__escaped___at___private_init_lean_parser_token_4__ident_x_27___spec__10(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw__str_view__default___rarg(obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_combinators_any__of_view___rarg(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
obj* l___private_init_lean_parser_token_2__whitespace__aux(obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw_view___rarg___lambda__3(obj*);
obj* l_lean_parser_indexed___rarg(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__2(uint32, uint32, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__11(obj*, obj*, obj*);
obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__12(obj*);
obj* l_lean_parser_symbol_tokens(obj*, obj*);
obj* l_lean_parser_detail__ident__part__escaped_has__view_x_27;
obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__3;
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__5___rarg(obj*, obj*);
obj* l_lean_parser_as__substring___rarg(obj*, obj*, obj*, obj*);
namespace lean {
obj* string_iterator_remaining(obj*);
}
namespace lean {
obj* string_mk_iterator(obj*);
}
extern obj* l_lean_parser_basic__parser__m_alternative;
obj* l_lean_parser_with__trailing___rarg___closed__1;
obj* l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view;
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__4___rarg(obj*, obj*);
obj* l_lean_parser_symbol__or__ident___rarg___lambda__1(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_token___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__1(obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_any___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__2(obj*, obj*, obj*);
obj* l_string_trim(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__4(uint32, obj*, obj*, obj*);
obj* l_lean_parser_number__or__string__lit(obj*, obj*, obj*);
obj* l_lean_parser_raw___rarg___lambda__2(obj*, uint8, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_option_get___main___at_lean_parser_run___spec__2(obj*);
obj* l_lean_parser_unicode__symbol_lean_parser_has__tokens___rarg(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__9(obj*, obj*, obj*);
obj* l_lean_parser_raw___rarg___lambda__1___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw_view(obj*);
obj* l_lean_parser_ident_parser_view___rarg___lambda__1(obj*);
obj* l_lean_parser_number_parser_view(obj*);
obj* l_lean_parser_number_has__view_x_27___lambda__2(obj*);
obj* l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_view_value___spec__4(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__5(obj*, obj*, obj*);
obj* l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(uint8, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__7(obj*, obj*, obj*);
obj* l_lean_parser_combinators_monad__lift_view___rarg(obj*, obj*, obj*);
obj* l_lean_parser_combinators_seq__right_view___rarg(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_reader__t_monad___rarg(obj*);
obj* l_lean_parser_detail__ident;
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__2(obj*, obj*, obj*, obj*);
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___spec__1(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_token_7__to__nat__core___main(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__6___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_number_x_27___lambda__2(obj*, obj*, obj*, obj*);
extern "C" obj* lean_name_mk_numeral(obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__10___rarg(obj*, obj*);
obj* l_lean_parser_detail__ident__part__escaped;
uint8 l_lean_is__id__first(uint32);
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_nat_repr(obj*);
obj* l_lean_parser_parse__string__literal___at_lean_parser_string__lit_x_27___spec__1(obj*, obj*, obj*);
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__4;
namespace lean {
uint32 uint32_of_nat(obj*);
}
namespace lean {
obj* nat_mul(obj*, obj*);
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__4(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__hex__lit___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__23(obj*);
obj* l___private_init_lean_parser_parsec_3__mk__string__result___rarg(obj*, obj*);
obj* l_lean_parser_symbol__or__ident_tokens(obj*, obj*, obj*);
obj* l_lean_parser_with__trailing(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__2(obj*);
uint8 l_lean_is__id__begin__escape(uint32);
obj* l_lean_parser_ident_parser_view(obj*);
obj* l_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens;
obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__2;
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__2;
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__5(obj*, obj*, obj*);
obj* l_lean_parser_string__lit_has__view_x_27;
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__6(uint32, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__2(obj*);
extern obj* l___private_init_data_string_basic_4__to__nat__core___main___closed__1;
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_lean_parser_string__lit_x_27(obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part_parser___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__27(obj*);
obj* l_lean_parser_number_x_27___lambda__3(obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__oct__lit___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__view;
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
obj* l_lean_parser_parse__bin__lit(obj*, obj*, obj*);
extern obj* l_lean_parser_basic__parser__m_lean_parser_monad__parsec;
obj* l_reader__t_bind___at_lean_parser_with__trailing___spec__2(obj*, obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__2___rarg(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident_x_27(obj*, obj*, obj*, obj*);
namespace lean {
obj* string_push(obj*, uint32);
}
obj* l_lean_parser_parse__oct__lit(obj*, obj*, obj*);
obj* l_dlist_singleton___rarg(obj*, obj*);
obj* l_lean_parser_symbol__core___rarg___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_basic__parser__m_monad__except;
obj* l_lean_parser_parsec__t_orelse__mk__res___rarg(obj*, obj*);
obj* l_lean_parser_symbol_view(obj*);
obj* l_lean_parser_unicode__symbol_lean_parser_has__view___rarg(obj*, obj*, obj*, obj*);
obj* l_reader__t_bind___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__7(obj*, obj*);
obj* l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1___closed__1;
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__5___rarg(obj*, obj*);
obj* l_lean_parser_detail__ident__suffix_parser___closed__1;
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_string__lit_view_value___spec__2___boxed(obj*, obj*);
obj* l___private_init_lean_parser_token_3__update__trailing__lst(obj*, obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__13(obj*, obj*, obj*);
obj* l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
obj* l_option_map___rarg(obj*, obj*);
obj* l_lean_parser_raw__str_lean_parser_has__view___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1(obj*, obj*, obj*, obj*, obj*);
extern obj* l_lean_parser_combinators_any__of___rarg___closed__1;
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__12___rarg(obj*, obj*);
obj* l_lean_parser_number_parser_view___rarg(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_number_parser___rarg(obj*);
obj* l_lean_parser_raw__str_lean_parser_has__tokens___boxed(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_substring_of__string(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__6___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_string__lit_view_value(obj*);
obj* l_lean_parser_parse__quoted__char___at_lean_parser_string__lit_x_27___spec__3(obj*, obj*, obj*);
obj* l_lean_parser_ident_parser_tokens(obj*, obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_parser_detail__ident_parser___spec__3(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__2___boxed(obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__suffix_parser(obj*, obj*, obj*, obj*);
obj* l_reader__t_lift___at_lean_parser_detail__ident_x_27___spec__1(obj*);
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__9(uint32, obj*, obj*, obj*);
obj* l_lean_parser_number_x_27___lambda__4(obj*, obj*, obj*, obj*);
obj* l_lean_parser_string__lit_parser_view___rarg(obj*);
obj* l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_ident_parser___rarg(obj*);
obj* l_reader__t_lift___at_lean_parser_detail__ident_x_27___spec__1___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1(obj*);
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__7(obj*, obj*, obj*);
obj* l_char_quote__core(uint32);
obj* l___private_init_lean_parser_token_3__update__trailing__lst___main(obj*, obj*);
obj* l_lean_parser_number_x_27(obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__1(obj*, obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_parser_rec_1__run__aux___main___rarg(obj*, obj*, obj*, obj*);
obj* l_lean_parser_raw_tokens(obj*, obj*, obj*, obj*, obj*, obj*, uint8);
obj* l_lean_parser_raw_view___rarg___lambda__3___closed__1;
obj* l_lean_parser_match__token___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_match__token___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_match__token___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_parser_match__token___closed__2() {
_start:
{
obj* x_0; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id___rarg), 1, 0);
lean::inc(x_0);
lean::inc(x_0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_3, 0, x_0);
lean::closure_set(x_3, 1, x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_4, 0, x_0);
lean::closure_set(x_4, 1, x_3);
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_parser_match__token(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
lean::inc(x_1);
x_7 = l_lean_parser_trie_match__prefix___rarg(x_3, x_1);
x_8 = l_lean_parser_match__token___closed__1;
x_9 = l_option_map___rarg(x_8, x_7);
x_10 = l_lean_parser_match__token___closed__2;
x_11 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_1);
lean::cnstr_set(x_11, 2, x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_2);
return x_12;
}
}
obj* l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_8; obj* x_9; uint8 x_10; obj* x_11; obj* x_12; obj* x_13; 
lean::dec(x_4);
x_8 = l_option_get__or__else___main___rarg(x_2, x_5);
x_9 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_0);
lean::cnstr_set(x_9, 2, x_1);
lean::cnstr_set(x_9, 3, x_3);
x_10 = 0;
x_11 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set_scalar(x_11, sizeof(void*)*1, x_10);
x_12 = x_11;
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_6);
return x_13;
}
}
obj* l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg), 7, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_any___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
x_7 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
x_13 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_14 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_8);
if (lean::is_scalar(x_12)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_12;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_10);
return x_15;
}
else
{
uint32 x_16; uint8 x_17; 
x_16 = lean::string_iterator_curr(x_1);
x_17 = l_true_decidable;
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_18 = l_char_quote__core(x_16);
x_19 = l_char_has__repr___closed__1;
x_20 = lean::string_append(x_19, x_18);
lean::dec(x_18);
x_22 = lean::string_append(x_20, x_19);
x_23 = lean::box(0);
x_24 = l_mjoin___rarg___closed__1;
x_25 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_22, x_24, x_23, x_23, x_0, x_1, x_2);
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
if (lean::is_exclusive(x_25)) {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_30 = x_25;
} else {
 lean::dec(x_25);
 x_30 = lean::box(0);
}
x_31 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_31, x_26);
if (lean::is_scalar(x_30)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_30;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_28);
return x_33;
}
else
{
obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_35 = lean::string_iterator_next(x_1);
x_36 = lean::box(0);
x_37 = lean::box_uint32(x_16);
x_38 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_35);
lean::cnstr_set(x_38, 2, x_36);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_2);
return x_39;
}
}
}
}
obj* l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_7; 
lean::dec(x_2);
lean::inc(x_0);
x_7 = l_string_is__empty(x_0);
if (x_7 == 0)
{
obj* x_8; obj* x_10; obj* x_12; 
x_8 = lean::string_length(x_0);
lean::inc(x_0);
x_10 = lean::string_mk_iterator(x_0);
lean::inc(x_3);
x_12 = l___private_init_lean_parser_parsec_1__str__aux___main(x_8, x_10, x_3);
if (lean::obj_tag(x_12) == 0)
{
obj* x_14; obj* x_15; obj* x_16; uint8 x_17; obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_0);
x_14 = lean::box(0);
x_15 = l_string_join___closed__1;
x_16 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_16, 0, x_3);
lean::cnstr_set(x_16, 1, x_15);
lean::cnstr_set(x_16, 2, x_1);
lean::cnstr_set(x_16, 3, x_14);
x_17 = 0;
x_18 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set_scalar(x_18, sizeof(void*)*1, x_17);
x_19 = x_18;
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_4);
return x_20;
}
else
{
obj* x_23; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_1);
lean::dec(x_3);
x_23 = lean::cnstr_get(x_12, 0);
lean::inc(x_23);
lean::dec(x_12);
x_26 = lean::box(0);
x_27 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_27, 0, x_0);
lean::cnstr_set(x_27, 1, x_23);
lean::cnstr_set(x_27, 2, x_26);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_4);
return x_28;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_1);
lean::dec(x_0);
x_31 = l_string_join___closed__1;
x_32 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_33 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_33, 0, x_31);
lean::cnstr_set(x_33, 1, x_3);
lean::cnstr_set(x_33, 2, x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_4);
return x_34;
}
}
}
obj* _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("-/");
return x_0;
}
}
obj* _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("-/");
x_1 = l_string_quote(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("/-");
return x_0;
}
}
obj* _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__4() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("/-");
x_1 = l_string_quote(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; uint8 x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_18; obj* x_19; obj* x_21; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_1, x_7);
lean::dec(x_1);
x_10 = lean::nat_dec_eq(x_0, x_7);
x_14 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__3;
x_15 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__4;
lean::inc(x_3);
lean::inc(x_2);
x_18 = l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(x_14, x_15, x_2, x_3, x_4);
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_29; obj* x_32; obj* x_33; obj* x_35; obj* x_38; 
x_24 = lean::cnstr_get(x_19, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_19, 2);
lean::inc(x_26);
lean::dec(x_19);
x_29 = lean::nat_add(x_0, x_7);
lean::inc(x_2);
lean::inc(x_8);
x_32 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main(x_29, x_8, x_2, x_24, x_21);
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
lean::dec(x_32);
x_38 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_26, x_33);
x_11 = x_38;
x_12 = x_35;
goto lbl_13;
}
else
{
obj* x_39; uint8 x_41; obj* x_42; obj* x_43; obj* x_44; 
x_39 = lean::cnstr_get(x_19, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get_scalar<uint8>(x_19, sizeof(void*)*1);
if (lean::is_exclusive(x_19)) {
 lean::cnstr_release(x_19, 0);
 x_42 = x_19;
} else {
 lean::dec(x_19);
 x_42 = lean::box(0);
}
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_39);
lean::cnstr_set_scalar(x_43, sizeof(void*)*1, x_41);
x_44 = x_43;
x_11 = x_44;
x_12 = x_21;
goto lbl_13;
}
lbl_13:
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_49; 
lean::dec(x_8);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_49 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_49, 0, x_11);
lean::cnstr_set(x_49, 1, x_12);
return x_49;
}
else
{
obj* x_50; uint8 x_52; obj* x_53; obj* x_54; 
x_50 = lean::cnstr_get(x_11, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get_scalar<uint8>(x_11, sizeof(void*)*1);
if (x_52 == 0)
{
obj* x_57; obj* x_58; obj* x_61; obj* x_62; obj* x_64; 
lean::dec(x_11);
x_57 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__1;
x_58 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__2;
lean::inc(x_3);
lean::inc(x_2);
x_61 = l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(x_57, x_58, x_2, x_3, x_12);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
lean::dec(x_61);
if (lean::obj_tag(x_62) == 0)
{
obj* x_67; obj* x_69; obj* x_71; 
x_67 = lean::cnstr_get(x_62, 1);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_62, 2);
lean::inc(x_69);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 lean::cnstr_release(x_62, 1);
 lean::cnstr_release(x_62, 2);
 x_71 = x_62;
} else {
 lean::dec(x_62);
 x_71 = lean::box(0);
}
if (x_10 == 0)
{
obj* x_73; obj* x_76; obj* x_77; obj* x_79; obj* x_82; 
lean::dec(x_71);
x_73 = lean::nat_sub(x_0, x_7);
lean::inc(x_2);
lean::inc(x_8);
x_76 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main(x_73, x_8, x_2, x_67, x_64);
x_77 = lean::cnstr_get(x_76, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get(x_76, 1);
lean::inc(x_79);
lean::dec(x_76);
x_82 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_69, x_77);
x_53 = x_82;
x_54 = x_79;
goto lbl_55;
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; 
x_83 = lean::box(0);
x_84 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_71)) {
 x_85 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_85 = x_71;
}
lean::cnstr_set(x_85, 0, x_83);
lean::cnstr_set(x_85, 1, x_67);
lean::cnstr_set(x_85, 2, x_84);
x_86 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_69, x_85);
x_53 = x_86;
x_54 = x_64;
goto lbl_55;
}
}
else
{
obj* x_87; uint8 x_89; obj* x_90; obj* x_91; obj* x_92; 
x_87 = lean::cnstr_get(x_62, 0);
lean::inc(x_87);
x_89 = lean::cnstr_get_scalar<uint8>(x_62, sizeof(void*)*1);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 x_90 = x_62;
} else {
 lean::dec(x_62);
 x_90 = lean::box(0);
}
if (lean::is_scalar(x_90)) {
 x_91 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_91 = x_90;
}
lean::cnstr_set(x_91, 0, x_87);
lean::cnstr_set_scalar(x_91, sizeof(void*)*1, x_89);
x_92 = x_91;
x_53 = x_92;
x_54 = x_64;
goto lbl_55;
}
}
else
{
obj* x_98; 
lean::dec(x_8);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_50);
x_98 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_98, 0, x_11);
lean::cnstr_set(x_98, 1, x_12);
return x_98;
}
lbl_55:
{
if (lean::obj_tag(x_53) == 0)
{
obj* x_103; obj* x_104; 
lean::dec(x_8);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_103 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_50, x_53);
x_104 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_54);
return x_104;
}
else
{
obj* x_105; uint8 x_107; 
x_105 = lean::cnstr_get(x_53, 0);
lean::inc(x_105);
x_107 = lean::cnstr_get_scalar<uint8>(x_53, sizeof(void*)*1);
if (x_107 == 0)
{
obj* x_110; obj* x_111; obj* x_113; obj* x_115; 
lean::dec(x_53);
lean::inc(x_2);
x_110 = l_lean_parser_monad__parsec_any___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__2(x_2, x_3, x_54);
x_111 = lean::cnstr_get(x_110, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get(x_110, 1);
lean::inc(x_113);
if (lean::is_exclusive(x_110)) {
 lean::cnstr_release(x_110, 0);
 lean::cnstr_release(x_110, 1);
 x_115 = x_110;
} else {
 lean::dec(x_110);
 x_115 = lean::box(0);
}
if (lean::obj_tag(x_111) == 0)
{
obj* x_116; obj* x_118; obj* x_121; obj* x_122; obj* x_124; obj* x_127; obj* x_128; obj* x_129; obj* x_130; 
x_116 = lean::cnstr_get(x_111, 1);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_111, 2);
lean::inc(x_118);
lean::dec(x_111);
x_121 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main(x_0, x_8, x_2, x_116, x_113);
x_122 = lean::cnstr_get(x_121, 0);
lean::inc(x_122);
x_124 = lean::cnstr_get(x_121, 1);
lean::inc(x_124);
lean::dec(x_121);
x_127 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_118, x_122);
x_128 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_105, x_127);
x_129 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_50, x_128);
if (lean::is_scalar(x_115)) {
 x_130 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_130 = x_115;
}
lean::cnstr_set(x_130, 0, x_129);
lean::cnstr_set(x_130, 1, x_124);
return x_130;
}
else
{
obj* x_134; uint8 x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; 
lean::dec(x_8);
lean::dec(x_0);
lean::dec(x_2);
x_134 = lean::cnstr_get(x_111, 0);
lean::inc(x_134);
x_136 = lean::cnstr_get_scalar<uint8>(x_111, sizeof(void*)*1);
if (lean::is_exclusive(x_111)) {
 lean::cnstr_release(x_111, 0);
 x_137 = x_111;
} else {
 lean::dec(x_111);
 x_137 = lean::box(0);
}
if (lean::is_scalar(x_137)) {
 x_138 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_138 = x_137;
}
lean::cnstr_set(x_138, 0, x_134);
lean::cnstr_set_scalar(x_138, sizeof(void*)*1, x_136);
x_139 = x_138;
x_140 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_105, x_139);
x_141 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_50, x_140);
if (lean::is_scalar(x_115)) {
 x_142 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_142 = x_115;
}
lean::cnstr_set(x_142, 0, x_141);
lean::cnstr_set(x_142, 1, x_113);
return x_142;
}
}
else
{
obj* x_148; obj* x_149; 
lean::dec(x_8);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_105);
x_148 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_50, x_53);
x_149 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_149, 0, x_148);
lean::cnstr_set(x_149, 1, x_54);
return x_149;
}
}
}
}
}
}
else
{
obj* x_152; obj* x_153; obj* x_154; obj* x_155; 
lean::dec(x_1);
lean::dec(x_0);
x_152 = lean::box(0);
x_153 = l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
x_154 = l_mjoin___rarg___closed__1;
x_155 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_153, x_154, x_152, x_152, x_2, x_3, x_4);
return x_155;
}
}
}
obj* l___private_init_lean_parser_token_1__finish__comment__block__aux(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main(x_0, x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* _init_l_lean_parser_finish__comment__block___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("end of comment block");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_finish__comment__block___closed__2() {
_start:
{
obj* x_0; obj* x_2; obj* x_3; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_id___rarg), 1, 0);
lean::inc(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_0);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
return x_3;
}
}
obj* l_lean_parser_finish__comment__block(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_4 = lean::string_iterator_remaining(x_2);
x_5 = lean::mk_nat_obj(1u);
x_6 = lean::nat_add(x_4, x_5);
lean::dec(x_4);
x_8 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main(x_0, x_6, x_1, x_2, x_3);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_finish__comment__block___closed__1;
x_15 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_9, x_14);
x_16 = l_lean_parser_finish__comment__block___closed__2;
x_17 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_15);
if (lean::is_scalar(x_13)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_13;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_11);
return x_18;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__3(obj* x_0, uint8 x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_char_is__whitespace(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; uint8 x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_iterator_next(x_2);
x_16 = 1;
x_0 = x_13;
x_1 = x_16;
x_2 = x_15;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__2___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = 0;
x_4 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__3(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__2___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_whitespace___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; 
lean::dec(x_0);
x_4 = l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__2___rarg(x_1, x_2);
return x_4;
}
}
obj* _init_l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("-");
return x_0;
}
}
obj* _init_l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("-");
x_1 = l_string_quote(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
x_3 = l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__1;
x_4 = l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__2;
lean::inc(x_1);
x_6 = l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(x_3, x_4, x_0, x_1, x_2);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; uint8 x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 2);
lean::inc(x_14);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_16 = x_7;
} else {
 lean::dec(x_7);
 x_16 = lean::box(0);
}
x_17 = 0;
x_18 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_19 = lean::box(x_17);
if (lean::is_scalar(x_16)) {
 x_20 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_20 = x_16;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_12);
lean::cnstr_set(x_20, 2, x_18);
x_21 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_20);
if (lean::obj_tag(x_21) == 0)
{
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_24; obj* x_25; obj* x_26; 
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 lean::cnstr_release(x_21, 1);
 lean::cnstr_release(x_21, 2);
 x_24 = x_21;
} else {
 lean::dec(x_21);
 x_24 = lean::box(0);
}
if (lean::is_scalar(x_24)) {
 x_25 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_25 = x_24;
}
lean::cnstr_set(x_25, 0, x_22);
lean::cnstr_set(x_25, 1, x_1);
lean::cnstr_set(x_25, 2, x_18);
if (lean::is_scalar(x_11)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_11;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
return x_26;
}
else
{
obj* x_28; 
lean::dec(x_1);
if (lean::is_scalar(x_11)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_11;
}
lean::cnstr_set(x_28, 0, x_21);
lean::cnstr_set(x_28, 1, x_9);
return x_28;
}
}
else
{
uint8 x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_21);
x_30 = 1;
x_31 = lean::box(x_30);
x_32 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_1);
lean::cnstr_set(x_32, 2, x_18);
if (lean::is_scalar(x_11)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_11;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_9);
return x_33;
}
}
else
{
uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_7);
x_35 = 1;
x_36 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_37 = lean::box(x_35);
x_38 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_1);
lean::cnstr_set(x_38, 2, x_36);
if (lean::is_scalar(x_11)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_11;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_9);
return x_39;
}
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__6(obj* x_0, uint8 x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint32 x_9; uint8 x_10; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = 10;
x_10 = x_8 == x_9;
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_14; uint8 x_15; 
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_sub(x_0, x_11);
lean::dec(x_0);
x_14 = lean::string_iterator_next(x_2);
x_15 = 1;
x_0 = x_12;
x_1 = x_15;
x_2 = x_14;
goto _start;
}
else
{
obj* x_18; 
lean::dec(x_0);
x_18 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_18;
}
}
}
else
{
obj* x_20; 
lean::dec(x_0);
x_20 = l___private_init_lean_parser_parsec_5__mk__consumed__result___rarg(x_1, x_2);
return x_20;
}
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__5___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; uint8 x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = 0;
x_4 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__6(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__5(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__5___rarg), 2, 0);
return x_2;
}
}
obj* _init_l___private_init_lean_parser_token_2__whitespace__aux___main___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("input");
return x_0;
}
}
obj* _init_l___private_init_lean_parser_token_2__whitespace__aux___main___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("--");
return x_0;
}
}
obj* _init_l___private_init_lean_parser_token_2__whitespace__aux___main___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("--");
x_1 = l_string_quote(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_token_2__whitespace__aux___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_0, x_4);
if (x_5 == 0)
{
obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
lean::inc(x_1);
x_7 = l_lean_parser_monad__parsec_whitespace___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__1(x_1, x_2, x_3);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_28; obj* x_29; obj* x_31; 
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_8, 2);
lean::inc(x_15);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_17 = x_8;
} else {
 lean::dec(x_8);
 x_17 = lean::box(0);
}
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_sub(x_0, x_18);
lean::dec(x_0);
x_24 = l___private_init_lean_parser_token_2__whitespace__aux___main___closed__2;
x_25 = l___private_init_lean_parser_token_2__whitespace__aux___main___closed__3;
lean::inc(x_13);
lean::inc(x_1);
x_28 = l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(x_24, x_25, x_1, x_13, x_10);
x_29 = lean::cnstr_get(x_28, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
lean::dec(x_28);
if (lean::obj_tag(x_29) == 0)
{
obj* x_34; obj* x_36; obj* x_39; obj* x_40; obj* x_42; obj* x_45; 
x_34 = lean::cnstr_get(x_29, 1);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_29, 2);
lean::inc(x_36);
lean::dec(x_29);
x_39 = l_lean_parser_monad__parsec_take__while_x_27___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__5___rarg(x_34, x_31);
x_40 = lean::cnstr_get(x_39, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
lean::dec(x_39);
x_45 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_36, x_40);
if (lean::obj_tag(x_45) == 0)
{
obj* x_46; obj* x_48; obj* x_53; obj* x_54; obj* x_56; obj* x_59; 
x_46 = lean::cnstr_get(x_45, 1);
lean::inc(x_46);
x_48 = lean::cnstr_get(x_45, 2);
lean::inc(x_48);
lean::dec(x_45);
lean::inc(x_1);
lean::inc(x_19);
x_53 = l___private_init_lean_parser_token_2__whitespace__aux___main(x_19, x_1, x_46, x_42);
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_53, 1);
lean::inc(x_56);
lean::dec(x_53);
x_59 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_48, x_54);
x_21 = x_59;
x_22 = x_56;
goto lbl_23;
}
else
{
obj* x_60; uint8 x_62; obj* x_63; obj* x_64; obj* x_65; 
x_60 = lean::cnstr_get(x_45, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get_scalar<uint8>(x_45, sizeof(void*)*1);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 x_63 = x_45;
} else {
 lean::dec(x_45);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_60);
lean::cnstr_set_scalar(x_64, sizeof(void*)*1, x_62);
x_65 = x_64;
x_21 = x_65;
x_22 = x_42;
goto lbl_23;
}
}
else
{
obj* x_66; uint8 x_68; obj* x_69; obj* x_70; obj* x_71; 
x_66 = lean::cnstr_get(x_29, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get_scalar<uint8>(x_29, sizeof(void*)*1);
if (lean::is_exclusive(x_29)) {
 lean::cnstr_release(x_29, 0);
 x_69 = x_29;
} else {
 lean::dec(x_29);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_68);
x_71 = x_70;
x_21 = x_71;
x_22 = x_31;
goto lbl_23;
}
lbl_23:
{
if (lean::obj_tag(x_21) == 0)
{
obj* x_76; obj* x_77; 
lean::dec(x_19);
lean::dec(x_1);
lean::dec(x_13);
lean::dec(x_17);
x_76 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_21);
if (lean::is_scalar(x_12)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_12;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_22);
return x_77;
}
else
{
obj* x_78; uint8 x_80; obj* x_81; obj* x_82; 
x_78 = lean::cnstr_get(x_21, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get_scalar<uint8>(x_21, sizeof(void*)*1);
if (x_80 == 0)
{
obj* x_85; obj* x_86; obj* x_89; obj* x_90; obj* x_92; 
lean::dec(x_21);
x_85 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__3;
x_86 = l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__4;
lean::inc(x_13);
lean::inc(x_1);
x_89 = l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(x_85, x_86, x_1, x_13, x_22);
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
lean::dec(x_89);
if (lean::obj_tag(x_90) == 0)
{
obj* x_95; obj* x_97; obj* x_99; obj* x_102; obj* x_103; obj* x_105; 
x_95 = lean::cnstr_get(x_90, 1);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_90, 2);
lean::inc(x_97);
if (lean::is_exclusive(x_90)) {
 lean::cnstr_release(x_90, 0);
 lean::cnstr_release(x_90, 1);
 lean::cnstr_release(x_90, 2);
 x_99 = x_90;
} else {
 lean::dec(x_90);
 x_99 = lean::box(0);
}
lean::inc(x_95);
lean::inc(x_1);
x_102 = l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4(x_1, x_95, x_92);
x_103 = lean::cnstr_get(x_102, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_102, 1);
lean::inc(x_105);
lean::dec(x_102);
if (lean::obj_tag(x_103) == 0)
{
obj* x_108; obj* x_110; obj* x_112; uint8 x_115; 
x_108 = lean::cnstr_get(x_103, 0);
lean::inc(x_108);
x_110 = lean::cnstr_get(x_103, 1);
lean::inc(x_110);
x_112 = lean::cnstr_get(x_103, 2);
lean::inc(x_112);
lean::dec(x_103);
x_115 = lean::unbox(x_108);
if (x_115 == 0)
{
obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_122; obj* x_123; obj* x_125; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; 
lean::dec(x_99);
x_117 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_117, 0, x_95);
x_118 = lean::box(0);
x_119 = l___private_init_lean_parser_token_2__whitespace__aux___main___closed__1;
x_120 = l_mjoin___rarg___closed__1;
lean::inc(x_1);
x_122 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_119, x_120, x_117, x_118, x_1, x_110, x_105);
x_123 = lean::cnstr_get(x_122, 0);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_122, 1);
lean::inc(x_125);
lean::dec(x_122);
x_128 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_112, x_123);
x_129 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_130 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_129, x_128);
x_131 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_97, x_130);
x_132 = l_lean_parser_parsec__t_try__mk__res___rarg(x_131);
x_81 = x_132;
x_82 = x_125;
goto lbl_83;
}
else
{
obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; 
lean::dec(x_95);
x_134 = lean::box(0);
x_135 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_99)) {
 x_136 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_136 = x_99;
}
lean::cnstr_set(x_136, 0, x_134);
lean::cnstr_set(x_136, 1, x_110);
lean::cnstr_set(x_136, 2, x_135);
x_137 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_112, x_136);
x_138 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_135, x_137);
x_139 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_97, x_138);
x_140 = l_lean_parser_parsec__t_try__mk__res___rarg(x_139);
x_81 = x_140;
x_82 = x_105;
goto lbl_83;
}
}
else
{
obj* x_143; uint8 x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; 
lean::dec(x_95);
lean::dec(x_99);
x_143 = lean::cnstr_get(x_103, 0);
lean::inc(x_143);
x_145 = lean::cnstr_get_scalar<uint8>(x_103, sizeof(void*)*1);
if (lean::is_exclusive(x_103)) {
 lean::cnstr_release(x_103, 0);
 x_146 = x_103;
} else {
 lean::dec(x_103);
 x_146 = lean::box(0);
}
if (lean::is_scalar(x_146)) {
 x_147 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_147 = x_146;
}
lean::cnstr_set(x_147, 0, x_143);
lean::cnstr_set_scalar(x_147, sizeof(void*)*1, x_145);
x_148 = x_147;
x_149 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_150 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_149, x_148);
x_151 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_97, x_150);
x_152 = l_lean_parser_parsec__t_try__mk__res___rarg(x_151);
x_81 = x_152;
x_82 = x_105;
goto lbl_83;
}
}
else
{
obj* x_153; obj* x_155; uint8 x_156; obj* x_157; obj* x_158; 
x_153 = lean::cnstr_get(x_90, 0);
lean::inc(x_153);
if (lean::is_exclusive(x_90)) {
 lean::cnstr_release(x_90, 0);
 x_155 = x_90;
} else {
 lean::dec(x_90);
 x_155 = lean::box(0);
}
x_156 = 0;
if (lean::is_scalar(x_155)) {
 x_157 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_157 = x_155;
}
lean::cnstr_set(x_157, 0, x_153);
lean::cnstr_set_scalar(x_157, sizeof(void*)*1, x_156);
x_158 = x_157;
x_81 = x_158;
x_82 = x_92;
goto lbl_83;
}
}
else
{
obj* x_165; obj* x_166; 
lean::dec(x_12);
lean::dec(x_19);
lean::dec(x_1);
lean::dec(x_13);
lean::dec(x_17);
lean::dec(x_78);
x_165 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_21);
x_166 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_166, 0, x_165);
lean::cnstr_set(x_166, 1, x_22);
return x_166;
}
lbl_83:
{
if (lean::obj_tag(x_81) == 0)
{
obj* x_167; obj* x_169; obj* x_173; obj* x_174; obj* x_176; obj* x_179; 
x_167 = lean::cnstr_get(x_81, 1);
lean::inc(x_167);
x_169 = lean::cnstr_get(x_81, 2);
lean::inc(x_169);
lean::dec(x_81);
lean::inc(x_1);
x_173 = l_lean_parser_finish__comment__block(x_18, x_1, x_167, x_82);
x_174 = lean::cnstr_get(x_173, 0);
lean::inc(x_174);
x_176 = lean::cnstr_get(x_173, 1);
lean::inc(x_176);
lean::dec(x_173);
x_179 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_169, x_174);
if (lean::obj_tag(x_179) == 0)
{
obj* x_180; obj* x_182; obj* x_185; obj* x_186; obj* x_188; obj* x_191; 
x_180 = lean::cnstr_get(x_179, 1);
lean::inc(x_180);
x_182 = lean::cnstr_get(x_179, 2);
lean::inc(x_182);
lean::dec(x_179);
x_185 = l___private_init_lean_parser_token_2__whitespace__aux___main(x_19, x_1, x_180, x_176);
x_186 = lean::cnstr_get(x_185, 0);
lean::inc(x_186);
x_188 = lean::cnstr_get(x_185, 1);
lean::inc(x_188);
lean::dec(x_185);
x_191 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_182, x_186);
if (lean::obj_tag(x_191) == 0)
{
obj* x_194; obj* x_195; obj* x_196; 
lean::dec(x_13);
lean::dec(x_17);
x_194 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_78, x_191);
x_195 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_194);
if (lean::is_scalar(x_12)) {
 x_196 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_196 = x_12;
}
lean::cnstr_set(x_196, 0, x_195);
lean::cnstr_set(x_196, 1, x_188);
return x_196;
}
else
{
obj* x_197; uint8 x_199; 
x_197 = lean::cnstr_get(x_191, 0);
lean::inc(x_197);
x_199 = lean::cnstr_get_scalar<uint8>(x_191, sizeof(void*)*1);
if (x_199 == 0)
{
obj* x_201; obj* x_204; obj* x_205; obj* x_206; obj* x_209; obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; 
lean::dec(x_191);
x_201 = lean::cnstr_get(x_197, 2);
lean::inc(x_201);
lean::dec(x_197);
x_204 = l_mjoin___rarg___closed__1;
x_205 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_205, 0, x_201);
lean::closure_set(x_205, 1, x_204);
x_206 = lean::cnstr_get(x_78, 2);
lean::inc(x_206);
lean::dec(x_78);
x_209 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_209, 0, x_206);
lean::closure_set(x_209, 1, x_205);
x_210 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_210, 0, x_209);
x_211 = lean::box(0);
if (lean::is_scalar(x_17)) {
 x_212 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_212 = x_17;
}
lean::cnstr_set(x_212, 0, x_211);
lean::cnstr_set(x_212, 1, x_13);
lean::cnstr_set(x_212, 2, x_210);
x_213 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_212);
if (lean::is_scalar(x_12)) {
 x_214 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_214 = x_12;
}
lean::cnstr_set(x_214, 0, x_213);
lean::cnstr_set(x_214, 1, x_188);
return x_214;
}
else
{
obj* x_218; obj* x_219; obj* x_220; 
lean::dec(x_197);
lean::dec(x_13);
lean::dec(x_17);
x_218 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_78, x_191);
x_219 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_218);
if (lean::is_scalar(x_12)) {
 x_220 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_220 = x_12;
}
lean::cnstr_set(x_220, 0, x_219);
lean::cnstr_set(x_220, 1, x_188);
return x_220;
}
}
}
else
{
obj* x_223; uint8 x_225; obj* x_226; 
lean::dec(x_19);
lean::dec(x_1);
x_223 = lean::cnstr_get(x_179, 0);
lean::inc(x_223);
x_225 = lean::cnstr_get_scalar<uint8>(x_179, sizeof(void*)*1);
if (lean::is_exclusive(x_179)) {
 lean::cnstr_release(x_179, 0);
 x_226 = x_179;
} else {
 lean::dec(x_179);
 x_226 = lean::box(0);
}
if (x_225 == 0)
{
obj* x_228; obj* x_231; obj* x_232; obj* x_233; obj* x_236; obj* x_237; obj* x_238; obj* x_239; obj* x_240; obj* x_241; 
lean::dec(x_226);
x_228 = lean::cnstr_get(x_223, 2);
lean::inc(x_228);
lean::dec(x_223);
x_231 = l_mjoin___rarg___closed__1;
x_232 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_232, 0, x_228);
lean::closure_set(x_232, 1, x_231);
x_233 = lean::cnstr_get(x_78, 2);
lean::inc(x_233);
lean::dec(x_78);
x_236 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_236, 0, x_233);
lean::closure_set(x_236, 1, x_232);
x_237 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_237, 0, x_236);
x_238 = lean::box(0);
if (lean::is_scalar(x_17)) {
 x_239 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_239 = x_17;
}
lean::cnstr_set(x_239, 0, x_238);
lean::cnstr_set(x_239, 1, x_13);
lean::cnstr_set(x_239, 2, x_237);
x_240 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_239);
if (lean::is_scalar(x_12)) {
 x_241 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_241 = x_12;
}
lean::cnstr_set(x_241, 0, x_240);
lean::cnstr_set(x_241, 1, x_176);
return x_241;
}
else
{
obj* x_244; obj* x_245; obj* x_246; obj* x_247; obj* x_248; 
lean::dec(x_13);
lean::dec(x_17);
if (lean::is_scalar(x_226)) {
 x_244 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_244 = x_226;
}
lean::cnstr_set(x_244, 0, x_223);
lean::cnstr_set_scalar(x_244, sizeof(void*)*1, x_225);
x_245 = x_244;
x_246 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_78, x_245);
x_247 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_246);
if (lean::is_scalar(x_12)) {
 x_248 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_248 = x_12;
}
lean::cnstr_set(x_248, 0, x_247);
lean::cnstr_set(x_248, 1, x_176);
return x_248;
}
}
}
else
{
obj* x_251; uint8 x_253; obj* x_254; 
lean::dec(x_19);
lean::dec(x_1);
x_251 = lean::cnstr_get(x_81, 0);
lean::inc(x_251);
x_253 = lean::cnstr_get_scalar<uint8>(x_81, sizeof(void*)*1);
if (lean::is_exclusive(x_81)) {
 lean::cnstr_release(x_81, 0);
 x_254 = x_81;
} else {
 lean::dec(x_81);
 x_254 = lean::box(0);
}
if (x_253 == 0)
{
obj* x_256; obj* x_259; obj* x_260; obj* x_261; obj* x_264; obj* x_265; obj* x_266; obj* x_267; obj* x_268; obj* x_269; 
lean::dec(x_254);
x_256 = lean::cnstr_get(x_251, 2);
lean::inc(x_256);
lean::dec(x_251);
x_259 = l_mjoin___rarg___closed__1;
x_260 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_260, 0, x_256);
lean::closure_set(x_260, 1, x_259);
x_261 = lean::cnstr_get(x_78, 2);
lean::inc(x_261);
lean::dec(x_78);
x_264 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_264, 0, x_261);
lean::closure_set(x_264, 1, x_260);
x_265 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_265, 0, x_264);
x_266 = lean::box(0);
if (lean::is_scalar(x_17)) {
 x_267 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_267 = x_17;
}
lean::cnstr_set(x_267, 0, x_266);
lean::cnstr_set(x_267, 1, x_13);
lean::cnstr_set(x_267, 2, x_265);
x_268 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_267);
if (lean::is_scalar(x_12)) {
 x_269 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_269 = x_12;
}
lean::cnstr_set(x_269, 0, x_268);
lean::cnstr_set(x_269, 1, x_82);
return x_269;
}
else
{
obj* x_272; obj* x_273; obj* x_274; obj* x_275; obj* x_276; 
lean::dec(x_13);
lean::dec(x_17);
if (lean::is_scalar(x_254)) {
 x_272 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_272 = x_254;
}
lean::cnstr_set(x_272, 0, x_251);
lean::cnstr_set_scalar(x_272, sizeof(void*)*1, x_253);
x_273 = x_272;
x_274 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_78, x_273);
x_275 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_274);
if (lean::is_scalar(x_12)) {
 x_276 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_276 = x_12;
}
lean::cnstr_set(x_276, 0, x_275);
lean::cnstr_set(x_276, 1, x_82);
return x_276;
}
}
}
}
}
}
else
{
obj* x_279; uint8 x_281; obj* x_282; obj* x_283; obj* x_284; obj* x_285; 
lean::dec(x_1);
lean::dec(x_0);
x_279 = lean::cnstr_get(x_8, 0);
lean::inc(x_279);
x_281 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_282 = x_8;
} else {
 lean::dec(x_8);
 x_282 = lean::box(0);
}
if (lean::is_scalar(x_282)) {
 x_283 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_283 = x_282;
}
lean::cnstr_set(x_283, 0, x_279);
lean::cnstr_set_scalar(x_283, sizeof(void*)*1, x_281);
x_284 = x_283;
if (lean::is_scalar(x_12)) {
 x_285 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_285 = x_12;
}
lean::cnstr_set(x_285, 0, x_284);
lean::cnstr_set(x_285, 1, x_10);
return x_285;
}
}
else
{
obj* x_287; obj* x_288; obj* x_289; obj* x_290; 
lean::dec(x_0);
x_287 = lean::box(0);
x_288 = l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
x_289 = l_mjoin___rarg___closed__1;
x_290 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_288, x_289, x_287, x_287, x_1, x_2, x_3);
return x_290;
}
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__3___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
x_4 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__3(x_0, x_3, x_2);
return x_4;
}
}
obj* l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
x_4 = l___private_init_lean_parser_parsec_6__take__while__aux_x_27___main___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__6(x_0, x_3, x_2);
return x_4;
}
}
obj* l___private_init_lean_parser_token_2__whitespace__aux(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_parser_token_2__whitespace__aux___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l_lean_parser_whitespace(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::string_iterator_remaining(x_1);
x_4 = lean::mk_nat_obj(1u);
x_5 = lean::nat_add(x_3, x_4);
lean::dec(x_3);
x_7 = l___private_init_lean_parser_token_2__whitespace__aux___main(x_5, x_0, x_1, x_2);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
x_13 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_14 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_8);
x_15 = l_mjoin___rarg___closed__1;
x_16 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_14, x_15);
if (lean::is_scalar(x_12)) {
 x_17 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_17 = x_12;
}
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_10);
return x_17;
}
}
obj* l_lean_parser_as__substring___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_2);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* l_lean_parser_as__substring___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; 
lean::dec(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_as__substring___rarg___lambda__1), 3, 2);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_1);
x_7 = lean::apply_4(x_2, lean::box(0), lean::box(0), x_3, x_6);
return x_7;
}
}
obj* l_lean_parser_as__substring___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; 
lean::inc(x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_as__substring___rarg___lambda__2), 5, 4);
lean::closure_set(x_6, 0, x_0);
lean::closure_set(x_6, 1, x_4);
lean::closure_set(x_6, 2, x_1);
lean::closure_set(x_6, 3, x_2);
x_7 = lean::apply_4(x_1, lean::box(0), lean::box(0), x_3, x_6);
return x_7;
}
}
obj* l_lean_parser_as__substring___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_7; obj* x_10; obj* x_11; obj* x_14; obj* x_15; 
lean::dec(x_2);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_11 = lean::apply_2(x_7, lean::box(0), x_10);
lean::inc(x_11);
lean::inc(x_5);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_as__substring___rarg___lambda__3), 5, 4);
lean::closure_set(x_14, 0, x_0);
lean::closure_set(x_14, 1, x_5);
lean::closure_set(x_14, 2, x_11);
lean::closure_set(x_14, 3, x_3);
x_15 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_11, x_14);
return x_15;
}
}
obj* l_lean_parser_as__substring(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_as__substring___rarg), 4, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_token_3__update__trailing___main(obj* x_0, obj* x_1) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_2, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_2, 1);
lean::inc(x_6);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_8 = x_2;
} else {
 lean::dec(x_2);
 x_8 = lean::box(0);
}
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_6);
lean::dec(x_8);
lean::dec(x_0);
return x_1;
}
else
{
obj* x_13; obj* x_15; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_1);
x_13 = lean::cnstr_get(x_4, 0);
lean::inc(x_13);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_15 = x_4;
} else {
 lean::dec(x_4);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_13, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_13, 1);
lean::inc(x_18);
lean::dec(x_13);
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_16);
lean::cnstr_set(x_21, 1, x_18);
lean::cnstr_set(x_21, 2, x_0);
if (lean::is_scalar(x_15)) {
 x_22 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_22 = x_15;
}
lean::cnstr_set(x_22, 0, x_21);
if (lean::is_scalar(x_8)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_8;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_6);
x_24 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
}
case 1:
{
obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_33; obj* x_35; obj* x_37; 
x_25 = lean::cnstr_get(x_1, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_25, 1);
lean::inc(x_29);
x_31 = lean::cnstr_get(x_25, 2);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_25, 3);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_25, 4);
lean::inc(x_35);
if (lean::is_exclusive(x_25)) {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 lean::cnstr_release(x_25, 2);
 lean::cnstr_release(x_25, 3);
 lean::cnstr_release(x_25, 4);
 x_37 = x_25;
} else {
 lean::dec(x_25);
 x_37 = lean::box(0);
}
if (lean::obj_tag(x_27) == 0)
{
lean::dec(x_0);
lean::dec(x_33);
lean::dec(x_35);
lean::dec(x_29);
lean::dec(x_31);
lean::dec(x_37);
return x_1;
}
else
{
obj* x_45; obj* x_47; obj* x_48; obj* x_50; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
lean::dec(x_1);
x_45 = lean::cnstr_get(x_27, 0);
lean::inc(x_45);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_release(x_27, 0);
 x_47 = x_27;
} else {
 lean::dec(x_27);
 x_47 = lean::box(0);
}
x_48 = lean::cnstr_get(x_45, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_45, 1);
lean::inc(x_50);
lean::dec(x_45);
x_53 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_53, 0, x_48);
lean::cnstr_set(x_53, 1, x_50);
lean::cnstr_set(x_53, 2, x_0);
if (lean::is_scalar(x_47)) {
 x_54 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_54 = x_47;
}
lean::cnstr_set(x_54, 0, x_53);
if (lean::is_scalar(x_37)) {
 x_55 = lean::alloc_cnstr(0, 5, 0);
} else {
 x_55 = x_37;
}
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_29);
lean::cnstr_set(x_55, 2, x_31);
lean::cnstr_set(x_55, 3, x_33);
lean::cnstr_set(x_55, 4, x_35);
x_56 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_56, 0, x_55);
return x_56;
}
}
case 2:
{
obj* x_57; obj* x_59; obj* x_60; obj* x_62; obj* x_64; obj* x_65; obj* x_68; obj* x_69; 
x_57 = lean::cnstr_get(x_1, 0);
lean::inc(x_57);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_59 = x_1;
} else {
 lean::dec(x_1);
 x_59 = lean::box(0);
}
x_60 = lean::cnstr_get(x_57, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 1);
lean::inc(x_62);
x_64 = l___private_init_lean_parser_token_3__update__trailing__lst___main(x_0, x_62);
x_65 = lean::cnstr_get(x_57, 2);
lean::inc(x_65);
lean::dec(x_57);
x_68 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_68, 0, x_60);
lean::cnstr_set(x_68, 1, x_64);
lean::cnstr_set(x_68, 2, x_65);
if (lean::is_scalar(x_59)) {
 x_69 = lean::alloc_cnstr(2, 1, 0);
} else {
 x_69 = x_59;
}
lean::cnstr_set(x_69, 0, x_68);
return x_69;
}
default:
{
lean::dec(x_0);
return x_1;
}
}
}
}
obj* l___private_init_lean_parser_token_3__update__trailing__lst___main(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
lean::dec(x_0);
return x_1;
}
else
{
obj* x_3; obj* x_5; obj* x_7; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_7 = x_1;
} else {
 lean::dec(x_1);
 x_7 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_8; obj* x_9; 
x_8 = l___private_init_lean_parser_token_3__update__trailing___main(x_0, x_3);
if (lean::is_scalar(x_7)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_7;
}
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_5);
return x_9;
}
else
{
obj* x_10; obj* x_11; 
x_10 = l___private_init_lean_parser_token_3__update__trailing__lst___main(x_0, x_5);
if (lean::is_scalar(x_7)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_7;
}
lean::cnstr_set(x_11, 0, x_3);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
}
}
obj* l___private_init_lean_parser_token_3__update__trailing(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_lean_parser_token_3__update__trailing___main(x_0, x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_token_3__update__trailing__lst(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_lean_parser_token_3__update__trailing__lst___main(x_0, x_1);
return x_2;
}
}
obj* l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; 
lean::dec(x_1);
x_5 = lean::apply_2(x_0, x_2, x_3);
return x_5;
}
}
obj* l_reader__t_lift___at_lean_parser_with__trailing___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 0);
return x_2;
}
}
obj* l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
lean::inc(x_2);
x_6 = lean::apply_3(x_0, x_2, x_3, x_4);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_19; obj* x_20; obj* x_22; obj* x_25; obj* x_26; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
lean::dec(x_7);
x_19 = lean::apply_4(x_1, x_12, x_2, x_14, x_9);
x_20 = lean::cnstr_get(x_19, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_19, 1);
lean::inc(x_22);
lean::dec(x_19);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_20);
if (lean::is_scalar(x_11)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_11;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_22);
return x_26;
}
else
{
obj* x_29; uint8 x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_1);
lean::dec(x_2);
x_29 = lean::cnstr_get(x_7, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_32 = x_7;
} else {
 lean::dec(x_7);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_29);
lean::cnstr_set_scalar(x_33, sizeof(void*)*1, x_31);
x_34 = x_33;
if (lean::is_scalar(x_11)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_11;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_9);
return x_35;
}
}
}
obj* l_reader__t_bind___at_lean_parser_with__trailing___spec__2(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 0);
return x_4;
}
}
obj* l_lean_parser_with__trailing___rarg___lambda__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; 
x_2 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
lean::inc(x_0);
x_4 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_0);
lean::cnstr_set(x_4, 2, x_2);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_with__trailing___rarg___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_whitespace(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_0);
lean::cnstr_set(x_16, 1, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* l_lean_parser_with__trailing___rarg___lambda__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_9; obj* x_10; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
x_9 = l___private_init_lean_parser_token_3__update__trailing___main(x_2, x_1);
x_10 = lean::apply_2(x_6, lean::box(0), x_9);
return x_10;
}
}
obj* _init_l_lean_parser_with__trailing___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__2), 4, 0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_lean_parser_with__trailing___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_1);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = l_lean_parser_with__trailing___rarg___closed__1;
x_8 = lean::apply_2(x_2, lean::box(0), x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__3), 3, 2);
lean::closure_set(x_9, 0, x_0);
lean::closure_set(x_9, 1, x_3);
x_10 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_8, x_9);
return x_10;
}
}
obj* l_lean_parser_with__trailing(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_parser_mk__raw__res(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
lean::inc(x_1);
lean::inc(x_0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::inc(x_0);
lean::inc(x_0);
x_7 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_7, 0, x_0);
lean::cnstr_set(x_7, 1, x_0);
x_8 = lean::string_iterator_offset(x_0);
lean::dec(x_0);
lean::inc(x_1);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_1);
lean::cnstr_set(x_11, 1, x_1);
x_12 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_12, 0, x_7);
lean::cnstr_set(x_12, 1, x_8);
lean::cnstr_set(x_12, 2, x_11);
x_13 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_13, 0, x_12);
x_14 = l_lean_parser_substring_to__string(x_4);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
return x_16;
}
}
obj* l_lean_parser_raw___rarg___lambda__1(obj* x_0, uint8 x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l_lean_parser_mk__raw__res(x_0, x_5);
if (x_1 == 0)
{
obj* x_9; obj* x_12; obj* x_15; 
lean::dec(x_4);
lean::dec(x_3);
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
lean::dec(x_2);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
x_15 = lean::apply_2(x_12, lean::box(0), x_6);
return x_15;
}
else
{
obj* x_16; 
x_16 = l_lean_parser_with__trailing___rarg(x_2, x_3, x_4, x_6);
return x_16;
}
}
}
obj* l_lean_parser_raw___rarg___lambda__2(obj* x_0, uint8 x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_7);
x_9 = lean::box(x_1);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw___rarg___lambda__1___boxed), 6, 5);
lean::closure_set(x_10, 0, x_0);
lean::closure_set(x_10, 1, x_9);
lean::closure_set(x_10, 2, x_2);
lean::closure_set(x_10, 3, x_3);
lean::closure_set(x_10, 4, x_4);
x_11 = lean::apply_4(x_5, lean::box(0), lean::box(0), x_6, x_10);
return x_11;
}
}
obj* l_lean_parser_raw___rarg___lambda__3(uint8 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_10; obj* x_11; 
x_8 = lean::box(x_0);
lean::inc(x_4);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw___rarg___lambda__2___boxed), 8, 7);
lean::closure_set(x_10, 0, x_7);
lean::closure_set(x_10, 1, x_8);
lean::closure_set(x_10, 2, x_1);
lean::closure_set(x_10, 3, x_2);
lean::closure_set(x_10, 4, x_3);
lean::closure_set(x_10, 5, x_4);
lean::closure_set(x_10, 6, x_5);
x_11 = lean::apply_4(x_4, lean::box(0), lean::box(0), x_6, x_10);
return x_11;
}
}
obj* l_lean_parser_raw___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, uint8 x_5) {
_start:
{
obj* x_7; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
lean::dec(x_3);
x_7 = lean::cnstr_get(x_0, 1);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 0);
lean::inc(x_9);
x_11 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_12 = lean::apply_2(x_9, lean::box(0), x_11);
x_13 = lean::box(x_5);
lean::inc(x_12);
lean::inc(x_7);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw___rarg___lambda__3___boxed), 8, 7);
lean::closure_set(x_16, 0, x_13);
lean::closure_set(x_16, 1, x_0);
lean::closure_set(x_16, 2, x_1);
lean::closure_set(x_16, 3, x_2);
lean::closure_set(x_16, 4, x_7);
lean::closure_set(x_16, 5, x_12);
lean::closure_set(x_16, 6, x_4);
x_17 = lean::apply_4(x_7, lean::box(0), lean::box(0), x_12, x_16);
return x_17;
}
}
obj* l_lean_parser_raw(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_lean_parser_raw___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_1);
x_7 = l_lean_parser_raw___rarg___lambda__1(x_0, x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
obj* l_lean_parser_raw___rarg___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; obj* x_9; 
x_8 = lean::unbox(x_1);
x_9 = l_lean_parser_raw___rarg___lambda__2(x_0, x_8, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
obj* l_lean_parser_raw___rarg___lambda__3___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; obj* x_9; 
x_8 = lean::unbox(x_0);
x_9 = l_lean_parser_raw___rarg___lambda__3(x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
obj* l_lean_parser_raw___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_5);
x_7 = l_lean_parser_raw___rarg(x_0, x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
obj* l_lean_parser_raw_tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, uint8 x_6) {
_start:
{
obj* x_13; 
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_13 = lean::box(0);
return x_13;
}
}
obj* l_lean_parser_raw_tokens___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
uint8 x_7; obj* x_8; 
x_7 = lean::unbox(x_6);
x_8 = l_lean_parser_raw_tokens(x_0, x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
obj* l_lean_parser_raw_view___rarg___lambda__1(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; obj* x_4; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_1);
return x_4;
}
case 3:
{
obj* x_5; 
x_5 = lean::box(0);
return x_5;
}
default:
{
obj* x_7; 
lean::dec(x_0);
x_7 = lean::box(0);
return x_7;
}
}
}
}
obj* l_lean_parser_raw_view___rarg___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_raw_view___rarg___lambda__3___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw_view___rarg___lambda__2), 1, 0);
return x_0;
}
}
obj* l_lean_parser_raw_view___rarg___lambda__3(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_2 = l_option_map___rarg(x_1, x_0);
x_3 = lean::box(3);
x_4 = l_option_get__or__else___main___rarg(x_2, x_3);
return x_4;
}
}
obj* _init_l_lean_parser_raw_view___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw_view___rarg___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_parser_raw_view___rarg___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw_view___rarg___lambda__3), 1, 0);
return x_0;
}
}
obj* l_lean_parser_raw_view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, uint8 x_5) {
_start:
{
obj* x_11; obj* x_12; obj* x_13; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_11 = l_lean_parser_raw_view___rarg___closed__1;
x_12 = l_lean_parser_raw_view___rarg___closed__2;
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
obj* l_lean_parser_raw_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw_view___rarg___boxed), 6, 0);
return x_2;
}
}
obj* l_lean_parser_raw_view___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_5);
x_7 = l_lean_parser_raw_view___rarg(x_0, x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
obj* l_lean_parser_raw__str_lean_parser_has__tokens(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, uint8 x_5) {
_start:
{
obj* x_11; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_11 = lean::box(0);
return x_11;
}
}
obj* l_lean_parser_raw__str_lean_parser_has__tokens___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_5);
x_7 = l_lean_parser_raw__str_lean_parser_has__tokens(x_0, x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
obj* l_lean_parser_raw__str_lean_parser_has__view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, uint8 x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
lean::inc(x_3);
x_6 = l_string_quote(x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
lean::inc(x_1);
lean::inc(x_0);
x_10 = l_lean_parser_monad__parsec_str__core___rarg(x_0, x_1, x_3, x_7);
x_11 = l_lean_parser_raw_view___rarg(x_0, x_1, x_2, lean::box(0), x_10, x_4);
return x_11;
}
}
obj* l_lean_parser_raw__str_lean_parser_has__view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw__str_lean_parser_has__view___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_raw__str_lean_parser_has__view___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_4);
x_6 = l_lean_parser_raw__str_lean_parser_has__view___rarg(x_0, x_1, x_2, x_3, x_5);
return x_6;
}
}
obj* l_lean_parser_raw__str___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, uint8 x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_20; obj* x_21; 
lean::inc(x_3);
x_6 = l_string_quote(x_3);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_7, 0, x_6);
lean::inc(x_1);
lean::inc(x_0);
x_10 = l_lean_parser_monad__parsec_str__core___rarg(x_0, x_1, x_3, x_7);
x_11 = lean::cnstr_get(x_0, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
x_15 = l_lean_parser_monad__parsec_left__over___rarg___closed__1;
x_16 = lean::apply_2(x_13, lean::box(0), x_15);
x_17 = lean::box(x_4);
lean::inc(x_16);
lean::inc(x_11);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw___rarg___lambda__3___boxed), 8, 7);
lean::closure_set(x_20, 0, x_17);
lean::closure_set(x_20, 1, x_0);
lean::closure_set(x_20, 2, x_1);
lean::closure_set(x_20, 3, x_2);
lean::closure_set(x_20, 4, x_11);
lean::closure_set(x_20, 5, x_16);
lean::closure_set(x_20, 6, x_10);
x_21 = lean::apply_4(x_11, lean::box(0), lean::box(0), x_16, x_20);
return x_21;
}
}
obj* l_lean_parser_raw__str(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw__str___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_raw__str___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_4);
x_6 = l_lean_parser_raw__str___rarg(x_0, x_1, x_2, x_3, x_5);
return x_6;
}
}
obj* l_lean_parser_raw__str_view__default___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, uint8 x_4) {
_start:
{
obj* x_9; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_9 = lean::box(0);
return x_9;
}
}
obj* l_lean_parser_raw__str_view__default(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw__str_view__default___rarg___boxed), 5, 0);
return x_2;
}
}
obj* l_lean_parser_raw__str_view__default___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_4);
x_6 = l_lean_parser_raw__str_view__default___rarg(x_0, x_1, x_2, x_3, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_detail__ident__part__escaped() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("detail_ident_part_escaped");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; 
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_7; obj* x_10; 
x_7 = lean::cnstr_get(x_1, 0);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_7);
x_5 = x_10;
goto lbl_6;
}
case 3:
{
obj* x_11; 
x_11 = lean::box(0);
x_5 = x_11;
goto lbl_6;
}
default:
{
obj* x_13; 
lean::dec(x_1);
x_13 = lean::box(0);
x_5 = x_13;
goto lbl_6;
}
}
lbl_6:
{
obj* x_14; obj* x_15; obj* x_17; obj* x_18; 
if (lean::obj_tag(x_0) == 0)
{
obj* x_20; 
x_20 = lean::box(3);
x_17 = x_0;
x_18 = x_20;
goto lbl_19;
}
else
{
obj* x_21; obj* x_23; 
x_21 = lean::cnstr_get(x_0, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_0, 1);
lean::inc(x_23);
lean::dec(x_0);
x_17 = x_23;
x_18 = x_21;
goto lbl_19;
}
lbl_16:
{
switch (lean::obj_tag(x_15)) {
case 0:
{
obj* x_26; obj* x_29; obj* x_30; 
x_26 = lean::cnstr_get(x_15, 0);
lean::inc(x_26);
lean::dec(x_15);
x_29 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_29, 0, x_26);
x_30 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_30, 0, x_5);
lean::cnstr_set(x_30, 1, x_14);
lean::cnstr_set(x_30, 2, x_29);
return x_30;
}
case 3:
{
obj* x_31; obj* x_32; 
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_32, 0, x_5);
lean::cnstr_set(x_32, 1, x_14);
lean::cnstr_set(x_32, 2, x_31);
return x_32;
}
default:
{
obj* x_34; obj* x_35; 
lean::dec(x_15);
x_34 = lean::box(0);
x_35 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_35, 0, x_5);
lean::cnstr_set(x_35, 1, x_14);
lean::cnstr_set(x_35, 2, x_34);
return x_35;
}
}
}
lbl_19:
{
switch (lean::obj_tag(x_18)) {
case 0:
{
obj* x_36; obj* x_39; 
x_36 = lean::cnstr_get(x_18, 0);
lean::inc(x_36);
lean::dec(x_18);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_36);
if (lean::obj_tag(x_17) == 0)
{
obj* x_40; obj* x_41; 
x_40 = lean::box(0);
x_41 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_41, 0, x_5);
lean::cnstr_set(x_41, 1, x_39);
lean::cnstr_set(x_41, 2, x_40);
return x_41;
}
else
{
obj* x_42; 
x_42 = lean::cnstr_get(x_17, 0);
lean::inc(x_42);
lean::dec(x_17);
x_14 = x_39;
x_15 = x_42;
goto lbl_16;
}
}
case 3:
{
obj* x_45; 
x_45 = lean::box(0);
if (lean::obj_tag(x_17) == 0)
{
obj* x_46; 
x_46 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_46, 0, x_5);
lean::cnstr_set(x_46, 1, x_45);
lean::cnstr_set(x_46, 2, x_45);
return x_46;
}
else
{
obj* x_47; 
x_47 = lean::cnstr_get(x_17, 0);
lean::inc(x_47);
lean::dec(x_17);
x_14 = x_45;
x_15 = x_47;
goto lbl_16;
}
}
default:
{
obj* x_51; 
lean::dec(x_18);
x_51 = lean::box(0);
if (lean::obj_tag(x_17) == 0)
{
obj* x_52; 
x_52 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_52, 0, x_5);
lean::cnstr_set(x_52, 1, x_51);
lean::cnstr_set(x_52, 2, x_51);
return x_52;
}
else
{
obj* x_53; 
x_53 = lean::cnstr_get(x_17, 0);
lean::inc(x_53);
lean::dec(x_17);
x_14 = x_51;
x_15 = x_53;
goto lbl_16;
}
}
}
}
}
}
}
}
obj* l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1___closed__1;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; 
switch (lean::obj_tag(x_2)) {
case 0:
{
obj* x_20; obj* x_23; 
x_20 = lean::cnstr_get(x_2, 0);
lean::inc(x_20);
lean::dec(x_2);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_18 = x_23;
goto lbl_19;
}
case 3:
{
obj* x_24; 
x_24 = lean::box(0);
x_18 = x_24;
goto lbl_19;
}
default:
{
obj* x_26; 
lean::dec(x_2);
x_26 = lean::box(0);
x_18 = x_26;
goto lbl_19;
}
}
lbl_19:
{
obj* x_27; obj* x_28; obj* x_30; obj* x_31; 
if (lean::obj_tag(x_1) == 0)
{
obj* x_33; 
x_33 = lean::box(3);
x_30 = x_1;
x_31 = x_33;
goto lbl_32;
}
else
{
obj* x_34; obj* x_36; 
x_34 = lean::cnstr_get(x_1, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_1, 1);
lean::inc(x_36);
lean::dec(x_1);
x_30 = x_36;
x_31 = x_34;
goto lbl_32;
}
lbl_29:
{
switch (lean::obj_tag(x_28)) {
case 0:
{
obj* x_39; obj* x_42; obj* x_43; 
x_39 = lean::cnstr_get(x_28, 0);
lean::inc(x_39);
lean::dec(x_28);
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_39);
x_43 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_43, 0, x_18);
lean::cnstr_set(x_43, 1, x_27);
lean::cnstr_set(x_43, 2, x_42);
return x_43;
}
case 3:
{
obj* x_44; obj* x_45; 
x_44 = lean::box(0);
x_45 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_45, 0, x_18);
lean::cnstr_set(x_45, 1, x_27);
lean::cnstr_set(x_45, 2, x_44);
return x_45;
}
default:
{
obj* x_47; obj* x_48; 
lean::dec(x_28);
x_47 = lean::box(0);
x_48 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_48, 0, x_18);
lean::cnstr_set(x_48, 1, x_27);
lean::cnstr_set(x_48, 2, x_47);
return x_48;
}
}
}
lbl_32:
{
switch (lean::obj_tag(x_31)) {
case 0:
{
obj* x_49; obj* x_52; 
x_49 = lean::cnstr_get(x_31, 0);
lean::inc(x_49);
lean::dec(x_31);
x_52 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_52, 0, x_49);
if (lean::obj_tag(x_30) == 0)
{
obj* x_53; obj* x_54; 
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_54, 0, x_18);
lean::cnstr_set(x_54, 1, x_52);
lean::cnstr_set(x_54, 2, x_53);
return x_54;
}
else
{
obj* x_55; 
x_55 = lean::cnstr_get(x_30, 0);
lean::inc(x_55);
lean::dec(x_30);
x_27 = x_52;
x_28 = x_55;
goto lbl_29;
}
}
case 3:
{
obj* x_58; 
x_58 = lean::box(0);
if (lean::obj_tag(x_30) == 0)
{
obj* x_59; 
x_59 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_59, 0, x_18);
lean::cnstr_set(x_59, 1, x_58);
lean::cnstr_set(x_59, 2, x_58);
return x_59;
}
else
{
obj* x_60; 
x_60 = lean::cnstr_get(x_30, 0);
lean::inc(x_60);
lean::dec(x_30);
x_27 = x_58;
x_28 = x_60;
goto lbl_29;
}
}
default:
{
obj* x_64; 
lean::dec(x_31);
x_64 = lean::box(0);
if (lean::obj_tag(x_30) == 0)
{
obj* x_65; 
x_65 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_65, 0, x_18);
lean::cnstr_set(x_65, 1, x_64);
lean::cnstr_set(x_65, 2, x_64);
return x_65;
}
else
{
obj* x_66; 
x_66 = lean::cnstr_get(x_30, 0);
lean::inc(x_66);
lean::dec(x_30);
x_27 = x_64;
x_28 = x_66;
goto lbl_29;
}
}
}
}
}
}
}
}
obj* l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 2);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_9 = l_option_map___rarg(x_8, x_1);
x_10 = lean::box(3);
x_11 = l_option_get__or__else___main___rarg(x_9, x_10);
x_12 = l_option_map___rarg(x_8, x_3);
x_13 = l_option_get__or__else___main___rarg(x_12, x_10);
x_14 = l_option_map___rarg(x_8, x_5);
x_15 = l_option_get__or__else___main___rarg(x_14, x_10);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_13);
lean::cnstr_set(x_18, 1, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_11);
lean::cnstr_set(x_19, 1, x_18);
x_20 = l_lean_parser_detail__ident__part__escaped;
x_21 = l_lean_parser_syntax_mk__node(x_20, x_19);
return x_21;
}
}
obj* _init_l_lean_parser_detail__ident__part__escaped_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_detail__ident__part__escaped_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_detail__ident__part__escaped_has__view_x_27;
return x_0;
}
}
obj* _init_l_lean_parser_detail__ident__part() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("detail_ident_part");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
lean::dec(x_1);
if (x_6 == 0)
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_8; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
lean::dec(x_0);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_8);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_11);
return x_12;
}
case 3:
{
obj* x_13; 
x_13 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1;
return x_13;
}
default:
{
obj* x_15; 
lean::dec(x_0);
x_15 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1;
return x_15;
}
}
}
else
{
obj* x_16; obj* x_17; obj* x_20; obj* x_21; 
x_16 = l_lean_parser_detail__ident__part__escaped_has__view;
x_17 = lean::cnstr_get(x_16, 0);
lean::inc(x_17);
lean::dec(x_16);
x_20 = lean::apply_1(x_17, x_0);
x_21 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_21, 0, x_20);
return x_21;
}
}
}
}
obj* _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("detail_ident_part");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_5;
}
else
{
obj* x_6; obj* x_9; obj* x_11; obj* x_14; uint8 x_15; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__3;
x_15 = lean_name_dec_eq(x_9, x_14);
lean::dec(x_9);
if (x_15 == 0)
{
obj* x_18; 
lean::dec(x_11);
x_18 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_18;
}
else
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_19; 
x_19 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_19;
}
else
{
obj* x_20; obj* x_22; 
x_20 = lean::cnstr_get(x_11, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_11, 1);
lean::inc(x_22);
lean::dec(x_11);
if (lean::obj_tag(x_22) == 0)
{
obj* x_25; 
x_25 = l_lean_parser_syntax_as__node___main(x_20);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; 
x_26 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_32; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
lean::dec(x_25);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_27, 1);
lean::inc(x_32);
lean::dec(x_27);
switch (lean::obj_tag(x_30)) {
case 0:
{
obj* x_36; 
lean::dec(x_32);
x_36 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_36;
}
case 1:
{
obj* x_39; 
lean::dec(x_30);
lean::dec(x_32);
x_39 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_39;
}
default:
{
obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_40 = lean::cnstr_get(x_30, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_30, 1);
lean::inc(x_42);
lean::dec(x_30);
x_45 = lean::box(0);
x_46 = lean_name_dec_eq(x_40, x_45);
lean::dec(x_40);
if (x_46 == 0)
{
obj* x_50; 
lean::dec(x_42);
lean::dec(x_32);
x_50 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_50;
}
else
{
if (lean::obj_tag(x_32) == 0)
{
obj* x_52; 
lean::dec(x_42);
x_52 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_52;
}
else
{
obj* x_53; obj* x_55; 
x_53 = lean::cnstr_get(x_32, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_32, 1);
lean::inc(x_55);
lean::dec(x_32);
if (lean::obj_tag(x_55) == 0)
{
x_1 = x_53;
x_2 = x_42;
goto lbl_3;
}
else
{
obj* x_61; 
lean::dec(x_42);
lean::dec(x_53);
lean::dec(x_55);
x_61 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_61;
}
}
}
}
}
}
}
else
{
obj* x_64; 
lean::dec(x_20);
lean::dec(x_22);
x_64 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2;
return x_64;
}
}
}
}
lbl_3:
{
obj* x_65; uint8 x_66; 
x_65 = lean::mk_nat_obj(0u);
x_66 = lean::nat_dec_eq(x_2, x_65);
lean::dec(x_2);
if (x_66 == 0)
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_68; obj* x_71; obj* x_72; 
x_68 = lean::cnstr_get(x_1, 0);
lean::inc(x_68);
lean::dec(x_1);
x_71 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_71, 0, x_68);
x_72 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_72, 0, x_71);
return x_72;
}
case 3:
{
obj* x_73; 
x_73 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1;
return x_73;
}
default:
{
obj* x_75; 
lean::dec(x_1);
x_75 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1;
return x_75;
}
}
}
else
{
obj* x_76; obj* x_77; obj* x_80; obj* x_81; 
x_76 = l_lean_parser_detail__ident__part__escaped_has__view;
x_77 = lean::cnstr_get(x_76, 0);
lean::inc(x_77);
lean::dec(x_76);
x_80 = lean::apply_1(x_77, x_1);
x_81 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_81, 0, x_80);
return x_81;
}
}
}
}
obj* _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0u);
x_2 = lean_name_mk_numeral(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(1u);
x_2 = lean_name_mk_numeral(x_0, x_1);
return x_2;
}
}
obj* l_lean_parser_detail__ident__part_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; obj* x_5; obj* x_6; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_detail__ident__part__escaped_has__view;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
lean::dec(x_5);
x_9 = lean::apply_1(x_6, x_2);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_1);
x_11 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
x_12 = l_lean_parser_syntax_mk__node(x_11, x_10);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_1);
x_14 = l_lean_parser_detail__ident__part;
x_15 = l_lean_parser_syntax_mk__node(x_14, x_13);
return x_15;
}
else
{
obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_16 = lean::cnstr_get(x_0, 0);
lean::inc(x_16);
lean::dec(x_0);
x_19 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_20 = l_option_map___rarg(x_19, x_16);
x_21 = lean::box(3);
x_22 = l_option_get__or__else___main___rarg(x_20, x_21);
x_23 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_1);
x_24 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
x_25 = l_lean_parser_syntax_mk__node(x_24, x_23);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_1);
x_27 = l_lean_parser_detail__ident__part;
x_28 = l_lean_parser_syntax_mk__node(x_27, x_26);
return x_28;
}
}
}
obj* _init_l_lean_parser_detail__ident__part_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_detail__ident__part_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_detail__ident__part_has__view_x_27;
return x_0;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__2(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__3(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_5 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_7 = l_string_join___closed__1;
x_8 = lean::string_push(x_7, x_5);
x_9 = lean::string_iterator_remaining(x_2);
x_10 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__5(x_9, x_8, x_2);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__6(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__7(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_20; uint32 x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_31; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 2);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::unbox_uint32(x_16);
x_24 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__2(x_23, x_0, x_18, x_11);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_25);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
return x_31;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_15, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_36 = x_15;
} else {
 lean::dec(x_15);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_13)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_13;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
return x_39;
}
}
else
{
uint32 x_40; uint8 x_41; 
x_40 = lean::string_iterator_curr(x_1);
x_41 = l_lean_is__id__end__escape(x_40);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::inc(x_1);
x_43 = lean::string_iterator_next(x_1);
x_44 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__4(x_1, x_0, x_43, x_2);
x_45 = lean::cnstr_get(x_44, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 lean::cnstr_release(x_44, 1);
 x_49 = x_44;
} else {
 lean::dec(x_44);
 x_49 = lean::box(0);
}
x_50 = lean::box(0);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_45);
if (lean::is_scalar(x_49)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_49;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_47);
return x_52;
}
else
{
obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; 
x_53 = l_char_quote__core(x_40);
x_54 = l_char_has__repr___closed__1;
x_55 = lean::string_append(x_54, x_53);
lean::dec(x_53);
x_57 = lean::string_append(x_55, x_54);
x_58 = lean::box(0);
x_59 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_61 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_57, x_59, x_58, x_58, x_0, x_1, x_2);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_66 = x_61;
} else {
 lean::dec(x_61);
 x_66 = lean::box(0);
}
x_67 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_62);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; obj* x_71; obj* x_73; uint32 x_76; obj* x_77; obj* x_78; obj* x_80; obj* x_83; obj* x_84; 
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 2);
lean::inc(x_73);
lean::dec(x_68);
x_76 = lean::unbox_uint32(x_69);
x_77 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__6(x_76, x_0, x_71, x_64);
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
lean::dec(x_77);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_78);
if (lean::is_scalar(x_66)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_66;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_80);
return x_84;
}
else
{
obj* x_86; uint8 x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_0);
x_86 = lean::cnstr_get(x_68, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get_scalar<uint8>(x_68, sizeof(void*)*1);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 x_89 = x_68;
} else {
 lean::dec(x_68);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_86);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_88);
x_91 = x_90;
if (lean::is_scalar(x_66)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_66;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_64);
return x_92;
}
}
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__9(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__10(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_5 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_7 = l_string_join___closed__1;
x_8 = lean::string_push(x_7, x_5);
x_9 = lean::string_iterator_remaining(x_2);
x_10 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__12(x_9, x_8, x_2);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__13(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__14(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__8(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_20; uint32 x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_31; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 2);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::unbox_uint32(x_16);
x_24 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__9(x_23, x_0, x_18, x_11);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_25);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
return x_31;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_15, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_36 = x_15;
} else {
 lean::dec(x_15);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_13)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_13;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
return x_39;
}
}
else
{
uint32 x_40; uint8 x_41; 
x_40 = lean::string_iterator_curr(x_1);
x_41 = l_lean_is__id__end__escape(x_40);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::inc(x_1);
x_43 = lean::string_iterator_next(x_1);
x_44 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__11(x_1, x_0, x_43, x_2);
x_45 = lean::cnstr_get(x_44, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 lean::cnstr_release(x_44, 1);
 x_49 = x_44;
} else {
 lean::dec(x_44);
 x_49 = lean::box(0);
}
x_50 = lean::box(0);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_45);
if (lean::is_scalar(x_49)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_49;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_47);
return x_52;
}
else
{
obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; 
x_53 = l_char_quote__core(x_40);
x_54 = l_char_has__repr___closed__1;
x_55 = lean::string_append(x_54, x_53);
lean::dec(x_53);
x_57 = lean::string_append(x_55, x_54);
x_58 = lean::box(0);
x_59 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_61 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_57, x_59, x_58, x_58, x_0, x_1, x_2);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_66 = x_61;
} else {
 lean::dec(x_61);
 x_66 = lean::box(0);
}
x_67 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_62);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; obj* x_71; obj* x_73; uint32 x_76; obj* x_77; obj* x_78; obj* x_80; obj* x_83; obj* x_84; 
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 2);
lean::inc(x_73);
lean::dec(x_68);
x_76 = lean::unbox_uint32(x_69);
x_77 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__13(x_76, x_0, x_71, x_64);
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
lean::dec(x_77);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_78);
if (lean::is_scalar(x_66)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_66;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_80);
return x_84;
}
else
{
obj* x_86; uint8 x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_0);
x_86 = lean::cnstr_get(x_68, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get_scalar<uint8>(x_68, sizeof(void*)*1);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 x_89 = x_68;
} else {
 lean::dec(x_68);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_86);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_88);
x_91 = x_90;
if (lean::is_scalar(x_66)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_66;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_64);
return x_92;
}
}
}
}
}
obj* l_list_mfoldl___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__16(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_3);
lean::dec(x_0);
x_8 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_9 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_9, 0, x_1);
lean::cnstr_set(x_9, 1, x_4);
lean::cnstr_set(x_9, 2, x_8);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_5);
return x_10;
}
else
{
obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_20; obj* x_21; obj* x_23; 
x_11 = lean::cnstr_get(x_2, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_2, 1);
lean::inc(x_13);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_15 = x_2;
} else {
 lean::dec(x_2);
 x_15 = lean::box(0);
}
lean::inc(x_3);
x_20 = lean::apply_3(x_11, x_3, x_4, x_5);
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
lean::dec(x_20);
if (lean::obj_tag(x_21) == 0)
{
x_16 = x_21;
x_17 = x_23;
goto lbl_18;
}
else
{
obj* x_26; uint8 x_28; obj* x_29; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get_scalar<uint8>(x_21, sizeof(void*)*1);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 x_29 = x_21;
} else {
 lean::dec(x_21);
 x_29 = lean::box(0);
}
if (lean::obj_tag(x_1) == 0)
{
if (x_28 == 0)
{
uint8 x_30; obj* x_31; obj* x_32; 
x_30 = 0;
if (lean::is_scalar(x_29)) {
 x_31 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_31 = x_29;
}
lean::cnstr_set(x_31, 0, x_26);
lean::cnstr_set_scalar(x_31, sizeof(void*)*1, x_30);
x_32 = x_31;
x_16 = x_32;
x_17 = x_23;
goto lbl_18;
}
else
{
obj* x_33; obj* x_34; 
if (lean::is_scalar(x_29)) {
 x_33 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_33 = x_29;
}
lean::cnstr_set(x_33, 0, x_26);
lean::cnstr_set_scalar(x_33, sizeof(void*)*1, x_28);
x_34 = x_33;
x_16 = x_34;
x_17 = x_23;
goto lbl_18;
}
}
else
{
obj* x_35; obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_47; obj* x_49; obj* x_50; obj* x_51; 
x_35 = lean::cnstr_get(x_26, 3);
lean::inc(x_35);
x_37 = l_option_get___main___at_lean_parser_run___spec__2(x_35);
lean::inc(x_1);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_1);
x_40 = lean::cnstr_get(x_26, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_26, 1);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_26, 2);
lean::inc(x_44);
lean::dec(x_26);
x_47 = l_list_reverse___rarg(x_39);
lean::inc(x_0);
x_49 = l_lean_parser_syntax_mk__node(x_0, x_47);
x_50 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_50, 0, x_49);
x_51 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_51, 0, x_40);
lean::cnstr_set(x_51, 1, x_42);
lean::cnstr_set(x_51, 2, x_44);
lean::cnstr_set(x_51, 3, x_50);
if (x_28 == 0)
{
uint8 x_52; obj* x_53; obj* x_54; 
x_52 = 0;
if (lean::is_scalar(x_29)) {
 x_53 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_53 = x_29;
}
lean::cnstr_set(x_53, 0, x_51);
lean::cnstr_set_scalar(x_53, sizeof(void*)*1, x_52);
x_54 = x_53;
x_16 = x_54;
x_17 = x_23;
goto lbl_18;
}
else
{
obj* x_55; obj* x_56; 
if (lean::is_scalar(x_29)) {
 x_55 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_55 = x_29;
}
lean::cnstr_set(x_55, 0, x_51);
lean::cnstr_set_scalar(x_55, sizeof(void*)*1, x_28);
x_56 = x_55;
x_16 = x_56;
x_17 = x_23;
goto lbl_18;
}
}
}
lbl_18:
{
if (lean::obj_tag(x_16) == 0)
{
obj* x_57; obj* x_59; obj* x_61; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_57 = lean::cnstr_get(x_16, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_16, 1);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_16, 2);
lean::inc(x_61);
if (lean::is_exclusive(x_16)) {
 lean::cnstr_release(x_16, 0);
 lean::cnstr_release(x_16, 1);
 lean::cnstr_release(x_16, 2);
 x_63 = x_16;
} else {
 lean::dec(x_16);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_15)) {
 x_64 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_64 = x_15;
}
lean::cnstr_set(x_64, 0, x_57);
lean::cnstr_set(x_64, 1, x_1);
x_65 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_63)) {
 x_66 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_66 = x_63;
}
lean::cnstr_set(x_66, 0, x_64);
lean::cnstr_set(x_66, 1, x_59);
lean::cnstr_set(x_66, 2, x_65);
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_61, x_66);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_70; obj* x_72; obj* x_75; obj* x_76; obj* x_78; obj* x_80; obj* x_81; obj* x_82; 
x_68 = lean::cnstr_get(x_67, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_67, 1);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_67, 2);
lean::inc(x_72);
lean::dec(x_67);
x_75 = l_list_mfoldl___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__16(x_0, x_68, x_13, x_3, x_70, x_17);
x_76 = lean::cnstr_get(x_75, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_75, 1);
lean::inc(x_78);
if (lean::is_exclusive(x_75)) {
 lean::cnstr_release(x_75, 0);
 lean::cnstr_release(x_75, 1);
 x_80 = x_75;
} else {
 lean::dec(x_75);
 x_80 = lean::box(0);
}
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_72, x_76);
if (lean::is_scalar(x_80)) {
 x_82 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_82 = x_80;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_78);
return x_82;
}
else
{
obj* x_86; uint8 x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_13);
lean::dec(x_3);
lean::dec(x_0);
x_86 = lean::cnstr_get(x_67, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get_scalar<uint8>(x_67, sizeof(void*)*1);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 x_89 = x_67;
} else {
 lean::dec(x_67);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_86);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_88);
x_91 = x_90;
x_92 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_17);
return x_92;
}
}
else
{
obj* x_98; uint8 x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; 
lean::dec(x_13);
lean::dec(x_15);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
x_98 = lean::cnstr_get(x_16, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get_scalar<uint8>(x_16, sizeof(void*)*1);
if (lean::is_exclusive(x_16)) {
 lean::cnstr_release(x_16, 0);
 x_101 = x_16;
} else {
 lean::dec(x_16);
 x_101 = lean::box(0);
}
if (lean::is_scalar(x_101)) {
 x_102 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_102 = x_101;
}
lean::cnstr_set(x_102, 0, x_98);
lean::cnstr_set_scalar(x_102, sizeof(void*)*1, x_100);
x_103 = x_102;
x_104 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_104, 0, x_103);
lean::cnstr_set(x_104, 1, x_17);
return x_104;
}
}
}
}
}
obj* l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
x_5 = lean::box(0);
lean::inc(x_0);
x_7 = l_list_mfoldl___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__16(x_0, x_5, x_1, x_2, x_3, x_4);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_13 = lean::cnstr_get(x_8, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_8, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_19 = x_8;
} else {
 lean::dec(x_8);
 x_19 = lean::box(0);
}
x_20 = l_list_reverse___rarg(x_13);
x_21 = l_lean_parser_syntax_mk__node(x_0, x_20);
x_22 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_19)) {
 x_23 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_23 = x_19;
}
lean::cnstr_set(x_23, 0, x_21);
lean::cnstr_set(x_23, 1, x_15);
lean::cnstr_set(x_23, 2, x_22);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_23);
if (lean::is_scalar(x_12)) {
 x_25 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_25 = x_12;
}
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_10);
return x_25;
}
else
{
obj* x_27; uint8 x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_0);
x_27 = lean::cnstr_get(x_8, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_30 = x_8;
} else {
 lean::dec(x_8);
 x_30 = lean::box(0);
}
if (lean::is_scalar(x_30)) {
 x_31 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_31 = x_30;
}
lean::cnstr_set(x_31, 0, x_27);
lean::cnstr_set_scalar(x_31, sizeof(void*)*1, x_29);
x_32 = x_31;
if (lean::is_scalar(x_12)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_12;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_10);
return x_33;
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__17___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__18(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__17(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__17___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__20(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__19___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__20(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__19(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__19___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__22(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__21___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__22(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__21(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__21___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__24(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__23___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__24(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__23(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__23___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__26(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__25___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__26(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__25(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__25___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__28(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__27___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__28(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__27(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__27___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_choice__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__29(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_6 = lean::box(0);
x_7 = l_lean_parser_combinators_choice__aux___main___rarg___closed__1;
x_8 = l_mjoin___rarg___closed__1;
x_9 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_7, x_8, x_6, x_6, x_2, x_3, x_4);
return x_9;
}
else
{
obj* x_10; obj* x_12; obj* x_14; obj* x_17; obj* x_18; obj* x_20; obj* x_22; obj* x_23; obj* x_24; 
x_10 = lean::cnstr_get(x_0, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_0, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_14 = x_0;
} else {
 lean::dec(x_0);
 x_14 = lean::box(0);
}
lean::inc(x_3);
lean::inc(x_2);
x_17 = lean::apply_3(x_10, x_2, x_3, x_4);
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
if (lean::is_exclusive(x_17)) {
 lean::cnstr_release(x_17, 0);
 lean::cnstr_release(x_17, 1);
 x_22 = x_17;
} else {
 lean::dec(x_17);
 x_22 = lean::box(0);
}
x_23 = lean::mk_nat_obj(1u);
x_24 = lean::nat_add(x_1, x_23);
if (lean::obj_tag(x_18) == 0)
{
obj* x_25; obj* x_27; obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_25 = lean::cnstr_get(x_18, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_18, 1);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_18, 2);
lean::inc(x_29);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 lean::cnstr_release(x_18, 1);
 lean::cnstr_release(x_18, 2);
 x_31 = x_18;
} else {
 lean::dec(x_18);
 x_31 = lean::box(0);
}
x_32 = lean::box(0);
x_33 = lean_name_mk_numeral(x_32, x_1);
if (lean::is_scalar(x_14)) {
 x_34 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_34 = x_14;
}
lean::cnstr_set(x_34, 0, x_25);
lean::cnstr_set(x_34, 1, x_32);
x_35 = l_lean_parser_syntax_mk__node(x_33, x_34);
x_36 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_31)) {
 x_37 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_37 = x_31;
}
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_27);
lean::cnstr_set(x_37, 2, x_36);
x_38 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_29, x_37);
if (lean::obj_tag(x_38) == 0)
{
obj* x_43; 
lean::dec(x_12);
lean::dec(x_24);
lean::dec(x_3);
lean::dec(x_2);
if (lean::is_scalar(x_22)) {
 x_43 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_43 = x_22;
}
lean::cnstr_set(x_43, 0, x_38);
lean::cnstr_set(x_43, 1, x_20);
return x_43;
}
else
{
obj* x_44; uint8 x_46; 
x_44 = lean::cnstr_get(x_38, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get_scalar<uint8>(x_38, sizeof(void*)*1);
if (x_46 == 0)
{
obj* x_48; obj* x_49; obj* x_51; obj* x_54; obj* x_55; 
lean::dec(x_38);
x_48 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__29(x_12, x_24, x_2, x_3, x_20);
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
lean::dec(x_48);
x_54 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_44, x_49);
if (lean::is_scalar(x_22)) {
 x_55 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_55 = x_22;
}
lean::cnstr_set(x_55, 0, x_54);
lean::cnstr_set(x_55, 1, x_51);
return x_55;
}
else
{
obj* x_61; 
lean::dec(x_12);
lean::dec(x_24);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_44);
if (lean::is_scalar(x_22)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_22;
}
lean::cnstr_set(x_61, 0, x_38);
lean::cnstr_set(x_61, 1, x_20);
return x_61;
}
}
}
else
{
obj* x_64; uint8 x_66; obj* x_67; 
lean::dec(x_14);
lean::dec(x_1);
x_64 = lean::cnstr_get(x_18, 0);
lean::inc(x_64);
x_66 = lean::cnstr_get_scalar<uint8>(x_18, sizeof(void*)*1);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 x_67 = x_18;
} else {
 lean::dec(x_18);
 x_67 = lean::box(0);
}
if (x_66 == 0)
{
obj* x_69; obj* x_70; obj* x_72; obj* x_75; obj* x_76; 
lean::dec(x_67);
x_69 = l_lean_parser_combinators_choice__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__29(x_12, x_24, x_2, x_3, x_20);
x_70 = lean::cnstr_get(x_69, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_69, 1);
lean::inc(x_72);
lean::dec(x_69);
x_75 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_64, x_70);
if (lean::is_scalar(x_22)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_22;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_72);
return x_76;
}
else
{
obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_12);
lean::dec(x_24);
lean::dec(x_3);
lean::dec(x_2);
if (lean::is_scalar(x_67)) {
 x_81 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_81 = x_67;
}
lean::cnstr_set(x_81, 0, x_64);
lean::cnstr_set_scalar(x_81, sizeof(void*)*1, x_66);
x_82 = x_81;
if (lean::is_scalar(x_22)) {
 x_83 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_83 = x_22;
}
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_20);
return x_83;
}
}
}
}
}
obj* _init_l_lean_parser_detail__ident__part_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_0 = lean::box(0);
x_1 = l_lean_parser_list_cons_tokens___rarg(x_0, x_0);
lean::inc(x_1);
x_3 = l_lean_parser_list_cons_tokens___rarg(x_0, x_1);
x_4 = l_lean_parser_list_cons_tokens___rarg(x_0, x_3);
x_5 = l_lean_parser_tokens___rarg(x_4);
x_6 = l_lean_parser_list_cons_tokens___rarg(x_5, x_1);
x_7 = l_lean_parser_tokens___rarg(x_6);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_7, x_0);
x_9 = l_lean_parser_tokens___rarg(x_8);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__2(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__6(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__9___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__9(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__13___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__13(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__2(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__3(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_5 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_7 = l_string_join___closed__1;
x_8 = lean::string_push(x_7, x_5);
x_9 = lean::string_iterator_remaining(x_2);
x_10 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__5(x_9, x_8, x_2);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__6(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__7(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_20; uint32 x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_31; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 2);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::unbox_uint32(x_16);
x_24 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__2(x_23, x_0, x_18, x_11);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_25);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
return x_31;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_15, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_36 = x_15;
} else {
 lean::dec(x_15);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_13)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_13;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
return x_39;
}
}
else
{
uint32 x_40; uint8 x_41; 
x_40 = lean::string_iterator_curr(x_1);
x_41 = l_lean_is__id__end__escape(x_40);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::inc(x_1);
x_43 = lean::string_iterator_next(x_1);
x_44 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__4(x_1, x_0, x_43, x_2);
x_45 = lean::cnstr_get(x_44, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 lean::cnstr_release(x_44, 1);
 x_49 = x_44;
} else {
 lean::dec(x_44);
 x_49 = lean::box(0);
}
x_50 = lean::box(0);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_45);
if (lean::is_scalar(x_49)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_49;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_47);
return x_52;
}
else
{
obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; 
x_53 = l_char_quote__core(x_40);
x_54 = l_char_has__repr___closed__1;
x_55 = lean::string_append(x_54, x_53);
lean::dec(x_53);
x_57 = lean::string_append(x_55, x_54);
x_58 = lean::box(0);
x_59 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_61 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_57, x_59, x_58, x_58, x_0, x_1, x_2);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_66 = x_61;
} else {
 lean::dec(x_61);
 x_66 = lean::box(0);
}
x_67 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_62);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; obj* x_71; obj* x_73; uint32 x_76; obj* x_77; obj* x_78; obj* x_80; obj* x_83; obj* x_84; 
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 2);
lean::inc(x_73);
lean::dec(x_68);
x_76 = lean::unbox_uint32(x_69);
x_77 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__6(x_76, x_0, x_71, x_64);
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
lean::dec(x_77);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_78);
if (lean::is_scalar(x_66)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_66;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_80);
return x_84;
}
else
{
obj* x_86; uint8 x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_0);
x_86 = lean::cnstr_get(x_68, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get_scalar<uint8>(x_68, sizeof(void*)*1);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 x_89 = x_68;
} else {
 lean::dec(x_68);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_86);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_88);
x_91 = x_90;
if (lean::is_scalar(x_66)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_66;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_64);
return x_92;
}
}
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__8___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__9(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__8(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__8___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__11(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__10___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__11(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__10(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__10___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__13(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__12___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__13(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__12(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__12___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
x_6 = l_lean_parser_monad__parsec_str__core___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__3(x_0, x_1, x_3, x_4, x_5);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 2);
lean::inc(x_14);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_16 = x_7;
} else {
 lean::dec(x_7);
 x_16 = lean::box(0);
}
lean::inc(x_12);
x_18 = l_lean_parser_mk__raw__res(x_2, x_12);
x_19 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_16)) {
 x_20 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_20 = x_16;
}
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set(x_20, 1, x_12);
lean::cnstr_set(x_20, 2, x_19);
x_21 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_20);
if (lean::is_scalar(x_11)) {
 x_22 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_22 = x_11;
}
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_9);
return x_22;
}
else
{
obj* x_24; uint8 x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_2);
x_24 = lean::cnstr_get(x_7, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_27 = x_7;
} else {
 lean::dec(x_7);
 x_27 = lean::box(0);
}
if (lean::is_scalar(x_27)) {
 x_28 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_28 = x_27;
}
lean::cnstr_set(x_28, 0, x_24);
lean::cnstr_set_scalar(x_28, sizeof(void*)*1, x_26);
x_29 = x_28;
if (lean::is_scalar(x_11)) {
 x_30 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_30 = x_11;
}
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_9);
return x_30;
}
}
}
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__1(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = l_lean_parser_mk__raw__res(x_0, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; uint8 x_7; 
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_17; obj* x_18; 
x_8 = lean::box(0);
x_9 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_10 = l_mjoin___rarg___closed__1;
x_11 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_9, x_10, x_8, x_8, x_1, x_2, x_3);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_12);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_27; obj* x_30; 
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::dec(x_18);
x_24 = l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__8___rarg(x_19, x_14);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_25);
x_4 = x_30;
x_5 = x_27;
goto lbl_6;
}
else
{
obj* x_31; uint8 x_33; obj* x_34; obj* x_35; obj* x_36; 
x_31 = lean::cnstr_get(x_18, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get_scalar<uint8>(x_18, sizeof(void*)*1);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 x_34 = x_18;
} else {
 lean::dec(x_18);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set_scalar(x_35, sizeof(void*)*1, x_33);
x_36 = x_35;
x_4 = x_36;
x_5 = x_14;
goto lbl_6;
}
}
else
{
uint32 x_37; uint8 x_38; 
x_37 = lean::string_iterator_curr(x_2);
x_38 = l_lean_is__id__first(x_37);
if (x_38 == 0)
{
obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_52; obj* x_53; 
x_39 = l_char_quote__core(x_37);
x_40 = l_char_has__repr___closed__1;
x_41 = lean::string_append(x_40, x_39);
lean::dec(x_39);
x_43 = lean::string_append(x_41, x_40);
x_44 = lean::box(0);
x_45 = l_mjoin___rarg___closed__1;
x_46 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_43, x_45, x_44, x_44, x_1, x_2, x_3);
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_52, x_47);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_62; obj* x_65; 
x_54 = lean::cnstr_get(x_53, 1);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_53, 2);
lean::inc(x_56);
lean::dec(x_53);
x_59 = l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__10___rarg(x_54, x_49);
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
x_65 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_60);
x_4 = x_65;
x_5 = x_62;
goto lbl_6;
}
else
{
obj* x_66; uint8 x_68; obj* x_69; obj* x_70; obj* x_71; 
x_66 = lean::cnstr_get(x_53, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get_scalar<uint8>(x_53, sizeof(void*)*1);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 x_69 = x_53;
} else {
 lean::dec(x_53);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_68);
x_71 = x_70;
x_4 = x_71;
x_5 = x_49;
goto lbl_6;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_77; obj* x_80; obj* x_81; 
lean::dec(x_1);
x_73 = lean::string_iterator_next(x_2);
x_74 = l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__12___rarg(x_73, x_3);
x_75 = lean::cnstr_get(x_74, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_74, 1);
lean::inc(x_77);
lean::dec(x_74);
x_80 = lean::box(0);
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_80, x_75);
x_4 = x_81;
x_5 = x_77;
goto lbl_6;
}
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_82; obj* x_84; obj* x_86; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_82 = lean::cnstr_get(x_4, 1);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_4, 2);
lean::inc(x_84);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_86 = x_4;
} else {
 lean::dec(x_4);
 x_86 = lean::box(0);
}
lean::inc(x_82);
x_88 = l_lean_parser_mk__raw__res(x_0, x_82);
x_89 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_86)) {
 x_90 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_90 = x_86;
}
lean::cnstr_set(x_90, 0, x_88);
lean::cnstr_set(x_90, 1, x_82);
lean::cnstr_set(x_90, 2, x_89);
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_90);
x_92 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_5);
return x_92;
}
else
{
obj* x_94; uint8 x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; 
lean::dec(x_0);
x_94 = lean::cnstr_get(x_4, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_97 = x_4;
} else {
 lean::dec(x_4);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_94);
lean::cnstr_set_scalar(x_98, sizeof(void*)*1, x_96);
x_99 = x_98;
x_100 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_5);
return x_100;
}
}
}
}
obj* _init_l_lean_parser_detail__ident__part_parser_lean_parser_has__view() {
_start:
{
obj* x_0; uint32 x_1; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_14; uint32 x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_0 = lean::mk_string("");
x_1 = l_lean_id__begin__escape;
lean::inc(x_0);
x_3 = lean::string_push(x_0, x_1);
lean::inc(x_3);
x_5 = l_string_quote(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__1), 6, 2);
lean::closure_set(x_9, 0, x_3);
lean::closure_set(x_9, 1, x_6);
lean::inc(x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__2), 4, 0);
lean::inc(x_8);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_14, 0, x_8);
lean::closure_set(x_14, 1, x_12);
x_15 = l_lean_id__end__escape;
x_16 = lean::string_push(x_0, x_15);
lean::inc(x_16);
x_18 = l_string_quote(x_16);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_19, 0, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__1), 6, 2);
lean::closure_set(x_20, 0, x_16);
lean::closure_set(x_20, 1, x_19);
lean::inc(x_8);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_22, 0, x_8);
lean::closure_set(x_22, 1, x_20);
x_23 = lean::box(0);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_14);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_11);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_lean_parser_detail__ident__part__escaped;
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15), 5, 2);
lean::closure_set(x_28, 0, x_27);
lean::closure_set(x_28, 1, x_26);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__3), 4, 0);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_30, 0, x_8);
lean::closure_set(x_30, 1, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_23);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_28);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::mk_nat_obj(0u);
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__29), 5, 2);
lean::closure_set(x_34, 0, x_32);
lean::closure_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_23);
x_36 = l_lean_parser_basic__parser__m_monad;
x_37 = l_lean_parser_basic__parser__m_monad__except;
x_38 = l_lean_parser_basic__parser__m_lean_parser_monad__parsec;
x_39 = l_lean_parser_basic__parser__m_alternative;
x_40 = l_lean_parser_detail__ident__part;
x_41 = l_lean_parser_detail__ident__part_has__view;
x_42 = l_lean_parser_combinators_node_view___rarg(x_36, x_37, x_38, x_39, x_40, x_35, x_41);
return x_42;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__2(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser_lean_parser_has__view___spec__6(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__2(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__3(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_5 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_7 = l_string_join___closed__1;
x_8 = lean::string_push(x_7, x_5);
x_9 = lean::string_iterator_remaining(x_2);
x_10 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__5(x_9, x_8, x_2);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__6(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__7(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_20; uint32 x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_31; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 2);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::unbox_uint32(x_16);
x_24 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__2(x_23, x_0, x_18, x_11);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_25);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
return x_31;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_15, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_36 = x_15;
} else {
 lean::dec(x_15);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_13)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_13;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
return x_39;
}
}
else
{
uint32 x_40; uint8 x_41; 
x_40 = lean::string_iterator_curr(x_1);
x_41 = l_lean_is__id__end__escape(x_40);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::inc(x_1);
x_43 = lean::string_iterator_next(x_1);
x_44 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__4(x_1, x_0, x_43, x_2);
x_45 = lean::cnstr_get(x_44, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 lean::cnstr_release(x_44, 1);
 x_49 = x_44;
} else {
 lean::dec(x_44);
 x_49 = lean::box(0);
}
x_50 = lean::box(0);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_45);
if (lean::is_scalar(x_49)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_49;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_47);
return x_52;
}
else
{
obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; 
x_53 = l_char_quote__core(x_40);
x_54 = l_char_has__repr___closed__1;
x_55 = lean::string_append(x_54, x_53);
lean::dec(x_53);
x_57 = lean::string_append(x_55, x_54);
x_58 = lean::box(0);
x_59 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_61 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_57, x_59, x_58, x_58, x_0, x_1, x_2);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_66 = x_61;
} else {
 lean::dec(x_61);
 x_66 = lean::box(0);
}
x_67 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_62);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; obj* x_71; obj* x_73; uint32 x_76; obj* x_77; obj* x_78; obj* x_80; obj* x_83; obj* x_84; 
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 2);
lean::inc(x_73);
lean::dec(x_68);
x_76 = lean::unbox_uint32(x_69);
x_77 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__6(x_76, x_0, x_71, x_64);
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
lean::dec(x_77);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_78);
if (lean::is_scalar(x_66)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_66;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_80);
return x_84;
}
else
{
obj* x_86; uint8 x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_0);
x_86 = lean::cnstr_get(x_68, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get_scalar<uint8>(x_68, sizeof(void*)*1);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 x_89 = x_68;
} else {
 lean::dec(x_68);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_86);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_88);
x_91 = x_90;
if (lean::is_scalar(x_66)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_66;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_64);
return x_92;
}
}
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__8___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__9(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__8(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__8___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__11(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__10___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__11(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__10(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__10___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__13(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__12___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::string_iterator_remaining(x_0);
x_3 = l_string_join___closed__1;
x_4 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_detail__ident__part_parser___spec__13(x_2, x_3, x_0);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__12(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__12___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_detail__ident__part_parser___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_detail__ident__part_parser___spec__1(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = l_lean_parser_mk__raw__res(x_0, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* l_lean_parser_detail__ident__part_parser___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; uint8 x_7; 
x_7 = lean::string_iterator_has_next(x_2);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_17; obj* x_18; 
x_8 = lean::box(0);
x_9 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_10 = l_mjoin___rarg___closed__1;
x_11 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_9, x_10, x_8, x_8, x_1, x_2, x_3);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_12);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_27; obj* x_30; 
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_18, 2);
lean::inc(x_21);
lean::dec(x_18);
x_24 = l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__8___rarg(x_19, x_14);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_25);
x_4 = x_30;
x_5 = x_27;
goto lbl_6;
}
else
{
obj* x_31; uint8 x_33; obj* x_34; obj* x_35; obj* x_36; 
x_31 = lean::cnstr_get(x_18, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get_scalar<uint8>(x_18, sizeof(void*)*1);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 x_34 = x_18;
} else {
 lean::dec(x_18);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set_scalar(x_35, sizeof(void*)*1, x_33);
x_36 = x_35;
x_4 = x_36;
x_5 = x_14;
goto lbl_6;
}
}
else
{
uint32 x_37; uint8 x_38; 
x_37 = lean::string_iterator_curr(x_2);
x_38 = l_lean_is__id__first(x_37);
if (x_38 == 0)
{
obj* x_39; obj* x_40; obj* x_41; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_52; obj* x_53; 
x_39 = l_char_quote__core(x_37);
x_40 = l_char_has__repr___closed__1;
x_41 = lean::string_append(x_40, x_39);
lean::dec(x_39);
x_43 = lean::string_append(x_41, x_40);
x_44 = lean::box(0);
x_45 = l_mjoin___rarg___closed__1;
x_46 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_43, x_45, x_44, x_44, x_1, x_2, x_3);
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_52, x_47);
if (lean::obj_tag(x_53) == 0)
{
obj* x_54; obj* x_56; obj* x_59; obj* x_60; obj* x_62; obj* x_65; 
x_54 = lean::cnstr_get(x_53, 1);
lean::inc(x_54);
x_56 = lean::cnstr_get(x_53, 2);
lean::inc(x_56);
lean::dec(x_53);
x_59 = l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__10___rarg(x_54, x_49);
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
x_65 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_60);
x_4 = x_65;
x_5 = x_62;
goto lbl_6;
}
else
{
obj* x_66; uint8 x_68; obj* x_69; obj* x_70; obj* x_71; 
x_66 = lean::cnstr_get(x_53, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get_scalar<uint8>(x_53, sizeof(void*)*1);
if (lean::is_exclusive(x_53)) {
 lean::cnstr_release(x_53, 0);
 x_69 = x_53;
} else {
 lean::dec(x_53);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_68);
x_71 = x_70;
x_4 = x_71;
x_5 = x_49;
goto lbl_6;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_77; obj* x_80; obj* x_81; 
lean::dec(x_1);
x_73 = lean::string_iterator_next(x_2);
x_74 = l_lean_parser_monad__parsec_take__while___at_lean_parser_detail__ident__part_parser___spec__12___rarg(x_73, x_3);
x_75 = lean::cnstr_get(x_74, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get(x_74, 1);
lean::inc(x_77);
lean::dec(x_74);
x_80 = lean::box(0);
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_80, x_75);
x_4 = x_81;
x_5 = x_77;
goto lbl_6;
}
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_82; obj* x_84; obj* x_86; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_82 = lean::cnstr_get(x_4, 1);
lean::inc(x_82);
x_84 = lean::cnstr_get(x_4, 2);
lean::inc(x_84);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_86 = x_4;
} else {
 lean::dec(x_4);
 x_86 = lean::box(0);
}
lean::inc(x_82);
x_88 = l_lean_parser_mk__raw__res(x_0, x_82);
x_89 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_86)) {
 x_90 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_90 = x_86;
}
lean::cnstr_set(x_90, 0, x_88);
lean::cnstr_set(x_90, 1, x_82);
lean::cnstr_set(x_90, 2, x_89);
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_90);
x_92 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_5);
return x_92;
}
else
{
obj* x_94; uint8 x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; 
lean::dec(x_0);
x_94 = lean::cnstr_get(x_4, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_97 = x_4;
} else {
 lean::dec(x_4);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_94);
lean::cnstr_set_scalar(x_98, sizeof(void*)*1, x_96);
x_99 = x_98;
x_100 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_5);
return x_100;
}
}
}
}
obj* _init_l_lean_parser_detail__ident__part_parser___closed__1() {
_start:
{
obj* x_0; uint32 x_1; obj* x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_14; uint32 x_15; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_0 = lean::mk_string("");
x_1 = l_lean_id__begin__escape;
lean::inc(x_0);
x_3 = lean::string_push(x_0, x_1);
lean::inc(x_3);
x_5 = l_string_quote(x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_6, 0, x_5);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 1);
lean::closure_set(x_8, 0, x_7);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__1), 6, 2);
lean::closure_set(x_9, 0, x_3);
lean::closure_set(x_9, 1, x_6);
lean::inc(x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_11, 0, x_8);
lean::closure_set(x_11, 1, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser___lambda__1), 4, 0);
lean::inc(x_8);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_14, 0, x_8);
lean::closure_set(x_14, 1, x_12);
x_15 = l_lean_id__end__escape;
x_16 = lean::string_push(x_0, x_15);
lean::inc(x_16);
x_18 = l_string_quote(x_16);
x_19 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_19, 0, x_18);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser_lean_parser_has__view___lambda__1), 6, 2);
lean::closure_set(x_20, 0, x_16);
lean::closure_set(x_20, 1, x_19);
lean::inc(x_8);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_22, 0, x_8);
lean::closure_set(x_22, 1, x_20);
x_23 = lean::box(0);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_23);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_14);
lean::cnstr_set(x_25, 1, x_24);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_11);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_lean_parser_detail__ident__part__escaped;
x_28 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15), 5, 2);
lean::closure_set(x_28, 0, x_27);
lean::closure_set(x_28, 1, x_26);
x_29 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser___lambda__2), 4, 0);
x_30 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_30, 0, x_8);
lean::closure_set(x_30, 1, x_29);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_23);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_28);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::mk_nat_obj(0u);
x_34 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_choice__aux___main___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__29), 5, 2);
lean::closure_set(x_34, 0, x_32);
lean::closure_set(x_34, 1, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_23);
return x_35;
}
}
obj* l_lean_parser_detail__ident__part_parser(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = l_lean_parser_detail__ident__part;
x_4 = l_lean_parser_detail__ident__part_parser___closed__1;
x_5 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15(x_3, x_4, x_0, x_1, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__2(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_detail__ident__part_parser___spec__6(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* _init_l_lean_parser_detail__ident__suffix() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("detail_ident_suffix");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::box(3);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1;
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_5 = x_1;
} else {
 lean::dec(x_1);
 x_5 = lean::box(0);
}
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
if (lean::obj_tag(x_6) == 0)
{
lean::dec(x_5);
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
x_10 = l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1;
return x_10;
}
else
{
obj* x_11; obj* x_14; obj* x_15; 
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
lean::dec(x_6);
x_14 = lean::box(0);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_11);
return x_15;
}
}
else
{
obj* x_16; obj* x_18; 
x_16 = lean::cnstr_get(x_6, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_6, 1);
lean::inc(x_18);
lean::dec(x_6);
switch (lean::obj_tag(x_16)) {
case 0:
{
obj* x_21; obj* x_24; 
x_21 = lean::cnstr_get(x_16, 0);
lean::inc(x_21);
lean::dec(x_16);
if (lean::is_scalar(x_5)) {
 x_24 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_24 = x_5;
}
lean::cnstr_set(x_24, 0, x_21);
if (lean::obj_tag(x_18) == 0)
{
obj* x_25; obj* x_26; 
x_25 = lean::box(3);
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_24);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
else
{
obj* x_27; obj* x_30; 
x_27 = lean::cnstr_get(x_18, 0);
lean::inc(x_27);
lean::dec(x_18);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_24);
lean::cnstr_set(x_30, 1, x_27);
return x_30;
}
}
case 3:
{
lean::dec(x_5);
if (lean::obj_tag(x_18) == 0)
{
obj* x_32; 
x_32 = l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1;
return x_32;
}
else
{
obj* x_33; obj* x_36; obj* x_37; 
x_33 = lean::cnstr_get(x_18, 0);
lean::inc(x_33);
lean::dec(x_18);
x_36 = lean::box(0);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_33);
return x_37;
}
}
default:
{
lean::dec(x_5);
lean::dec(x_16);
if (lean::obj_tag(x_18) == 0)
{
obj* x_40; 
x_40 = l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1;
return x_40;
}
else
{
obj* x_41; obj* x_44; obj* x_45; 
x_41 = lean::cnstr_get(x_18, 0);
lean::inc(x_41);
lean::dec(x_18);
x_44 = lean::box(0);
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
return x_45;
}
}
}
}
}
}
}
obj* l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_7 = l_option_map___rarg(x_6, x_1);
x_8 = lean::box(3);
x_9 = l_option_get__or__else___main___rarg(x_7, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_3);
lean::cnstr_set(x_11, 1, x_10);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_9);
lean::cnstr_set(x_12, 1, x_11);
x_13 = l_lean_parser_detail__ident__suffix;
x_14 = l_lean_parser_syntax_mk__node(x_13, x_12);
return x_14;
}
}
obj* _init_l_lean_parser_detail__ident__suffix_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_detail__ident__suffix_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_detail__ident__suffix_has__view_x_27;
return x_0;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_10; obj* x_11; uint8 x_12; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_4);
x_10 = l_option_get__or__else___main___rarg(x_2, x_6);
x_11 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_0);
lean::cnstr_set(x_11, 2, x_1);
lean::cnstr_set(x_11, 3, x_3);
x_12 = 0;
x_13 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set_scalar(x_13, sizeof(void*)*1, x_12);
x_14 = x_13;
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__2___rarg), 8, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(uint32 x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_3);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_6 = lean::box(0);
x_7 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_8 = l_mjoin___rarg___closed__1;
x_9 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__2___rarg(x_7, x_8, x_6, x_6, x_1, x_2, x_3, x_4);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
x_15 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_16 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_10);
if (lean::is_scalar(x_14)) {
 x_17 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_17 = x_14;
}
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_12);
return x_17;
}
else
{
uint32 x_18; uint8 x_19; 
x_18 = lean::string_iterator_curr(x_3);
x_19 = x_18 == x_0;
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
x_20 = l_char_quote__core(x_18);
x_21 = l_char_has__repr___closed__1;
x_22 = lean::string_append(x_21, x_20);
lean::dec(x_20);
x_24 = lean::string_append(x_22, x_21);
x_25 = lean::box(0);
x_26 = l_mjoin___rarg___closed__1;
x_27 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__2___rarg(x_24, x_26, x_25, x_25, x_1, x_2, x_3, x_4);
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
if (lean::is_exclusive(x_27)) {
 lean::cnstr_release(x_27, 0);
 lean::cnstr_release(x_27, 1);
 x_32 = x_27;
} else {
 lean::dec(x_27);
 x_32 = lean::box(0);
}
x_33 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_33, x_28);
if (lean::is_scalar(x_32)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_32;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_30);
return x_35;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_1);
lean::dec(x_2);
x_38 = lean::string_iterator_next(x_3);
x_39 = lean::box(0);
x_40 = lean::box_uint32(x_18);
x_41 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_38);
lean::cnstr_set(x_41, 2, x_39);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_41);
lean::cnstr_set(x_42, 1, x_4);
return x_42;
}
}
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_10; obj* x_11; uint8 x_12; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_5);
lean::dec(x_4);
x_10 = l_option_get__or__else___main___rarg(x_2, x_6);
x_11 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_0);
lean::cnstr_set(x_11, 2, x_1);
lean::cnstr_set(x_11, 3, x_3);
x_12 = 0;
x_13 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set_scalar(x_13, sizeof(void*)*1, x_12);
x_14 = x_13;
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg), 8, 0);
return x_2;
}
}
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; uint32 x_7; obj* x_11; obj* x_12; obj* x_14; 
x_7 = 46;
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_11 = l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(x_7, x_0, x_1, x_2, x_3);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
if (lean::obj_tag(x_12) == 0)
{
obj* x_17; obj* x_19; obj* x_21; uint32 x_22; obj* x_26; obj* x_27; obj* x_29; 
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_12, 2);
lean::inc(x_19);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 lean::cnstr_release(x_12, 2);
 x_21 = x_12;
} else {
 lean::dec(x_12);
 x_21 = lean::box(0);
}
x_22 = l_lean_id__begin__escape;
lean::inc(x_17);
lean::inc(x_1);
lean::inc(x_0);
x_26 = l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(x_22, x_0, x_1, x_17, x_14);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
if (lean::obj_tag(x_27) == 0)
{
obj* x_36; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_21);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_27);
x_4 = x_36;
x_5 = x_29;
goto lbl_6;
}
else
{
obj* x_37; uint8 x_39; 
x_37 = lean::cnstr_get(x_27, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<uint8>(x_27, sizeof(void*)*1);
if (x_39 == 0)
{
uint8 x_41; 
lean::dec(x_27);
x_41 = lean::string_iterator_has_next(x_17);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_21);
x_43 = lean::box(0);
x_44 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_45 = l_mjoin___rarg___closed__1;
x_46 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(x_44, x_45, x_43, x_43, x_0, x_1, x_17, x_29);
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_52, x_47);
x_54 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_37, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_54);
x_4 = x_55;
x_5 = x_49;
goto lbl_6;
}
else
{
uint32 x_56; uint8 x_57; 
x_56 = lean::string_iterator_curr(x_17);
x_57 = l_lean_is__id__first(x_56);
if (x_57 == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_69; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_21);
x_59 = l_char_quote__core(x_56);
x_60 = l_char_has__repr___closed__1;
x_61 = lean::string_append(x_60, x_59);
lean::dec(x_59);
x_63 = lean::string_append(x_61, x_60);
x_64 = lean::box(0);
x_65 = l_mjoin___rarg___closed__1;
x_66 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(x_63, x_65, x_64, x_64, x_0, x_1, x_17, x_29);
x_67 = lean::cnstr_get(x_66, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_66, 1);
lean::inc(x_69);
lean::dec(x_66);
x_72 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_73 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_72, x_67);
x_74 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_37, x_73);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_74);
x_4 = x_75;
x_5 = x_69;
goto lbl_6;
}
else
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_37);
x_79 = lean::string_iterator_next(x_17);
x_80 = lean::box(0);
x_81 = lean::box_uint32(x_56);
if (lean::is_scalar(x_21)) {
 x_82 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_82 = x_21;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_79);
lean::cnstr_set(x_82, 2, x_80);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_82);
x_4 = x_83;
x_5 = x_29;
goto lbl_6;
}
}
}
else
{
obj* x_89; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_37);
lean::dec(x_21);
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_27);
x_4 = x_89;
x_5 = x_29;
goto lbl_6;
}
}
}
else
{
obj* x_92; uint8 x_94; obj* x_95; obj* x_96; obj* x_97; 
lean::dec(x_1);
lean::dec(x_0);
x_92 = lean::cnstr_get(x_12, 0);
lean::inc(x_92);
x_94 = lean::cnstr_get_scalar<uint8>(x_12, sizeof(void*)*1);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 x_95 = x_12;
} else {
 lean::dec(x_12);
 x_95 = lean::box(0);
}
if (lean::is_scalar(x_95)) {
 x_96 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_96 = x_95;
}
lean::cnstr_set(x_96, 0, x_92);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_94);
x_97 = x_96;
x_4 = x_97;
x_5 = x_14;
goto lbl_6;
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_98; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
x_98 = lean::cnstr_get(x_4, 0);
lean::inc(x_98);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_100 = x_4;
} else {
 lean::dec(x_4);
 x_100 = lean::box(0);
}
x_101 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_100)) {
 x_102 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_102 = x_100;
}
lean::cnstr_set(x_102, 0, x_98);
lean::cnstr_set(x_102, 1, x_2);
lean::cnstr_set(x_102, 2, x_101);
x_103 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_103, 0, x_102);
lean::cnstr_set(x_103, 1, x_5);
return x_103;
}
else
{
obj* x_105; 
lean::dec(x_2);
x_105 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_105, 0, x_4);
lean::cnstr_set(x_105, 1, x_5);
return x_105;
}
}
}
}
obj* l_reader__t_lift___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__5___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; 
lean::dec(x_1);
x_6 = lean::apply_3(x_0, x_2, x_3, x_4);
return x_6;
}
}
obj* l_reader__t_lift___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__5(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__5___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_str__core___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_9; 
lean::dec(x_3);
lean::dec(x_2);
lean::inc(x_0);
x_9 = l_string_is__empty(x_0);
if (x_9 == 0)
{
obj* x_10; obj* x_12; obj* x_14; 
x_10 = lean::string_length(x_0);
lean::inc(x_0);
x_12 = lean::string_mk_iterator(x_0);
lean::inc(x_4);
x_14 = l___private_init_lean_parser_parsec_1__str__aux___main(x_10, x_12, x_4);
if (lean::obj_tag(x_14) == 0)
{
obj* x_16; obj* x_17; obj* x_18; uint8 x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_0);
x_16 = lean::box(0);
x_17 = l_string_join___closed__1;
x_18 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_18, 0, x_4);
lean::cnstr_set(x_18, 1, x_17);
lean::cnstr_set(x_18, 2, x_1);
lean::cnstr_set(x_18, 3, x_16);
x_19 = 0;
x_20 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_20, 0, x_18);
lean::cnstr_set_scalar(x_20, sizeof(void*)*1, x_19);
x_21 = x_20;
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_5);
return x_22;
}
else
{
obj* x_25; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_4);
lean::dec(x_1);
x_25 = lean::cnstr_get(x_14, 0);
lean::inc(x_25);
lean::dec(x_14);
x_28 = lean::box(0);
x_29 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_29, 0, x_0);
lean::cnstr_set(x_29, 1, x_25);
lean::cnstr_set(x_29, 2, x_28);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_5);
return x_30;
}
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_1);
lean::dec(x_0);
x_33 = l_string_join___closed__1;
x_34 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_35 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_35, 0, x_33);
lean::cnstr_set(x_35, 1, x_4);
lean::cnstr_set(x_35, 2, x_34);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_5);
return x_36;
}
}
}
obj* l_reader__t_bind___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__7___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_8; obj* x_9; obj* x_11; obj* x_13; 
lean::inc(x_3);
lean::inc(x_2);
x_8 = lean::apply_4(x_0, x_2, x_3, x_4, x_5);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_24; obj* x_27; obj* x_28; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_9, 2);
lean::inc(x_18);
lean::dec(x_9);
x_21 = lean::apply_5(x_1, x_14, x_2, x_3, x_16, x_11);
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
lean::dec(x_21);
x_27 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_22);
if (lean::is_scalar(x_13)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_13;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_24);
return x_28;
}
else
{
obj* x_32; uint8 x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
x_32 = lean::cnstr_get(x_9, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_35 = x_9;
} else {
 lean::dec(x_9);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_32);
lean::cnstr_set_scalar(x_36, sizeof(void*)*1, x_34);
x_37 = x_36;
if (lean::is_scalar(x_13)) {
 x_38 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_38 = x_13;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_11);
return x_38;
}
}
}
obj* l_reader__t_bind___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__7(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__7___rarg), 6, 0);
return x_4;
}
}
obj* l_lean_parser_rec__t_recurse___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_5 = lean::apply_4(x_1, x_0, x_2, x_3, x_4);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 x_10 = x_5;
} else {
 lean::dec(x_5);
 x_10 = lean::box(0);
}
x_11 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_12 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_6);
if (lean::is_scalar(x_10)) {
 x_13 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_13 = x_10;
}
lean::cnstr_set(x_13, 0, x_12);
lean::cnstr_set(x_13, 1, x_8);
return x_13;
}
}
obj* l_list_mfoldl___main___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
x_10 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_11 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_11, 0, x_1);
lean::cnstr_set(x_11, 1, x_5);
lean::cnstr_set(x_11, 2, x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_6);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_23; obj* x_24; obj* x_26; 
x_13 = lean::cnstr_get(x_2, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 x_17 = x_2;
} else {
 lean::dec(x_2);
 x_17 = lean::box(0);
}
lean::inc(x_4);
lean::inc(x_3);
x_23 = lean::apply_4(x_13, x_3, x_4, x_5, x_6);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
if (lean::obj_tag(x_24) == 0)
{
x_18 = x_24;
x_19 = x_26;
goto lbl_20;
}
else
{
obj* x_29; uint8 x_31; obj* x_32; 
x_29 = lean::cnstr_get(x_24, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get_scalar<uint8>(x_24, sizeof(void*)*1);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_release(x_24, 0);
 x_32 = x_24;
} else {
 lean::dec(x_24);
 x_32 = lean::box(0);
}
if (lean::obj_tag(x_1) == 0)
{
if (x_31 == 0)
{
uint8 x_33; obj* x_34; obj* x_35; 
x_33 = 0;
if (lean::is_scalar(x_32)) {
 x_34 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_34 = x_32;
}
lean::cnstr_set(x_34, 0, x_29);
lean::cnstr_set_scalar(x_34, sizeof(void*)*1, x_33);
x_35 = x_34;
x_18 = x_35;
x_19 = x_26;
goto lbl_20;
}
else
{
obj* x_36; obj* x_37; 
if (lean::is_scalar(x_32)) {
 x_36 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_36 = x_32;
}
lean::cnstr_set(x_36, 0, x_29);
lean::cnstr_set_scalar(x_36, sizeof(void*)*1, x_31);
x_37 = x_36;
x_18 = x_37;
x_19 = x_26;
goto lbl_20;
}
}
else
{
obj* x_38; obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_47; obj* x_50; obj* x_52; obj* x_53; obj* x_54; 
x_38 = lean::cnstr_get(x_29, 3);
lean::inc(x_38);
x_40 = l_option_get___main___at_lean_parser_run___spec__2(x_38);
lean::inc(x_1);
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_40);
lean::cnstr_set(x_42, 1, x_1);
x_43 = lean::cnstr_get(x_29, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_29, 1);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_29, 2);
lean::inc(x_47);
lean::dec(x_29);
x_50 = l_list_reverse___rarg(x_42);
lean::inc(x_0);
x_52 = l_lean_parser_syntax_mk__node(x_0, x_50);
x_53 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_53, 0, x_52);
x_54 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_54, 0, x_43);
lean::cnstr_set(x_54, 1, x_45);
lean::cnstr_set(x_54, 2, x_47);
lean::cnstr_set(x_54, 3, x_53);
if (x_31 == 0)
{
uint8 x_55; obj* x_56; obj* x_57; 
x_55 = 0;
if (lean::is_scalar(x_32)) {
 x_56 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_56 = x_32;
}
lean::cnstr_set(x_56, 0, x_54);
lean::cnstr_set_scalar(x_56, sizeof(void*)*1, x_55);
x_57 = x_56;
x_18 = x_57;
x_19 = x_26;
goto lbl_20;
}
else
{
obj* x_58; obj* x_59; 
if (lean::is_scalar(x_32)) {
 x_58 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_58 = x_32;
}
lean::cnstr_set(x_58, 0, x_54);
lean::cnstr_set_scalar(x_58, sizeof(void*)*1, x_31);
x_59 = x_58;
x_18 = x_59;
x_19 = x_26;
goto lbl_20;
}
}
}
lbl_20:
{
if (lean::obj_tag(x_18) == 0)
{
obj* x_60; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_60 = lean::cnstr_get(x_18, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_18, 1);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_18, 2);
lean::inc(x_64);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 lean::cnstr_release(x_18, 1);
 lean::cnstr_release(x_18, 2);
 x_66 = x_18;
} else {
 lean::dec(x_18);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_67 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_67 = x_17;
}
lean::cnstr_set(x_67, 0, x_60);
lean::cnstr_set(x_67, 1, x_1);
x_68 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_66)) {
 x_69 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_69 = x_66;
}
lean::cnstr_set(x_69, 0, x_67);
lean::cnstr_set(x_69, 1, x_62);
lean::cnstr_set(x_69, 2, x_68);
x_70 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_64, x_69);
if (lean::obj_tag(x_70) == 0)
{
obj* x_71; obj* x_73; obj* x_75; obj* x_78; obj* x_79; obj* x_81; obj* x_83; obj* x_84; obj* x_85; 
x_71 = lean::cnstr_get(x_70, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_70, 1);
lean::inc(x_73);
x_75 = lean::cnstr_get(x_70, 2);
lean::inc(x_75);
lean::dec(x_70);
x_78 = l_list_mfoldl___main___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__10(x_0, x_71, x_15, x_3, x_4, x_73, x_19);
x_79 = lean::cnstr_get(x_78, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_78, 1);
lean::inc(x_81);
if (lean::is_exclusive(x_78)) {
 lean::cnstr_release(x_78, 0);
 lean::cnstr_release(x_78, 1);
 x_83 = x_78;
} else {
 lean::dec(x_78);
 x_83 = lean::box(0);
}
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_75, x_79);
if (lean::is_scalar(x_83)) {
 x_85 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_85 = x_83;
}
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_81);
return x_85;
}
else
{
obj* x_90; uint8 x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_96; 
lean::dec(x_15);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
x_90 = lean::cnstr_get(x_70, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get_scalar<uint8>(x_70, sizeof(void*)*1);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 x_93 = x_70;
} else {
 lean::dec(x_70);
 x_93 = lean::box(0);
}
if (lean::is_scalar(x_93)) {
 x_94 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_94 = x_93;
}
lean::cnstr_set(x_94, 0, x_90);
lean::cnstr_set_scalar(x_94, sizeof(void*)*1, x_92);
x_95 = x_94;
x_96 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set(x_96, 1, x_19);
return x_96;
}
}
else
{
obj* x_103; uint8 x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; 
lean::dec(x_15);
lean::dec(x_4);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_17);
x_103 = lean::cnstr_get(x_18, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get_scalar<uint8>(x_18, sizeof(void*)*1);
if (lean::is_exclusive(x_18)) {
 lean::cnstr_release(x_18, 0);
 x_106 = x_18;
} else {
 lean::dec(x_18);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_106)) {
 x_107 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_107 = x_106;
}
lean::cnstr_set(x_107, 0, x_103);
lean::cnstr_set_scalar(x_107, sizeof(void*)*1, x_105);
x_108 = x_107;
x_109 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_109, 0, x_108);
lean::cnstr_set(x_109, 1, x_19);
return x_109;
}
}
}
}
}
obj* l_lean_parser_combinators_node___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__9(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; 
x_6 = lean::box(0);
lean::inc(x_0);
x_8 = l_list_mfoldl___main___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__10(x_0, x_6, x_1, x_2, x_3, x_4, x_5);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_9, 2);
lean::inc(x_18);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 lean::cnstr_release(x_9, 2);
 x_20 = x_9;
} else {
 lean::dec(x_9);
 x_20 = lean::box(0);
}
x_21 = l_list_reverse___rarg(x_14);
x_22 = l_lean_parser_syntax_mk__node(x_0, x_21);
x_23 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_20)) {
 x_24 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_24 = x_20;
}
lean::cnstr_set(x_24, 0, x_22);
lean::cnstr_set(x_24, 1, x_16);
lean::cnstr_set(x_24, 2, x_23);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_24);
if (lean::is_scalar(x_13)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_13;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_11);
return x_26;
}
else
{
obj* x_28; uint8 x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_0);
x_28 = lean::cnstr_get(x_9, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_31 = x_9;
} else {
 lean::dec(x_9);
 x_31 = lean::box(0);
}
if (lean::is_scalar(x_31)) {
 x_32 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_32 = x_31;
}
lean::cnstr_set(x_32, 0, x_28);
lean::cnstr_set_scalar(x_32, sizeof(void*)*1, x_30);
x_33 = x_32;
if (lean::is_scalar(x_13)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_13;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_11);
return x_34;
}
}
}
obj* _init_l_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_0 = lean::box(0);
x_1 = l_lean_parser_list_cons_tokens___rarg(x_0, x_0);
x_2 = l_lean_parser_list_cons_tokens___rarg(x_0, x_1);
x_3 = l_lean_parser_tokens___rarg(x_2);
x_4 = l_lean_parser_tokens___rarg(x_3);
return x_4;
}
}
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint32 x_5; obj* x_6; 
x_5 = lean::unbox_uint32(x_0);
x_6 = l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(x_5, x_1, x_2, x_3, x_4);
return x_6;
}
}
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; uint32 x_7; obj* x_11; obj* x_12; obj* x_14; 
x_7 = 46;
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_11 = l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(x_7, x_0, x_1, x_2, x_3);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
if (lean::obj_tag(x_12) == 0)
{
obj* x_17; obj* x_19; obj* x_21; uint32 x_22; obj* x_26; obj* x_27; obj* x_29; 
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_12, 2);
lean::inc(x_19);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 lean::cnstr_release(x_12, 2);
 x_21 = x_12;
} else {
 lean::dec(x_12);
 x_21 = lean::box(0);
}
x_22 = l_lean_id__begin__escape;
lean::inc(x_17);
lean::inc(x_1);
lean::inc(x_0);
x_26 = l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(x_22, x_0, x_1, x_17, x_14);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
if (lean::obj_tag(x_27) == 0)
{
obj* x_36; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_21);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_27);
x_4 = x_36;
x_5 = x_29;
goto lbl_6;
}
else
{
obj* x_37; uint8 x_39; 
x_37 = lean::cnstr_get(x_27, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<uint8>(x_27, sizeof(void*)*1);
if (x_39 == 0)
{
uint8 x_41; 
lean::dec(x_27);
x_41 = lean::string_iterator_has_next(x_17);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_21);
x_43 = lean::box(0);
x_44 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_45 = l_mjoin___rarg___closed__1;
x_46 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(x_44, x_45, x_43, x_43, x_0, x_1, x_17, x_29);
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_52, x_47);
x_54 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_37, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_54);
x_4 = x_55;
x_5 = x_49;
goto lbl_6;
}
else
{
uint32 x_56; uint8 x_57; 
x_56 = lean::string_iterator_curr(x_17);
x_57 = l_lean_is__id__first(x_56);
if (x_57 == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_69; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_21);
x_59 = l_char_quote__core(x_56);
x_60 = l_char_has__repr___closed__1;
x_61 = lean::string_append(x_60, x_59);
lean::dec(x_59);
x_63 = lean::string_append(x_61, x_60);
x_64 = lean::box(0);
x_65 = l_mjoin___rarg___closed__1;
x_66 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(x_63, x_65, x_64, x_64, x_0, x_1, x_17, x_29);
x_67 = lean::cnstr_get(x_66, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_66, 1);
lean::inc(x_69);
lean::dec(x_66);
x_72 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_73 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_72, x_67);
x_74 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_37, x_73);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_74);
x_4 = x_75;
x_5 = x_69;
goto lbl_6;
}
else
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_37);
x_79 = lean::string_iterator_next(x_17);
x_80 = lean::box(0);
x_81 = lean::box_uint32(x_56);
if (lean::is_scalar(x_21)) {
 x_82 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_82 = x_21;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_79);
lean::cnstr_set(x_82, 2, x_80);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_82);
x_4 = x_83;
x_5 = x_29;
goto lbl_6;
}
}
}
else
{
obj* x_89; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_37);
lean::dec(x_21);
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_27);
x_4 = x_89;
x_5 = x_29;
goto lbl_6;
}
}
}
else
{
obj* x_92; uint8 x_94; obj* x_95; obj* x_96; obj* x_97; 
lean::dec(x_1);
lean::dec(x_0);
x_92 = lean::cnstr_get(x_12, 0);
lean::inc(x_92);
x_94 = lean::cnstr_get_scalar<uint8>(x_12, sizeof(void*)*1);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 x_95 = x_12;
} else {
 lean::dec(x_12);
 x_95 = lean::box(0);
}
if (lean::is_scalar(x_95)) {
 x_96 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_96 = x_95;
}
lean::cnstr_set(x_96, 0, x_92);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_94);
x_97 = x_96;
x_4 = x_97;
x_5 = x_14;
goto lbl_6;
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_98; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
x_98 = lean::cnstr_get(x_4, 0);
lean::inc(x_98);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_100 = x_4;
} else {
 lean::dec(x_4);
 x_100 = lean::box(0);
}
x_101 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_100)) {
 x_102 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_102 = x_100;
}
lean::cnstr_set(x_102, 0, x_98);
lean::cnstr_set(x_102, 1, x_2);
lean::cnstr_set(x_102, 2, x_101);
x_103 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_103, 0, x_102);
lean::cnstr_set(x_103, 1, x_5);
return x_103;
}
else
{
obj* x_105; 
lean::dec(x_2);
x_105 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_105, 0, x_4);
lean::cnstr_set(x_105, 1, x_5);
return x_105;
}
}
}
}
obj* l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
x_4 = l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___spec__1(x_0, x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_10 = l_lean_parser_parsec__t_try__mk__res___rarg(x_5);
if (lean::is_scalar(x_9)) {
 x_11 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_11 = x_9;
}
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
}
obj* l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
x_6 = l_lean_name_to__string___closed__1;
x_7 = l_lean_parser_monad__parsec_str__core___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__6(x_6, x_0, x_2, x_3, x_4, x_5);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_13; obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_13 = lean::cnstr_get(x_8, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_8, 2);
lean::inc(x_15);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 lean::cnstr_release(x_8, 2);
 x_17 = x_8;
} else {
 lean::dec(x_8);
 x_17 = lean::box(0);
}
lean::inc(x_13);
x_19 = l_lean_parser_mk__raw__res(x_1, x_13);
x_20 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_17)) {
 x_21 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_21 = x_17;
}
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_13);
lean::cnstr_set(x_21, 2, x_20);
x_22 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_21);
if (lean::is_scalar(x_12)) {
 x_23 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_23 = x_12;
}
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_10);
return x_23;
}
else
{
obj* x_25; uint8 x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_1);
x_25 = lean::cnstr_get(x_8, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 x_28 = x_8;
} else {
 lean::dec(x_8);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_25);
lean::cnstr_set_scalar(x_29, sizeof(void*)*1, x_27);
x_30 = x_29;
if (lean::is_scalar(x_12)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_12;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_10);
return x_31;
}
}
}
obj* _init_l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_0 = l_lean_parser_basic__parser__m_monad;
x_1 = l_reader__t_monad___rarg(x_0);
x_2 = l_lean_parser_basic__parser__m_monad__except;
x_3 = l_reader__t_monad__except___rarg(x_2);
x_4 = l_lean_parser_basic__parser__m_lean_parser_monad__parsec;
x_5 = l_lean_parser_rec__t_lean_parser_monad__parsec___rarg(x_0, lean::box(0), x_4);
x_6 = l_lean_parser_basic__parser__m_alternative;
x_7 = l_reader__t_alternative___rarg(x_0, x_6);
x_8 = lean::mk_string(".");
x_9 = l_string_quote(x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_10, 0, x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 1);
lean::closure_set(x_12, 0, x_11);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__5___rarg), 5, 1);
lean::closure_set(x_13, 0, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_14, 0, x_10);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__7___rarg), 6, 2);
lean::closure_set(x_15, 0, x_13);
lean::closure_set(x_15, 1, x_14);
x_16 = lean::box(0);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__8), 5, 1);
lean::closure_set(x_17, 0, x_16);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_16);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_15);
lean::cnstr_set(x_19, 1, x_18);
x_20 = l_lean_parser_detail__ident__suffix;
lean::inc(x_19);
x_22 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_node___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__9), 6, 2);
lean::closure_set(x_22, 0, x_20);
lean::closure_set(x_22, 1, x_19);
x_23 = l_lean_parser_detail__ident__suffix_has__view;
lean::inc(x_7);
x_25 = l_lean_parser_combinators_node_view___rarg(x_1, x_3, x_5, x_7, x_20, x_19, x_23);
x_26 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___lambda__1), 4, 0);
x_27 = l_lean_parser_combinators_seq__right_view___rarg(x_7, lean::box(0), lean::box(0), x_26, x_22, x_25);
return x_27;
}
}
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; uint32 x_7; obj* x_11; obj* x_12; obj* x_14; 
x_7 = 46;
lean::inc(x_2);
lean::inc(x_1);
lean::inc(x_0);
x_11 = l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(x_7, x_0, x_1, x_2, x_3);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
if (lean::obj_tag(x_12) == 0)
{
obj* x_17; obj* x_19; obj* x_21; uint32 x_22; obj* x_26; obj* x_27; obj* x_29; 
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_12, 2);
lean::inc(x_19);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 lean::cnstr_release(x_12, 2);
 x_21 = x_12;
} else {
 lean::dec(x_12);
 x_21 = lean::box(0);
}
x_22 = l_lean_id__begin__escape;
lean::inc(x_17);
lean::inc(x_1);
lean::inc(x_0);
x_26 = l_lean_parser_monad__parsec_ch___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__1(x_22, x_0, x_1, x_17, x_14);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
lean::dec(x_26);
if (lean::obj_tag(x_27) == 0)
{
obj* x_36; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_21);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_27);
x_4 = x_36;
x_5 = x_29;
goto lbl_6;
}
else
{
obj* x_37; uint8 x_39; 
x_37 = lean::cnstr_get(x_27, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get_scalar<uint8>(x_27, sizeof(void*)*1);
if (x_39 == 0)
{
uint8 x_41; 
lean::dec(x_27);
x_41 = lean::string_iterator_has_next(x_17);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_49; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_21);
x_43 = lean::box(0);
x_44 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_45 = l_mjoin___rarg___closed__1;
x_46 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(x_44, x_45, x_43, x_43, x_0, x_1, x_17, x_29);
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
x_52 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_53 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_52, x_47);
x_54 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_37, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_54);
x_4 = x_55;
x_5 = x_49;
goto lbl_6;
}
else
{
uint32 x_56; uint8 x_57; 
x_56 = lean::string_iterator_curr(x_17);
x_57 = l_lean_is__id__first(x_56);
if (x_57 == 0)
{
obj* x_59; obj* x_60; obj* x_61; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_69; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_21);
x_59 = l_char_quote__core(x_56);
x_60 = l_char_has__repr___closed__1;
x_61 = lean::string_append(x_60, x_59);
lean::dec(x_59);
x_63 = lean::string_append(x_61, x_60);
x_64 = lean::box(0);
x_65 = l_mjoin___rarg___closed__1;
x_66 = l_lean_parser_monad__parsec_error___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__3___rarg(x_63, x_65, x_64, x_64, x_0, x_1, x_17, x_29);
x_67 = lean::cnstr_get(x_66, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_66, 1);
lean::inc(x_69);
lean::dec(x_66);
x_72 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_73 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_72, x_67);
x_74 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_37, x_73);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_74);
x_4 = x_75;
x_5 = x_69;
goto lbl_6;
}
else
{
obj* x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_37);
x_79 = lean::string_iterator_next(x_17);
x_80 = lean::box(0);
x_81 = lean::box_uint32(x_56);
if (lean::is_scalar(x_21)) {
 x_82 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_82 = x_21;
}
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_79);
lean::cnstr_set(x_82, 2, x_80);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_82);
x_4 = x_83;
x_5 = x_29;
goto lbl_6;
}
}
}
else
{
obj* x_89; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_37);
lean::dec(x_21);
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_27);
x_4 = x_89;
x_5 = x_29;
goto lbl_6;
}
}
}
else
{
obj* x_92; uint8 x_94; obj* x_95; obj* x_96; obj* x_97; 
lean::dec(x_1);
lean::dec(x_0);
x_92 = lean::cnstr_get(x_12, 0);
lean::inc(x_92);
x_94 = lean::cnstr_get_scalar<uint8>(x_12, sizeof(void*)*1);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 x_95 = x_12;
} else {
 lean::dec(x_12);
 x_95 = lean::box(0);
}
if (lean::is_scalar(x_95)) {
 x_96 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_96 = x_95;
}
lean::cnstr_set(x_96, 0, x_92);
lean::cnstr_set_scalar(x_96, sizeof(void*)*1, x_94);
x_97 = x_96;
x_4 = x_97;
x_5 = x_14;
goto lbl_6;
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_98; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
x_98 = lean::cnstr_get(x_4, 0);
lean::inc(x_98);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_100 = x_4;
} else {
 lean::dec(x_4);
 x_100 = lean::box(0);
}
x_101 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_100)) {
 x_102 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_102 = x_100;
}
lean::cnstr_set(x_102, 0, x_98);
lean::cnstr_set(x_102, 1, x_2);
lean::cnstr_set(x_102, 2, x_101);
x_103 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_103, 0, x_102);
lean::cnstr_set(x_103, 1, x_5);
return x_103;
}
else
{
obj* x_105; 
lean::dec(x_2);
x_105 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_105, 0, x_4);
lean::cnstr_set(x_105, 1, x_5);
return x_105;
}
}
}
}
obj* _init_l_lean_parser_detail__ident__suffix_parser___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_0 = lean::mk_string(".");
x_1 = l_string_quote(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 1);
lean::closure_set(x_4, 0, x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__5___rarg), 5, 1);
lean::closure_set(x_5, 0, x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view___lambda__2), 6, 1);
lean::closure_set(x_6, 0, x_2);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__7___rarg), 6, 2);
lean::closure_set(x_7, 0, x_5);
lean::closure_set(x_7, 1, x_6);
x_8 = lean::box(0);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_recurse___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__8), 5, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_8);
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_7);
lean::cnstr_set(x_11, 1, x_10);
return x_11;
}
}
obj* l_lean_parser_detail__ident__suffix_parser(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; obj* x_12; 
lean::inc(x_1);
lean::inc(x_0);
x_6 = l_lean_parser_parsec__t_lookahead___at_lean_parser_detail__ident__suffix_parser___spec__1(x_0, x_1, x_2, x_3);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
x_12 = l_lean_parser_parsec__t_try__mk__res___rarg(x_7);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_26; obj* x_27; 
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_12, 2);
lean::inc(x_15);
lean::dec(x_12);
x_18 = l_lean_parser_detail__ident__suffix;
x_19 = l_lean_parser_detail__ident__suffix_parser___closed__1;
x_20 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__9(x_18, x_19, x_0, x_1, x_13, x_9);
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
lean::dec(x_20);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_21);
if (lean::is_scalar(x_11)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_11;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_23);
return x_27;
}
else
{
obj* x_30; uint8 x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_1);
lean::dec(x_0);
x_30 = lean::cnstr_get(x_12, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get_scalar<uint8>(x_12, sizeof(void*)*1);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 x_33 = x_12;
} else {
 lean::dec(x_12);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_30);
lean::cnstr_set_scalar(x_34, sizeof(void*)*1, x_32);
x_35 = x_34;
if (lean::is_scalar(x_11)) {
 x_36 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_36 = x_11;
}
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_9);
return x_36;
}
}
}
obj* _init_l_lean_parser_detail__ident() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("detail_ident");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_4; obj* x_5; obj* x_6; 
x_0 = l_lean_parser_detail__ident__suffix_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
x_4 = lean::box(3);
x_5 = lean::apply_1(x_1, x_4);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(0);
x_4 = lean::box(3);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; obj* x_6; obj* x_9; 
x_5 = l_lean_parser_detail__ident__part_has__view;
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
lean::dec(x_5);
x_9 = lean::apply_1(x_6, x_1);
if (lean::obj_tag(x_0) == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::box(3);
x_11 = l_lean_parser_syntax_as__node___main(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_9);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
else
{
obj* x_14; obj* x_16; obj* x_17; 
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 x_16 = x_11;
} else {
 lean::dec(x_11);
 x_16 = lean::box(0);
}
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
if (lean::obj_tag(x_17) == 0)
{
obj* x_21; obj* x_22; 
lean::dec(x_16);
x_21 = lean::box(0);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_9);
lean::cnstr_set(x_22, 1, x_21);
return x_22;
}
else
{
obj* x_23; obj* x_25; 
x_23 = lean::cnstr_get(x_17, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_17, 1);
lean::inc(x_25);
lean::dec(x_17);
if (lean::obj_tag(x_25) == 0)
{
obj* x_28; obj* x_29; obj* x_32; obj* x_33; obj* x_34; 
x_28 = l_lean_parser_detail__ident__suffix_has__view;
x_29 = lean::cnstr_get(x_28, 0);
lean::inc(x_29);
lean::dec(x_28);
x_32 = lean::apply_1(x_29, x_23);
if (lean::is_scalar(x_16)) {
 x_33 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_33 = x_16;
}
lean::cnstr_set(x_33, 0, x_32);
x_34 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_34, 0, x_9);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
else
{
obj* x_38; obj* x_39; 
lean::dec(x_23);
lean::dec(x_25);
lean::dec(x_16);
x_38 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_9);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
}
}
else
{
obj* x_40; obj* x_43; 
x_40 = lean::cnstr_get(x_0, 0);
lean::inc(x_40);
lean::dec(x_0);
x_43 = l_lean_parser_syntax_as__node___main(x_40);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; 
x_44 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_45 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_45, 0, x_9);
lean::cnstr_set(x_45, 1, x_44);
return x_45;
}
else
{
obj* x_46; obj* x_48; obj* x_49; 
x_46 = lean::cnstr_get(x_43, 0);
lean::inc(x_46);
if (lean::is_exclusive(x_43)) {
 lean::cnstr_release(x_43, 0);
 x_48 = x_43;
} else {
 lean::dec(x_43);
 x_48 = lean::box(0);
}
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
lean::dec(x_46);
if (lean::obj_tag(x_49) == 0)
{
obj* x_53; obj* x_54; 
lean::dec(x_48);
x_53 = lean::box(0);
x_54 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_54, 0, x_9);
lean::cnstr_set(x_54, 1, x_53);
return x_54;
}
else
{
obj* x_55; obj* x_57; 
x_55 = lean::cnstr_get(x_49, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_49, 1);
lean::inc(x_57);
lean::dec(x_49);
if (lean::obj_tag(x_57) == 0)
{
obj* x_60; obj* x_61; obj* x_64; obj* x_65; obj* x_66; 
x_60 = l_lean_parser_detail__ident__suffix_has__view;
x_61 = lean::cnstr_get(x_60, 0);
lean::inc(x_61);
lean::dec(x_60);
x_64 = lean::apply_1(x_61, x_55);
if (lean::is_scalar(x_48)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_48;
}
lean::cnstr_set(x_65, 0, x_64);
x_66 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_66, 0, x_9);
lean::cnstr_set(x_66, 1, x_65);
return x_66;
}
else
{
obj* x_70; obj* x_71; 
lean::dec(x_48);
lean::dec(x_57);
lean::dec(x_55);
x_70 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_9);
lean::cnstr_set(x_71, 1, x_70);
return x_71;
}
}
}
}
}
}
}
obj* l_lean_parser_detail__ident_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__2;
return x_5;
}
else
{
obj* x_6; obj* x_9; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
if (lean::obj_tag(x_9) == 0)
{
obj* x_12; 
x_12 = lean::box(3);
x_1 = x_9;
x_2 = x_12;
goto lbl_3;
}
else
{
obj* x_13; obj* x_15; 
x_13 = lean::cnstr_get(x_9, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_9, 1);
lean::inc(x_15);
lean::dec(x_9);
x_1 = x_15;
x_2 = x_13;
goto lbl_3;
}
}
lbl_3:
{
obj* x_18; obj* x_19; obj* x_22; 
x_18 = l_lean_parser_detail__ident__part_has__view;
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
lean::dec(x_18);
x_22 = lean::apply_1(x_19, x_2);
if (lean::obj_tag(x_1) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::box(3);
x_24 = l_lean_parser_syntax_as__node___main(x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_26; 
x_25 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_26 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
else
{
obj* x_27; obj* x_29; obj* x_30; 
x_27 = lean::cnstr_get(x_24, 0);
lean::inc(x_27);
if (lean::is_exclusive(x_24)) {
 lean::cnstr_release(x_24, 0);
 x_29 = x_24;
} else {
 lean::dec(x_24);
 x_29 = lean::box(0);
}
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
if (lean::obj_tag(x_30) == 0)
{
obj* x_34; obj* x_35; 
lean::dec(x_29);
x_34 = lean::box(0);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_22);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
else
{
obj* x_36; obj* x_38; 
x_36 = lean::cnstr_get(x_30, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_30, 1);
lean::inc(x_38);
lean::dec(x_30);
if (lean::obj_tag(x_38) == 0)
{
obj* x_41; obj* x_42; obj* x_45; obj* x_46; obj* x_47; 
x_41 = l_lean_parser_detail__ident__suffix_has__view;
x_42 = lean::cnstr_get(x_41, 0);
lean::inc(x_42);
lean::dec(x_41);
x_45 = lean::apply_1(x_42, x_36);
if (lean::is_scalar(x_29)) {
 x_46 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_46 = x_29;
}
lean::cnstr_set(x_46, 0, x_45);
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_22);
lean::cnstr_set(x_47, 1, x_46);
return x_47;
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_29);
lean::dec(x_36);
lean::dec(x_38);
x_51 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_52 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_52, 0, x_22);
lean::cnstr_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
obj* x_53; obj* x_56; 
x_53 = lean::cnstr_get(x_1, 0);
lean::inc(x_53);
lean::dec(x_1);
x_56 = l_lean_parser_syntax_as__node___main(x_53);
if (lean::obj_tag(x_56) == 0)
{
obj* x_57; obj* x_58; 
x_57 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_58 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_58, 0, x_22);
lean::cnstr_set(x_58, 1, x_57);
return x_58;
}
else
{
obj* x_59; obj* x_61; obj* x_62; 
x_59 = lean::cnstr_get(x_56, 0);
lean::inc(x_59);
if (lean::is_exclusive(x_56)) {
 lean::cnstr_release(x_56, 0);
 x_61 = x_56;
} else {
 lean::dec(x_56);
 x_61 = lean::box(0);
}
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
lean::dec(x_59);
if (lean::obj_tag(x_62) == 0)
{
obj* x_66; obj* x_67; 
lean::dec(x_61);
x_66 = lean::box(0);
x_67 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_67, 0, x_22);
lean::cnstr_set(x_67, 1, x_66);
return x_67;
}
else
{
obj* x_68; obj* x_70; 
x_68 = lean::cnstr_get(x_62, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get(x_62, 1);
lean::inc(x_70);
lean::dec(x_62);
if (lean::obj_tag(x_70) == 0)
{
obj* x_73; obj* x_74; obj* x_77; obj* x_78; obj* x_79; 
x_73 = l_lean_parser_detail__ident__suffix_has__view;
x_74 = lean::cnstr_get(x_73, 0);
lean::inc(x_74);
lean::dec(x_73);
x_77 = lean::apply_1(x_74, x_68);
if (lean::is_scalar(x_61)) {
 x_78 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_78 = x_61;
}
lean::cnstr_set(x_78, 0, x_77);
x_79 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_79, 0, x_22);
lean::cnstr_set(x_79, 1, x_78);
return x_79;
}
else
{
obj* x_83; obj* x_84; 
lean::dec(x_70);
lean::dec(x_68);
lean::dec(x_61);
x_83 = l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1;
x_84 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_84, 0, x_22);
lean::cnstr_set(x_84, 1, x_83);
return x_84;
}
}
}
}
}
}
}
obj* _init_l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = l_lean_parser_no__kind;
x_2 = l_lean_parser_syntax_mk__node(x_1, x_0);
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_0);
return x_3;
}
}
obj* l_lean_parser_detail__ident_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_6; obj* x_7; obj* x_10; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
x_3 = lean::cnstr_get(x_0, 1);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_lean_parser_detail__ident__part_has__view;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::apply_1(x_7, x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_11 = l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1;
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_11);
x_13 = l_lean_parser_detail__ident;
x_14 = l_lean_parser_syntax_mk__node(x_13, x_12);
return x_14;
}
else
{
obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_15 = lean::cnstr_get(x_3, 0);
lean::inc(x_15);
lean::dec(x_3);
x_18 = lean::box(0);
x_19 = l_lean_parser_detail__ident__suffix_has__view;
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_23 = lean::apply_1(x_20, x_15);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_18);
x_25 = l_lean_parser_no__kind;
x_26 = l_lean_parser_syntax_mk__node(x_25, x_24);
x_27 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_18);
x_28 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_28, 0, x_10);
lean::cnstr_set(x_28, 1, x_27);
x_29 = l_lean_parser_detail__ident;
x_30 = l_lean_parser_syntax_mk__node(x_29, x_28);
return x_30;
}
}
}
obj* _init_l_lean_parser_detail__ident_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_detail__ident_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_detail__ident_has__view_x_27;
return x_0;
}
}
obj* l_reader__t_lift___at_lean_parser_detail__ident_x_27___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; 
lean::dec(x_1);
x_6 = lean::apply_3(x_0, x_2, x_3, x_4);
return x_6;
}
}
obj* l_reader__t_lift___at_lean_parser_detail__ident_x_27___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_detail__ident_x_27___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_combinators_optional___at_lean_parser_detail__ident_x_27___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_16; 
x_8 = lean::box(0);
lean::inc(x_3);
x_13 = lean::apply_4(x_0, x_1, x_2, x_3, x_4);
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::dec(x_13);
if (lean::obj_tag(x_14) == 0)
{
if (lean::obj_tag(x_14) == 0)
{
obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_19 = lean::cnstr_get(x_14, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_14, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_14, 2);
lean::inc(x_23);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 lean::cnstr_release(x_14, 2);
 x_25 = x_14;
} else {
 lean::dec(x_14);
 x_25 = lean::box(0);
}
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_19);
x_27 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_25)) {
 x_28 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_28 = x_25;
}
lean::cnstr_set(x_28, 0, x_26);
lean::cnstr_set(x_28, 1, x_21);
lean::cnstr_set(x_28, 2, x_27);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_28);
x_9 = x_29;
x_10 = x_16;
goto lbl_11;
}
else
{
obj* x_30; uint8 x_32; obj* x_33; obj* x_34; obj* x_35; 
x_30 = lean::cnstr_get(x_14, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 0);
 x_33 = x_14;
} else {
 lean::dec(x_14);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_30);
lean::cnstr_set_scalar(x_34, sizeof(void*)*1, x_32);
x_35 = x_34;
x_9 = x_35;
x_10 = x_16;
goto lbl_11;
}
}
else
{
obj* x_36; uint8 x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_44; obj* x_46; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_36 = lean::cnstr_get(x_14, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 0);
 x_39 = x_14;
} else {
 lean::dec(x_14);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_36, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_36, 1);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_36, 2);
lean::inc(x_44);
x_46 = lean::cnstr_get(x_36, 3);
lean::inc(x_46);
lean::dec(x_36);
x_49 = l_option_get___main___at_lean_parser_run___spec__2(x_46);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_8);
x_51 = l_lean_parser_no__kind;
x_52 = l_lean_parser_syntax_mk__node(x_51, x_50);
x_53 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_53, 0, x_52);
x_54 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_54, 0, x_40);
lean::cnstr_set(x_54, 1, x_42);
lean::cnstr_set(x_54, 2, x_44);
lean::cnstr_set(x_54, 3, x_53);
if (x_38 == 0)
{
uint8 x_55; obj* x_56; obj* x_57; 
x_55 = 0;
if (lean::is_scalar(x_39)) {
 x_56 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_56 = x_39;
}
lean::cnstr_set(x_56, 0, x_54);
lean::cnstr_set_scalar(x_56, sizeof(void*)*1, x_55);
x_57 = x_56;
x_9 = x_57;
x_10 = x_16;
goto lbl_11;
}
else
{
obj* x_58; obj* x_59; 
if (lean::is_scalar(x_39)) {
 x_58 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_58 = x_39;
}
lean::cnstr_set(x_58, 0, x_54);
lean::cnstr_set_scalar(x_58, sizeof(void*)*1, x_38);
x_59 = x_58;
x_9 = x_59;
x_10 = x_16;
goto lbl_11;
}
}
lbl_7:
{
if (lean::obj_tag(x_5) == 0)
{
obj* x_60; obj* x_62; obj* x_64; obj* x_66; 
x_60 = lean::cnstr_get(x_5, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_5, 1);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_5, 2);
lean::inc(x_64);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_66 = x_5;
} else {
 lean::dec(x_5);
 x_66 = lean::box(0);
}
if (lean::obj_tag(x_60) == 0)
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
x_67 = l_lean_parser_combinators_many___rarg___closed__1;
x_68 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_66)) {
 x_69 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_69 = x_66;
}
lean::cnstr_set(x_69, 0, x_67);
lean::cnstr_set(x_69, 1, x_62);
lean::cnstr_set(x_69, 2, x_68);
x_70 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_64, x_69);
x_71 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_6);
return x_71;
}
else
{
obj* x_72; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_72 = lean::cnstr_get(x_60, 0);
lean::inc(x_72);
lean::dec(x_60);
x_75 = lean::box(0);
x_76 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_76, 0, x_72);
lean::cnstr_set(x_76, 1, x_75);
x_77 = l_lean_parser_no__kind;
x_78 = l_lean_parser_syntax_mk__node(x_77, x_76);
x_79 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_66)) {
 x_80 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_80 = x_66;
}
lean::cnstr_set(x_80, 0, x_78);
lean::cnstr_set(x_80, 1, x_62);
lean::cnstr_set(x_80, 2, x_79);
x_81 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_64, x_80);
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_6);
return x_82;
}
}
else
{
obj* x_83; uint8 x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
x_83 = lean::cnstr_get(x_5, 0);
lean::inc(x_83);
x_85 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_86 = x_5;
} else {
 lean::dec(x_5);
 x_86 = lean::box(0);
}
if (lean::is_scalar(x_86)) {
 x_87 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_87 = x_86;
}
lean::cnstr_set(x_87, 0, x_83);
lean::cnstr_set_scalar(x_87, sizeof(void*)*1, x_85);
x_88 = x_87;
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_6);
return x_89;
}
}
lbl_11:
{
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_3);
x_5 = x_9;
x_6 = x_10;
goto lbl_7;
}
else
{
obj* x_91; uint8 x_93; 
x_91 = lean::cnstr_get(x_9, 0);
lean::inc(x_91);
x_93 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (x_93 == 0)
{
obj* x_95; obj* x_98; obj* x_99; obj* x_100; obj* x_101; 
lean::dec(x_9);
x_95 = lean::cnstr_get(x_91, 2);
lean::inc(x_95);
lean::dec(x_91);
x_98 = l_mjoin___rarg___closed__1;
x_99 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_99, 0, x_95);
lean::closure_set(x_99, 1, x_98);
x_100 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_100, 0, x_99);
x_101 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_101, 0, x_8);
lean::cnstr_set(x_101, 1, x_3);
lean::cnstr_set(x_101, 2, x_100);
x_5 = x_101;
x_6 = x_10;
goto lbl_7;
}
else
{
lean::dec(x_3);
lean::dec(x_91);
x_5 = x_9;
x_6 = x_10;
goto lbl_7;
}
}
}
}
}
obj* _init_l_lean_parser_detail__ident_x_27___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__part_parser), 3, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_detail__ident_x_27___spec__1___rarg), 5, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident__suffix_parser), 4, 0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_optional___at_lean_parser_detail__ident_x_27___spec__2), 5, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
obj* l_lean_parser_detail__ident_x_27(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = l_lean_parser_detail__ident;
x_5 = l_lean_parser_detail__ident_x_27___closed__1;
x_6 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__9(x_4, x_5, x_0, x_1, x_2, x_3);
return x_6;
}
}
obj* l___private_init_lean_parser_rec_1__run__aux___at_lean_parser_detail__ident_parser___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
x_7 = l___private_init_lean_parser_rec_1__run__aux___main___rarg(x_0, x_1, x_2, x_3);
x_8 = lean::apply_3(x_7, x_4, x_5, x_6);
return x_8;
}
}
obj* l_lean_parser_rec__t_run___at_lean_parser_detail__ident_parser___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; obj* x_8; 
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_rec_1__run__aux___at_lean_parser_detail__ident_parser___spec__3), 7, 3);
lean::closure_set(x_7, 0, x_1);
lean::closure_set(x_7, 1, x_2);
lean::closure_set(x_7, 2, x_3);
x_8 = lean::apply_4(x_0, x_7, x_4, x_5, x_6);
return x_8;
}
}
obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_5 = lean::box(0);
x_6 = l_lean_parser_rec__t_run__parsec___rarg___lambda__1___closed__1;
x_7 = l_mjoin___rarg___closed__1;
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_6, x_7, x_5, x_5, x_1, x_2, x_3);
return x_8;
}
}
obj* _init_l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___lambda__1), 4, 0);
return x_0;
}
}
obj* l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_5 = lean::string_iterator_remaining(x_3);
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_add(x_5, x_6);
lean::dec(x_5);
x_9 = l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1;
x_10 = l_lean_parser_rec__t_run___at_lean_parser_detail__ident_parser___spec__2(x_0, x_9, x_1, x_7, x_2, x_3, x_4);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 x_15 = x_10;
} else {
 lean::dec(x_10);
 x_15 = lean::box(0);
}
x_16 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_17 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_11);
if (lean::is_scalar(x_15)) {
 x_18 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_18 = x_15;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_13);
return x_18;
}
}
obj* l_lean_parser_detail__ident_parser___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_0);
x_6 = l_lean_parser_detail__ident;
x_7 = l_lean_parser_detail__ident_x_27___closed__1;
x_8 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens___spec__9(x_6, x_7, x_1, x_2, x_3, x_4);
return x_8;
}
}
obj* _init_l_lean_parser_detail__ident_parser___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident_x_27), 4, 0);
return x_0;
}
}
obj* _init_l_lean_parser_detail__ident_parser___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_detail__ident_parser___lambda__1), 5, 0);
return x_0;
}
}
obj* l_lean_parser_detail__ident_parser(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = l_lean_parser_detail__ident_parser___closed__1;
x_4 = l_lean_parser_detail__ident_parser___closed__2;
x_5 = l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1(x_3, x_4, x_0, x_1, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_curr___at___private_init_lean_parser_token_4__ident_x_27___spec__2___rarg(obj* x_0, obj* x_1) {
_start:
{
uint32 x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = lean::string_iterator_curr(x_0);
x_3 = l_lean_parser_finish__comment__block___closed__2;
x_4 = lean::box_uint32(x_2);
x_5 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_0);
lean::cnstr_set(x_5, 2, x_3);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_1);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_curr___at___private_init_lean_parser_token_4__ident_x_27___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_curr___at___private_init_lean_parser_token_4__ident_x_27___spec__2___rarg), 2, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__4(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__5(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__6(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__7(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__rest(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_5 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_7 = l_string_join___closed__1;
x_8 = lean::string_push(x_7, x_5);
x_9 = lean::string_iterator_remaining(x_2);
x_10 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__9(x_9, x_8, x_2);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
obj* l_lean_parser_id__part__default___at___private_init_lean_parser_token_4__ident_x_27___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_20; uint32 x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_31; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 2);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::unbox_uint32(x_16);
x_24 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__4(x_23, x_0, x_18, x_11);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_25);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
return x_31;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_15, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_36 = x_15;
} else {
 lean::dec(x_15);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_13)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_13;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
return x_39;
}
}
else
{
uint32 x_40; uint8 x_41; 
x_40 = lean::string_iterator_curr(x_1);
x_41 = l_lean_is__id__first(x_40);
if (x_41 == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_55; obj* x_56; obj* x_57; 
x_42 = l_char_quote__core(x_40);
x_43 = l_char_has__repr___closed__1;
x_44 = lean::string_append(x_43, x_42);
lean::dec(x_42);
x_46 = lean::string_append(x_44, x_43);
x_47 = lean::box(0);
x_48 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_50 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_46, x_48, x_47, x_47, x_0, x_1, x_2);
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_50, 1);
lean::inc(x_53);
if (lean::is_exclusive(x_50)) {
 lean::cnstr_release(x_50, 0);
 lean::cnstr_release(x_50, 1);
 x_55 = x_50;
} else {
 lean::dec(x_50);
 x_55 = lean::box(0);
}
x_56 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_51);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; obj* x_62; uint32 x_65; obj* x_66; obj* x_67; obj* x_69; obj* x_72; obj* x_73; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 2);
lean::inc(x_62);
lean::dec(x_57);
x_65 = lean::unbox_uint32(x_58);
x_66 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__6(x_65, x_0, x_60, x_53);
x_67 = lean::cnstr_get(x_66, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_66, 1);
lean::inc(x_69);
lean::dec(x_66);
x_72 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_67);
if (lean::is_scalar(x_55)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_55;
}
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_69);
return x_73;
}
else
{
obj* x_75; uint8 x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_0);
x_75 = lean::cnstr_get(x_57, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<uint8>(x_57, sizeof(void*)*1);
if (lean::is_exclusive(x_57)) {
 lean::cnstr_release(x_57, 0);
 x_78 = x_57;
} else {
 lean::dec(x_57);
 x_78 = lean::box(0);
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_75);
lean::cnstr_set_scalar(x_79, sizeof(void*)*1, x_77);
x_80 = x_79;
if (lean::is_scalar(x_55)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_55;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_53);
return x_81;
}
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_87; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::inc(x_1);
x_83 = lean::string_iterator_next(x_1);
x_84 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__8(x_1, x_0, x_83, x_2);
x_85 = lean::cnstr_get(x_84, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
if (lean::is_exclusive(x_84)) {
 lean::cnstr_release(x_84, 0);
 lean::cnstr_release(x_84, 1);
 x_89 = x_84;
} else {
 lean::dec(x_84);
 x_89 = lean::box(0);
}
x_90 = lean::box(0);
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_90, x_85);
if (lean::is_scalar(x_89)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_89;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_87);
return x_92;
}
}
}
}
obj* l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
x_4 = lean::string_iterator_has_next(x_2);
if (x_4 == 0)
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_5 = lean::box(0);
x_6 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_7 = l_mjoin___rarg___closed__1;
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_6, x_7, x_5, x_5, x_1, x_2, x_3);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::is_scalar(x_13)) {
 x_16 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_16 = x_13;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_11);
return x_16;
}
else
{
uint32 x_17; uint8 x_18; 
x_17 = lean::string_iterator_curr(x_2);
x_18 = x_17 == x_0;
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_29; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_19 = l_char_quote__core(x_17);
x_20 = l_char_has__repr___closed__1;
x_21 = lean::string_append(x_20, x_19);
lean::dec(x_19);
x_23 = lean::string_append(x_21, x_20);
x_24 = lean::box(0);
x_25 = l_mjoin___rarg___closed__1;
x_26 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_23, x_25, x_24, x_24, x_1, x_2, x_3);
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_26, 1);
lean::inc(x_29);
if (lean::is_exclusive(x_26)) {
 lean::cnstr_release(x_26, 0);
 lean::cnstr_release(x_26, 1);
 x_31 = x_26;
} else {
 lean::dec(x_26);
 x_31 = lean::box(0);
}
x_32 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_33 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_27);
if (lean::is_scalar(x_31)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_31;
}
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_29);
return x_34;
}
else
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
lean::dec(x_1);
x_36 = lean::string_iterator_next(x_2);
x_37 = lean::box(0);
x_38 = lean::box_uint32(x_17);
x_39 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_36);
lean::cnstr_set(x_39, 2, x_37);
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_3);
return x_40;
}
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__14(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__13(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__14(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__16(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__15(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_5 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_7 = l_string_join___closed__1;
x_8 = lean::string_push(x_7, x_5);
x_9 = lean::string_iterator_remaining(x_2);
x_10 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__16(x_9, x_8, x_2);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__18(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_lean_is__id__end__escape(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_10 = lean::mk_nat_obj(1u);
x_11 = lean::nat_sub(x_0, x_10);
lean::dec(x_0);
x_13 = lean::string_push(x_1, x_8);
x_14 = lean::string_iterator_next(x_2);
x_0 = x_11;
x_1 = x_13;
x_2 = x_14;
goto _start;
}
else
{
obj* x_17; 
lean::dec(x_0);
x_17 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_17;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__17(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__18(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at___private_init_lean_parser_token_4__ident_x_27___spec__12(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_20; uint32 x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_31; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 2);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::unbox_uint32(x_16);
x_24 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__13(x_23, x_0, x_18, x_11);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_25);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
return x_31;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_15, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_36 = x_15;
} else {
 lean::dec(x_15);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_13)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_13;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
return x_39;
}
}
else
{
uint32 x_40; uint8 x_41; 
x_40 = lean::string_iterator_curr(x_1);
x_41 = l_lean_is__id__end__escape(x_40);
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::inc(x_1);
x_43 = lean::string_iterator_next(x_1);
x_44 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__15(x_1, x_0, x_43, x_2);
x_45 = lean::cnstr_get(x_44, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 lean::cnstr_release(x_44, 1);
 x_49 = x_44;
} else {
 lean::dec(x_44);
 x_49 = lean::box(0);
}
x_50 = lean::box(0);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_50, x_45);
if (lean::is_scalar(x_49)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_49;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_47);
return x_52;
}
else
{
obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_61; obj* x_62; obj* x_64; obj* x_66; obj* x_67; obj* x_68; 
x_53 = l_char_quote__core(x_40);
x_54 = l_char_has__repr___closed__1;
x_55 = lean::string_append(x_54, x_53);
lean::dec(x_53);
x_57 = lean::string_append(x_55, x_54);
x_58 = lean::box(0);
x_59 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_61 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_57, x_59, x_58, x_58, x_0, x_1, x_2);
x_62 = lean::cnstr_get(x_61, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_61, 1);
lean::inc(x_64);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_66 = x_61;
} else {
 lean::dec(x_61);
 x_66 = lean::box(0);
}
x_67 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_62);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; obj* x_71; obj* x_73; uint32 x_76; obj* x_77; obj* x_78; obj* x_80; obj* x_83; obj* x_84; 
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_68, 2);
lean::inc(x_73);
lean::dec(x_68);
x_76 = lean::unbox_uint32(x_69);
x_77 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__17(x_76, x_0, x_71, x_64);
x_78 = lean::cnstr_get(x_77, 0);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_77, 1);
lean::inc(x_80);
lean::dec(x_77);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_78);
if (lean::is_scalar(x_66)) {
 x_84 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_84 = x_66;
}
lean::cnstr_set(x_84, 0, x_83);
lean::cnstr_set(x_84, 1, x_80);
return x_84;
}
else
{
obj* x_86; uint8 x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::dec(x_0);
x_86 = lean::cnstr_get(x_68, 0);
lean::inc(x_86);
x_88 = lean::cnstr_get_scalar<uint8>(x_68, sizeof(void*)*1);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 x_89 = x_68;
} else {
 lean::dec(x_68);
 x_89 = lean::box(0);
}
if (lean::is_scalar(x_89)) {
 x_90 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_90 = x_89;
}
lean::cnstr_set(x_90, 0, x_86);
lean::cnstr_set_scalar(x_90, sizeof(void*)*1, x_88);
x_91 = x_90;
if (lean::is_scalar(x_66)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_66;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_64);
return x_92;
}
}
}
}
}
obj* l_lean_parser_id__part__escaped___at___private_init_lean_parser_token_4__ident_x_27___spec__10(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_5; obj* x_6; obj* x_8; obj* x_10; 
x_3 = l_lean_id__begin__escape;
lean::inc(x_0);
x_5 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_3, x_0, x_1, x_2);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 x_10 = x_5;
} else {
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::obj_tag(x_6) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_23; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 2);
lean::inc(x_13);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_15 = x_6;
} else {
 lean::dec(x_6);
 x_15 = lean::box(0);
}
lean::inc(x_0);
x_17 = l_lean_parser_monad__parsec_take__while1___at___private_init_lean_parser_token_4__ident_x_27___spec__12(x_0, x_11, x_8);
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
lean::dec(x_17);
x_23 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_18);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_26; obj* x_28; uint32 x_31; obj* x_32; obj* x_33; obj* x_35; 
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_23, 2);
lean::inc(x_28);
lean::dec(x_23);
x_31 = l_lean_id__end__escape;
x_32 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_31, x_0, x_26, x_20);
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
lean::dec(x_32);
if (lean::obj_tag(x_33) == 0)
{
obj* x_38; obj* x_40; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_38 = lean::cnstr_get(x_33, 1);
lean::inc(x_38);
x_40 = lean::cnstr_get(x_33, 2);
lean::inc(x_40);
lean::dec(x_33);
x_43 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_15)) {
 x_44 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_44 = x_15;
}
lean::cnstr_set(x_44, 0, x_24);
lean::cnstr_set(x_44, 1, x_38);
lean::cnstr_set(x_44, 2, x_43);
x_45 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_40, x_44);
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_28, x_45);
if (lean::is_scalar(x_10)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_10;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_35);
return x_47;
}
else
{
obj* x_50; uint8 x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_15);
lean::dec(x_24);
x_50 = lean::cnstr_get(x_33, 0);
lean::inc(x_50);
x_52 = lean::cnstr_get_scalar<uint8>(x_33, sizeof(void*)*1);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_release(x_33, 0);
 x_53 = x_33;
} else {
 lean::dec(x_33);
 x_53 = lean::box(0);
}
if (lean::is_scalar(x_53)) {
 x_54 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_54 = x_53;
}
lean::cnstr_set(x_54, 0, x_50);
lean::cnstr_set_scalar(x_54, sizeof(void*)*1, x_52);
x_55 = x_54;
x_56 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_28, x_55);
if (lean::is_scalar(x_10)) {
 x_57 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_57 = x_10;
}
lean::cnstr_set(x_57, 0, x_56);
lean::cnstr_set(x_57, 1, x_35);
return x_57;
}
}
else
{
obj* x_60; uint8 x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; 
lean::dec(x_15);
lean::dec(x_0);
x_60 = lean::cnstr_get(x_23, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get_scalar<uint8>(x_23, sizeof(void*)*1);
if (lean::is_exclusive(x_23)) {
 lean::cnstr_release(x_23, 0);
 x_63 = x_23;
} else {
 lean::dec(x_23);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_60);
lean::cnstr_set_scalar(x_64, sizeof(void*)*1, x_62);
x_65 = x_64;
if (lean::is_scalar(x_10)) {
 x_66 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_66 = x_10;
}
lean::cnstr_set(x_66, 0, x_65);
lean::cnstr_set(x_66, 1, x_20);
return x_66;
}
}
else
{
obj* x_68; uint8 x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_0);
x_68 = lean::cnstr_get(x_6, 0);
lean::inc(x_68);
x_70 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_71 = x_6;
} else {
 lean::dec(x_6);
 x_71 = lean::box(0);
}
if (lean::is_scalar(x_71)) {
 x_72 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_72 = x_71;
}
lean::cnstr_set(x_72, 0, x_68);
lean::cnstr_set_scalar(x_72, sizeof(void*)*1, x_70);
x_73 = x_72;
if (lean::is_scalar(x_10)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_10;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_8);
return x_74;
}
}
}
obj* l_lean_parser_id__part___at___private_init_lean_parser_token_4__ident_x_27___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; 
x_3 = l_lean_parser_monad__parsec_curr___at___private_init_lean_parser_token_4__ident_x_27___spec__2___rarg(x_1, x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_8 = x_3;
} else {
 lean::dec(x_3);
 x_8 = lean::box(0);
}
if (lean::obj_tag(x_4) == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint32 x_16; uint8 x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_4, 2);
lean::inc(x_13);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_15 = x_4;
} else {
 lean::dec(x_4);
 x_15 = lean::box(0);
}
x_16 = lean::unbox_uint32(x_9);
x_17 = l_lean_is__id__begin__escape(x_16);
x_18 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_19 = lean::box(x_17);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_11);
lean::cnstr_set(x_20, 2, x_18);
x_21 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_20);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_24; obj* x_26; uint8 x_29; 
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_21, 2);
lean::inc(x_26);
lean::dec(x_21);
x_29 = lean::unbox(x_22);
if (x_29 == 0)
{
obj* x_30; obj* x_31; obj* x_33; obj* x_36; obj* x_37; 
x_30 = l_lean_parser_id__part__default___at___private_init_lean_parser_token_4__ident_x_27___spec__3(x_0, x_24, x_6);
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_26, x_31);
if (lean::is_scalar(x_8)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_8;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_33);
return x_37;
}
else
{
obj* x_38; obj* x_39; obj* x_41; obj* x_44; obj* x_45; 
x_38 = l_lean_parser_id__part__escaped___at___private_init_lean_parser_token_4__ident_x_27___spec__10(x_0, x_24, x_6);
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_38, 1);
lean::inc(x_41);
lean::dec(x_38);
x_44 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_26, x_39);
if (lean::is_scalar(x_8)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_8;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_41);
return x_45;
}
}
else
{
obj* x_47; uint8 x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
lean::dec(x_0);
x_47 = lean::cnstr_get(x_21, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<uint8>(x_21, sizeof(void*)*1);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 x_50 = x_21;
} else {
 lean::dec(x_21);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
if (lean::is_scalar(x_8)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_8;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_6);
return x_53;
}
}
else
{
obj* x_55; uint8 x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_0);
x_55 = lean::cnstr_get(x_4, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_58 = x_4;
} else {
 lean::dec(x_4);
 x_58 = lean::box(0);
}
if (lean::is_scalar(x_58)) {
 x_59 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_59 = x_58;
}
lean::cnstr_set(x_59, 0, x_55);
lean::cnstr_set_scalar(x_59, sizeof(void*)*1, x_57);
x_60 = x_59;
if (lean::is_scalar(x_8)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_8;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_6);
return x_61;
}
}
}
obj* l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_4__ident_x_27___spec__19(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; uint32 x_6; obj* x_9; obj* x_10; obj* x_12; 
x_6 = 46;
lean::inc(x_1);
lean::inc(x_0);
x_9 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_6, x_0, x_1, x_2);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_17; obj* x_19; uint32 x_20; obj* x_23; obj* x_24; obj* x_26; 
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_19 = x_10;
} else {
 lean::dec(x_10);
 x_19 = lean::box(0);
}
x_20 = l_lean_id__begin__escape;
lean::inc(x_15);
lean::inc(x_0);
x_23 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_20, x_0, x_15, x_12);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
lean::dec(x_23);
if (lean::obj_tag(x_24) == 0)
{
obj* x_32; 
lean::dec(x_19);
lean::dec(x_0);
lean::dec(x_15);
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_24);
x_3 = x_32;
x_4 = x_26;
goto lbl_5;
}
else
{
obj* x_33; uint8 x_35; 
x_33 = lean::cnstr_get(x_24, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_24, sizeof(void*)*1);
if (x_35 == 0)
{
uint8 x_37; 
lean::dec(x_24);
x_37 = lean::string_iterator_has_next(x_15);
if (x_37 == 0)
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_45; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_19);
x_39 = lean::box(0);
x_40 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_41 = l_mjoin___rarg___closed__1;
x_42 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_40, x_41, x_39, x_39, x_0, x_15, x_26);
x_43 = lean::cnstr_get(x_42, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get(x_42, 1);
lean::inc(x_45);
lean::dec(x_42);
x_48 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_49 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_48, x_43);
x_50 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_33, x_49);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_50);
x_3 = x_51;
x_4 = x_45;
goto lbl_5;
}
else
{
uint32 x_52; uint8 x_53; 
x_52 = lean::string_iterator_curr(x_15);
x_53 = l_lean_is__id__first(x_52);
if (x_53 == 0)
{
obj* x_55; obj* x_56; obj* x_57; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_65; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_19);
x_55 = l_char_quote__core(x_52);
x_56 = l_char_has__repr___closed__1;
x_57 = lean::string_append(x_56, x_55);
lean::dec(x_55);
x_59 = lean::string_append(x_57, x_56);
x_60 = lean::box(0);
x_61 = l_mjoin___rarg___closed__1;
x_62 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_59, x_61, x_60, x_60, x_0, x_15, x_26);
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_62, 1);
lean::inc(x_65);
lean::dec(x_62);
x_68 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_68, x_63);
x_70 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_33, x_69);
x_71 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_70);
x_3 = x_71;
x_4 = x_65;
goto lbl_5;
}
else
{
obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_0);
lean::dec(x_33);
x_74 = lean::string_iterator_next(x_15);
x_75 = lean::box(0);
x_76 = lean::box_uint32(x_52);
if (lean::is_scalar(x_19)) {
 x_77 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_77 = x_19;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_74);
lean::cnstr_set(x_77, 2, x_75);
x_78 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_77);
x_3 = x_78;
x_4 = x_26;
goto lbl_5;
}
}
}
else
{
obj* x_83; 
lean::dec(x_19);
lean::dec(x_0);
lean::dec(x_15);
lean::dec(x_33);
x_83 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_24);
x_3 = x_83;
x_4 = x_26;
goto lbl_5;
}
}
}
else
{
obj* x_85; uint8 x_87; obj* x_88; obj* x_89; obj* x_90; 
lean::dec(x_0);
x_85 = lean::cnstr_get(x_10, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_88 = x_10;
} else {
 lean::dec(x_10);
 x_88 = lean::box(0);
}
if (lean::is_scalar(x_88)) {
 x_89 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_89 = x_88;
}
lean::cnstr_set(x_89, 0, x_85);
lean::cnstr_set_scalar(x_89, sizeof(void*)*1, x_87);
x_90 = x_89;
x_3 = x_90;
x_4 = x_12;
goto lbl_5;
}
lbl_5:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_91; obj* x_93; obj* x_94; obj* x_95; obj* x_96; 
x_91 = lean::cnstr_get(x_3, 0);
lean::inc(x_91);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 lean::cnstr_release(x_3, 2);
 x_93 = x_3;
} else {
 lean::dec(x_3);
 x_93 = lean::box(0);
}
x_94 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_93)) {
 x_95 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_95 = x_93;
}
lean::cnstr_set(x_95, 0, x_91);
lean::cnstr_set(x_95, 1, x_1);
lean::cnstr_set(x_95, 2, x_94);
x_96 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_96, 0, x_95);
lean::cnstr_set(x_96, 1, x_4);
return x_96;
}
else
{
obj* x_98; 
lean::dec(x_1);
x_98 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_98, 0, x_3);
lean::cnstr_set(x_98, 1, x_4);
return x_98;
}
}
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; 
x_3 = l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_4__ident_x_27___spec__19(x_0, x_1, x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_8 = x_3;
} else {
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = l_lean_parser_parsec__t_try__mk__res___rarg(x_4);
if (lean::is_scalar(x_8)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_8;
}
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_6);
return x_10;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__2(uint32 x_0, uint32 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
lean::inc(x_2);
x_6 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_0, x_2, x_3, x_4);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_17; obj* x_18; obj* x_20; obj* x_23; obj* x_24; 
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 2);
lean::inc(x_14);
lean::dec(x_7);
x_17 = l_lean_parser_id__part___at___private_init_lean_parser_token_4__ident_x_27___spec__1(x_2, x_12, x_9);
x_18 = lean::cnstr_get(x_17, 0);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_17, 1);
lean::inc(x_20);
lean::dec(x_17);
x_23 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_18);
if (lean::is_scalar(x_11)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_11;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_20);
return x_24;
}
else
{
obj* x_26; uint8 x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_2);
x_26 = lean::cnstr_get(x_7, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_29 = x_7;
} else {
 lean::dec(x_7);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_26);
lean::cnstr_set_scalar(x_30, sizeof(void*)*1, x_28);
x_31 = x_30;
if (lean::is_scalar(x_11)) {
 x_32 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_32 = x_11;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_9);
return x_32;
}
}
}
obj* _init_l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__1), 3, 0);
return x_0;
}
}
obj* _init_l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__2() {
_start:
{
uint32 x_0; obj* x_1; obj* x_2; 
x_0 = 46;
x_1 = lean::box_uint32(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__2___boxed), 5, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_11; obj* x_12; obj* x_14; obj* x_16; 
x_7 = l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__1;
x_8 = l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__2;
lean::inc(x_3);
lean::inc(x_2);
x_11 = l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg(x_7, x_8, x_2, x_3, x_4);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
if (lean::is_exclusive(x_11)) {
 lean::cnstr_release(x_11, 0);
 lean::cnstr_release(x_11, 1);
 x_16 = x_11;
} else {
 lean::dec(x_11);
 x_16 = lean::box(0);
}
if (lean::obj_tag(x_12) == 0)
{
obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_28; obj* x_29; obj* x_30; obj* x_32; obj* x_35; 
x_17 = lean::cnstr_get(x_12, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_12, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_12, 2);
lean::inc(x_21);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 lean::cnstr_release(x_12, 1);
 lean::cnstr_release(x_12, 2);
 x_23 = x_12;
} else {
 lean::dec(x_12);
 x_23 = lean::box(0);
}
x_24 = lean::mk_nat_obj(1u);
x_25 = lean::nat_sub(x_1, x_24);
lean::dec(x_1);
lean::inc(x_0);
x_28 = lean_name_mk_string(x_0, x_17);
x_29 = l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21(x_28, x_25, x_2, x_19, x_14);
x_30 = lean::cnstr_get(x_29, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_29, 1);
lean::inc(x_32);
lean::dec(x_29);
x_35 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_30);
if (lean::obj_tag(x_35) == 0)
{
obj* x_39; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_23);
if (lean::is_scalar(x_16)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_16;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set(x_39, 1, x_32);
return x_39;
}
else
{
obj* x_40; uint8 x_42; 
x_40 = lean::cnstr_get(x_35, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get_scalar<uint8>(x_35, sizeof(void*)*1);
if (x_42 == 0)
{
obj* x_44; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_35);
x_44 = lean::cnstr_get(x_40, 2);
lean::inc(x_44);
lean::dec(x_40);
x_47 = l_mjoin___rarg___closed__1;
x_48 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_48, 0, x_44);
lean::closure_set(x_48, 1, x_47);
x_49 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_49, 0, x_48);
if (lean::is_scalar(x_23)) {
 x_50 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_50 = x_23;
}
lean::cnstr_set(x_50, 0, x_0);
lean::cnstr_set(x_50, 1, x_3);
lean::cnstr_set(x_50, 2, x_49);
if (lean::is_scalar(x_16)) {
 x_51 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_51 = x_16;
}
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_32);
return x_51;
}
else
{
obj* x_56; 
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_23);
lean::dec(x_40);
if (lean::is_scalar(x_16)) {
 x_56 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_56 = x_16;
}
lean::cnstr_set(x_56, 0, x_35);
lean::cnstr_set(x_56, 1, x_32);
return x_56;
}
}
}
else
{
obj* x_59; uint8 x_61; obj* x_62; 
lean::dec(x_1);
lean::dec(x_2);
x_59 = lean::cnstr_get(x_12, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get_scalar<uint8>(x_12, sizeof(void*)*1);
if (lean::is_exclusive(x_12)) {
 lean::cnstr_release(x_12, 0);
 x_62 = x_12;
} else {
 lean::dec(x_12);
 x_62 = lean::box(0);
}
if (x_61 == 0)
{
obj* x_64; obj* x_67; obj* x_68; obj* x_69; obj* x_70; obj* x_71; 
lean::dec(x_62);
x_64 = lean::cnstr_get(x_59, 2);
lean::inc(x_64);
lean::dec(x_59);
x_67 = l_mjoin___rarg___closed__1;
x_68 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_68, 0, x_64);
lean::closure_set(x_68, 1, x_67);
x_69 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_69, 0, x_68);
x_70 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_70, 0, x_0);
lean::cnstr_set(x_70, 1, x_3);
lean::cnstr_set(x_70, 2, x_69);
if (lean::is_scalar(x_16)) {
 x_71 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_71 = x_16;
}
lean::cnstr_set(x_71, 0, x_70);
lean::cnstr_set(x_71, 1, x_14);
return x_71;
}
else
{
obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_3);
lean::dec(x_0);
if (lean::is_scalar(x_62)) {
 x_74 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_74 = x_62;
}
lean::cnstr_set(x_74, 0, x_59);
lean::cnstr_set_scalar(x_74, sizeof(void*)*1, x_61);
x_75 = x_74;
if (lean::is_scalar(x_16)) {
 x_76 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_76 = x_16;
}
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_14);
return x_76;
}
}
}
else
{
obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_1);
lean::dec(x_2);
x_79 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_80 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_80, 0, x_0);
lean::cnstr_set(x_80, 1, x_3);
lean::cnstr_set(x_80, 2, x_79);
x_81 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_4);
return x_81;
}
}
}
obj* l_lean_parser_monad__parsec_foldl___at___private_init_lean_parser_token_4__ident_x_27___spec__20(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = lean_name_mk_string(x_4, x_0);
x_6 = lean::string_iterator_remaining(x_2);
x_7 = l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21(x_5, x_6, x_1, x_2, x_3);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
x_13 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_14 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_8);
if (lean::is_scalar(x_12)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_12;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_10);
return x_15;
}
}
obj* l___private_init_lean_parser_token_4__ident_x_27(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_10; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_parser_id__part___at___private_init_lean_parser_token_4__ident_x_27___spec__1(x_0, x_1, x_2);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 x_10 = x_5;
} else {
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::obj_tag(x_6) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_21; 
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_6, 2);
lean::inc(x_15);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_17 = x_6;
} else {
 lean::dec(x_6);
 x_17 = lean::box(0);
}
x_18 = l_lean_parser_monad__parsec_foldl___at___private_init_lean_parser_token_4__ident_x_27___spec__20(x_11, x_0, x_13, x_8);
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 0)
{
obj* x_24; obj* x_26; obj* x_28; obj* x_33; obj* x_34; obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_24 = lean::cnstr_get(x_19, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_19, 1);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_19, 2);
lean::inc(x_28);
lean::dec(x_19);
lean::inc(x_1);
lean::inc(x_1);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_1);
lean::cnstr_set(x_33, 1, x_1);
x_34 = lean::string_iterator_offset(x_1);
lean::inc(x_26);
lean::inc(x_26);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_26);
lean::cnstr_set(x_37, 1, x_26);
x_38 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_38, 0, x_33);
lean::cnstr_set(x_38, 1, x_34);
lean::cnstr_set(x_38, 2, x_37);
x_39 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::inc(x_26);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_1);
lean::cnstr_set(x_41, 1, x_26);
x_42 = lean::box(0);
x_43 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_43, 0, x_39);
lean::cnstr_set(x_43, 1, x_41);
lean::cnstr_set(x_43, 2, x_24);
lean::cnstr_set(x_43, 3, x_42);
lean::cnstr_set(x_43, 4, x_42);
x_44 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_44, 0, x_43);
x_45 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_17)) {
 x_46 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_46 = x_17;
}
lean::cnstr_set(x_46, 0, x_44);
lean::cnstr_set(x_46, 1, x_26);
lean::cnstr_set(x_46, 2, x_45);
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_28, x_46);
x_48 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_47);
x_49 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_50 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_49, x_48);
if (lean::is_scalar(x_10)) {
 x_51 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_51 = x_10;
}
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_21);
return x_51;
}
else
{
obj* x_54; uint8 x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_17);
lean::dec(x_1);
x_54 = lean::cnstr_get(x_19, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get_scalar<uint8>(x_19, sizeof(void*)*1);
if (lean::is_exclusive(x_19)) {
 lean::cnstr_release(x_19, 0);
 x_57 = x_19;
} else {
 lean::dec(x_19);
 x_57 = lean::box(0);
}
if (lean::is_scalar(x_57)) {
 x_58 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_58 = x_57;
}
lean::cnstr_set(x_58, 0, x_54);
lean::cnstr_set_scalar(x_58, sizeof(void*)*1, x_56);
x_59 = x_58;
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_59);
x_61 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_62 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_61, x_60);
if (lean::is_scalar(x_10)) {
 x_63 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_63 = x_10;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_21);
return x_63;
}
}
else
{
obj* x_66; uint8 x_68; obj* x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_1);
lean::dec(x_0);
x_66 = lean::cnstr_get(x_6, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_69 = x_6;
} else {
 lean::dec(x_6);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_66);
lean::cnstr_set_scalar(x_70, sizeof(void*)*1, x_68);
x_71 = x_70;
x_72 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_73 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_72, x_71);
if (lean::is_scalar(x_10)) {
 x_74 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_74 = x_10;
}
lean::cnstr_set(x_74, 0, x_73);
lean::cnstr_set(x_74, 1, x_8);
return x_74;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__4(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__6___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__6(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__13___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__13(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__17___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at___private_init_lean_parser_token_4__ident_x_27___spec__17(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint32 x_5; uint32 x_6; obj* x_7; 
x_5 = lean::unbox_uint32(x_0);
x_6 = lean::unbox_uint32(x_1);
x_7 = l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___lambda__2(x_5, x_6, x_2, x_3, x_4);
return x_7;
}
}
obj* l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
lean::inc(x_3);
lean::inc(x_2);
x_7 = lean::apply_3(x_0, x_2, x_3, x_4);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_16; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
if (lean::is_scalar(x_12)) {
 x_16 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_16 = x_12;
}
lean::cnstr_set(x_16, 0, x_8);
lean::cnstr_set(x_16, 1, x_10);
return x_16;
}
else
{
obj* x_17; uint8 x_19; 
x_17 = lean::cnstr_get(x_8, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (x_19 == 0)
{
obj* x_21; obj* x_22; obj* x_24; obj* x_27; obj* x_28; 
lean::dec(x_8);
x_21 = lean::apply_3(x_1, x_2, x_3, x_10);
x_22 = lean::cnstr_get(x_21, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
lean::dec(x_21);
x_27 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_17, x_22);
if (lean::is_scalar(x_12)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_12;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_24);
return x_28;
}
else
{
obj* x_33; 
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_17);
if (lean::is_scalar(x_12)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_12;
}
lean::cnstr_set(x_33, 0, x_8);
lean::cnstr_set(x_33, 1, x_10);
return x_33;
}
}
}
}
obj* l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1___rarg), 5, 0);
return x_2;
}
}
obj* _init_l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__1() {
_start:
{
uint32 x_0; obj* x_1; obj* x_2; 
x_0 = 48;
x_1 = lean::box_uint32(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11___boxed), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__2() {
_start:
{
uint32 x_0; obj* x_1; obj* x_2; 
x_0 = 49;
x_1 = lean::box_uint32(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11___boxed), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_0, x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; 
x_6 = l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__1;
x_7 = l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__2;
lean::inc(x_1);
x_9 = l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1___rarg(x_6, x_7, x_1, x_2, x_3);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_20; obj* x_21; obj* x_24; obj* x_25; obj* x_27; 
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 2);
lean::inc(x_17);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_19 = x_10;
} else {
 lean::dec(x_10);
 x_19 = lean::box(0);
}
x_20 = lean::mk_nat_obj(1u);
x_21 = lean::nat_sub(x_0, x_20);
lean::dec(x_0);
lean::inc(x_15);
x_24 = l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2(x_21, x_1, x_15, x_12);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
if (lean::obj_tag(x_25) == 0)
{
obj* x_32; obj* x_33; 
lean::dec(x_19);
lean::dec(x_15);
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_25);
if (lean::is_scalar(x_14)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_14;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_27);
return x_33;
}
else
{
obj* x_34; uint8 x_36; 
x_34 = lean::cnstr_get(x_25, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get_scalar<uint8>(x_25, sizeof(void*)*1);
if (x_36 == 0)
{
obj* x_38; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
lean::dec(x_25);
x_38 = lean::cnstr_get(x_34, 2);
lean::inc(x_38);
lean::dec(x_34);
x_41 = l_mjoin___rarg___closed__1;
x_42 = lean::alloc_closure(reinterpret_cast<void*>(l_function_comp___rarg), 3, 2);
lean::closure_set(x_42, 0, x_38);
lean::closure_set(x_42, 1, x_41);
x_43 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_43, 0, x_42);
x_44 = lean::box(0);
if (lean::is_scalar(x_19)) {
 x_45 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_45 = x_19;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_15);
lean::cnstr_set(x_45, 2, x_43);
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_45);
if (lean::is_scalar(x_14)) {
 x_47 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_47 = x_14;
}
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_27);
return x_47;
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_19);
lean::dec(x_15);
lean::dec(x_34);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_25);
if (lean::is_scalar(x_14)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_14;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_27);
return x_52;
}
}
}
else
{
obj* x_55; uint8 x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
lean::dec(x_1);
lean::dec(x_0);
x_55 = lean::cnstr_get(x_10, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_58 = x_10;
} else {
 lean::dec(x_10);
 x_58 = lean::box(0);
}
if (lean::is_scalar(x_58)) {
 x_59 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_59 = x_58;
}
lean::cnstr_set(x_59, 0, x_55);
lean::cnstr_set_scalar(x_59, sizeof(void*)*1, x_57);
x_60 = x_59;
if (lean::is_scalar(x_14)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_14;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_12);
return x_61;
}
}
else
{
obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_68; obj* x_70; 
lean::dec(x_0);
x_63 = l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__1;
x_64 = l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__2;
x_65 = l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1___rarg(x_63, x_64, x_1, x_2, x_3);
x_66 = lean::cnstr_get(x_65, 0);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_65, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_65)) {
 lean::cnstr_release(x_65, 0);
 lean::cnstr_release(x_65, 1);
 x_70 = x_65;
} else {
 lean::dec(x_65);
 x_70 = lean::box(0);
}
if (lean::obj_tag(x_66) == 0)
{
obj* x_71; obj* x_73; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
x_71 = lean::cnstr_get(x_66, 1);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_66, 2);
lean::inc(x_73);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_release(x_66, 0);
 lean::cnstr_release(x_66, 1);
 lean::cnstr_release(x_66, 2);
 x_75 = x_66;
} else {
 lean::dec(x_66);
 x_75 = lean::box(0);
}
x_76 = lean::box(0);
x_77 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_75)) {
 x_78 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_78 = x_75;
}
lean::cnstr_set(x_78, 0, x_76);
lean::cnstr_set(x_78, 1, x_71);
lean::cnstr_set(x_78, 2, x_77);
x_79 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_78);
if (lean::is_scalar(x_70)) {
 x_80 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_80 = x_70;
}
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_68);
return x_80;
}
else
{
obj* x_81; uint8 x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
x_81 = lean::cnstr_get(x_66, 0);
lean::inc(x_81);
x_83 = lean::cnstr_get_scalar<uint8>(x_66, sizeof(void*)*1);
if (lean::is_exclusive(x_66)) {
 lean::cnstr_release(x_66, 0);
 x_84 = x_66;
} else {
 lean::dec(x_66);
 x_84 = lean::box(0);
}
if (lean::is_scalar(x_84)) {
 x_85 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_85 = x_84;
}
lean::cnstr_set(x_85, 0, x_81);
lean::cnstr_set_scalar(x_85, sizeof(void*)*1, x_83);
x_86 = x_85;
if (lean::is_scalar(x_70)) {
 x_87 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_87 = x_70;
}
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_68);
return x_87;
}
}
}
}
obj* l_lean_parser_parse__bin__lit(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_11; 
x_3 = 48;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_3, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; uint32 x_19; obj* x_22; obj* x_23; obj* x_25; 
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 2);
lean::inc(x_16);
lean::dec(x_9);
x_19 = 98;
lean::inc(x_14);
lean::inc(x_0);
x_22 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_19, x_0, x_14, x_11);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; 
lean::dec(x_14);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_23);
x_4 = x_29;
x_5 = x_25;
goto lbl_6;
}
else
{
obj* x_30; uint8 x_32; uint32 x_33; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get_scalar<uint8>(x_23, sizeof(void*)*1);
x_33 = 66;
if (x_32 == 0)
{
obj* x_36; obj* x_37; obj* x_39; obj* x_42; obj* x_43; 
lean::dec(x_23);
lean::inc(x_0);
x_36 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_33, x_0, x_14, x_25);
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
x_42 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_30, x_37);
x_43 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_42);
x_4 = x_43;
x_5 = x_39;
goto lbl_6;
}
else
{
obj* x_46; 
lean::dec(x_14);
lean::dec(x_30);
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_23);
x_4 = x_46;
x_5 = x_25;
goto lbl_6;
}
}
}
else
{
obj* x_47; uint8 x_49; obj* x_50; obj* x_51; obj* x_52; 
x_47 = lean::cnstr_get(x_9, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_50 = x_9;
} else {
 lean::dec(x_9);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
x_4 = x_52;
x_5 = x_11;
goto lbl_6;
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_53; obj* x_55; obj* x_58; obj* x_59; obj* x_60; obj* x_62; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_53 = lean::cnstr_get(x_4, 1);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_4, 2);
lean::inc(x_55);
lean::dec(x_4);
x_58 = lean::string_iterator_remaining(x_53);
x_59 = l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2(x_58, x_0, x_53, x_5);
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_59, 1);
lean::inc(x_62);
if (lean::is_exclusive(x_59)) {
 lean::cnstr_release(x_59, 0);
 lean::cnstr_release(x_59, 1);
 x_64 = x_59;
} else {
 lean::dec(x_59);
 x_64 = lean::box(0);
}
x_65 = l_lean_parser_finish__comment__block___closed__2;
x_66 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_65, x_60);
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_55, x_66);
if (lean::is_scalar(x_64)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_64;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_62);
return x_68;
}
else
{
obj* x_70; uint8 x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_0);
x_70 = lean::cnstr_get(x_4, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_73 = x_4;
} else {
 lean::dec(x_4);
 x_73 = lean::box(0);
}
if (lean::is_scalar(x_73)) {
 x_74 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_74 = x_73;
}
lean::cnstr_set(x_74, 0, x_70);
lean::cnstr_set_scalar(x_74, sizeof(void*)*1, x_72);
x_75 = x_74;
x_76 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_5);
return x_76;
}
}
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_parse__oct__lit___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint32 x_9; uint8 x_10; 
x_8 = 48;
x_9 = lean::string_iterator_curr(x_2);
x_10 = x_8 <= x_9;
if (x_10 == 0)
{
obj* x_12; 
lean::dec(x_0);
x_12 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_12;
}
else
{
uint32 x_13; uint8 x_14; 
x_13 = 56;
x_14 = x_9 < x_13;
if (x_14 == 0)
{
obj* x_16; 
lean::dec(x_0);
x_16 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_20; obj* x_21; 
x_17 = lean::mk_nat_obj(1u);
x_18 = lean::nat_sub(x_0, x_17);
lean::dec(x_0);
x_20 = lean::string_push(x_1, x_9);
x_21 = lean::string_iterator_next(x_2);
x_0 = x_18;
x_1 = x_20;
x_2 = x_21;
goto _start;
}
}
}
}
else
{
obj* x_24; 
lean::dec(x_0);
x_24 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_24;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__oct__lit___spec__2(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_parse__oct__lit___spec__3(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_parse__oct__lit___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; uint8 x_6; 
x_6 = lean::string_iterator_has_next(x_1);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_17; obj* x_18; 
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_11 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_8, x_9, x_7, x_7, x_0, x_1, x_2);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_12);
x_3 = x_18;
x_4 = x_14;
goto lbl_5;
}
else
{
uint32 x_19; uint32 x_20; uint8 x_21; 
x_19 = 48;
x_20 = lean::string_iterator_curr(x_1);
x_21 = x_19 <= x_20;
if (x_21 == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_33; obj* x_36; obj* x_37; 
x_22 = l_char_quote__core(x_20);
x_23 = l_char_has__repr___closed__1;
x_24 = lean::string_append(x_23, x_22);
lean::dec(x_22);
x_26 = lean::string_append(x_24, x_23);
x_27 = lean::box(0);
x_28 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_30 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_26, x_28, x_27, x_27, x_0, x_1, x_2);
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
x_36 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_37 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_36, x_31);
x_3 = x_37;
x_4 = x_33;
goto lbl_5;
}
else
{
uint32 x_38; uint8 x_39; 
x_38 = 56;
x_39 = x_20 < x_38;
if (x_39 == 0)
{
obj* x_40; obj* x_41; obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_48; obj* x_49; obj* x_51; obj* x_54; obj* x_55; 
x_40 = l_char_quote__core(x_20);
x_41 = l_char_has__repr___closed__1;
x_42 = lean::string_append(x_41, x_40);
lean::dec(x_40);
x_44 = lean::string_append(x_42, x_41);
x_45 = lean::box(0);
x_46 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_48 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_44, x_46, x_45, x_45, x_0, x_1, x_2);
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_48, 1);
lean::inc(x_51);
lean::dec(x_48);
x_54 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_54, x_49);
x_3 = x_55;
x_4 = x_51;
goto lbl_5;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_56 = lean::string_iterator_next(x_1);
x_57 = lean::box(0);
x_58 = lean::box_uint32(x_20);
x_59 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_56);
lean::cnstr_set(x_59, 2, x_57);
x_3 = x_59;
x_4 = x_2;
goto lbl_5;
}
}
}
lbl_5:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_60; obj* x_62; obj* x_64; uint32 x_67; obj* x_68; obj* x_69; obj* x_71; obj* x_73; obj* x_74; obj* x_75; 
x_60 = lean::cnstr_get(x_3, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_3, 1);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_3, 2);
lean::inc(x_64);
lean::dec(x_3);
x_67 = lean::unbox_uint32(x_60);
x_68 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__oct__lit___spec__2(x_67, x_0, x_62, x_4);
x_69 = lean::cnstr_get(x_68, 0);
lean::inc(x_69);
x_71 = lean::cnstr_get(x_68, 1);
lean::inc(x_71);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 lean::cnstr_release(x_68, 1);
 x_73 = x_68;
} else {
 lean::dec(x_68);
 x_73 = lean::box(0);
}
x_74 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_64, x_69);
if (lean::is_scalar(x_73)) {
 x_75 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_75 = x_73;
}
lean::cnstr_set(x_75, 0, x_74);
lean::cnstr_set(x_75, 1, x_71);
return x_75;
}
else
{
obj* x_77; uint8 x_79; obj* x_80; obj* x_81; obj* x_82; obj* x_83; 
lean::dec(x_0);
x_77 = lean::cnstr_get(x_3, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_80 = x_3;
} else {
 lean::dec(x_3);
 x_80 = lean::box(0);
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_77);
lean::cnstr_set_scalar(x_81, sizeof(void*)*1, x_79);
x_82 = x_81;
x_83 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_83, 0, x_82);
lean::cnstr_set(x_83, 1, x_4);
return x_83;
}
}
}
}
obj* l_lean_parser_parse__oct__lit(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_11; 
x_3 = 48;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_3, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; uint32 x_19; obj* x_22; obj* x_23; obj* x_25; 
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 2);
lean::inc(x_16);
lean::dec(x_9);
x_19 = 111;
lean::inc(x_14);
lean::inc(x_0);
x_22 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_19, x_0, x_14, x_11);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; 
lean::dec(x_14);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_23);
x_4 = x_29;
x_5 = x_25;
goto lbl_6;
}
else
{
obj* x_30; uint8 x_32; uint32 x_33; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get_scalar<uint8>(x_23, sizeof(void*)*1);
x_33 = 79;
if (x_32 == 0)
{
obj* x_36; obj* x_37; obj* x_39; obj* x_42; obj* x_43; 
lean::dec(x_23);
lean::inc(x_0);
x_36 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_33, x_0, x_14, x_25);
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
x_42 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_30, x_37);
x_43 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_42);
x_4 = x_43;
x_5 = x_39;
goto lbl_6;
}
else
{
obj* x_46; 
lean::dec(x_14);
lean::dec(x_30);
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_23);
x_4 = x_46;
x_5 = x_25;
goto lbl_6;
}
}
}
else
{
obj* x_47; uint8 x_49; obj* x_50; obj* x_51; obj* x_52; 
x_47 = lean::cnstr_get(x_9, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_50 = x_9;
} else {
 lean::dec(x_9);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
x_4 = x_52;
x_5 = x_11;
goto lbl_6;
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_53; obj* x_55; obj* x_58; obj* x_59; obj* x_61; obj* x_63; obj* x_64; obj* x_65; 
x_53 = lean::cnstr_get(x_4, 1);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_4, 2);
lean::inc(x_55);
lean::dec(x_4);
x_58 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_parse__oct__lit___spec__1(x_0, x_53, x_5);
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_58, 1);
lean::inc(x_61);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_63 = x_58;
} else {
 lean::dec(x_58);
 x_63 = lean::box(0);
}
x_64 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_55, x_59);
if (lean::is_scalar(x_63)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_63;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_61);
return x_65;
}
else
{
obj* x_67; uint8 x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
lean::dec(x_0);
x_67 = lean::cnstr_get(x_4, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_70 = x_4;
} else {
 lean::dec(x_4);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_67);
lean::cnstr_set_scalar(x_71, sizeof(void*)*1, x_69);
x_72 = x_71;
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_5);
return x_73;
}
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__oct__lit___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__oct__lit___spec__2(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_parse__hex__lit___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
obj* x_8; obj* x_9; uint32 x_11; uint8 x_12; 
x_8 = lean::mk_nat_obj(1u);
x_9 = lean::nat_sub(x_0, x_8);
lean::dec(x_0);
x_11 = lean::string_iterator_curr(x_2);
x_12 = l_char_is__digit(x_11);
if (x_12 == 0)
{
uint8 x_13; 
x_13 = l_char_is__alpha(x_11);
if (x_13 == 0)
{
obj* x_15; 
lean::dec(x_9);
x_15 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_15;
}
else
{
obj* x_16; obj* x_17; 
x_16 = lean::string_push(x_1, x_11);
x_17 = lean::string_iterator_next(x_2);
x_0 = x_9;
x_1 = x_16;
x_2 = x_17;
goto _start;
}
}
else
{
if (x_12 == 0)
{
obj* x_20; 
lean::dec(x_9);
x_20 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_20;
}
else
{
obj* x_21; obj* x_22; 
x_21 = lean::string_push(x_1, x_11);
x_22 = lean::string_iterator_next(x_2);
x_0 = x_9;
x_1 = x_21;
x_2 = x_22;
goto _start;
}
}
}
}
else
{
obj* x_25; 
lean::dec(x_0);
x_25 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_25;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__hex__lit___spec__2(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_parse__hex__lit___spec__3(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_parse__hex__lit___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; uint8 x_6; 
x_6 = lean::string_iterator_has_next(x_1);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_14; obj* x_17; obj* x_18; 
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_11 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_8, x_9, x_7, x_7, x_0, x_1, x_2);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_11, 1);
lean::inc(x_14);
lean::dec(x_11);
x_17 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_18 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_17, x_12);
x_3 = x_18;
x_4 = x_14;
goto lbl_5;
}
else
{
uint32 x_19; uint8 x_20; 
x_19 = lean::string_iterator_curr(x_1);
x_20 = l_char_is__digit(x_19);
if (x_20 == 0)
{
uint8 x_21; 
x_21 = l_char_is__alpha(x_19);
if (x_21 == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; obj* x_30; obj* x_31; obj* x_33; obj* x_36; obj* x_37; 
x_22 = l_char_quote__core(x_19);
x_23 = l_char_has__repr___closed__1;
x_24 = lean::string_append(x_23, x_22);
lean::dec(x_22);
x_26 = lean::string_append(x_24, x_23);
x_27 = lean::box(0);
x_28 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_30 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_26, x_28, x_27, x_27, x_0, x_1, x_2);
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
x_36 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_37 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_36, x_31);
x_3 = x_37;
x_4 = x_33;
goto lbl_5;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_38 = lean::string_iterator_next(x_1);
x_39 = lean::box(0);
x_40 = lean::box_uint32(x_19);
x_41 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_38);
lean::cnstr_set(x_41, 2, x_39);
x_3 = x_41;
x_4 = x_2;
goto lbl_5;
}
}
else
{
if (x_20 == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_56; obj* x_57; 
x_42 = l_char_quote__core(x_19);
x_43 = l_char_has__repr___closed__1;
x_44 = lean::string_append(x_43, x_42);
lean::dec(x_42);
x_46 = lean::string_append(x_44, x_43);
x_47 = lean::box(0);
x_48 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_50 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_46, x_48, x_47, x_47, x_0, x_1, x_2);
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_50, 1);
lean::inc(x_53);
lean::dec(x_50);
x_56 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_51);
x_3 = x_57;
x_4 = x_53;
goto lbl_5;
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_58 = lean::string_iterator_next(x_1);
x_59 = lean::box(0);
x_60 = lean::box_uint32(x_19);
x_61 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_58);
lean::cnstr_set(x_61, 2, x_59);
x_3 = x_61;
x_4 = x_2;
goto lbl_5;
}
}
}
lbl_5:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_62; obj* x_64; obj* x_66; uint32 x_69; obj* x_70; obj* x_71; obj* x_73; obj* x_75; obj* x_76; obj* x_77; 
x_62 = lean::cnstr_get(x_3, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_3, 1);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_3, 2);
lean::inc(x_66);
lean::dec(x_3);
x_69 = lean::unbox_uint32(x_62);
x_70 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__hex__lit___spec__2(x_69, x_0, x_64, x_4);
x_71 = lean::cnstr_get(x_70, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_70, 1);
lean::inc(x_73);
if (lean::is_exclusive(x_70)) {
 lean::cnstr_release(x_70, 0);
 lean::cnstr_release(x_70, 1);
 x_75 = x_70;
} else {
 lean::dec(x_70);
 x_75 = lean::box(0);
}
x_76 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_66, x_71);
if (lean::is_scalar(x_75)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_75;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_73);
return x_77;
}
else
{
obj* x_79; uint8 x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
lean::dec(x_0);
x_79 = lean::cnstr_get(x_3, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_82 = x_3;
} else {
 lean::dec(x_3);
 x_82 = lean::box(0);
}
if (lean::is_scalar(x_82)) {
 x_83 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_83 = x_82;
}
lean::cnstr_set(x_83, 0, x_79);
lean::cnstr_set_scalar(x_83, sizeof(void*)*1, x_81);
x_84 = x_83;
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_4);
return x_85;
}
}
}
}
obj* l_lean_parser_parse__hex__lit(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_11; 
x_3 = 48;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_3, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; uint32 x_19; obj* x_22; obj* x_23; obj* x_25; 
x_14 = lean::cnstr_get(x_9, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 2);
lean::inc(x_16);
lean::dec(x_9);
x_19 = 120;
lean::inc(x_14);
lean::inc(x_0);
x_22 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_19, x_0, x_14, x_11);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_29; 
lean::dec(x_14);
x_29 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_23);
x_4 = x_29;
x_5 = x_25;
goto lbl_6;
}
else
{
obj* x_30; uint8 x_32; uint32 x_33; 
x_30 = lean::cnstr_get(x_23, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get_scalar<uint8>(x_23, sizeof(void*)*1);
x_33 = 88;
if (x_32 == 0)
{
obj* x_36; obj* x_37; obj* x_39; obj* x_42; obj* x_43; 
lean::dec(x_23);
lean::inc(x_0);
x_36 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_33, x_0, x_14, x_25);
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
lean::dec(x_36);
x_42 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_30, x_37);
x_43 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_42);
x_4 = x_43;
x_5 = x_39;
goto lbl_6;
}
else
{
obj* x_46; 
lean::dec(x_14);
lean::dec(x_30);
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_23);
x_4 = x_46;
x_5 = x_25;
goto lbl_6;
}
}
}
else
{
obj* x_47; uint8 x_49; obj* x_50; obj* x_51; obj* x_52; 
x_47 = lean::cnstr_get(x_9, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_50 = x_9;
} else {
 lean::dec(x_9);
 x_50 = lean::box(0);
}
if (lean::is_scalar(x_50)) {
 x_51 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_51 = x_50;
}
lean::cnstr_set(x_51, 0, x_47);
lean::cnstr_set_scalar(x_51, sizeof(void*)*1, x_49);
x_52 = x_51;
x_4 = x_52;
x_5 = x_11;
goto lbl_6;
}
lbl_6:
{
if (lean::obj_tag(x_4) == 0)
{
obj* x_53; obj* x_55; obj* x_58; obj* x_59; obj* x_61; obj* x_63; obj* x_64; obj* x_65; 
x_53 = lean::cnstr_get(x_4, 1);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_4, 2);
lean::inc(x_55);
lean::dec(x_4);
x_58 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_parse__hex__lit___spec__1(x_0, x_53, x_5);
x_59 = lean::cnstr_get(x_58, 0);
lean::inc(x_59);
x_61 = lean::cnstr_get(x_58, 1);
lean::inc(x_61);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 lean::cnstr_release(x_58, 1);
 x_63 = x_58;
} else {
 lean::dec(x_58);
 x_63 = lean::box(0);
}
x_64 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_55, x_59);
if (lean::is_scalar(x_63)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_63;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_61);
return x_65;
}
else
{
obj* x_67; uint8 x_69; obj* x_70; obj* x_71; obj* x_72; obj* x_73; 
lean::dec(x_0);
x_67 = lean::cnstr_get(x_4, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_70 = x_4;
} else {
 lean::dec(x_4);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_67);
lean::cnstr_set_scalar(x_71, sizeof(void*)*1, x_69);
x_72 = x_71;
x_73 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_5);
return x_73;
}
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__hex__lit___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_parse__hex__lit___spec__2(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* _init_l_lean_parser_number() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("number");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__3() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__4() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::box(0);
x_1 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__5() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; 
x_3 = lean::box(3);
x_4 = lean::mk_nat_obj(0u);
x_0 = x_3;
x_1 = x_4;
goto lbl_2;
lbl_2:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
obj* x_7; uint8 x_8; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
obj* x_9; uint8 x_10; 
x_9 = lean::mk_nat_obj(2u);
x_10 = lean::nat_dec_eq(x_1, x_9);
lean::dec(x_1);
if (x_10 == 0)
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_12; obj* x_15; obj* x_16; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_12);
x_16 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_16, 0, x_15);
return x_16;
}
case 3:
{
obj* x_17; 
x_17 = l_lean_parser_number_has__view_x_27___lambda__1___closed__1;
return x_17;
}
default:
{
obj* x_19; 
lean::dec(x_0);
x_19 = l_lean_parser_number_has__view_x_27___lambda__1___closed__1;
return x_19;
}
}
}
else
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_20; obj* x_23; obj* x_24; 
x_20 = lean::cnstr_get(x_0, 0);
lean::inc(x_20);
lean::dec(x_0);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_20);
x_24 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
case 3:
{
obj* x_25; 
x_25 = l_lean_parser_number_has__view_x_27___lambda__1___closed__2;
return x_25;
}
default:
{
obj* x_27; 
lean::dec(x_0);
x_27 = l_lean_parser_number_has__view_x_27___lambda__1___closed__2;
return x_27;
}
}
}
}
else
{
lean::dec(x_1);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_29; obj* x_32; obj* x_33; 
x_29 = lean::cnstr_get(x_0, 0);
lean::inc(x_29);
lean::dec(x_0);
x_32 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_32, 0, x_29);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
return x_33;
}
case 3:
{
obj* x_34; 
x_34 = l_lean_parser_number_has__view_x_27___lambda__1___closed__3;
return x_34;
}
default:
{
obj* x_36; 
lean::dec(x_0);
x_36 = l_lean_parser_number_has__view_x_27___lambda__1___closed__3;
return x_36;
}
}
}
}
else
{
lean::dec(x_1);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_38; obj* x_41; obj* x_42; 
x_38 = lean::cnstr_get(x_0, 0);
lean::inc(x_38);
lean::dec(x_0);
x_41 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_41, 0, x_38);
x_42 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_42, 0, x_41);
return x_42;
}
case 3:
{
obj* x_43; 
x_43 = l_lean_parser_number_has__view_x_27___lambda__1___closed__4;
return x_43;
}
default:
{
obj* x_45; 
lean::dec(x_0);
x_45 = l_lean_parser_number_has__view_x_27___lambda__1___closed__4;
return x_45;
}
}
}
}
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__6() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("number");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* l_lean_parser_number_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_4 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_5;
}
else
{
obj* x_6; obj* x_9; obj* x_11; obj* x_14; uint8 x_15; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_6, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
lean::dec(x_6);
x_14 = l_lean_parser_number_has__view_x_27___lambda__1___closed__6;
x_15 = lean_name_dec_eq(x_9, x_14);
lean::dec(x_9);
if (x_15 == 0)
{
obj* x_18; 
lean::dec(x_11);
x_18 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_18;
}
else
{
if (lean::obj_tag(x_11) == 0)
{
obj* x_19; 
x_19 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_19;
}
else
{
obj* x_20; obj* x_22; 
x_20 = lean::cnstr_get(x_11, 0);
lean::inc(x_20);
x_22 = lean::cnstr_get(x_11, 1);
lean::inc(x_22);
lean::dec(x_11);
if (lean::obj_tag(x_22) == 0)
{
obj* x_25; 
x_25 = l_lean_parser_syntax_as__node___main(x_20);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; 
x_26 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_26;
}
else
{
obj* x_27; obj* x_30; obj* x_32; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
lean::dec(x_25);
x_30 = lean::cnstr_get(x_27, 0);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_27, 1);
lean::inc(x_32);
lean::dec(x_27);
switch (lean::obj_tag(x_30)) {
case 0:
{
obj* x_36; 
lean::dec(x_32);
x_36 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_36;
}
case 1:
{
obj* x_39; 
lean::dec(x_30);
lean::dec(x_32);
x_39 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_39;
}
default:
{
obj* x_40; obj* x_42; obj* x_45; uint8 x_46; 
x_40 = lean::cnstr_get(x_30, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get(x_30, 1);
lean::inc(x_42);
lean::dec(x_30);
x_45 = lean::box(0);
x_46 = lean_name_dec_eq(x_40, x_45);
lean::dec(x_40);
if (x_46 == 0)
{
obj* x_50; 
lean::dec(x_42);
lean::dec(x_32);
x_50 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_50;
}
else
{
if (lean::obj_tag(x_32) == 0)
{
obj* x_52; 
lean::dec(x_42);
x_52 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_52;
}
else
{
obj* x_53; obj* x_55; 
x_53 = lean::cnstr_get(x_32, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_32, 1);
lean::inc(x_55);
lean::dec(x_32);
if (lean::obj_tag(x_55) == 0)
{
x_1 = x_53;
x_2 = x_42;
goto lbl_3;
}
else
{
obj* x_61; 
lean::dec(x_42);
lean::dec(x_53);
lean::dec(x_55);
x_61 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_61;
}
}
}
}
}
}
}
else
{
obj* x_64; 
lean::dec(x_20);
lean::dec(x_22);
x_64 = l_lean_parser_number_has__view_x_27___lambda__1___closed__5;
return x_64;
}
}
}
}
lbl_3:
{
obj* x_65; uint8 x_66; 
x_65 = lean::mk_nat_obj(0u);
x_66 = lean::nat_dec_eq(x_2, x_65);
if (x_66 == 0)
{
obj* x_67; uint8 x_68; 
x_67 = lean::mk_nat_obj(1u);
x_68 = lean::nat_dec_eq(x_2, x_67);
if (x_68 == 0)
{
obj* x_69; uint8 x_70; 
x_69 = lean::mk_nat_obj(2u);
x_70 = lean::nat_dec_eq(x_2, x_69);
lean::dec(x_2);
if (x_70 == 0)
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_72; obj* x_75; obj* x_76; 
x_72 = lean::cnstr_get(x_1, 0);
lean::inc(x_72);
lean::dec(x_1);
x_75 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_75, 0, x_72);
x_76 = lean::alloc_cnstr(3, 1, 0);
lean::cnstr_set(x_76, 0, x_75);
return x_76;
}
case 3:
{
obj* x_77; 
x_77 = l_lean_parser_number_has__view_x_27___lambda__1___closed__1;
return x_77;
}
default:
{
obj* x_79; 
lean::dec(x_1);
x_79 = l_lean_parser_number_has__view_x_27___lambda__1___closed__1;
return x_79;
}
}
}
else
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_80; obj* x_83; obj* x_84; 
x_80 = lean::cnstr_get(x_1, 0);
lean::inc(x_80);
lean::dec(x_1);
x_83 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_83, 0, x_80);
x_84 = lean::alloc_cnstr(2, 1, 0);
lean::cnstr_set(x_84, 0, x_83);
return x_84;
}
case 3:
{
obj* x_85; 
x_85 = l_lean_parser_number_has__view_x_27___lambda__1___closed__2;
return x_85;
}
default:
{
obj* x_87; 
lean::dec(x_1);
x_87 = l_lean_parser_number_has__view_x_27___lambda__1___closed__2;
return x_87;
}
}
}
}
else
{
lean::dec(x_2);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_89; obj* x_92; obj* x_93; 
x_89 = lean::cnstr_get(x_1, 0);
lean::inc(x_89);
lean::dec(x_1);
x_92 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_92, 0, x_89);
x_93 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_93, 0, x_92);
return x_93;
}
case 3:
{
obj* x_94; 
x_94 = l_lean_parser_number_has__view_x_27___lambda__1___closed__3;
return x_94;
}
default:
{
obj* x_96; 
lean::dec(x_1);
x_96 = l_lean_parser_number_has__view_x_27___lambda__1___closed__3;
return x_96;
}
}
}
}
else
{
lean::dec(x_2);
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_98; obj* x_101; obj* x_102; 
x_98 = lean::cnstr_get(x_1, 0);
lean::inc(x_98);
lean::dec(x_1);
x_101 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_101, 0, x_98);
x_102 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_102, 0, x_101);
return x_102;
}
case 3:
{
obj* x_103; 
x_103 = l_lean_parser_number_has__view_x_27___lambda__1___closed__4;
return x_103;
}
default:
{
obj* x_105; 
lean::dec(x_1);
x_105 = l_lean_parser_number_has__view_x_27___lambda__1___closed__4;
return x_105;
}
}
}
}
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__2___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(2u);
x_2 = lean_name_mk_numeral(x_0, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_number_has__view_x_27___lambda__2___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(3u);
x_2 = lean_name_mk_numeral(x_0, x_1);
return x_2;
}
}
obj* l_lean_parser_number_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::box(0);
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_2; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_6 = l_option_map___rarg(x_5, x_2);
x_7 = lean::box(3);
x_8 = l_option_get__or__else___main___rarg(x_6, x_7);
x_9 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
x_10 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1;
x_11 = l_lean_parser_syntax_mk__node(x_10, x_9);
x_12 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_1);
x_13 = l_lean_parser_number;
x_14 = l_lean_parser_syntax_mk__node(x_13, x_12);
return x_14;
}
case 1:
{
obj* x_15; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_15 = lean::cnstr_get(x_0, 0);
lean::inc(x_15);
lean::dec(x_0);
x_18 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_19 = l_option_map___rarg(x_18, x_15);
x_20 = lean::box(3);
x_21 = l_option_get__or__else___main___rarg(x_19, x_20);
x_22 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_1);
x_23 = l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2;
x_24 = l_lean_parser_syntax_mk__node(x_23, x_22);
x_25 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_1);
x_26 = l_lean_parser_number;
x_27 = l_lean_parser_syntax_mk__node(x_26, x_25);
return x_27;
}
case 2:
{
obj* x_28; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_28 = lean::cnstr_get(x_0, 0);
lean::inc(x_28);
lean::dec(x_0);
x_31 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_32 = l_option_map___rarg(x_31, x_28);
x_33 = lean::box(3);
x_34 = l_option_get__or__else___main___rarg(x_32, x_33);
x_35 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_1);
x_36 = l_lean_parser_number_has__view_x_27___lambda__2___closed__1;
x_37 = l_lean_parser_syntax_mk__node(x_36, x_35);
x_38 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_1);
x_39 = l_lean_parser_number;
x_40 = l_lean_parser_syntax_mk__node(x_39, x_38);
return x_40;
}
default:
{
obj* x_41; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
x_41 = lean::cnstr_get(x_0, 0);
lean::inc(x_41);
lean::dec(x_0);
x_44 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_45 = l_option_map___rarg(x_44, x_41);
x_46 = lean::box(3);
x_47 = l_option_get__or__else___main___rarg(x_45, x_46);
x_48 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_1);
x_49 = l_lean_parser_number_has__view_x_27___lambda__2___closed__2;
x_50 = l_lean_parser_syntax_mk__node(x_49, x_48);
x_51 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_1);
x_52 = l_lean_parser_number;
x_53 = l_lean_parser_syntax_mk__node(x_52, x_51);
return x_53;
}
}
}
}
obj* _init_l_lean_parser_number_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_number_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_number_has__view_x_27;
return x_0;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_char_is__digit(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__2(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__3(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_char_is__digit(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__4(uint32 x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_5 = l_string_join___closed__1;
x_6 = lean::string_push(x_5, x_0);
x_7 = lean::string_iterator_remaining(x_2);
x_8 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__5(x_7, x_6, x_2);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
}
obj* l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
uint8 x_5; 
x_5 = lean::string_iterator_has_next(x_2);
if (x_5 == 0)
{
obj* x_7; 
lean::dec(x_0);
x_7 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_2);
x_9 = l_char_is__digit(x_8);
if (x_9 == 0)
{
obj* x_11; 
lean::dec(x_0);
x_11 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_11;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; 
x_12 = lean::mk_nat_obj(1u);
x_13 = lean::nat_sub(x_0, x_12);
lean::dec(x_0);
x_15 = lean::string_push(x_1, x_8);
x_16 = lean::string_iterator_next(x_2);
x_0 = x_13;
x_1 = x_15;
x_2 = x_16;
goto _start;
}
}
}
else
{
obj* x_19; 
lean::dec(x_0);
x_19 = l___private_init_lean_parser_parsec_3__mk__string__result___rarg(x_1, x_2);
return x_19;
}
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__6(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_1);
x_5 = lean::string_iterator_curr(x_0);
lean::dec(x_0);
x_7 = l_string_join___closed__1;
x_8 = lean::string_push(x_7, x_5);
x_9 = lean::string_iterator_remaining(x_2);
x_10 = l___private_init_lean_parser_parsec_4__take__while__aux___main___at_lean_parser_number_x_27___spec__7(x_9, x_8, x_2);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
obj* l_lean_parser_monad__parsec_take__while1___at_lean_parser_number_x_27___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
x_14 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_15 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_9);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_18; obj* x_20; uint32 x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_31; 
x_16 = lean::cnstr_get(x_15, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
x_20 = lean::cnstr_get(x_15, 2);
lean::inc(x_20);
lean::dec(x_15);
x_23 = lean::unbox_uint32(x_16);
x_24 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__2(x_23, x_0, x_18, x_11);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_24, 1);
lean::inc(x_27);
lean::dec(x_24);
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_25);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_27);
return x_31;
}
else
{
obj* x_33; uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_33 = lean::cnstr_get(x_15, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get_scalar<uint8>(x_15, sizeof(void*)*1);
if (lean::is_exclusive(x_15)) {
 lean::cnstr_release(x_15, 0);
 x_36 = x_15;
} else {
 lean::dec(x_15);
 x_36 = lean::box(0);
}
if (lean::is_scalar(x_36)) {
 x_37 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_37 = x_36;
}
lean::cnstr_set(x_37, 0, x_33);
lean::cnstr_set_scalar(x_37, sizeof(void*)*1, x_35);
x_38 = x_37;
if (lean::is_scalar(x_13)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_13;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_11);
return x_39;
}
}
else
{
uint32 x_40; uint8 x_41; 
x_40 = lean::string_iterator_curr(x_1);
x_41 = l_char_is__digit(x_40);
if (x_41 == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; obj* x_48; obj* x_50; obj* x_51; obj* x_53; obj* x_55; obj* x_56; obj* x_57; 
x_42 = l_char_quote__core(x_40);
x_43 = l_char_has__repr___closed__1;
x_44 = lean::string_append(x_43, x_42);
lean::dec(x_42);
x_46 = lean::string_append(x_44, x_43);
x_47 = lean::box(0);
x_48 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_50 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_46, x_48, x_47, x_47, x_0, x_1, x_2);
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_50, 1);
lean::inc(x_53);
if (lean::is_exclusive(x_50)) {
 lean::cnstr_release(x_50, 0);
 lean::cnstr_release(x_50, 1);
 x_55 = x_50;
} else {
 lean::dec(x_50);
 x_55 = lean::box(0);
}
x_56 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_51);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_60; obj* x_62; uint32 x_65; obj* x_66; obj* x_67; obj* x_69; obj* x_72; obj* x_73; 
x_58 = lean::cnstr_get(x_57, 0);
lean::inc(x_58);
x_60 = lean::cnstr_get(x_57, 1);
lean::inc(x_60);
x_62 = lean::cnstr_get(x_57, 2);
lean::inc(x_62);
lean::dec(x_57);
x_65 = lean::unbox_uint32(x_58);
x_66 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__4(x_65, x_0, x_60, x_53);
x_67 = lean::cnstr_get(x_66, 0);
lean::inc(x_67);
x_69 = lean::cnstr_get(x_66, 1);
lean::inc(x_69);
lean::dec(x_66);
x_72 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_67);
if (lean::is_scalar(x_55)) {
 x_73 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_73 = x_55;
}
lean::cnstr_set(x_73, 0, x_72);
lean::cnstr_set(x_73, 1, x_69);
return x_73;
}
else
{
obj* x_75; uint8 x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_0);
x_75 = lean::cnstr_get(x_57, 0);
lean::inc(x_75);
x_77 = lean::cnstr_get_scalar<uint8>(x_57, sizeof(void*)*1);
if (lean::is_exclusive(x_57)) {
 lean::cnstr_release(x_57, 0);
 x_78 = x_57;
} else {
 lean::dec(x_57);
 x_78 = lean::box(0);
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_75);
lean::cnstr_set_scalar(x_79, sizeof(void*)*1, x_77);
x_80 = x_79;
if (lean::is_scalar(x_55)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_55;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_53);
return x_81;
}
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_87; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
lean::inc(x_1);
x_83 = lean::string_iterator_next(x_1);
x_84 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__6(x_1, x_0, x_83, x_2);
x_85 = lean::cnstr_get(x_84, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
if (lean::is_exclusive(x_84)) {
 lean::cnstr_release(x_84, 0);
 lean::cnstr_release(x_84, 1);
 x_89 = x_84;
} else {
 lean::dec(x_84);
 x_89 = lean::box(0);
}
x_90 = lean::box(0);
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_90, x_85);
if (lean::is_scalar(x_89)) {
 x_92 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_92 = x_89;
}
lean::cnstr_set(x_92, 0, x_91);
lean::cnstr_set(x_92, 1, x_87);
return x_92;
}
}
}
}
obj* l_list_map___main___at_lean_parser_number_x_27___spec__9___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; 
x_4 = lean::cnstr_get(x_0, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_0, 1);
lean::inc(x_6);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_8 = x_0;
} else {
 lean::dec(x_0);
 x_8 = lean::box(0);
}
x_9 = lean::apply_3(x_6, x_1, x_2, x_3);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::dec(x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_15; obj* x_17; obj* x_19; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_15 = lean::cnstr_get(x_10, 0);
lean::inc(x_15);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_10, 2);
lean::inc(x_19);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_21 = x_10;
} else {
 lean::dec(x_10);
 x_21 = lean::box(0);
}
x_22 = lean::box(0);
x_23 = lean_name_mk_numeral(x_22, x_4);
x_24 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_24, 0, x_15);
lean::cnstr_set(x_24, 1, x_22);
x_25 = l_lean_parser_syntax_mk__node(x_23, x_24);
x_26 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_21)) {
 x_27 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_27 = x_21;
}
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set(x_27, 1, x_17);
lean::cnstr_set(x_27, 2, x_26);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_27);
if (lean::is_scalar(x_8)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_8;
}
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_12);
return x_29;
}
else
{
obj* x_31; uint8 x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_4);
x_31 = lean::cnstr_get(x_10, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_34 = x_10;
} else {
 lean::dec(x_10);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set_scalar(x_35, sizeof(void*)*1, x_33);
x_36 = x_35;
if (lean::is_scalar(x_8)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_8;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_12);
return x_37;
}
}
}
obj* l_list_map___main___at_lean_parser_number_x_27___spec__9(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_0, 1);
lean::inc(x_4);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 lean::cnstr_release(x_0, 1);
 x_6 = x_0;
} else {
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_list_map___main___at_lean_parser_number_x_27___spec__9___lambda__1), 4, 1);
lean::closure_set(x_7, 0, x_2);
x_8 = l_list_map___main___at_lean_parser_number_x_27___spec__9(x_4);
if (lean::is_scalar(x_6)) {
 x_9 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_9 = x_6;
}
lean::cnstr_set(x_9, 0, x_7);
lean::cnstr_set(x_9, 1, x_8);
return x_9;
}
}
}
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_number_x_27___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_10; obj* x_13; obj* x_14; obj* x_16; 
lean::inc(x_4);
x_13 = lean::apply_3(x_1, x_3, x_4, x_5);
x_14 = lean::cnstr_get(x_13, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_13, 1);
lean::inc(x_16);
lean::dec(x_13);
if (lean::obj_tag(x_14) == 0)
{
obj* x_19; obj* x_21; obj* x_23; obj* x_25; obj* x_26; 
x_19 = lean::cnstr_get(x_14, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_14, 1);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_14, 2);
lean::inc(x_23);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 0);
 lean::cnstr_release(x_14, 1);
 lean::cnstr_release(x_14, 2);
 x_25 = x_14;
} else {
 lean::dec(x_14);
 x_25 = lean::box(0);
}
if (lean::obj_tag(x_2) == 0)
{
obj* x_28; obj* x_30; obj* x_32; 
x_28 = lean::cnstr_get(x_2, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_2, 1);
lean::inc(x_30);
x_32 = lean::cnstr_get(x_2, 2);
lean::inc(x_32);
if (lean::obj_tag(x_32) == 0)
{
obj* x_35; obj* x_36; uint8 x_38; 
lean::dec(x_25);
x_35 = lean::string_iterator_offset(x_21);
x_36 = lean::string_iterator_offset(x_30);
lean::dec(x_30);
x_38 = lean::nat_dec_lt(x_35, x_36);
if (x_38 == 0)
{
uint8 x_39; 
x_39 = lean::nat_dec_lt(x_36, x_35);
lean::dec(x_35);
lean::dec(x_36);
if (x_39 == 0)
{
obj* x_42; obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_42 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_42, 0, x_19);
lean::cnstr_set(x_42, 1, x_28);
lean::inc(x_21);
x_44 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_44, 0, x_42);
lean::cnstr_set(x_44, 1, x_21);
lean::cnstr_set(x_44, 2, x_32);
x_45 = l_lean_parser_finish__comment__block___closed__2;
x_46 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_46, 0, x_44);
lean::cnstr_set(x_46, 1, x_21);
lean::cnstr_set(x_46, 2, x_45);
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_46);
x_9 = x_47;
x_10 = x_16;
goto lbl_11;
}
else
{
obj* x_49; obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_28);
x_49 = lean::box(0);
x_50 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_50, 0, x_19);
lean::cnstr_set(x_50, 1, x_49);
lean::inc(x_21);
x_52 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_52, 0, x_50);
lean::cnstr_set(x_52, 1, x_21);
lean::cnstr_set(x_52, 2, x_32);
x_53 = l_lean_parser_finish__comment__block___closed__2;
x_54 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_54, 0, x_52);
lean::cnstr_set(x_54, 1, x_21);
lean::cnstr_set(x_54, 2, x_53);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_54);
x_9 = x_55;
x_10 = x_16;
goto lbl_11;
}
}
else
{
obj* x_60; obj* x_62; obj* x_63; 
lean::dec(x_35);
lean::dec(x_36);
lean::dec(x_28);
lean::dec(x_19);
x_60 = l_lean_parser_finish__comment__block___closed__2;
lean::inc(x_2);
x_62 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_62, 0, x_2);
lean::cnstr_set(x_62, 1, x_21);
lean::cnstr_set(x_62, 2, x_60);
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_62);
x_9 = x_63;
x_10 = x_16;
goto lbl_11;
}
}
else
{
obj* x_67; 
lean::dec(x_28);
lean::dec(x_30);
lean::dec(x_32);
x_67 = lean::box(0);
x_26 = x_67;
goto lbl_27;
}
}
else
{
obj* x_68; 
x_68 = lean::box(0);
x_26 = x_68;
goto lbl_27;
}
lbl_27:
{
obj* x_70; obj* x_71; obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_26);
x_70 = lean::box(0);
x_71 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_71, 0, x_19);
lean::cnstr_set(x_71, 1, x_70);
lean::inc(x_21);
if (lean::is_scalar(x_25)) {
 x_73 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_73 = x_25;
}
lean::cnstr_set(x_73, 0, x_71);
lean::cnstr_set(x_73, 1, x_21);
lean::cnstr_set(x_73, 2, x_70);
x_74 = l_lean_parser_finish__comment__block___closed__2;
x_75 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_75, 0, x_73);
lean::cnstr_set(x_75, 1, x_21);
lean::cnstr_set(x_75, 2, x_74);
x_76 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_23, x_75);
x_9 = x_76;
x_10 = x_16;
goto lbl_11;
}
}
else
{
obj* x_77; uint8 x_79; obj* x_80; obj* x_81; obj* x_82; 
x_77 = lean::cnstr_get(x_14, 0);
lean::inc(x_77);
x_79 = lean::cnstr_get_scalar<uint8>(x_14, sizeof(void*)*1);
if (lean::is_exclusive(x_14)) {
 lean::cnstr_release(x_14, 0);
 x_80 = x_14;
} else {
 lean::dec(x_14);
 x_80 = lean::box(0);
}
if (lean::is_scalar(x_80)) {
 x_81 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_81 = x_80;
}
lean::cnstr_set(x_81, 0, x_77);
lean::cnstr_set_scalar(x_81, sizeof(void*)*1, x_79);
x_82 = x_81;
x_9 = x_82;
x_10 = x_16;
goto lbl_11;
}
lbl_8:
{
if (lean::obj_tag(x_6) == 0)
{
obj* x_83; obj* x_85; obj* x_86; obj* x_87; obj* x_88; 
x_83 = lean::cnstr_get(x_6, 0);
lean::inc(x_83);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_85 = x_6;
} else {
 lean::dec(x_6);
 x_85 = lean::box(0);
}
x_86 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_85)) {
 x_87 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_87 = x_85;
}
lean::cnstr_set(x_87, 0, x_83);
lean::cnstr_set(x_87, 1, x_4);
lean::cnstr_set(x_87, 2, x_86);
x_88 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_7);
return x_88;
}
else
{
obj* x_90; 
lean::dec(x_4);
x_90 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_90, 0, x_6);
lean::cnstr_set(x_90, 1, x_7);
return x_90;
}
}
lbl_11:
{
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_0);
lean::dec(x_2);
x_6 = x_9;
x_7 = x_10;
goto lbl_8;
}
else
{
obj* x_93; obj* x_95; obj* x_96; 
x_93 = lean::cnstr_get(x_9, 0);
lean::inc(x_93);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_95 = x_9;
} else {
 lean::dec(x_9);
 x_95 = lean::box(0);
}
x_96 = lean::cnstr_get(x_93, 0);
lean::inc(x_96);
if (lean::obj_tag(x_2) == 0)
{
obj* x_101; obj* x_102; 
lean::dec(x_0);
lean::dec(x_93);
lean::dec(x_95);
x_101 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_102 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_102, 0, x_2);
lean::cnstr_set(x_102, 1, x_96);
lean::cnstr_set(x_102, 2, x_101);
x_6 = x_102;
x_7 = x_10;
goto lbl_8;
}
else
{
obj* x_103; obj* x_105; obj* x_106; obj* x_108; uint8 x_110; 
x_103 = lean::cnstr_get(x_2, 0);
lean::inc(x_103);
x_105 = lean::string_iterator_offset(x_96);
x_106 = lean::cnstr_get(x_103, 0);
lean::inc(x_106);
x_108 = lean::string_iterator_offset(x_106);
lean::dec(x_106);
x_110 = lean::nat_dec_lt(x_105, x_108);
if (x_110 == 0)
{
uint8 x_112; 
lean::dec(x_2);
x_112 = lean::nat_dec_lt(x_108, x_105);
lean::dec(x_108);
if (x_112 == 0)
{
obj* x_114; obj* x_115; uint8 x_117; 
x_114 = l_lean_parser_parsec__t_merge___rarg(x_93, x_103);
x_115 = lean::string_iterator_offset(x_0);
lean::dec(x_0);
x_117 = lean::nat_dec_lt(x_115, x_105);
lean::dec(x_105);
lean::dec(x_115);
if (x_117 == 0)
{
uint8 x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; 
x_120 = 0;
if (lean::is_scalar(x_95)) {
 x_121 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_121 = x_95;
}
lean::cnstr_set(x_121, 0, x_114);
lean::cnstr_set_scalar(x_121, sizeof(void*)*1, x_120);
x_122 = x_121;
x_123 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_124 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_124, 0, x_122);
lean::cnstr_set(x_124, 1, x_96);
lean::cnstr_set(x_124, 2, x_123);
x_6 = x_124;
x_7 = x_10;
goto lbl_8;
}
else
{
uint8 x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; 
x_125 = 1;
if (lean::is_scalar(x_95)) {
 x_126 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_126 = x_95;
}
lean::cnstr_set(x_126, 0, x_114);
lean::cnstr_set_scalar(x_126, sizeof(void*)*1, x_125);
x_127 = x_126;
x_128 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_129 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_129, 0, x_127);
lean::cnstr_set(x_129, 1, x_96);
lean::cnstr_set(x_129, 2, x_128);
x_6 = x_129;
x_7 = x_10;
goto lbl_8;
}
}
else
{
uint8 x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; 
lean::dec(x_0);
lean::dec(x_103);
lean::dec(x_105);
x_133 = 1;
if (lean::is_scalar(x_95)) {
 x_134 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_134 = x_95;
}
lean::cnstr_set(x_134, 0, x_93);
lean::cnstr_set_scalar(x_134, sizeof(void*)*1, x_133);
x_135 = x_134;
x_136 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_137 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_137, 0, x_135);
lean::cnstr_set(x_137, 1, x_96);
lean::cnstr_set(x_137, 2, x_136);
x_6 = x_137;
x_7 = x_10;
goto lbl_8;
}
}
else
{
obj* x_144; obj* x_145; 
lean::dec(x_0);
lean::dec(x_108);
lean::dec(x_103);
lean::dec(x_105);
lean::dec(x_93);
lean::dec(x_95);
x_144 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_145 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_145, 0, x_2);
lean::cnstr_set(x_145, 1, x_96);
lean::cnstr_set(x_145, 2, x_144);
x_6 = x_145;
x_7 = x_10;
goto lbl_8;
}
}
}
}
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_number_x_27___spec__12___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; uint8 x_7; obj* x_8; obj* x_9; 
x_5 = l_option_get__or__else___main___rarg(x_2, x_4);
x_6 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_0);
lean::cnstr_set(x_6, 2, x_1);
lean::cnstr_set(x_6, 3, x_3);
x_7 = 0;
x_8 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set_scalar(x_8, sizeof(void*)*1, x_7);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_number_x_27___spec__12(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_number_x_27___spec__12___rarg), 5, 0);
return x_2;
}
}
obj* l_list_mfoldr___main___at_lean_parser_number_x_27___spec__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = l_list_mfoldr___main___at_lean_parser_monad__parsec_longest__match___spec__2___rarg___closed__1;
x_8 = l_mjoin___rarg___closed__1;
x_9 = l_lean_parser_monad__parsec_error___at_lean_parser_number_x_27___spec__12___rarg(x_7, x_8, x_6, x_6, x_0);
x_10 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_11 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_11, 0, x_9);
lean::cnstr_set(x_11, 1, x_3);
lean::cnstr_set(x_11, 2, x_10);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_4);
return x_12;
}
else
{
obj* x_13; obj* x_15; obj* x_20; obj* x_21; obj* x_23; obj* x_25; 
x_13 = lean::cnstr_get(x_1, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_1, 1);
lean::inc(x_15);
lean::dec(x_1);
lean::inc(x_2);
lean::inc(x_0);
x_20 = l_list_mfoldr___main___at_lean_parser_number_x_27___spec__13(x_0, x_15, x_2, x_3, x_4);
x_21 = lean::cnstr_get(x_20, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_20, 1);
lean::inc(x_23);
if (lean::is_exclusive(x_20)) {
 lean::cnstr_release(x_20, 0);
 lean::cnstr_release(x_20, 1);
 x_25 = x_20;
} else {
 lean::dec(x_20);
 x_25 = lean::box(0);
}
if (lean::obj_tag(x_21) == 0)
{
obj* x_26; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_36; obj* x_39; obj* x_40; 
x_26 = lean::cnstr_get(x_21, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_21, 1);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_21, 2);
lean::inc(x_30);
lean::dec(x_21);
x_33 = l_lean_parser_parsec__t_lookahead___at_lean_parser_number_x_27___spec__11(x_0, x_13, x_26, x_2, x_28, x_23);
x_34 = lean::cnstr_get(x_33, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
lean::dec(x_33);
x_39 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_30, x_34);
if (lean::is_scalar(x_25)) {
 x_40 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_40 = x_25;
}
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_36);
return x_40;
}
else
{
obj* x_44; uint8 x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_13);
x_44 = lean::cnstr_get(x_21, 0);
lean::inc(x_44);
x_46 = lean::cnstr_get_scalar<uint8>(x_21, sizeof(void*)*1);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_release(x_21, 0);
 x_47 = x_21;
} else {
 lean::dec(x_21);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_44);
lean::cnstr_set_scalar(x_48, sizeof(void*)*1, x_46);
x_49 = x_48;
if (lean::is_scalar(x_25)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_25;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_23);
return x_50;
}
}
}
}
obj* l_lean_parser_monad__parsec_longest__match___at_lean_parser_number_x_27___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_13; 
x_4 = lean::mk_nat_obj(0u);
x_5 = l_list_enum__from___main___rarg(x_4, x_0);
x_6 = l_list_map___main___at_lean_parser_number_x_27___spec__9(x_5);
lean::inc(x_2);
x_8 = l_list_mfoldr___main___at_lean_parser_number_x_27___spec__13(x_2, x_6, x_1, x_2, x_3);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 2);
lean::inc(x_16);
lean::dec(x_9);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_14);
x_20 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_21 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_20, x_19);
if (lean::is_scalar(x_13)) {
 x_22 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_22 = x_13;
}
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_11);
return x_22;
}
else
{
obj* x_23; uint8 x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_23 = lean::cnstr_get(x_9, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_26 = x_9;
} else {
 lean::dec(x_9);
 x_26 = lean::box(0);
}
if (lean::is_scalar(x_26)) {
 x_27 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_27 = x_26;
}
lean::cnstr_set(x_27, 0, x_23);
lean::cnstr_set_scalar(x_27, sizeof(void*)*1, x_25);
x_28 = x_27;
x_29 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_29, x_28);
if (lean::is_scalar(x_13)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_13;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_11);
return x_31;
}
}
}
obj* l_lean_parser_combinators_longest__choice___at_lean_parser_number_x_27___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_10; 
lean::inc(x_1);
x_5 = l_lean_parser_monad__parsec_longest__match___at_lean_parser_number_x_27___spec__10(x_0, x_1, x_2, x_3);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 x_10 = x_5;
} else {
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::obj_tag(x_6) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_17; 
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_6, 2);
lean::inc(x_15);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_17 = x_6;
} else {
 lean::dec(x_6);
 x_17 = lean::box(0);
}
if (lean::obj_tag(x_11) == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_28; obj* x_29; 
lean::dec(x_17);
x_19 = lean::box(0);
x_20 = l___private_init_lean_parser_combinators_1__many1__aux___main___rarg___closed__1;
x_21 = l_mjoin___rarg___closed__1;
x_22 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_20, x_21, x_19, x_19, x_1, x_13, x_8);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_23);
if (lean::is_scalar(x_10)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_10;
}
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_25);
return x_29;
}
else
{
obj* x_31; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_1);
x_31 = lean::cnstr_get(x_11, 0);
lean::inc(x_31);
lean::dec(x_11);
x_34 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_17)) {
 x_35 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_35 = x_17;
}
lean::cnstr_set(x_35, 0, x_31);
lean::cnstr_set(x_35, 1, x_13);
lean::cnstr_set(x_35, 2, x_34);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_35);
if (lean::is_scalar(x_10)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_10;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_8);
return x_37;
}
}
else
{
obj* x_39; uint8 x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
lean::dec(x_1);
x_39 = lean::cnstr_get(x_6, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_42 = x_6;
} else {
 lean::dec(x_6);
 x_42 = lean::box(0);
}
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_39);
lean::cnstr_set_scalar(x_43, sizeof(void*)*1, x_41);
x_44 = x_43;
if (lean::is_scalar(x_10)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_10;
}
lean::cnstr_set(x_45, 0, x_44);
lean::cnstr_set(x_45, 1, x_8);
return x_45;
}
}
}
obj* l_lean_parser_number_x_27___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_monad__parsec_take__while1___at_lean_parser_number_x_27___spec__1(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = l_lean_parser_mk__raw__res(x_0, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* l_lean_parser_number_x_27___lambda__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_parse__bin__lit(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = l_lean_parser_mk__raw__res(x_0, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* l_lean_parser_number_x_27___lambda__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_parse__oct__lit(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = l_lean_parser_mk__raw__res(x_0, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* l_lean_parser_number_x_27___lambda__4(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_parse__hex__lit(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = l_lean_parser_mk__raw__res(x_0, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* _init_l_lean_parser_number_x_27___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_4; obj* x_5; obj* x_7; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_x_27___lambda__1), 4, 0);
lean::inc(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_4, 0, x_1);
lean::closure_set(x_4, 1, x_2);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_x_27___lambda__2), 4, 0);
lean::inc(x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_7, 0, x_1);
lean::closure_set(x_7, 1, x_5);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_x_27___lambda__3), 4, 0);
lean::inc(x_1);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_10, 0, x_1);
lean::closure_set(x_10, 1, x_8);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_x_27___lambda__4), 4, 0);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_12, 0, x_1);
lean::closure_set(x_12, 1, x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_10);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_7);
lean::cnstr_set(x_16, 1, x_15);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_4);
lean::cnstr_set(x_17, 1, x_16);
x_18 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_longest__choice___at_lean_parser_number_x_27___spec__8), 4, 1);
lean::closure_set(x_18, 0, x_17);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_13);
return x_19;
}
}
obj* l_lean_parser_number_x_27(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = l_lean_parser_number;
x_4 = l_lean_parser_number_x_27___closed__1;
x_5 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15(x_3, x_4, x_0, x_1, x_2);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__2(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__4___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint32 x_4; obj* x_5; 
x_4 = lean::unbox_uint32(x_0);
x_5 = l_lean_parser_monad__parsec_take__while__cont___at_lean_parser_number_x_27___spec__4(x_4, x_1, x_2, x_3);
return x_5;
}
}
obj* _init_l_lean_parser_string__lit() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_0 = lean::box(0);
x_1 = lean::mk_string("lean");
x_2 = lean_name_mk_string(x_0, x_1);
x_3 = lean::mk_string("parser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean::mk_string("string_lit");
x_6 = lean_name_mk_string(x_4, x_5);
return x_6;
}
}
obj* l_lean_parser_string__lit_has__view_x_27___lambda__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_syntax_as__node___main(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_6; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 x_5 = x_1;
} else {
 lean::dec(x_1);
 x_5 = lean::box(0);
}
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::dec(x_3);
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; 
lean::dec(x_5);
x_10 = lean::box(0);
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
lean::dec(x_6);
switch (lean::obj_tag(x_11)) {
case 0:
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
if (lean::is_scalar(x_5)) {
 x_17 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_17 = x_5;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
case 3:
{
obj* x_19; 
lean::dec(x_5);
x_19 = lean::box(0);
return x_19;
}
default:
{
obj* x_22; 
lean::dec(x_11);
lean::dec(x_5);
x_22 = lean::box(0);
return x_22;
}
}
}
}
}
}
obj* l_lean_parser_string__lit_has__view_x_27___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_1 = l_lean_parser_raw_view___rarg___lambda__3___closed__1;
x_2 = l_option_map___rarg(x_1, x_0);
x_3 = lean::box(3);
x_4 = l_option_get__or__else___main___rarg(x_2, x_3);
x_5 = lean::box(0);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_4);
lean::cnstr_set(x_6, 1, x_5);
x_7 = l_lean_parser_string__lit;
x_8 = l_lean_parser_syntax_mk__node(x_7, x_6);
return x_8;
}
}
obj* _init_l_lean_parser_string__lit_has__view_x_27() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_string__lit_has__view_x_27___lambda__1), 1, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_string__lit_has__view_x_27___lambda__2), 1, 0);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* _init_l_lean_parser_string__lit_has__view() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_string__lit_has__view_x_27;
return x_0;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_x_27___spec__4___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_5 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_5, 0, x_1);
x_6 = lean::box(0);
x_7 = l_mjoin___rarg___closed__1;
x_8 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_0, x_7, x_5, x_6, x_2, x_3, x_4);
return x_8;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_x_27___spec__4(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_x_27___spec__4___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_digit___at_lean_parser_string__lit_x_27___spec__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::string_iterator_has_next(x_1);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_4 = lean::box(0);
x_5 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
x_7 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_0, x_1, x_2);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
x_13 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_14 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_8);
if (lean::is_scalar(x_12)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_12;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_10);
return x_15;
}
else
{
uint32 x_16; uint8 x_17; 
x_16 = lean::string_iterator_curr(x_1);
x_17 = l_char_is__digit(x_16);
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_28; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_18 = l_char_quote__core(x_16);
x_19 = l_char_has__repr___closed__1;
x_20 = lean::string_append(x_19, x_18);
lean::dec(x_18);
x_22 = lean::string_append(x_20, x_19);
x_23 = lean::box(0);
x_24 = l_mjoin___rarg___closed__1;
x_25 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_22, x_24, x_23, x_23, x_0, x_1, x_2);
x_26 = lean::cnstr_get(x_25, 0);
lean::inc(x_26);
x_28 = lean::cnstr_get(x_25, 1);
lean::inc(x_28);
if (lean::is_exclusive(x_25)) {
 lean::cnstr_release(x_25, 0);
 lean::cnstr_release(x_25, 1);
 x_30 = x_25;
} else {
 lean::dec(x_25);
 x_30 = lean::box(0);
}
x_31 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_31, x_26);
if (lean::is_scalar(x_30)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_30;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_28);
return x_33;
}
else
{
obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_0);
x_35 = lean::string_iterator_next(x_1);
x_36 = lean::box(0);
x_37 = lean::box_uint32(x_16);
x_38 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_35);
lean::cnstr_set(x_38, 2, x_36);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_2);
return x_39;
}
}
}
}
obj* _init_l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = lean::mk_string("hexadecimal");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_8; obj* x_9; obj* x_11; 
lean::inc(x_1);
lean::inc(x_0);
x_8 = l_lean_parser_monad__parsec_digit___at_lean_parser_string__lit_x_27___spec__6(x_0, x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; obj* x_18; obj* x_20; uint32 x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_9, 2);
lean::inc(x_18);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 lean::cnstr_release(x_9, 2);
 x_20 = x_9;
} else {
 lean::dec(x_9);
 x_20 = lean::box(0);
}
x_21 = lean::unbox_uint32(x_14);
x_22 = lean::uint32_to_nat(x_21);
x_23 = l___private_init_data_string_basic_4__to__nat__core___main___closed__1;
x_24 = lean::nat_sub(x_22, x_23);
lean::dec(x_22);
x_26 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_20)) {
 x_27 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_27 = x_20;
}
lean::cnstr_set(x_27, 0, x_24);
lean::cnstr_set(x_27, 1, x_16);
lean::cnstr_set(x_27, 2, x_26);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_27);
x_3 = x_28;
x_4 = x_11;
goto lbl_5;
}
else
{
obj* x_29; uint8 x_31; obj* x_32; obj* x_33; obj* x_34; 
x_29 = lean::cnstr_get(x_9, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_32 = x_9;
} else {
 lean::dec(x_9);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_29);
lean::cnstr_set_scalar(x_33, sizeof(void*)*1, x_31);
x_34 = x_33;
x_3 = x_34;
x_4 = x_11;
goto lbl_5;
}
lbl_5:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_1);
lean::dec(x_0);
x_37 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_38 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_3, x_37);
x_39 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_4);
return x_39;
}
else
{
obj* x_40; uint8 x_42; obj* x_43; obj* x_44; obj* x_46; obj* x_47; 
x_40 = lean::cnstr_get(x_3, 0);
lean::inc(x_40);
x_42 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (x_42 == 0)
{
uint8 x_50; 
lean::dec(x_3);
x_50 = lean::string_iterator_has_next(x_1);
if (x_50 == 0)
{
obj* x_51; obj* x_52; obj* x_53; obj* x_56; obj* x_57; obj* x_59; obj* x_62; obj* x_63; 
x_51 = lean::box(0);
x_52 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_53 = l_mjoin___rarg___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_56 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_52, x_53, x_51, x_51, x_0, x_1, x_4);
x_57 = lean::cnstr_get(x_56, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
lean::dec(x_56);
x_62 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_62, x_57);
x_46 = x_63;
x_47 = x_59;
goto lbl_48;
}
else
{
uint32 x_64; uint32 x_65; uint8 x_66; uint8 x_68; 
x_64 = lean::string_iterator_curr(x_1);
x_65 = 97;
x_68 = x_65 <= x_64;
if (x_68 == 0)
{
obj* x_69; obj* x_70; obj* x_71; obj* x_73; obj* x_74; obj* x_75; obj* x_78; obj* x_79; obj* x_81; obj* x_84; obj* x_85; 
x_69 = l_char_quote__core(x_64);
x_70 = l_char_has__repr___closed__1;
x_71 = lean::string_append(x_70, x_69);
lean::dec(x_69);
x_73 = lean::string_append(x_71, x_70);
x_74 = lean::box(0);
x_75 = l_mjoin___rarg___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_78 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_73, x_75, x_74, x_74, x_0, x_1, x_4);
x_79 = lean::cnstr_get(x_78, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_78, 1);
lean::inc(x_81);
lean::dec(x_78);
x_84 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_85 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_84, x_79);
x_46 = x_85;
x_47 = x_81;
goto lbl_48;
}
else
{
uint8 x_86; 
x_86 = 1;
x_66 = x_86;
goto lbl_67;
}
lbl_67:
{
uint32 x_87; uint8 x_88; 
x_87 = 102;
x_88 = x_64 <= x_87;
if (x_88 == 0)
{
obj* x_89; obj* x_90; obj* x_91; obj* x_93; obj* x_94; obj* x_95; obj* x_98; obj* x_99; obj* x_101; obj* x_104; obj* x_105; 
x_89 = l_char_quote__core(x_64);
x_90 = l_char_has__repr___closed__1;
x_91 = lean::string_append(x_90, x_89);
lean::dec(x_89);
x_93 = lean::string_append(x_91, x_90);
x_94 = lean::box(0);
x_95 = l_mjoin___rarg___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_98 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_93, x_95, x_94, x_94, x_0, x_1, x_4);
x_99 = lean::cnstr_get(x_98, 0);
lean::inc(x_99);
x_101 = lean::cnstr_get(x_98, 1);
lean::inc(x_101);
lean::dec(x_98);
x_104 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_105 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_104, x_99);
x_46 = x_105;
x_47 = x_101;
goto lbl_48;
}
else
{
if (x_66 == 0)
{
obj* x_106; obj* x_107; obj* x_108; obj* x_110; obj* x_111; obj* x_112; obj* x_115; obj* x_116; obj* x_118; obj* x_121; obj* x_122; 
x_106 = l_char_quote__core(x_64);
x_107 = l_char_has__repr___closed__1;
x_108 = lean::string_append(x_107, x_106);
lean::dec(x_106);
x_110 = lean::string_append(x_108, x_107);
x_111 = lean::box(0);
x_112 = l_mjoin___rarg___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_115 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_110, x_112, x_111, x_111, x_0, x_1, x_4);
x_116 = lean::cnstr_get(x_115, 0);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_115, 1);
lean::inc(x_118);
lean::dec(x_115);
x_121 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_122 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_121, x_116);
x_46 = x_122;
x_47 = x_118;
goto lbl_48;
}
else
{
obj* x_124; obj* x_125; obj* x_126; obj* x_127; 
lean::inc(x_1);
x_124 = lean::string_iterator_next(x_1);
x_125 = lean::box(0);
x_126 = lean::box_uint32(x_64);
x_127 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_127, 0, x_126);
lean::cnstr_set(x_127, 1, x_124);
lean::cnstr_set(x_127, 2, x_125);
x_46 = x_127;
x_47 = x_4;
goto lbl_48;
}
}
}
}
}
else
{
obj* x_131; obj* x_132; obj* x_133; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_40);
x_131 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_132 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_3, x_131);
x_133 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_133, 0, x_132);
lean::cnstr_set(x_133, 1, x_4);
return x_133;
}
lbl_45:
{
if (lean::obj_tag(x_43) == 0)
{
obj* x_136; obj* x_137; obj* x_138; obj* x_139; 
lean::dec(x_1);
lean::dec(x_0);
x_136 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_40, x_43);
x_137 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_138 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_136, x_137);
x_139 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_139, 0, x_138);
lean::cnstr_set(x_139, 1, x_44);
return x_139;
}
else
{
obj* x_140; uint8 x_142; obj* x_143; obj* x_144; 
x_140 = lean::cnstr_get(x_43, 0);
lean::inc(x_140);
x_142 = lean::cnstr_get_scalar<uint8>(x_43, sizeof(void*)*1);
if (x_142 == 0)
{
uint8 x_147; 
lean::dec(x_43);
x_147 = lean::string_iterator_has_next(x_1);
if (x_147 == 0)
{
obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_154; obj* x_157; obj* x_158; 
x_148 = lean::box(0);
x_149 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_150 = l_mjoin___rarg___closed__1;
x_151 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_149, x_150, x_148, x_148, x_0, x_1, x_44);
x_152 = lean::cnstr_get(x_151, 0);
lean::inc(x_152);
x_154 = lean::cnstr_get(x_151, 1);
lean::inc(x_154);
lean::dec(x_151);
x_157 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_158 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_157, x_152);
x_143 = x_158;
x_144 = x_154;
goto lbl_145;
}
else
{
uint32 x_159; uint32 x_160; uint8 x_161; uint8 x_163; 
x_159 = lean::string_iterator_curr(x_1);
x_160 = 65;
x_163 = x_160 <= x_159;
if (x_163 == 0)
{
obj* x_164; obj* x_165; obj* x_166; obj* x_168; obj* x_169; obj* x_170; obj* x_171; obj* x_172; obj* x_174; obj* x_177; obj* x_178; 
x_164 = l_char_quote__core(x_159);
x_165 = l_char_has__repr___closed__1;
x_166 = lean::string_append(x_165, x_164);
lean::dec(x_164);
x_168 = lean::string_append(x_166, x_165);
x_169 = lean::box(0);
x_170 = l_mjoin___rarg___closed__1;
x_171 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_168, x_170, x_169, x_169, x_0, x_1, x_44);
x_172 = lean::cnstr_get(x_171, 0);
lean::inc(x_172);
x_174 = lean::cnstr_get(x_171, 1);
lean::inc(x_174);
lean::dec(x_171);
x_177 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_178 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_177, x_172);
x_143 = x_178;
x_144 = x_174;
goto lbl_145;
}
else
{
uint8 x_179; 
x_179 = 1;
x_161 = x_179;
goto lbl_162;
}
lbl_162:
{
uint32 x_180; uint8 x_181; 
x_180 = 70;
x_181 = x_159 <= x_180;
if (x_181 == 0)
{
obj* x_182; obj* x_183; obj* x_184; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_192; obj* x_195; obj* x_196; 
x_182 = l_char_quote__core(x_159);
x_183 = l_char_has__repr___closed__1;
x_184 = lean::string_append(x_183, x_182);
lean::dec(x_182);
x_186 = lean::string_append(x_184, x_183);
x_187 = lean::box(0);
x_188 = l_mjoin___rarg___closed__1;
x_189 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_186, x_188, x_187, x_187, x_0, x_1, x_44);
x_190 = lean::cnstr_get(x_189, 0);
lean::inc(x_190);
x_192 = lean::cnstr_get(x_189, 1);
lean::inc(x_192);
lean::dec(x_189);
x_195 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_196 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_195, x_190);
x_143 = x_196;
x_144 = x_192;
goto lbl_145;
}
else
{
if (x_161 == 0)
{
obj* x_197; obj* x_198; obj* x_199; obj* x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_207; obj* x_210; obj* x_211; 
x_197 = l_char_quote__core(x_159);
x_198 = l_char_has__repr___closed__1;
x_199 = lean::string_append(x_198, x_197);
lean::dec(x_197);
x_201 = lean::string_append(x_199, x_198);
x_202 = lean::box(0);
x_203 = l_mjoin___rarg___closed__1;
x_204 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_201, x_203, x_202, x_202, x_0, x_1, x_44);
x_205 = lean::cnstr_get(x_204, 0);
lean::inc(x_205);
x_207 = lean::cnstr_get(x_204, 1);
lean::inc(x_207);
lean::dec(x_204);
x_210 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_211 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_210, x_205);
x_143 = x_211;
x_144 = x_207;
goto lbl_145;
}
else
{
obj* x_213; obj* x_214; obj* x_215; obj* x_216; 
lean::dec(x_0);
x_213 = lean::string_iterator_next(x_1);
x_214 = lean::box(0);
x_215 = lean::box_uint32(x_159);
x_216 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_216, 0, x_215);
lean::cnstr_set(x_216, 1, x_213);
lean::cnstr_set(x_216, 2, x_214);
x_143 = x_216;
x_144 = x_44;
goto lbl_145;
}
}
}
}
}
else
{
obj* x_220; obj* x_221; obj* x_222; obj* x_223; 
lean::dec(x_140);
lean::dec(x_1);
lean::dec(x_0);
x_220 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_40, x_43);
x_221 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_222 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_220, x_221);
x_223 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_223, 0, x_222);
lean::cnstr_set(x_223, 1, x_44);
return x_223;
}
lbl_145:
{
if (lean::obj_tag(x_143) == 0)
{
obj* x_224; obj* x_226; obj* x_228; obj* x_230; uint32 x_231; obj* x_232; obj* x_233; obj* x_234; obj* x_236; obj* x_237; obj* x_239; obj* x_240; obj* x_241; obj* x_242; obj* x_243; obj* x_244; obj* x_245; obj* x_246; 
x_224 = lean::cnstr_get(x_143, 0);
lean::inc(x_224);
x_226 = lean::cnstr_get(x_143, 1);
lean::inc(x_226);
x_228 = lean::cnstr_get(x_143, 2);
lean::inc(x_228);
if (lean::is_exclusive(x_143)) {
 lean::cnstr_release(x_143, 0);
 lean::cnstr_release(x_143, 1);
 lean::cnstr_release(x_143, 2);
 x_230 = x_143;
} else {
 lean::dec(x_143);
 x_230 = lean::box(0);
}
x_231 = lean::unbox_uint32(x_224);
x_232 = lean::uint32_to_nat(x_231);
x_233 = l_lean_parser_parse__hex__digit___rarg___lambda__5___closed__1;
x_234 = lean::nat_sub(x_232, x_233);
lean::dec(x_232);
x_236 = lean::mk_nat_obj(10u);
x_237 = lean::nat_add(x_236, x_234);
lean::dec(x_234);
x_239 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_230)) {
 x_240 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_240 = x_230;
}
lean::cnstr_set(x_240, 0, x_237);
lean::cnstr_set(x_240, 1, x_226);
lean::cnstr_set(x_240, 2, x_239);
x_241 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_228, x_240);
x_242 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_140, x_241);
x_243 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_40, x_242);
x_244 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_245 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_243, x_244);
x_246 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_246, 0, x_245);
lean::cnstr_set(x_246, 1, x_144);
return x_246;
}
else
{
obj* x_247; uint8 x_249; obj* x_250; obj* x_251; obj* x_252; obj* x_253; obj* x_254; obj* x_255; obj* x_256; obj* x_257; 
x_247 = lean::cnstr_get(x_143, 0);
lean::inc(x_247);
x_249 = lean::cnstr_get_scalar<uint8>(x_143, sizeof(void*)*1);
if (lean::is_exclusive(x_143)) {
 lean::cnstr_release(x_143, 0);
 x_250 = x_143;
} else {
 lean::dec(x_143);
 x_250 = lean::box(0);
}
if (lean::is_scalar(x_250)) {
 x_251 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_251 = x_250;
}
lean::cnstr_set(x_251, 0, x_247);
lean::cnstr_set_scalar(x_251, sizeof(void*)*1, x_249);
x_252 = x_251;
x_253 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_140, x_252);
x_254 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_40, x_253);
x_255 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_256 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_254, x_255);
x_257 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_257, 0, x_256);
lean::cnstr_set(x_257, 1, x_144);
return x_257;
}
}
}
}
lbl_48:
{
if (lean::obj_tag(x_46) == 0)
{
obj* x_258; obj* x_260; obj* x_262; obj* x_264; uint32 x_265; obj* x_266; obj* x_267; obj* x_268; obj* x_270; obj* x_271; obj* x_273; obj* x_274; obj* x_275; 
x_258 = lean::cnstr_get(x_46, 0);
lean::inc(x_258);
x_260 = lean::cnstr_get(x_46, 1);
lean::inc(x_260);
x_262 = lean::cnstr_get(x_46, 2);
lean::inc(x_262);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 lean::cnstr_release(x_46, 1);
 lean::cnstr_release(x_46, 2);
 x_264 = x_46;
} else {
 lean::dec(x_46);
 x_264 = lean::box(0);
}
x_265 = lean::unbox_uint32(x_258);
x_266 = lean::uint32_to_nat(x_265);
x_267 = l_lean_parser_parse__hex__digit___rarg___lambda__3___closed__1;
x_268 = lean::nat_sub(x_266, x_267);
lean::dec(x_266);
x_270 = lean::mk_nat_obj(10u);
x_271 = lean::nat_add(x_270, x_268);
lean::dec(x_268);
x_273 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_264)) {
 x_274 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_274 = x_264;
}
lean::cnstr_set(x_274, 0, x_271);
lean::cnstr_set(x_274, 1, x_260);
lean::cnstr_set(x_274, 2, x_273);
x_275 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_262, x_274);
x_43 = x_275;
x_44 = x_47;
goto lbl_45;
}
else
{
obj* x_276; uint8 x_278; obj* x_279; obj* x_280; obj* x_281; 
x_276 = lean::cnstr_get(x_46, 0);
lean::inc(x_276);
x_278 = lean::cnstr_get_scalar<uint8>(x_46, sizeof(void*)*1);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 x_279 = x_46;
} else {
 lean::dec(x_46);
 x_279 = lean::box(0);
}
if (lean::is_scalar(x_279)) {
 x_280 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_280 = x_279;
}
lean::cnstr_set(x_280, 0, x_276);
lean::cnstr_set_scalar(x_280, sizeof(void*)*1, x_278);
x_281 = x_280;
x_43 = x_281;
x_44 = x_47;
goto lbl_45;
}
}
}
}
}
}
obj* l_lean_parser_parse__quoted__char___at_lean_parser_string__lit_x_27___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_10; 
lean::inc(x_1);
lean::inc(x_0);
x_5 = l_lean_parser_monad__parsec_any___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__2(x_0, x_1, x_2);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 x_10 = x_5;
} else {
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::obj_tag(x_6) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_20; obj* x_22; uint32 x_24; uint32 x_25; uint8 x_26; 
x_11 = lean::cnstr_get(x_6, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 1);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_6, 2);
lean::inc(x_15);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_17 = x_6;
} else {
 lean::dec(x_6);
 x_17 = lean::box(0);
}
x_24 = 92;
x_25 = lean::unbox_uint32(x_11);
x_26 = x_25 == x_24;
if (x_26 == 0)
{
obj* x_27; 
x_27 = lean::box(0);
x_22 = x_27;
goto lbl_23;
}
else
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_10);
lean::dec(x_0);
x_32 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_33 = lean::box_uint32(x_24);
x_34 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_34, 0, x_33);
lean::cnstr_set(x_34, 1, x_13);
lean::cnstr_set(x_34, 2, x_32);
x_35 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_34);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_32, x_35);
x_37 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_8);
return x_37;
}
lbl_19:
{
uint32 x_39; uint32 x_40; uint8 x_41; 
lean::dec(x_18);
x_39 = 117;
x_40 = lean::unbox_uint32(x_11);
x_41 = x_40 == x_39;
if (x_41 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_47; obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
lean::dec(x_17);
x_43 = l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
x_44 = l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_x_27___spec__4___rarg(x_43, x_1, x_0, x_13, x_8);
x_45 = lean::cnstr_get(x_44, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
lean::dec(x_44);
x_50 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_45);
x_51 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_52 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_51, x_50);
if (lean::is_scalar(x_10)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_10;
}
lean::cnstr_set(x_53, 0, x_52);
lean::cnstr_set(x_53, 1, x_47);
return x_53;
}
else
{
obj* x_56; obj* x_57; obj* x_59; 
lean::dec(x_1);
lean::inc(x_0);
x_56 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(x_0, x_13, x_8);
x_57 = lean::cnstr_get(x_56, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_56, 1);
lean::inc(x_59);
lean::dec(x_56);
if (lean::obj_tag(x_57) == 0)
{
obj* x_62; obj* x_64; obj* x_66; obj* x_70; obj* x_71; obj* x_73; 
x_62 = lean::cnstr_get(x_57, 0);
lean::inc(x_62);
x_64 = lean::cnstr_get(x_57, 1);
lean::inc(x_64);
x_66 = lean::cnstr_get(x_57, 2);
lean::inc(x_66);
lean::dec(x_57);
lean::inc(x_0);
x_70 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(x_0, x_64, x_59);
x_71 = lean::cnstr_get(x_70, 0);
lean::inc(x_71);
x_73 = lean::cnstr_get(x_70, 1);
lean::inc(x_73);
lean::dec(x_70);
if (lean::obj_tag(x_71) == 0)
{
obj* x_76; obj* x_78; obj* x_80; obj* x_84; obj* x_85; obj* x_87; 
x_76 = lean::cnstr_get(x_71, 0);
lean::inc(x_76);
x_78 = lean::cnstr_get(x_71, 1);
lean::inc(x_78);
x_80 = lean::cnstr_get(x_71, 2);
lean::inc(x_80);
lean::dec(x_71);
lean::inc(x_0);
x_84 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(x_0, x_78, x_73);
x_85 = lean::cnstr_get(x_84, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get(x_84, 1);
lean::inc(x_87);
lean::dec(x_84);
if (lean::obj_tag(x_85) == 0)
{
obj* x_90; obj* x_92; obj* x_94; obj* x_97; obj* x_98; obj* x_100; 
x_90 = lean::cnstr_get(x_85, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_85, 1);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_85, 2);
lean::inc(x_94);
lean::dec(x_85);
x_97 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(x_0, x_92, x_87);
x_98 = lean::cnstr_get(x_97, 0);
lean::inc(x_98);
x_100 = lean::cnstr_get(x_97, 1);
lean::inc(x_100);
lean::dec(x_97);
if (lean::obj_tag(x_98) == 0)
{
obj* x_103; obj* x_105; obj* x_107; obj* x_110; obj* x_111; obj* x_113; obj* x_116; obj* x_118; obj* x_121; obj* x_123; uint32 x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; 
x_103 = lean::cnstr_get(x_98, 0);
lean::inc(x_103);
x_105 = lean::cnstr_get(x_98, 1);
lean::inc(x_105);
x_107 = lean::cnstr_get(x_98, 2);
lean::inc(x_107);
lean::dec(x_98);
x_110 = lean::mk_nat_obj(16u);
x_111 = lean::nat_mul(x_110, x_62);
lean::dec(x_62);
x_113 = lean::nat_add(x_111, x_76);
lean::dec(x_76);
lean::dec(x_111);
x_116 = lean::nat_mul(x_110, x_113);
lean::dec(x_113);
x_118 = lean::nat_add(x_116, x_90);
lean::dec(x_90);
lean::dec(x_116);
x_121 = lean::nat_mul(x_110, x_118);
lean::dec(x_118);
x_123 = lean::nat_add(x_121, x_103);
lean::dec(x_103);
lean::dec(x_121);
x_126 = l_char_of__nat(x_123);
x_127 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_128 = lean::box_uint32(x_126);
if (lean::is_scalar(x_17)) {
 x_129 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_129 = x_17;
}
lean::cnstr_set(x_129, 0, x_128);
lean::cnstr_set(x_129, 1, x_105);
lean::cnstr_set(x_129, 2, x_127);
x_130 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_107, x_129);
x_131 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_94, x_130);
x_132 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_80, x_131);
x_133 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_66, x_132);
x_134 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_133);
x_135 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_127, x_134);
if (lean::is_scalar(x_10)) {
 x_136 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_136 = x_10;
}
lean::cnstr_set(x_136, 0, x_135);
lean::cnstr_set(x_136, 1, x_100);
return x_136;
}
else
{
obj* x_141; uint8 x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; obj* x_153; 
lean::dec(x_62);
lean::dec(x_90);
lean::dec(x_17);
lean::dec(x_76);
x_141 = lean::cnstr_get(x_98, 0);
lean::inc(x_141);
x_143 = lean::cnstr_get_scalar<uint8>(x_98, sizeof(void*)*1);
if (lean::is_exclusive(x_98)) {
 lean::cnstr_release(x_98, 0);
 x_144 = x_98;
} else {
 lean::dec(x_98);
 x_144 = lean::box(0);
}
if (lean::is_scalar(x_144)) {
 x_145 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_145 = x_144;
}
lean::cnstr_set(x_145, 0, x_141);
lean::cnstr_set_scalar(x_145, sizeof(void*)*1, x_143);
x_146 = x_145;
x_147 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_94, x_146);
x_148 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_80, x_147);
x_149 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_66, x_148);
x_150 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_149);
x_151 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_152 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_151, x_150);
if (lean::is_scalar(x_10)) {
 x_153 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_153 = x_10;
}
lean::cnstr_set(x_153, 0, x_152);
lean::cnstr_set(x_153, 1, x_100);
return x_153;
}
}
else
{
obj* x_158; uint8 x_160; obj* x_161; obj* x_162; obj* x_163; obj* x_164; obj* x_165; obj* x_166; obj* x_167; obj* x_168; obj* x_169; 
lean::dec(x_62);
lean::dec(x_17);
lean::dec(x_0);
lean::dec(x_76);
x_158 = lean::cnstr_get(x_85, 0);
lean::inc(x_158);
x_160 = lean::cnstr_get_scalar<uint8>(x_85, sizeof(void*)*1);
if (lean::is_exclusive(x_85)) {
 lean::cnstr_release(x_85, 0);
 x_161 = x_85;
} else {
 lean::dec(x_85);
 x_161 = lean::box(0);
}
if (lean::is_scalar(x_161)) {
 x_162 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_162 = x_161;
}
lean::cnstr_set(x_162, 0, x_158);
lean::cnstr_set_scalar(x_162, sizeof(void*)*1, x_160);
x_163 = x_162;
x_164 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_80, x_163);
x_165 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_66, x_164);
x_166 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_165);
x_167 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_168 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_167, x_166);
if (lean::is_scalar(x_10)) {
 x_169 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_169 = x_10;
}
lean::cnstr_set(x_169, 0, x_168);
lean::cnstr_set(x_169, 1, x_87);
return x_169;
}
}
else
{
obj* x_173; uint8 x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; 
lean::dec(x_62);
lean::dec(x_17);
lean::dec(x_0);
x_173 = lean::cnstr_get(x_71, 0);
lean::inc(x_173);
x_175 = lean::cnstr_get_scalar<uint8>(x_71, sizeof(void*)*1);
if (lean::is_exclusive(x_71)) {
 lean::cnstr_release(x_71, 0);
 x_176 = x_71;
} else {
 lean::dec(x_71);
 x_176 = lean::box(0);
}
if (lean::is_scalar(x_176)) {
 x_177 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_177 = x_176;
}
lean::cnstr_set(x_177, 0, x_173);
lean::cnstr_set_scalar(x_177, sizeof(void*)*1, x_175);
x_178 = x_177;
x_179 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_66, x_178);
x_180 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_179);
x_181 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_182 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_181, x_180);
if (lean::is_scalar(x_10)) {
 x_183 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_183 = x_10;
}
lean::cnstr_set(x_183, 0, x_182);
lean::cnstr_set(x_183, 1, x_73);
return x_183;
}
}
else
{
obj* x_186; uint8 x_188; obj* x_189; obj* x_190; obj* x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; 
lean::dec(x_17);
lean::dec(x_0);
x_186 = lean::cnstr_get(x_57, 0);
lean::inc(x_186);
x_188 = lean::cnstr_get_scalar<uint8>(x_57, sizeof(void*)*1);
if (lean::is_exclusive(x_57)) {
 lean::cnstr_release(x_57, 0);
 x_189 = x_57;
} else {
 lean::dec(x_57);
 x_189 = lean::box(0);
}
if (lean::is_scalar(x_189)) {
 x_190 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_190 = x_189;
}
lean::cnstr_set(x_190, 0, x_186);
lean::cnstr_set_scalar(x_190, sizeof(void*)*1, x_188);
x_191 = x_190;
x_192 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_191);
x_193 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_194 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_193, x_192);
if (lean::is_scalar(x_10)) {
 x_195 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_195 = x_10;
}
lean::cnstr_set(x_195, 0, x_194);
lean::cnstr_set(x_195, 1, x_59);
return x_195;
}
}
}
lbl_21:
{
uint32 x_197; uint32 x_198; uint8 x_199; 
lean::dec(x_20);
x_197 = 116;
x_198 = lean::unbox_uint32(x_11);
x_199 = x_198 == x_197;
if (x_199 == 0)
{
uint32 x_200; uint8 x_201; 
x_200 = 120;
x_201 = x_198 == x_200;
if (x_201 == 0)
{
obj* x_202; 
x_202 = lean::box(0);
x_18 = x_202;
goto lbl_19;
}
else
{
obj* x_207; obj* x_208; obj* x_210; obj* x_212; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_10);
lean::inc(x_0);
x_207 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(x_0, x_13, x_8);
x_208 = lean::cnstr_get(x_207, 0);
lean::inc(x_208);
x_210 = lean::cnstr_get(x_207, 1);
lean::inc(x_210);
if (lean::is_exclusive(x_207)) {
 lean::cnstr_release(x_207, 0);
 lean::cnstr_release(x_207, 1);
 x_212 = x_207;
} else {
 lean::dec(x_207);
 x_212 = lean::box(0);
}
if (lean::obj_tag(x_208) == 0)
{
obj* x_213; obj* x_215; obj* x_217; obj* x_219; obj* x_220; obj* x_221; obj* x_223; 
x_213 = lean::cnstr_get(x_208, 0);
lean::inc(x_213);
x_215 = lean::cnstr_get(x_208, 1);
lean::inc(x_215);
x_217 = lean::cnstr_get(x_208, 2);
lean::inc(x_217);
if (lean::is_exclusive(x_208)) {
 lean::cnstr_release(x_208, 0);
 lean::cnstr_release(x_208, 1);
 lean::cnstr_release(x_208, 2);
 x_219 = x_208;
} else {
 lean::dec(x_208);
 x_219 = lean::box(0);
}
x_220 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5(x_0, x_215, x_210);
x_221 = lean::cnstr_get(x_220, 0);
lean::inc(x_221);
x_223 = lean::cnstr_get(x_220, 1);
lean::inc(x_223);
lean::dec(x_220);
if (lean::obj_tag(x_221) == 0)
{
obj* x_226; obj* x_228; obj* x_230; obj* x_233; obj* x_234; obj* x_236; uint32 x_239; obj* x_240; obj* x_241; obj* x_242; obj* x_243; obj* x_244; obj* x_245; obj* x_246; obj* x_247; 
x_226 = lean::cnstr_get(x_221, 0);
lean::inc(x_226);
x_228 = lean::cnstr_get(x_221, 1);
lean::inc(x_228);
x_230 = lean::cnstr_get(x_221, 2);
lean::inc(x_230);
lean::dec(x_221);
x_233 = lean::mk_nat_obj(16u);
x_234 = lean::nat_mul(x_233, x_213);
lean::dec(x_213);
x_236 = lean::nat_add(x_234, x_226);
lean::dec(x_226);
lean::dec(x_234);
x_239 = l_char_of__nat(x_236);
x_240 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_241 = lean::box_uint32(x_239);
if (lean::is_scalar(x_219)) {
 x_242 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_242 = x_219;
}
lean::cnstr_set(x_242, 0, x_241);
lean::cnstr_set(x_242, 1, x_228);
lean::cnstr_set(x_242, 2, x_240);
x_243 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_230, x_242);
x_244 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_217, x_243);
x_245 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_244);
x_246 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_240, x_245);
if (lean::is_scalar(x_212)) {
 x_247 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_247 = x_212;
}
lean::cnstr_set(x_247, 0, x_246);
lean::cnstr_set(x_247, 1, x_223);
return x_247;
}
else
{
obj* x_250; uint8 x_252; obj* x_253; obj* x_254; obj* x_255; obj* x_256; obj* x_257; obj* x_258; obj* x_259; obj* x_260; 
lean::dec(x_219);
lean::dec(x_213);
x_250 = lean::cnstr_get(x_221, 0);
lean::inc(x_250);
x_252 = lean::cnstr_get_scalar<uint8>(x_221, sizeof(void*)*1);
if (lean::is_exclusive(x_221)) {
 lean::cnstr_release(x_221, 0);
 x_253 = x_221;
} else {
 lean::dec(x_221);
 x_253 = lean::box(0);
}
if (lean::is_scalar(x_253)) {
 x_254 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_254 = x_253;
}
lean::cnstr_set(x_254, 0, x_250);
lean::cnstr_set_scalar(x_254, sizeof(void*)*1, x_252);
x_255 = x_254;
x_256 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_217, x_255);
x_257 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_256);
x_258 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_259 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_258, x_257);
if (lean::is_scalar(x_212)) {
 x_260 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_260 = x_212;
}
lean::cnstr_set(x_260, 0, x_259);
lean::cnstr_set(x_260, 1, x_223);
return x_260;
}
}
else
{
obj* x_262; uint8 x_264; obj* x_265; obj* x_266; obj* x_267; obj* x_268; obj* x_269; obj* x_270; obj* x_271; 
lean::dec(x_0);
x_262 = lean::cnstr_get(x_208, 0);
lean::inc(x_262);
x_264 = lean::cnstr_get_scalar<uint8>(x_208, sizeof(void*)*1);
if (lean::is_exclusive(x_208)) {
 lean::cnstr_release(x_208, 0);
 x_265 = x_208;
} else {
 lean::dec(x_208);
 x_265 = lean::box(0);
}
if (lean::is_scalar(x_265)) {
 x_266 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_266 = x_265;
}
lean::cnstr_set(x_266, 0, x_262);
lean::cnstr_set_scalar(x_266, sizeof(void*)*1, x_264);
x_267 = x_266;
x_268 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_267);
x_269 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_270 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_269, x_268);
if (lean::is_scalar(x_212)) {
 x_271 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_271 = x_212;
}
lean::cnstr_set(x_271, 0, x_270);
lean::cnstr_set(x_271, 1, x_210);
return x_271;
}
}
}
else
{
uint32 x_276; obj* x_277; obj* x_278; obj* x_279; obj* x_280; obj* x_281; obj* x_282; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_10);
lean::dec(x_0);
x_276 = 9;
x_277 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_278 = lean::box_uint32(x_276);
x_279 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_279, 0, x_278);
lean::cnstr_set(x_279, 1, x_13);
lean::cnstr_set(x_279, 2, x_277);
x_280 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_279);
x_281 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_277, x_280);
x_282 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_282, 0, x_281);
lean::cnstr_set(x_282, 1, x_8);
return x_282;
}
}
lbl_23:
{
uint32 x_284; uint32 x_285; uint8 x_286; 
lean::dec(x_22);
x_284 = 34;
x_285 = lean::unbox_uint32(x_11);
x_286 = x_285 == x_284;
if (x_286 == 0)
{
uint32 x_287; uint8 x_288; 
x_287 = 39;
x_288 = x_285 == x_287;
if (x_288 == 0)
{
uint32 x_289; uint8 x_290; 
x_289 = 110;
x_290 = x_285 == x_289;
if (x_290 == 0)
{
obj* x_291; 
x_291 = lean::box(0);
x_20 = x_291;
goto lbl_21;
}
else
{
uint32 x_296; obj* x_297; obj* x_298; obj* x_299; obj* x_300; obj* x_301; obj* x_302; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_10);
lean::dec(x_0);
x_296 = 10;
x_297 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_298 = lean::box_uint32(x_296);
x_299 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_299, 0, x_298);
lean::cnstr_set(x_299, 1, x_13);
lean::cnstr_set(x_299, 2, x_297);
x_300 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_299);
x_301 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_297, x_300);
x_302 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_302, 0, x_301);
lean::cnstr_set(x_302, 1, x_8);
return x_302;
}
}
else
{
obj* x_307; obj* x_308; obj* x_309; obj* x_310; obj* x_311; obj* x_312; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_10);
lean::dec(x_0);
x_307 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_308 = lean::box_uint32(x_287);
x_309 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_309, 0, x_308);
lean::cnstr_set(x_309, 1, x_13);
lean::cnstr_set(x_309, 2, x_307);
x_310 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_309);
x_311 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_307, x_310);
x_312 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_312, 0, x_311);
lean::cnstr_set(x_312, 1, x_8);
return x_312;
}
}
else
{
obj* x_317; obj* x_318; obj* x_319; obj* x_320; obj* x_321; obj* x_322; 
lean::dec(x_17);
lean::dec(x_1);
lean::dec(x_10);
lean::dec(x_0);
x_317 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_318 = lean::box_uint32(x_284);
x_319 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_319, 0, x_318);
lean::cnstr_set(x_319, 1, x_13);
lean::cnstr_set(x_319, 2, x_317);
x_320 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_15, x_319);
x_321 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_317, x_320);
x_322 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_322, 0, x_321);
lean::cnstr_set(x_322, 1, x_8);
return x_322;
}
}
}
else
{
obj* x_325; uint8 x_327; obj* x_328; obj* x_329; obj* x_330; obj* x_331; obj* x_332; obj* x_333; 
lean::dec(x_1);
lean::dec(x_0);
x_325 = lean::cnstr_get(x_6, 0);
lean::inc(x_325);
x_327 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_328 = x_6;
} else {
 lean::dec(x_6);
 x_328 = lean::box(0);
}
if (lean::is_scalar(x_328)) {
 x_329 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_329 = x_328;
}
lean::cnstr_set(x_329, 0, x_325);
lean::cnstr_set_scalar(x_329, sizeof(void*)*1, x_327);
x_330 = x_329;
x_331 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_332 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_331, x_330);
if (lean::is_scalar(x_10)) {
 x_333 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_333 = x_10;
}
lean::cnstr_set(x_333, 0, x_332);
lean::cnstr_set(x_333, 1, x_8);
return x_333;
}
}
}
obj* l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_x_27___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_0, x_5);
if (x_6 == 0)
{
obj* x_8; obj* x_9; obj* x_11; obj* x_13; 
lean::inc(x_2);
x_8 = l_lean_parser_monad__parsec_any___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__2(x_2, x_3, x_4);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; obj* x_22; uint32 x_24; uint32 x_25; uint8 x_26; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_9, 2);
lean::inc(x_18);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 lean::cnstr_release(x_9, 2);
 x_20 = x_9;
} else {
 lean::dec(x_9);
 x_20 = lean::box(0);
}
x_21 = lean::mk_nat_obj(1u);
x_22 = lean::nat_sub(x_0, x_21);
lean::dec(x_0);
x_24 = 92;
x_25 = lean::unbox_uint32(x_14);
x_26 = x_25 == x_24;
if (x_26 == 0)
{
uint32 x_27; uint8 x_28; 
x_27 = 34;
x_28 = x_25 == x_27;
if (x_28 == 0)
{
obj* x_30; obj* x_31; obj* x_32; obj* x_34; obj* x_37; obj* x_38; 
lean::dec(x_20);
x_30 = lean::string_push(x_1, x_25);
x_31 = l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_x_27___spec__2(x_22, x_30, x_2, x_16, x_11);
x_32 = lean::cnstr_get(x_31, 0);
lean::inc(x_32);
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_37 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_32);
if (lean::is_scalar(x_13)) {
 x_38 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_38 = x_13;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_34);
return x_38;
}
else
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_2);
lean::dec(x_22);
x_41 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_20)) {
 x_42 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_42 = x_20;
}
lean::cnstr_set(x_42, 0, x_1);
lean::cnstr_set(x_42, 1, x_16);
lean::cnstr_set(x_42, 2, x_41);
x_43 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_42);
if (lean::is_scalar(x_13)) {
 x_44 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_44 = x_13;
}
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_11);
return x_44;
}
}
else
{
obj* x_47; obj* x_48; obj* x_50; 
lean::dec(x_20);
lean::inc(x_2);
x_47 = l_lean_parser_parse__quoted__char___at_lean_parser_string__lit_x_27___spec__3(x_2, x_16, x_11);
x_48 = lean::cnstr_get(x_47, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
if (lean::obj_tag(x_48) == 0)
{
obj* x_53; obj* x_55; obj* x_57; uint32 x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_65; obj* x_68; obj* x_69; obj* x_70; 
x_53 = lean::cnstr_get(x_48, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_48, 1);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_48, 2);
lean::inc(x_57);
lean::dec(x_48);
x_60 = lean::unbox_uint32(x_53);
x_61 = lean::string_push(x_1, x_60);
x_62 = l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_x_27___spec__2(x_22, x_61, x_2, x_55, x_50);
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_62, 1);
lean::inc(x_65);
lean::dec(x_62);
x_68 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_63);
x_69 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_68);
if (lean::is_scalar(x_13)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_13;
}
lean::cnstr_set(x_70, 0, x_69);
lean::cnstr_set(x_70, 1, x_65);
return x_70;
}
else
{
obj* x_74; uint8 x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_22);
x_74 = lean::cnstr_get(x_48, 0);
lean::inc(x_74);
x_76 = lean::cnstr_get_scalar<uint8>(x_48, sizeof(void*)*1);
if (lean::is_exclusive(x_48)) {
 lean::cnstr_release(x_48, 0);
 x_77 = x_48;
} else {
 lean::dec(x_48);
 x_77 = lean::box(0);
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_74);
lean::cnstr_set_scalar(x_78, sizeof(void*)*1, x_76);
x_79 = x_78;
x_80 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_79);
if (lean::is_scalar(x_13)) {
 x_81 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_81 = x_13;
}
lean::cnstr_set(x_81, 0, x_80);
lean::cnstr_set(x_81, 1, x_50);
return x_81;
}
}
}
else
{
obj* x_85; uint8 x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_85 = lean::cnstr_get(x_9, 0);
lean::inc(x_85);
x_87 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_88 = x_9;
} else {
 lean::dec(x_9);
 x_88 = lean::box(0);
}
if (lean::is_scalar(x_88)) {
 x_89 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_89 = x_88;
}
lean::cnstr_set(x_89, 0, x_85);
lean::cnstr_set_scalar(x_89, sizeof(void*)*1, x_87);
x_90 = x_89;
if (lean::is_scalar(x_13)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_13;
}
lean::cnstr_set(x_91, 0, x_90);
lean::cnstr_set(x_91, 1, x_11);
return x_91;
}
}
else
{
uint32 x_93; obj* x_94; obj* x_95; obj* x_97; obj* x_99; 
lean::dec(x_0);
x_93 = 34;
x_94 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_93, x_2, x_3, x_4);
x_95 = lean::cnstr_get(x_94, 0);
lean::inc(x_95);
x_97 = lean::cnstr_get(x_94, 1);
lean::inc(x_97);
if (lean::is_exclusive(x_94)) {
 lean::cnstr_release(x_94, 0);
 lean::cnstr_release(x_94, 1);
 x_99 = x_94;
} else {
 lean::dec(x_94);
 x_99 = lean::box(0);
}
if (lean::obj_tag(x_95) == 0)
{
obj* x_100; obj* x_102; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
x_100 = lean::cnstr_get(x_95, 1);
lean::inc(x_100);
x_102 = lean::cnstr_get(x_95, 2);
lean::inc(x_102);
if (lean::is_exclusive(x_95)) {
 lean::cnstr_release(x_95, 0);
 lean::cnstr_release(x_95, 1);
 lean::cnstr_release(x_95, 2);
 x_104 = x_95;
} else {
 lean::dec(x_95);
 x_104 = lean::box(0);
}
x_105 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_104)) {
 x_106 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_106 = x_104;
}
lean::cnstr_set(x_106, 0, x_1);
lean::cnstr_set(x_106, 1, x_100);
lean::cnstr_set(x_106, 2, x_105);
x_107 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_102, x_106);
if (lean::is_scalar(x_99)) {
 x_108 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_108 = x_99;
}
lean::cnstr_set(x_108, 0, x_107);
lean::cnstr_set(x_108, 1, x_97);
return x_108;
}
else
{
obj* x_110; uint8 x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
lean::dec(x_1);
x_110 = lean::cnstr_get(x_95, 0);
lean::inc(x_110);
x_112 = lean::cnstr_get_scalar<uint8>(x_95, sizeof(void*)*1);
if (lean::is_exclusive(x_95)) {
 lean::cnstr_release(x_95, 0);
 x_113 = x_95;
} else {
 lean::dec(x_95);
 x_113 = lean::box(0);
}
if (lean::is_scalar(x_113)) {
 x_114 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_114 = x_113;
}
lean::cnstr_set(x_114, 0, x_110);
lean::cnstr_set_scalar(x_114, sizeof(void*)*1, x_112);
x_115 = x_114;
if (lean::is_scalar(x_99)) {
 x_116 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_116 = x_99;
}
lean::cnstr_set(x_116, 0, x_115);
lean::cnstr_set(x_116, 1, x_97);
return x_116;
}
}
}
}
obj* l_lean_parser_parse__string__literal___at_lean_parser_string__lit_x_27___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_5; obj* x_6; obj* x_8; obj* x_10; 
x_3 = 34;
lean::inc(x_0);
x_5 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_3, x_0, x_1, x_2);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 x_10 = x_5;
} else {
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::obj_tag(x_6) == 0)
{
obj* x_11; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_21; obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 2);
lean::inc(x_13);
lean::dec(x_6);
x_16 = lean::string_iterator_remaining(x_11);
x_17 = l_string_join___closed__1;
x_18 = l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_x_27___spec__2(x_16, x_17, x_0, x_11, x_8);
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_18, 1);
lean::inc(x_21);
lean::dec(x_18);
x_24 = l_lean_parser_finish__comment__block___closed__2;
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_24, x_19);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_25);
if (lean::is_scalar(x_10)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_10;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_21);
return x_27;
}
else
{
obj* x_29; uint8 x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_0);
x_29 = lean::cnstr_get(x_6, 0);
lean::inc(x_29);
x_31 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_32 = x_6;
} else {
 lean::dec(x_6);
 x_32 = lean::box(0);
}
if (lean::is_scalar(x_32)) {
 x_33 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_33 = x_32;
}
lean::cnstr_set(x_33, 0, x_29);
lean::cnstr_set_scalar(x_33, sizeof(void*)*1, x_31);
x_34 = x_33;
if (lean::is_scalar(x_10)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_10;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_8);
return x_35;
}
}
}
obj* l_lean_parser_string__lit_x_27___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
x_4 = l_lean_parser_parse__string__literal___at_lean_parser_string__lit_x_27___spec__1(x_1, x_2, x_3);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_5, 2);
lean::inc(x_12);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_14 = x_5;
} else {
 lean::dec(x_5);
 x_14 = lean::box(0);
}
lean::inc(x_10);
x_16 = l_lean_parser_mk__raw__res(x_0, x_10);
x_17 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_14)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_14;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_10);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_12, x_18);
if (lean::is_scalar(x_9)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_9;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_7);
return x_20;
}
else
{
obj* x_22; uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_0);
x_22 = lean::cnstr_get(x_5, 0);
lean::inc(x_22);
x_24 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_25 = x_5;
} else {
 lean::dec(x_5);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_22);
lean::cnstr_set_scalar(x_26, sizeof(void*)*1, x_24);
x_27 = x_26;
if (lean::is_scalar(x_9)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_9;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_7);
return x_28;
}
}
}
obj* _init_l_lean_parser_string__lit_x_27___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___rarg___lambda__1), 2, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_lift___at_lean_parser_with__trailing___spec__1___rarg), 4, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_string__lit_x_27___lambda__1), 4, 0);
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
x_4 = lean::box(0);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_3);
lean::cnstr_set(x_5, 1, x_4);
return x_5;
}
}
obj* l_lean_parser_string__lit_x_27(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = l_lean_parser_string__lit;
x_4 = l_lean_parser_string__lit_x_27___closed__1;
x_5 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15(x_3, x_4, x_0, x_1, x_2);
return x_5;
}
}
obj* l___private_init_lean_parser_token_5__mk__consume__token(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_7; obj* x_10; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
lean::dec(x_3);
lean::dec(x_2);
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
lean::dec(x_0);
x_10 = lean::string_length(x_7);
lean::dec(x_7);
lean::inc(x_1);
x_13 = l_string_iterator_nextn___main(x_1, x_10);
lean::inc(x_13);
x_15 = l_lean_parser_mk__raw__res(x_1, x_13);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_13);
lean::cnstr_set(x_17, 2, x_16);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_4);
return x_18;
}
}
obj* l_lean_parser_number__or__string__lit(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_7; obj* x_8; obj* x_10; obj* x_12; 
x_3 = l_lean_parser_number;
x_4 = l_lean_parser_number_x_27___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_7 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15(x_3, x_4, x_0, x_1, x_2);
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 x_12 = x_7;
} else {
 lean::dec(x_7);
 x_12 = lean::box(0);
}
if (lean::obj_tag(x_8) == 0)
{
obj* x_15; 
lean::dec(x_1);
lean::dec(x_0);
if (lean::is_scalar(x_12)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_12;
}
lean::cnstr_set(x_15, 0, x_8);
lean::cnstr_set(x_15, 1, x_10);
return x_15;
}
else
{
obj* x_16; uint8 x_18; 
x_16 = lean::cnstr_get(x_8, 0);
lean::inc(x_16);
x_18 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*1);
if (x_18 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_25; obj* x_28; obj* x_29; 
lean::dec(x_8);
x_20 = l_lean_parser_string__lit;
x_21 = l_lean_parser_string__lit_x_27___closed__1;
x_22 = l_lean_parser_combinators_node___at_lean_parser_detail__ident__part_parser_lean_parser_has__tokens___spec__15(x_20, x_21, x_0, x_1, x_10);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
lean::dec(x_22);
x_28 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_16, x_23);
if (lean::is_scalar(x_12)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_12;
}
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_25);
return x_29;
}
else
{
obj* x_33; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_16);
if (lean::is_scalar(x_12)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_12;
}
lean::cnstr_set(x_33, 0, x_8);
lean::cnstr_set(x_33, 1, x_10);
return x_33;
}
}
}
}
obj* l_lean_parser_token__cont(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
lean::inc(x_2);
x_6 = l___private_init_lean_parser_token_4__ident_x_27(x_2, x_3, x_4);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_23; obj* x_25; uint8 x_28; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_18 = x_7;
} else {
 lean::dec(x_7);
 x_18 = lean::box(0);
}
x_19 = lean::string_iterator_offset(x_14);
x_20 = lean::string_iterator_offset(x_0);
x_21 = lean::cnstr_get(x_1, 0);
lean::inc(x_21);
x_23 = lean::string_length(x_21);
lean::dec(x_21);
x_25 = lean::nat_add(x_20, x_23);
lean::dec(x_23);
lean::dec(x_20);
x_28 = lean::nat_dec_le(x_19, x_25);
lean::dec(x_25);
lean::dec(x_19);
if (x_28 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_34 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_18)) {
 x_35 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_35 = x_18;
}
lean::cnstr_set(x_35, 0, x_12);
lean::cnstr_set(x_35, 1, x_14);
lean::cnstr_set(x_35, 2, x_34);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_35);
if (lean::is_scalar(x_11)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_11;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_9);
return x_37;
}
else
{
obj* x_40; obj* x_41; obj* x_43; obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
lean::dec(x_12);
lean::dec(x_18);
x_40 = l___private_init_lean_parser_token_5__mk__consume__token(x_1, x_0, x_2, x_14, x_9);
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
lean::dec(x_40);
x_46 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_46, x_41);
x_48 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_47);
if (lean::is_scalar(x_11)) {
 x_49 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_49 = x_11;
}
lean::cnstr_set(x_49, 0, x_48);
lean::cnstr_set(x_49, 1, x_43);
return x_49;
}
}
else
{
obj* x_53; uint8 x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_53 = lean::cnstr_get(x_7, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_56 = x_7;
} else {
 lean::dec(x_7);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_53);
lean::cnstr_set_scalar(x_57, sizeof(void*)*1, x_55);
x_58 = x_57;
if (lean::is_scalar(x_11)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_11;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_9);
return x_59;
}
}
}
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_token___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; uint8 x_6; 
x_6 = lean::string_iterator_has_next(x_1);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_15; obj* x_18; obj* x_19; 
x_7 = lean::box(0);
x_8 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_9 = l_mjoin___rarg___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_12 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_8, x_9, x_7, x_7, x_0, x_1, x_2);
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_15 = lean::cnstr_get(x_12, 1);
lean::inc(x_15);
lean::dec(x_12);
x_18 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_13);
if (lean::obj_tag(x_19) == 0)
{
lean::dec(x_0);
x_3 = x_19;
x_4 = x_15;
goto lbl_5;
}
else
{
obj* x_21; uint8 x_23; 
x_21 = lean::cnstr_get(x_19, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get_scalar<uint8>(x_19, sizeof(void*)*1);
if (x_23 == 0)
{
uint32 x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_33; 
lean::dec(x_19);
x_25 = l_lean_id__begin__escape;
lean::inc(x_1);
x_27 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_25, x_0, x_1, x_15);
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_21, x_28);
x_3 = x_33;
x_4 = x_30;
goto lbl_5;
}
else
{
lean::dec(x_0);
lean::dec(x_21);
x_3 = x_19;
x_4 = x_15;
goto lbl_5;
}
}
}
else
{
uint32 x_36; uint8 x_37; 
x_36 = lean::string_iterator_curr(x_1);
x_37 = l_lean_is__id__first(x_36);
if (x_37 == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_43; obj* x_44; obj* x_47; obj* x_48; obj* x_50; obj* x_53; obj* x_54; 
x_38 = l_char_quote__core(x_36);
x_39 = l_char_has__repr___closed__1;
x_40 = lean::string_append(x_39, x_38);
lean::dec(x_38);
x_42 = lean::string_append(x_40, x_39);
x_43 = lean::box(0);
x_44 = l_mjoin___rarg___closed__1;
lean::inc(x_1);
lean::inc(x_0);
x_47 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_42, x_44, x_43, x_43, x_0, x_1, x_2);
x_48 = lean::cnstr_get(x_47, 0);
lean::inc(x_48);
x_50 = lean::cnstr_get(x_47, 1);
lean::inc(x_50);
lean::dec(x_47);
x_53 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_54 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_53, x_48);
if (lean::obj_tag(x_54) == 0)
{
lean::dec(x_0);
x_3 = x_54;
x_4 = x_50;
goto lbl_5;
}
else
{
obj* x_56; uint8 x_58; 
x_56 = lean::cnstr_get(x_54, 0);
lean::inc(x_56);
x_58 = lean::cnstr_get_scalar<uint8>(x_54, sizeof(void*)*1);
if (x_58 == 0)
{
uint32 x_60; obj* x_62; obj* x_63; obj* x_65; obj* x_68; 
lean::dec(x_54);
x_60 = l_lean_id__begin__escape;
lean::inc(x_1);
x_62 = l_lean_parser_monad__parsec_ch___at___private_init_lean_parser_token_4__ident_x_27___spec__11(x_60, x_0, x_1, x_50);
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_62, 1);
lean::inc(x_65);
lean::dec(x_62);
x_68 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_56, x_63);
x_3 = x_68;
x_4 = x_65;
goto lbl_5;
}
else
{
lean::dec(x_0);
lean::dec(x_56);
x_3 = x_54;
x_4 = x_50;
goto lbl_5;
}
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; 
lean::dec(x_0);
lean::inc(x_1);
x_73 = lean::string_iterator_next(x_1);
x_74 = lean::box(0);
x_75 = lean::box_uint32(x_36);
x_76 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_76, 0, x_75);
lean::cnstr_set(x_76, 1, x_73);
lean::cnstr_set(x_76, 2, x_74);
x_3 = x_76;
x_4 = x_2;
goto lbl_5;
}
}
lbl_5:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_77; obj* x_79; obj* x_80; obj* x_81; obj* x_82; 
x_77 = lean::cnstr_get(x_3, 0);
lean::inc(x_77);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 lean::cnstr_release(x_3, 2);
 x_79 = x_3;
} else {
 lean::dec(x_3);
 x_79 = lean::box(0);
}
x_80 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_79)) {
 x_81 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_81 = x_79;
}
lean::cnstr_set(x_81, 0, x_77);
lean::cnstr_set(x_81, 1, x_1);
lean::cnstr_set(x_81, 2, x_80);
x_82 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_82, 0, x_81);
lean::cnstr_set(x_82, 1, x_4);
return x_82;
}
else
{
obj* x_84; 
lean::dec(x_1);
x_84 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_84, 0, x_3);
lean::cnstr_set(x_84, 1, x_4);
return x_84;
}
}
}
}
obj* l_lean_parser_monad__parsec_observing___at_lean_parser_token___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; 
x_3 = l_lean_parser_parsec__t_lookahead___at_lean_parser_token___spec__1(x_0, x_1, x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_8 = x_3;
} else {
 lean::dec(x_3);
 x_8 = lean::box(0);
}
if (lean::obj_tag(x_4) == 0)
{
obj* x_9; obj* x_11; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_9 = lean::cnstr_get(x_4, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_4, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_4, 2);
lean::inc(x_13);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 lean::cnstr_release(x_4, 2);
 x_15 = x_4;
} else {
 lean::dec(x_4);
 x_15 = lean::box(0);
}
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_9);
x_17 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_15)) {
 x_18 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_18 = x_15;
}
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_11);
lean::cnstr_set(x_18, 2, x_17);
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_18);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; 
if (lean::is_scalar(x_8)) {
 x_20 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_20 = x_8;
}
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_6);
return x_20;
}
else
{
obj* x_21; obj* x_24; obj* x_26; obj* x_27; obj* x_28; 
x_21 = lean::cnstr_get(x_19, 0);
lean::inc(x_21);
lean::dec(x_19);
x_24 = lean::cnstr_get(x_21, 0);
lean::inc(x_24);
x_26 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_26, 0, x_21);
x_27 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_24);
lean::cnstr_set(x_27, 2, x_17);
if (lean::is_scalar(x_8)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_8;
}
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_6);
return x_28;
}
}
else
{
obj* x_29; obj* x_32; obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_29 = lean::cnstr_get(x_4, 0);
lean::inc(x_29);
lean::dec(x_4);
x_32 = lean::cnstr_get(x_29, 0);
lean::inc(x_32);
x_34 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_34, 0, x_29);
x_35 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_36 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_36, 0, x_34);
lean::cnstr_set(x_36, 1, x_32);
lean::cnstr_set(x_36, 2, x_35);
if (lean::is_scalar(x_8)) {
 x_37 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_37 = x_8;
}
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_6);
return x_37;
}
}
}
obj* l_lean_parser_with__trailing___at_lean_parser_token___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_5; obj* x_6; obj* x_8; obj* x_10; 
lean::inc(x_2);
x_5 = l_lean_parser_whitespace(x_1, x_2, x_3);
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 x_10 = x_5;
} else {
 lean::dec(x_5);
 x_10 = lean::box(0);
}
if (lean::obj_tag(x_6) == 0)
{
obj* x_11; obj* x_13; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_11 = lean::cnstr_get(x_6, 1);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_6, 2);
lean::inc(x_13);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_15 = x_6;
} else {
 lean::dec(x_6);
 x_15 = lean::box(0);
}
lean::inc(x_11);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_2);
lean::cnstr_set(x_17, 1, x_11);
x_18 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_15)) {
 x_19 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_19 = x_15;
}
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_11);
lean::cnstr_set(x_19, 2, x_18);
x_20 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_13, x_19);
x_21 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_22 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_20);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_25; obj* x_27; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_25 = lean::cnstr_get(x_22, 1);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_22, 2);
lean::inc(x_27);
if (lean::is_exclusive(x_22)) {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 lean::cnstr_release(x_22, 2);
 x_29 = x_22;
} else {
 lean::dec(x_22);
 x_29 = lean::box(0);
}
x_30 = l___private_init_lean_parser_token_3__update__trailing___main(x_23, x_0);
if (lean::is_scalar(x_29)) {
 x_31 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_31 = x_29;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_25);
lean::cnstr_set(x_31, 2, x_21);
x_32 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_27, x_31);
if (lean::is_scalar(x_10)) {
 x_33 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_33 = x_10;
}
lean::cnstr_set(x_33, 0, x_32);
lean::cnstr_set(x_33, 1, x_8);
return x_33;
}
else
{
obj* x_35; uint8 x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_0);
x_35 = lean::cnstr_get(x_22, 0);
lean::inc(x_35);
x_37 = lean::cnstr_get_scalar<uint8>(x_22, sizeof(void*)*1);
if (lean::is_exclusive(x_22)) {
 lean::cnstr_release(x_22, 0);
 x_38 = x_22;
} else {
 lean::dec(x_22);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_35);
lean::cnstr_set_scalar(x_39, sizeof(void*)*1, x_37);
x_40 = x_39;
if (lean::is_scalar(x_10)) {
 x_41 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_41 = x_10;
}
lean::cnstr_set(x_41, 0, x_40);
lean::cnstr_set(x_41, 1, x_8);
return x_41;
}
}
else
{
obj* x_43; uint8 x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_2);
x_43 = lean::cnstr_get(x_6, 0);
lean::inc(x_43);
x_45 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_46 = x_6;
} else {
 lean::dec(x_6);
 x_46 = lean::box(0);
}
if (lean::is_scalar(x_46)) {
 x_47 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_47 = x_46;
}
lean::cnstr_set(x_47, 0, x_43);
lean::cnstr_set_scalar(x_47, sizeof(void*)*1, x_45);
x_48 = x_47;
x_49 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_50 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_49, x_48);
if (lean::obj_tag(x_50) == 0)
{
obj* x_51; obj* x_53; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_51 = lean::cnstr_get(x_50, 0);
lean::inc(x_51);
x_53 = lean::cnstr_get(x_50, 1);
lean::inc(x_53);
x_55 = lean::cnstr_get(x_50, 2);
lean::inc(x_55);
if (lean::is_exclusive(x_50)) {
 lean::cnstr_release(x_50, 0);
 lean::cnstr_release(x_50, 1);
 lean::cnstr_release(x_50, 2);
 x_57 = x_50;
} else {
 lean::dec(x_50);
 x_57 = lean::box(0);
}
x_58 = l___private_init_lean_parser_token_3__update__trailing___main(x_51, x_0);
if (lean::is_scalar(x_57)) {
 x_59 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_59 = x_57;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_53);
lean::cnstr_set(x_59, 2, x_49);
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_55, x_59);
if (lean::is_scalar(x_10)) {
 x_61 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_61 = x_10;
}
lean::cnstr_set(x_61, 0, x_60);
lean::cnstr_set(x_61, 1, x_8);
return x_61;
}
else
{
obj* x_63; uint8 x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; 
lean::dec(x_0);
x_63 = lean::cnstr_get(x_50, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get_scalar<uint8>(x_50, sizeof(void*)*1);
if (lean::is_exclusive(x_50)) {
 lean::cnstr_release(x_50, 0);
 x_66 = x_50;
} else {
 lean::dec(x_50);
 x_66 = lean::box(0);
}
if (lean::is_scalar(x_66)) {
 x_67 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_67 = x_66;
}
lean::cnstr_set(x_67, 0, x_63);
lean::cnstr_set_scalar(x_67, sizeof(void*)*1, x_65);
x_68 = x_67;
if (lean::is_scalar(x_10)) {
 x_69 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_69 = x_10;
}
lean::cnstr_set(x_69, 0, x_68);
lean::cnstr_set(x_69, 1, x_8);
return x_69;
}
}
}
}
obj* l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; uint8 x_6; obj* x_7; obj* x_8; obj* x_9; 
x_2 = lean::box(0);
x_3 = l_lean_parser_parsec__t_failure___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
x_5 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_4);
lean::cnstr_set(x_5, 3, x_2);
x_6 = 0;
x_7 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_7, 0, x_5);
lean::cnstr_set_scalar(x_7, sizeof(void*)*1, x_6);
x_8 = x_7;
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_8);
lean::cnstr_set(x_9, 1, x_1);
return x_9;
}
}
obj* l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4___rarg), 2, 0);
return x_4;
}
}
obj* _init_l_lean_parser_token___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("token: not implemented");
return x_0;
}
}
obj* l_lean_parser_token(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; 
x_6 = lean::cnstr_get(x_2, 0);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_10; obj* x_11; obj* x_13; obj* x_16; obj* x_17; 
lean::inc(x_2);
lean::inc(x_1);
x_10 = l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4___rarg(x_1, x_2);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_16 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_17 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_11);
x_3 = x_17;
x_4 = x_13;
goto lbl_5;
}
else
{
obj* x_18; obj* x_20; obj* x_21; obj* x_23; uint8 x_25; 
x_18 = lean::cnstr_get(x_6, 0);
lean::inc(x_18);
x_20 = lean::string_iterator_offset(x_1);
x_21 = lean::cnstr_get(x_18, 0);
lean::inc(x_21);
x_23 = lean::string_iterator_offset(x_21);
lean::dec(x_21);
x_25 = lean::nat_dec_eq(x_20, x_23);
lean::dec(x_23);
lean::dec(x_20);
if (x_25 == 0)
{
obj* x_30; obj* x_31; obj* x_33; 
lean::inc(x_2);
lean::inc(x_1);
x_30 = l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4___rarg(x_1, x_2);
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
lean::dec(x_30);
if (lean::obj_tag(x_31) == 0)
{
obj* x_37; obj* x_39; obj* x_40; obj* x_42; obj* x_43; obj* x_45; obj* x_46; obj* x_48; obj* x_50; obj* x_51; obj* x_54; obj* x_55; obj* x_56; obj* x_57; 
lean::dec(x_33);
x_37 = lean::cnstr_get(x_31, 2);
lean::inc(x_37);
if (lean::is_exclusive(x_31)) {
 lean::cnstr_release(x_31, 0);
 lean::cnstr_release(x_31, 1);
 lean::cnstr_release(x_31, 2);
 x_39 = x_31;
} else {
 lean::dec(x_31);
 x_39 = lean::box(0);
}
x_40 = lean::cnstr_get(x_18, 1);
lean::inc(x_40);
x_42 = lean::box(0);
x_43 = lean::cnstr_get(x_2, 1);
lean::inc(x_43);
x_45 = lean::mk_nat_obj(1u);
x_46 = lean::nat_add(x_43, x_45);
lean::dec(x_43);
x_48 = lean::cnstr_get(x_2, 2);
lean::inc(x_48);
x_50 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_50, 0, x_6);
lean::cnstr_set(x_50, 1, x_46);
lean::cnstr_set(x_50, 2, x_48);
x_51 = lean::cnstr_get(x_18, 2);
lean::inc(x_51);
lean::dec(x_18);
if (lean::is_scalar(x_39)) {
 x_54 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_54 = x_39;
}
lean::cnstr_set(x_54, 0, x_51);
lean::cnstr_set(x_54, 1, x_40);
lean::cnstr_set(x_54, 2, x_42);
x_55 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_37, x_54);
x_56 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_57 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_56, x_55);
x_3 = x_57;
x_4 = x_50;
goto lbl_5;
}
else
{
obj* x_60; uint8 x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
lean::dec(x_6);
lean::dec(x_18);
x_60 = lean::cnstr_get(x_31, 0);
lean::inc(x_60);
x_62 = lean::cnstr_get_scalar<uint8>(x_31, sizeof(void*)*1);
if (lean::is_exclusive(x_31)) {
 lean::cnstr_release(x_31, 0);
 x_63 = x_31;
} else {
 lean::dec(x_31);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_60);
lean::cnstr_set_scalar(x_64, sizeof(void*)*1, x_62);
x_65 = x_64;
x_66 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_67 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_66, x_65);
x_3 = x_67;
x_4 = x_33;
goto lbl_5;
}
}
else
{
obj* x_68; obj* x_70; obj* x_71; obj* x_73; obj* x_74; obj* x_76; obj* x_78; obj* x_79; obj* x_82; 
x_68 = lean::cnstr_get(x_18, 1);
lean::inc(x_68);
x_70 = lean::box(0);
x_71 = lean::cnstr_get(x_2, 1);
lean::inc(x_71);
x_73 = lean::mk_nat_obj(1u);
x_74 = lean::nat_add(x_71, x_73);
lean::dec(x_71);
x_76 = lean::cnstr_get(x_2, 2);
lean::inc(x_76);
x_78 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_78, 0, x_6);
lean::cnstr_set(x_78, 1, x_74);
lean::cnstr_set(x_78, 2, x_76);
x_79 = lean::cnstr_get(x_18, 2);
lean::inc(x_79);
lean::dec(x_18);
x_82 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_82, 0, x_79);
lean::cnstr_set(x_82, 1, x_68);
lean::cnstr_set(x_82, 2, x_70);
x_3 = x_82;
x_4 = x_78;
goto lbl_5;
}
}
lbl_5:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_86 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_87 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_86, x_3);
x_88 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_86, x_87);
x_89 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_4);
return x_89;
}
else
{
obj* x_90; uint8 x_92; obj* x_93; obj* x_94; obj* x_95; obj* x_97; obj* x_101; obj* x_102; obj* x_104; 
x_90 = lean::cnstr_get(x_3, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*1);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 x_93 = x_3;
} else {
 lean::dec(x_3);
 x_93 = lean::box(0);
}
x_97 = lean::cnstr_get(x_90, 0);
lean::inc(x_97);
lean::dec(x_90);
lean::inc(x_0);
x_101 = l_lean_parser_monad__parsec_observing___at_lean_parser_token___spec__2(x_0, x_97, x_4);
x_102 = lean::cnstr_get(x_101, 0);
lean::inc(x_102);
x_104 = lean::cnstr_get(x_101, 1);
lean::inc(x_104);
lean::dec(x_101);
if (lean::obj_tag(x_102) == 0)
{
obj* x_107; obj* x_109; obj* x_111; obj* x_113; obj* x_115; obj* x_116; obj* x_118; 
x_107 = lean::cnstr_get(x_102, 0);
lean::inc(x_107);
x_109 = lean::cnstr_get(x_102, 1);
lean::inc(x_109);
x_111 = lean::cnstr_get(x_102, 2);
lean::inc(x_111);
if (lean::is_exclusive(x_102)) {
 lean::cnstr_release(x_102, 0);
 lean::cnstr_release(x_102, 1);
 lean::cnstr_release(x_102, 2);
 x_113 = x_102;
} else {
 lean::dec(x_102);
 x_113 = lean::box(0);
}
lean::inc(x_0);
x_115 = l_lean_parser_match__token(x_0, x_109, x_104);
x_116 = lean::cnstr_get(x_115, 0);
lean::inc(x_116);
x_118 = lean::cnstr_get(x_115, 1);
lean::inc(x_118);
lean::dec(x_115);
if (lean::obj_tag(x_116) == 0)
{
obj* x_121; obj* x_123; obj* x_125; obj* x_128; obj* x_129; obj* x_131; 
x_121 = lean::cnstr_get(x_116, 0);
lean::inc(x_121);
x_123 = lean::cnstr_get(x_116, 1);
lean::inc(x_123);
x_125 = lean::cnstr_get(x_116, 2);
lean::inc(x_125);
lean::dec(x_116);
if (lean::obj_tag(x_121) == 0)
{
if (lean::obj_tag(x_107) == 0)
{
obj* x_135; obj* x_136; obj* x_138; 
lean::dec(x_107);
lean::inc(x_0);
x_135 = l_lean_parser_number__or__string__lit(x_0, x_123, x_118);
x_136 = lean::cnstr_get(x_135, 0);
lean::inc(x_136);
x_138 = lean::cnstr_get(x_135, 1);
lean::inc(x_138);
lean::dec(x_135);
x_128 = x_136;
x_129 = x_138;
goto lbl_130;
}
else
{
obj* x_143; obj* x_144; obj* x_146; 
lean::dec(x_107);
lean::inc(x_0);
x_143 = l___private_init_lean_parser_token_4__ident_x_27(x_0, x_123, x_118);
x_144 = lean::cnstr_get(x_143, 0);
lean::inc(x_144);
x_146 = lean::cnstr_get(x_143, 1);
lean::inc(x_146);
lean::dec(x_143);
x_128 = x_144;
x_129 = x_146;
goto lbl_130;
}
}
else
{
obj* x_149; obj* x_152; 
x_149 = lean::cnstr_get(x_121, 0);
lean::inc(x_149);
lean::dec(x_121);
x_152 = lean::cnstr_get(x_149, 2);
lean::inc(x_152);
if (lean::obj_tag(x_152) == 0)
{
if (lean::obj_tag(x_107) == 0)
{
obj* x_157; obj* x_158; obj* x_160; 
lean::dec(x_107);
lean::inc(x_0);
lean::inc(x_1);
x_157 = l___private_init_lean_parser_token_5__mk__consume__token(x_149, x_1, x_0, x_123, x_118);
x_158 = lean::cnstr_get(x_157, 0);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_157, 1);
lean::inc(x_160);
lean::dec(x_157);
x_128 = x_158;
x_129 = x_160;
goto lbl_130;
}
else
{
obj* x_166; obj* x_167; obj* x_169; 
lean::dec(x_107);
lean::inc(x_0);
lean::inc(x_1);
x_166 = l_lean_parser_token__cont(x_1, x_149, x_0, x_123, x_118);
x_167 = lean::cnstr_get(x_166, 0);
lean::inc(x_167);
x_169 = lean::cnstr_get(x_166, 1);
lean::inc(x_169);
lean::dec(x_166);
x_128 = x_167;
x_129 = x_169;
goto lbl_130;
}
}
else
{
obj* x_175; 
lean::dec(x_152);
lean::dec(x_149);
lean::dec(x_107);
x_175 = lean::box(0);
x_131 = x_175;
goto lbl_132;
}
}
lbl_130:
{
if (lean::obj_tag(x_128) == 0)
{
obj* x_176; obj* x_178; obj* x_180; obj* x_183; obj* x_184; obj* x_186; 
x_176 = lean::cnstr_get(x_128, 0);
lean::inc(x_176);
x_178 = lean::cnstr_get(x_128, 1);
lean::inc(x_178);
x_180 = lean::cnstr_get(x_128, 2);
lean::inc(x_180);
lean::dec(x_128);
x_183 = l_lean_parser_with__trailing___at_lean_parser_token___spec__3(x_176, x_0, x_178, x_129);
x_184 = lean::cnstr_get(x_183, 0);
lean::inc(x_184);
x_186 = lean::cnstr_get(x_183, 1);
lean::inc(x_186);
lean::dec(x_183);
if (lean::obj_tag(x_184) == 0)
{
obj* x_190; obj* x_192; obj* x_194; obj* x_199; obj* x_200; obj* x_201; obj* x_203; obj* x_206; obj* x_207; obj* x_209; obj* x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; obj* x_215; 
lean::dec(x_186);
x_190 = lean::cnstr_get(x_184, 0);
lean::inc(x_190);
x_192 = lean::cnstr_get(x_184, 1);
lean::inc(x_192);
x_194 = lean::cnstr_get(x_184, 2);
lean::inc(x_194);
lean::dec(x_184);
lean::inc(x_190);
lean::inc(x_192);
x_199 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_199, 0, x_1);
lean::cnstr_set(x_199, 1, x_192);
lean::cnstr_set(x_199, 2, x_190);
x_200 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_200, 0, x_199);
x_201 = lean::cnstr_get(x_2, 1);
lean::inc(x_201);
x_203 = lean::cnstr_get(x_2, 2);
lean::inc(x_203);
lean::dec(x_2);
x_206 = lean::mk_nat_obj(1u);
x_207 = lean::nat_add(x_203, x_206);
lean::dec(x_203);
x_209 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_209, 0, x_200);
lean::cnstr_set(x_209, 1, x_201);
lean::cnstr_set(x_209, 2, x_207);
x_210 = l_lean_parser_match__token___closed__2;
if (lean::is_scalar(x_113)) {
 x_211 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_211 = x_113;
}
lean::cnstr_set(x_211, 0, x_190);
lean::cnstr_set(x_211, 1, x_192);
lean::cnstr_set(x_211, 2, x_210);
x_212 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_194, x_211);
x_213 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_180, x_212);
x_214 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_125, x_213);
x_215 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_111, x_214);
x_94 = x_215;
x_95 = x_209;
goto lbl_96;
}
else
{
obj* x_219; uint8 x_221; obj* x_222; obj* x_223; obj* x_224; obj* x_225; obj* x_226; obj* x_227; 
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_113);
x_219 = lean::cnstr_get(x_184, 0);
lean::inc(x_219);
x_221 = lean::cnstr_get_scalar<uint8>(x_184, sizeof(void*)*1);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 x_222 = x_184;
} else {
 lean::dec(x_184);
 x_222 = lean::box(0);
}
if (lean::is_scalar(x_222)) {
 x_223 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_223 = x_222;
}
lean::cnstr_set(x_223, 0, x_219);
lean::cnstr_set_scalar(x_223, sizeof(void*)*1, x_221);
x_224 = x_223;
x_225 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_180, x_224);
x_226 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_125, x_225);
x_227 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_111, x_226);
x_94 = x_227;
x_95 = x_186;
goto lbl_96;
}
}
else
{
obj* x_232; uint8 x_234; obj* x_235; obj* x_236; obj* x_237; obj* x_238; obj* x_239; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_113);
x_232 = lean::cnstr_get(x_128, 0);
lean::inc(x_232);
x_234 = lean::cnstr_get_scalar<uint8>(x_128, sizeof(void*)*1);
if (lean::is_exclusive(x_128)) {
 lean::cnstr_release(x_128, 0);
 x_235 = x_128;
} else {
 lean::dec(x_128);
 x_235 = lean::box(0);
}
if (lean::is_scalar(x_235)) {
 x_236 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_236 = x_235;
}
lean::cnstr_set(x_236, 0, x_232);
lean::cnstr_set_scalar(x_236, sizeof(void*)*1, x_234);
x_237 = x_236;
x_238 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_125, x_237);
x_239 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_111, x_238);
x_94 = x_239;
x_95 = x_129;
goto lbl_96;
}
}
lbl_132:
{
obj* x_241; obj* x_242; obj* x_243; obj* x_245; obj* x_246; obj* x_248; 
lean::dec(x_131);
x_241 = lean::box(0);
x_242 = l_lean_parser_token___closed__1;
x_243 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_245 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_242, x_243, x_241, x_241, x_0, x_123, x_118);
x_246 = lean::cnstr_get(x_245, 0);
lean::inc(x_246);
x_248 = lean::cnstr_get(x_245, 1);
lean::inc(x_248);
lean::dec(x_245);
x_128 = x_246;
x_129 = x_248;
goto lbl_130;
}
}
else
{
obj* x_256; uint8 x_258; obj* x_259; obj* x_260; obj* x_261; obj* x_262; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
lean::dec(x_113);
lean::dec(x_107);
x_256 = lean::cnstr_get(x_116, 0);
lean::inc(x_256);
x_258 = lean::cnstr_get_scalar<uint8>(x_116, sizeof(void*)*1);
if (lean::is_exclusive(x_116)) {
 lean::cnstr_release(x_116, 0);
 x_259 = x_116;
} else {
 lean::dec(x_116);
 x_259 = lean::box(0);
}
if (lean::is_scalar(x_259)) {
 x_260 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_260 = x_259;
}
lean::cnstr_set(x_260, 0, x_256);
lean::cnstr_set_scalar(x_260, sizeof(void*)*1, x_258);
x_261 = x_260;
x_262 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_111, x_261);
x_94 = x_262;
x_95 = x_118;
goto lbl_96;
}
}
else
{
obj* x_266; uint8 x_268; obj* x_269; obj* x_270; obj* x_271; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_266 = lean::cnstr_get(x_102, 0);
lean::inc(x_266);
x_268 = lean::cnstr_get_scalar<uint8>(x_102, sizeof(void*)*1);
if (lean::is_exclusive(x_102)) {
 lean::cnstr_release(x_102, 0);
 x_269 = x_102;
} else {
 lean::dec(x_102);
 x_269 = lean::box(0);
}
if (lean::is_scalar(x_269)) {
 x_270 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_270 = x_269;
}
lean::cnstr_set(x_270, 0, x_266);
lean::cnstr_set_scalar(x_270, sizeof(void*)*1, x_268);
x_271 = x_270;
x_94 = x_271;
x_95 = x_104;
goto lbl_96;
}
lbl_96:
{
if (lean::obj_tag(x_94) == 0)
{
obj* x_273; obj* x_274; obj* x_275; obj* x_276; 
lean::dec(x_93);
x_273 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_274 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_273, x_94);
x_275 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_273, x_274);
x_276 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_276, 0, x_275);
lean::cnstr_set(x_276, 1, x_95);
return x_276;
}
else
{
obj* x_277; uint8 x_279; 
x_277 = lean::cnstr_get(x_94, 0);
lean::inc(x_277);
x_279 = lean::cnstr_get_scalar<uint8>(x_94, sizeof(void*)*1);
lean::dec(x_94);
if (x_92 == 0)
{
obj* x_281; obj* x_282; obj* x_283; obj* x_284; obj* x_285; obj* x_286; 
if (lean::is_scalar(x_93)) {
 x_281 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_281 = x_93;
}
lean::cnstr_set(x_281, 0, x_277);
lean::cnstr_set_scalar(x_281, sizeof(void*)*1, x_279);
x_282 = x_281;
x_283 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_284 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_283, x_282);
x_285 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_283, x_284);
x_286 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_286, 0, x_285);
lean::cnstr_set(x_286, 1, x_95);
return x_286;
}
else
{
obj* x_287; obj* x_288; obj* x_289; obj* x_290; obj* x_291; obj* x_292; 
if (lean::is_scalar(x_93)) {
 x_287 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_287 = x_93;
}
lean::cnstr_set(x_287, 0, x_277);
lean::cnstr_set_scalar(x_287, sizeof(void*)*1, x_92);
x_288 = x_287;
x_289 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_290 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_289, x_288);
x_291 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_289, x_290);
x_292 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_292, 0, x_291);
lean::cnstr_set(x_292, 1, x_95);
return x_292;
}
}
}
}
}
}
}
obj* l_lean_parser_parsec__t_lookahead___at_lean_parser_peek__token___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_7; obj* x_9; 
lean::inc(x_1);
x_4 = l_lean_parser_token(x_0, x_1, x_2);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 lean::cnstr_release(x_4, 1);
 x_9 = x_4;
} else {
 lean::dec(x_4);
 x_9 = lean::box(0);
}
if (lean::obj_tag(x_5) == 0)
{
obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_10 = lean::cnstr_get(x_5, 0);
lean::inc(x_10);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_12 = x_5;
} else {
 lean::dec(x_5);
 x_12 = lean::box(0);
}
x_13 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_12)) {
 x_14 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_14 = x_12;
}
lean::cnstr_set(x_14, 0, x_10);
lean::cnstr_set(x_14, 1, x_1);
lean::cnstr_set(x_14, 2, x_13);
if (lean::is_scalar(x_9)) {
 x_15 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_15 = x_9;
}
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_7);
return x_15;
}
else
{
obj* x_17; 
lean::dec(x_1);
if (lean::is_scalar(x_9)) {
 x_17 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_17 = x_9;
}
lean::cnstr_set(x_17, 0, x_5);
lean::cnstr_set(x_17, 1, x_7);
return x_17;
}
}
}
obj* l_lean_parser_monad__parsec_observing___at_lean_parser_peek__token___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_8; obj* x_9; 
x_3 = l_lean_parser_parsec__t_lookahead___at_lean_parser_peek__token___spec__1(x_0, x_1, x_2);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_release(x_3, 0);
 lean::cnstr_release(x_3, 1);
 x_8 = x_3;
} else {
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = l_lean_parser_parsec__t_try__mk__res___rarg(x_4);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_9, 2);
lean::inc(x_14);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 lean::cnstr_release(x_9, 2);
 x_16 = x_9;
} else {
 lean::dec(x_9);
 x_16 = lean::box(0);
}
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_10);
x_18 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_16)) {
 x_19 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_19 = x_16;
}
lean::cnstr_set(x_19, 0, x_17);
lean::cnstr_set(x_19, 1, x_12);
lean::cnstr_set(x_19, 2, x_18);
x_20 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_14, x_19);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; 
if (lean::is_scalar(x_8)) {
 x_21 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_21 = x_8;
}
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_6);
return x_21;
}
else
{
obj* x_22; obj* x_25; obj* x_27; obj* x_28; obj* x_29; 
x_22 = lean::cnstr_get(x_20, 0);
lean::inc(x_22);
lean::dec(x_20);
x_25 = lean::cnstr_get(x_22, 0);
lean::inc(x_25);
x_27 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_27, 0, x_22);
x_28 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_25);
lean::cnstr_set(x_28, 2, x_18);
if (lean::is_scalar(x_8)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_8;
}
lean::cnstr_set(x_29, 0, x_28);
lean::cnstr_set(x_29, 1, x_6);
return x_29;
}
}
else
{
obj* x_30; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_30 = lean::cnstr_get(x_9, 0);
lean::inc(x_30);
lean::dec(x_9);
x_33 = lean::cnstr_get(x_30, 0);
lean::inc(x_33);
x_35 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_35, 0, x_30);
x_36 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_37 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_37, 0, x_35);
lean::cnstr_set(x_37, 1, x_33);
lean::cnstr_set(x_37, 2, x_36);
if (lean::is_scalar(x_8)) {
 x_38 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_38 = x_8;
}
lean::cnstr_set(x_38, 0, x_37);
lean::cnstr_set(x_38, 1, x_6);
return x_38;
}
}
}
obj* l_lean_parser_peek__token(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_lean_parser_monad__parsec_observing___at_lean_parser_peek__token___spec__2(x_0, x_1, x_2);
return x_3;
}
}
obj* l_lean_parser_symbol__core___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_8; obj* x_9; obj* x_11; obj* x_13; 
lean::inc(x_4);
lean::inc(x_3);
x_8 = l_lean_parser_token(x_3, x_4, x_5);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_8, 1);
lean::inc(x_11);
if (lean::is_exclusive(x_8)) {
 lean::cnstr_release(x_8, 0);
 lean::cnstr_release(x_8, 1);
 x_13 = x_8;
} else {
 lean::dec(x_8);
 x_13 = lean::box(0);
}
if (lean::obj_tag(x_9) == 0)
{
obj* x_14; obj* x_16; obj* x_18; obj* x_20; obj* x_21; 
x_14 = lean::cnstr_get(x_9, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_9, 1);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_9, 2);
lean::inc(x_18);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 lean::cnstr_release(x_9, 2);
 x_20 = x_9;
} else {
 lean::dec(x_9);
 x_20 = lean::box(0);
}
switch (lean::obj_tag(x_14)) {
case 0:
{
obj* x_24; obj* x_26; uint8 x_29; 
lean::dec(x_13);
x_24 = lean::cnstr_get(x_14, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_24, 1);
lean::inc(x_26);
lean::dec(x_24);
x_29 = lean::string_dec_eq(x_2, x_26);
lean::dec(x_2);
if (x_29 == 0)
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_36; obj* x_38; 
x_31 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_31, 0, x_4);
x_32 = lean::box(0);
x_33 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_26, x_0, x_31, x_32, x_3, x_16, x_11);
x_34 = lean::cnstr_get(x_33, 0);
lean::inc(x_34);
x_36 = lean::cnstr_get(x_33, 1);
lean::inc(x_36);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_release(x_33, 0);
 lean::cnstr_release(x_33, 1);
 x_38 = x_33;
} else {
 lean::dec(x_33);
 x_38 = lean::box(0);
}
if (lean::obj_tag(x_34) == 0)
{
obj* x_39; obj* x_41; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_39 = lean::cnstr_get(x_34, 1);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_34, 2);
lean::inc(x_41);
lean::dec(x_34);
x_44 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_20)) {
 x_45 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_45 = x_20;
}
lean::cnstr_set(x_45, 0, x_14);
lean::cnstr_set(x_45, 1, x_39);
lean::cnstr_set(x_45, 2, x_44);
x_46 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_41, x_45);
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_46);
x_48 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_44, x_47);
x_49 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_48, x_1);
x_50 = l_lean_parser_parsec__t_try__mk__res___rarg(x_49);
if (lean::is_scalar(x_38)) {
 x_51 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_51 = x_38;
}
lean::cnstr_set(x_51, 0, x_50);
lean::cnstr_set(x_51, 1, x_36);
return x_51;
}
else
{
obj* x_54; uint8 x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
lean::dec(x_14);
lean::dec(x_20);
x_54 = lean::cnstr_get(x_34, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get_scalar<uint8>(x_34, sizeof(void*)*1);
if (lean::is_exclusive(x_34)) {
 lean::cnstr_release(x_34, 0);
 x_57 = x_34;
} else {
 lean::dec(x_34);
 x_57 = lean::box(0);
}
if (lean::is_scalar(x_57)) {
 x_58 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_58 = x_57;
}
lean::cnstr_set(x_58, 0, x_54);
lean::cnstr_set_scalar(x_58, sizeof(void*)*1, x_56);
x_59 = x_58;
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_59);
x_61 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_62 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_61, x_60);
x_63 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_62, x_1);
x_64 = l_lean_parser_parsec__t_try__mk__res___rarg(x_63);
if (lean::is_scalar(x_38)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_38;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_36);
return x_65;
}
}
else
{
obj* x_70; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_26);
x_70 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_20)) {
 x_71 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_71 = x_20;
}
lean::cnstr_set(x_71, 0, x_14);
lean::cnstr_set(x_71, 1, x_16);
lean::cnstr_set(x_71, 2, x_70);
x_72 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_71);
x_73 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_74 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_73, x_72);
x_75 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_74, x_1);
x_76 = l_lean_parser_parsec__t_try__mk__res___rarg(x_75);
x_77 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_11);
return x_77;
}
}
case 3:
{
obj* x_80; 
lean::dec(x_2);
lean::dec(x_20);
x_80 = lean::box(0);
x_21 = x_80;
goto lbl_22;
}
default:
{
obj* x_84; 
lean::dec(x_14);
lean::dec(x_2);
lean::dec(x_20);
x_84 = lean::box(0);
x_21 = x_84;
goto lbl_22;
}
}
lbl_22:
{
obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_92; obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; 
lean::dec(x_21);
x_86 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_86, 0, x_4);
x_87 = lean::box(0);
x_88 = l_string_join___closed__1;
x_89 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_88, x_0, x_86, x_87, x_3, x_16, x_11);
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
lean::dec(x_89);
x_95 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_90);
x_96 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_97 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_96, x_95);
x_98 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_97, x_1);
x_99 = l_lean_parser_parsec__t_try__mk__res___rarg(x_98);
if (lean::is_scalar(x_13)) {
 x_100 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_100 = x_13;
}
lean::cnstr_set(x_100, 0, x_99);
lean::cnstr_set(x_100, 1, x_92);
return x_100;
}
}
else
{
obj* x_105; uint8 x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_105 = lean::cnstr_get(x_9, 0);
lean::inc(x_105);
x_107 = lean::cnstr_get_scalar<uint8>(x_9, sizeof(void*)*1);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 x_108 = x_9;
} else {
 lean::dec(x_9);
 x_108 = lean::box(0);
}
if (lean::is_scalar(x_108)) {
 x_109 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_109 = x_108;
}
lean::cnstr_set(x_109, 0, x_105);
lean::cnstr_set_scalar(x_109, sizeof(void*)*1, x_107);
x_110 = x_109;
x_111 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_112 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_111, x_110);
x_113 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_112, x_1);
x_114 = l_lean_parser_parsec__t_try__mk__res___rarg(x_113);
if (lean::is_scalar(x_13)) {
 x_115 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_115 = x_13;
}
lean::cnstr_set(x_115, 0, x_114);
lean::cnstr_set(x_115, 1, x_11);
return x_115;
}
}
}
obj* l_lean_parser_symbol__core___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_2);
lean::inc(x_1);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_6, 0, x_1);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___rarg___lambda__1), 6, 3);
lean::closure_set(x_7, 0, x_3);
lean::closure_set(x_7, 1, x_6);
lean::closure_set(x_7, 2, x_1);
x_8 = lean::apply_2(x_0, lean::box(0), x_7);
return x_8;
}
}
obj* l_lean_parser_symbol__core(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_parser_symbol___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_6; 
x_3 = l_string_trim(x_1);
lean::inc(x_3);
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_5, 0, x_3);
x_6 = l_lean_parser_symbol__core___rarg(x_0, x_3, x_2, x_5);
return x_6;
}
}
obj* l_lean_parser_symbol(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_symbol_tokens___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_string_trim(x_0);
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_3);
x_5 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
return x_5;
}
}
obj* l_lean_parser_symbol_tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol_tokens___rarg), 2, 0);
return x_4;
}
}
obj* l_lean_parser_symbol_view___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = l_lean_parser_raw_view___rarg___closed__1;
x_7 = l_lean_parser_raw_view___rarg___closed__2;
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
obj* l_lean_parser_symbol_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol_view___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_symbol_view__default___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::box(0);
return x_6;
}
}
obj* l_lean_parser_symbol_view__default(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol_view__default___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(obj* x_0) {
_start:
{
obj* x_1; uint8 x_3; 
x_1 = l_lean_parser_number;
lean::inc(x_0);
x_3 = l_lean_parser_syntax_is__of__kind___main(x_1, x_0);
if (x_3 == 0)
{
obj* x_5; 
lean::dec(x_0);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_6 = l_lean_parser_number_has__view;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::apply_1(x_7, x_0);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
}
obj* l_lean_parser_number_parser___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
lean::inc(x_2);
lean::inc(x_1);
x_6 = l_lean_parser_token(x_1, x_2, x_3);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_18 = x_7;
} else {
 lean::dec(x_7);
 x_18 = lean::box(0);
}
lean::inc(x_12);
x_20 = l_lean_parser_try__view___at_lean_parser_number_parser___spec__1(x_12);
if (lean::obj_tag(x_20) == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_12);
lean::dec(x_18);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_2);
x_24 = lean::box(0);
x_25 = l_string_join___closed__1;
lean::inc(x_0);
x_27 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_25, x_0, x_23, x_24, x_1, x_14, x_9);
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_33, x_28);
x_35 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_34);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_33, x_35);
x_37 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_36, x_0);
x_38 = l_lean_parser_parsec__t_try__mk__res___rarg(x_37);
if (lean::is_scalar(x_11)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_11;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_30);
return x_39;
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_20);
x_43 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_18)) {
 x_44 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_44 = x_18;
}
lean::cnstr_set(x_44, 0, x_12);
lean::cnstr_set(x_44, 1, x_14);
lean::cnstr_set(x_44, 2, x_43);
x_45 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_44);
x_46 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_46, x_45);
x_48 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_47, x_0);
x_49 = l_lean_parser_parsec__t_try__mk__res___rarg(x_48);
if (lean::is_scalar(x_11)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_11;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_9);
return x_50;
}
}
else
{
obj* x_53; uint8 x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_1);
lean::dec(x_2);
x_53 = lean::cnstr_get(x_7, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_56 = x_7;
} else {
 lean::dec(x_7);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_53);
lean::cnstr_set_scalar(x_57, sizeof(void*)*1, x_55);
x_58 = x_57;
x_59 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_59, x_58);
x_61 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_60, x_0);
x_62 = l_lean_parser_parsec__t_try__mk__res___rarg(x_61);
if (lean::is_scalar(x_11)) {
 x_63 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_63 = x_11;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_9);
return x_63;
}
}
}
obj* _init_l_lean_parser_number_parser___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("number");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___rarg___lambda__1), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_parser_number_parser___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_parser_number_parser___rarg___closed__1;
x_2 = lean::apply_2(x_0, lean::box(0), x_1);
return x_2;
}
}
obj* l_lean_parser_number_parser(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_number_parser_tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
}
obj* _init_l_lean_parser_number_parser_view___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_number_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_number_parser_view___rarg___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_number_has__view;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_number_parser_view___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
lean::dec(x_0);
x_2 = l_lean_parser_number_parser_view___rarg___closed__1;
x_3 = l_lean_parser_number_parser_view___rarg___closed__2;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_lean_parser_number_parser_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_number_parser_view___rarg), 1, 0);
return x_2;
}
}
obj* l___private_init_lean_parser_token_7__to__nat__core___main(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; uint32 x_9; uint8 x_10; obj* x_11; obj* x_13; obj* x_14; 
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_sub(x_2, x_6);
lean::dec(x_2);
x_9 = lean::string_iterator_curr(x_1);
x_10 = l_char_is__digit(x_9);
x_11 = lean::nat_mul(x_3, x_0);
lean::dec(x_3);
x_13 = lean::string_iterator_next(x_1);
if (x_10 == 0)
{
obj* x_16; 
x_16 = lean::box(0);
x_14 = x_16;
goto lbl_15;
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_21; 
x_17 = lean::uint32_to_nat(x_9);
x_18 = l___private_init_data_string_basic_4__to__nat__core___main___closed__1;
x_19 = lean::nat_sub(x_17, x_18);
lean::dec(x_17);
x_21 = lean::nat_add(x_11, x_19);
lean::dec(x_19);
lean::dec(x_11);
x_1 = x_13;
x_2 = x_7;
x_3 = x_21;
goto _start;
}
lbl_15:
{
uint32 x_26; uint8 x_27; 
lean::dec(x_14);
x_26 = 97;
x_27 = x_26 <= x_9;
if (x_27 == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_32; 
x_28 = lean::uint32_to_nat(x_9);
x_29 = l_lean_parser_parse__hex__digit___rarg___lambda__5___closed__1;
x_30 = lean::nat_sub(x_28, x_29);
lean::dec(x_28);
x_32 = lean::nat_add(x_11, x_30);
lean::dec(x_30);
lean::dec(x_11);
x_1 = x_13;
x_2 = x_7;
x_3 = x_32;
goto _start;
}
else
{
uint32 x_36; uint8 x_37; 
x_36 = 102;
x_37 = x_9 <= x_36;
if (x_37 == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_42; 
x_38 = lean::uint32_to_nat(x_9);
x_39 = l_lean_parser_parse__hex__digit___rarg___lambda__5___closed__1;
x_40 = lean::nat_sub(x_38, x_39);
lean::dec(x_38);
x_42 = lean::nat_add(x_11, x_40);
lean::dec(x_40);
lean::dec(x_11);
x_1 = x_13;
x_2 = x_7;
x_3 = x_42;
goto _start;
}
else
{
obj* x_46; obj* x_47; obj* x_48; obj* x_50; 
x_46 = lean::uint32_to_nat(x_9);
x_47 = l_lean_parser_parse__hex__digit___rarg___lambda__3___closed__1;
x_48 = lean::nat_sub(x_46, x_47);
lean::dec(x_46);
x_50 = lean::nat_add(x_11, x_48);
lean::dec(x_48);
lean::dec(x_11);
x_1 = x_13;
x_2 = x_7;
x_3 = x_50;
goto _start;
}
}
}
}
else
{
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
return x_3;
}
}
}
obj* l___private_init_lean_parser_token_7__to__nat__core(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_parser_token_7__to__nat__core___main(x_0, x_1, x_2, x_3);
return x_4;
}
}
obj* l___private_init_lean_parser_token_8__to__nat__base(obj* x_0, obj* x_1) {
_start:
{
obj* x_3; obj* x_4; obj* x_6; obj* x_7; 
lean::inc(x_0);
x_3 = lean::string_mk_iterator(x_0);
x_4 = lean::string_length(x_0);
lean::dec(x_0);
x_6 = lean::mk_nat_obj(0u);
x_7 = l___private_init_lean_parser_token_7__to__nat__core___main(x_1, x_3, x_4, x_6);
return x_7;
}
}
obj* l_lean_parser_number_view_to__nat___main(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 0:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
if (lean::obj_tag(x_1) == 0)
{
obj* x_4; 
x_4 = lean::mk_nat_obj(1138u);
return x_4;
}
else
{
obj* x_5; obj* x_8; obj* x_11; 
x_5 = lean::cnstr_get(x_1, 0);
lean::inc(x_5);
lean::dec(x_1);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::dec(x_5);
x_11 = l_string_to__nat(x_8);
return x_11;
}
}
case 1:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
if (lean::obj_tag(x_12) == 0)
{
obj* x_15; 
x_15 = lean::mk_nat_obj(1138u);
return x_15;
}
else
{
obj* x_16; obj* x_19; obj* x_22; obj* x_23; 
x_16 = lean::cnstr_get(x_12, 0);
lean::inc(x_16);
lean::dec(x_12);
x_19 = lean::cnstr_get(x_16, 1);
lean::inc(x_19);
lean::dec(x_16);
x_22 = lean::mk_nat_obj(2u);
x_23 = l___private_init_lean_parser_token_8__to__nat__base(x_19, x_22);
return x_23;
}
}
case 2:
{
obj* x_24; 
x_24 = lean::cnstr_get(x_0, 0);
lean::inc(x_24);
lean::dec(x_0);
if (lean::obj_tag(x_24) == 0)
{
obj* x_27; 
x_27 = lean::mk_nat_obj(1138u);
return x_27;
}
else
{
obj* x_28; obj* x_31; obj* x_34; obj* x_35; 
x_28 = lean::cnstr_get(x_24, 0);
lean::inc(x_28);
lean::dec(x_24);
x_31 = lean::cnstr_get(x_28, 1);
lean::inc(x_31);
lean::dec(x_28);
x_34 = lean::mk_nat_obj(8u);
x_35 = l___private_init_lean_parser_token_8__to__nat__base(x_31, x_34);
return x_35;
}
}
default:
{
obj* x_36; 
x_36 = lean::cnstr_get(x_0, 0);
lean::inc(x_36);
lean::dec(x_0);
if (lean::obj_tag(x_36) == 0)
{
obj* x_39; 
x_39 = lean::mk_nat_obj(1138u);
return x_39;
}
else
{
obj* x_40; obj* x_43; obj* x_46; obj* x_47; 
x_40 = lean::cnstr_get(x_36, 0);
lean::inc(x_40);
lean::dec(x_36);
x_43 = lean::cnstr_get(x_40, 1);
lean::inc(x_43);
lean::dec(x_40);
x_46 = lean::mk_nat_obj(16u);
x_47 = l___private_init_lean_parser_token_8__to__nat__base(x_43, x_46);
return x_47;
}
}
}
}
}
obj* l_lean_parser_number_view_to__nat(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_lean_parser_number_view_to__nat___main(x_0);
return x_1;
}
}
obj* l_lean_parser_number_view_of__nat(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::box(0);
x_2 = l_nat_repr(x_0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_5, 0, x_4);
return x_5;
}
}
obj* l_lean_parser_try__view___at_lean_parser_string__lit_parser___spec__1(obj* x_0) {
_start:
{
obj* x_1; uint8 x_3; 
x_1 = l_lean_parser_string__lit;
lean::inc(x_0);
x_3 = l_lean_parser_syntax_is__of__kind___main(x_1, x_0);
if (x_3 == 0)
{
obj* x_5; 
lean::dec(x_0);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_6 = l_lean_parser_string__lit_has__view;
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
x_10 = lean::apply_1(x_7, x_0);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_10);
return x_11;
}
}
}
obj* l_lean_parser_string__lit_parser___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
lean::inc(x_2);
lean::inc(x_1);
x_6 = l_lean_parser_token(x_1, x_2, x_3);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_20; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_18 = x_7;
} else {
 lean::dec(x_7);
 x_18 = lean::box(0);
}
lean::inc(x_12);
x_20 = l_lean_parser_try__view___at_lean_parser_string__lit_parser___spec__1(x_12);
if (lean::obj_tag(x_20) == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; obj* x_30; obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_12);
lean::dec(x_18);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_2);
x_24 = lean::box(0);
x_25 = l_string_join___closed__1;
lean::inc(x_0);
x_27 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_25, x_0, x_23, x_24, x_1, x_14, x_9);
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_33, x_28);
x_35 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_34);
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_33, x_35);
x_37 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_36, x_0);
x_38 = l_lean_parser_parsec__t_try__mk__res___rarg(x_37);
if (lean::is_scalar(x_11)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_11;
}
lean::cnstr_set(x_39, 0, x_38);
lean::cnstr_set(x_39, 1, x_30);
return x_39;
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_20);
x_43 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_18)) {
 x_44 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_44 = x_18;
}
lean::cnstr_set(x_44, 0, x_12);
lean::cnstr_set(x_44, 1, x_14);
lean::cnstr_set(x_44, 2, x_43);
x_45 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_44);
x_46 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_46, x_45);
x_48 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_47, x_0);
x_49 = l_lean_parser_parsec__t_try__mk__res___rarg(x_48);
if (lean::is_scalar(x_11)) {
 x_50 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_50 = x_11;
}
lean::cnstr_set(x_50, 0, x_49);
lean::cnstr_set(x_50, 1, x_9);
return x_50;
}
}
else
{
obj* x_53; uint8 x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; 
lean::dec(x_1);
lean::dec(x_2);
x_53 = lean::cnstr_get(x_7, 0);
lean::inc(x_53);
x_55 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_56 = x_7;
} else {
 lean::dec(x_7);
 x_56 = lean::box(0);
}
if (lean::is_scalar(x_56)) {
 x_57 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_57 = x_56;
}
lean::cnstr_set(x_57, 0, x_53);
lean::cnstr_set_scalar(x_57, sizeof(void*)*1, x_55);
x_58 = x_57;
x_59 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_60 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_59, x_58);
x_61 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_60, x_0);
x_62 = l_lean_parser_parsec__t_try__mk__res___rarg(x_61);
if (lean::is_scalar(x_11)) {
 x_63 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_63 = x_11;
}
lean::cnstr_set(x_63, 0, x_62);
lean::cnstr_set(x_63, 1, x_9);
return x_63;
}
}
}
obj* _init_l_lean_parser_string__lit_parser___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("string");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_string__lit_parser___rarg___lambda__1), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_parser_string__lit_parser___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_parser_string__lit_parser___rarg___closed__1;
x_2 = lean::apply_2(x_0, lean::box(0), x_1);
return x_2;
}
}
obj* l_lean_parser_string__lit_parser(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_string__lit_parser___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_string__lit_parser_tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
}
obj* _init_l_lean_parser_string__lit_parser_view___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_string__lit_has__view;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_lean_parser_string__lit_parser_view___rarg___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_lean_parser_string__lit_has__view;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* l_lean_parser_string__lit_parser_view___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
lean::dec(x_0);
x_2 = l_lean_parser_string__lit_parser_view___rarg___closed__1;
x_3 = l_lean_parser_string__lit_parser_view___rarg___closed__2;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_lean_parser_string__lit_parser_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_string__lit_parser_view___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; uint8 x_7; obj* x_8; obj* x_9; 
x_5 = l_option_get__or__else___main___rarg(x_2, x_4);
x_6 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_0);
lean::cnstr_set(x_6, 2, x_1);
lean::cnstr_set(x_6, 3, x_3);
x_7 = 0;
x_8 = lean::alloc_cnstr(1, 1, 1);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set_scalar(x_8, sizeof(void*)*1, x_7);
x_9 = x_8;
return x_9;
}
}
obj* l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg), 5, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_string__lit_view_value___spec__2(uint32 x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = lean::string_iterator_has_next(x_1);
if (x_2 == 0)
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_3 = lean::box(0);
x_4 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_5 = l_mjoin___rarg___closed__1;
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_4, x_5, x_3, x_3, x_1);
x_7 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_8 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_6);
return x_8;
}
else
{
uint32 x_9; uint8 x_10; 
x_9 = lean::string_iterator_curr(x_1);
x_10 = x_9 == x_0;
if (x_10 == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_11 = l_char_quote__core(x_9);
x_12 = l_char_has__repr___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_15 = lean::string_append(x_13, x_12);
x_16 = lean::box(0);
x_17 = l_mjoin___rarg___closed__1;
x_18 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_15, x_17, x_16, x_16, x_1);
x_19 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_20 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_19, x_18);
return x_20;
}
else
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_21 = lean::string_iterator_next(x_1);
x_22 = lean::box(0);
x_23 = lean::box_uint32(x_9);
x_24 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_21);
lean::cnstr_set(x_24, 2, x_22);
return x_24;
}
}
}
}
obj* l_lean_parser_monad__parsec_any___at_lean_parser_string__lit_view_value___spec__5(obj* x_0) {
_start:
{
uint8 x_1; 
x_1 = lean::string_iterator_has_next(x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_2 = lean::box(0);
x_3 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
x_5 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_3, x_4, x_2, x_2, x_0);
x_6 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_7 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_5);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_0);
x_9 = l_true_decidable;
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_10 = l_char_quote__core(x_8);
x_11 = l_char_has__repr___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_14 = lean::string_append(x_12, x_11);
x_15 = lean::box(0);
x_16 = l_mjoin___rarg___closed__1;
x_17 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_14, x_16, x_15, x_15, x_0);
x_18 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_17);
return x_19;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_20 = lean::string_iterator_next(x_0);
x_21 = lean::box(0);
x_22 = lean::box_uint32(x_8);
x_23 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_20);
lean::cnstr_set(x_23, 2, x_21);
return x_23;
}
}
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_view_value___spec__7___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_1);
x_4 = lean::box(0);
x_5 = l_mjoin___rarg___closed__1;
x_6 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_0, x_5, x_3, x_4, x_2);
return x_6;
}
}
obj* l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_view_value___spec__7(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_view_value___spec__7___rarg), 3, 0);
return x_2;
}
}
obj* l_lean_parser_monad__parsec_digit___at_lean_parser_string__lit_view_value___spec__9(obj* x_0) {
_start:
{
uint8 x_1; 
x_1 = lean::string_iterator_has_next(x_0);
if (x_1 == 0)
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_2 = lean::box(0);
x_3 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_4 = l_mjoin___rarg___closed__1;
x_5 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_3, x_4, x_2, x_2, x_0);
x_6 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_7 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_6, x_5);
return x_7;
}
else
{
uint32 x_8; uint8 x_9; 
x_8 = lean::string_iterator_curr(x_0);
x_9 = l_char_is__digit(x_8);
if (x_9 == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_10 = l_char_quote__core(x_8);
x_11 = l_char_has__repr___closed__1;
x_12 = lean::string_append(x_11, x_10);
lean::dec(x_10);
x_14 = lean::string_append(x_12, x_11);
x_15 = lean::box(0);
x_16 = l_mjoin___rarg___closed__1;
x_17 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_14, x_16, x_15, x_15, x_0);
x_18 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_19 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_18, x_17);
return x_19;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_20 = lean::string_iterator_next(x_0);
x_21 = lean::box(0);
x_22 = lean::box_uint32(x_8);
x_23 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_23, 0, x_22);
lean::cnstr_set(x_23, 1, x_20);
lean::cnstr_set(x_23, 2, x_21);
return x_23;
}
}
}
}
obj* l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; uint8 x_3; obj* x_6; 
lean::inc(x_0);
x_6 = l_lean_parser_monad__parsec_digit___at_lean_parser_string__lit_view_value___spec__9(x_0);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; uint32 x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_19; obj* x_20; obj* x_21; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_6, 2);
lean::inc(x_11);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 lean::cnstr_release(x_6, 2);
 x_13 = x_6;
} else {
 lean::dec(x_6);
 x_13 = lean::box(0);
}
x_14 = lean::unbox_uint32(x_7);
x_15 = lean::uint32_to_nat(x_14);
x_16 = l___private_init_data_string_basic_4__to__nat__core___main___closed__1;
x_17 = lean::nat_sub(x_15, x_16);
lean::dec(x_15);
x_19 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_13)) {
 x_20 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_20 = x_13;
}
lean::cnstr_set(x_20, 0, x_17);
lean::cnstr_set(x_20, 1, x_9);
lean::cnstr_set(x_20, 2, x_19);
x_21 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_20);
if (lean::obj_tag(x_21) == 0)
{
obj* x_23; obj* x_24; 
lean::dec(x_0);
x_23 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_24 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_21, x_23);
return x_24;
}
else
{
obj* x_25; uint8 x_27; 
x_25 = lean::cnstr_get(x_21, 0);
lean::inc(x_25);
x_27 = lean::cnstr_get_scalar<uint8>(x_21, sizeof(void*)*1);
x_1 = x_21;
x_2 = x_25;
x_3 = x_27;
goto lbl_4;
}
}
else
{
obj* x_28; uint8 x_30; obj* x_31; obj* x_33; obj* x_34; 
x_28 = lean::cnstr_get(x_6, 0);
lean::inc(x_28);
x_30 = lean::cnstr_get_scalar<uint8>(x_6, sizeof(void*)*1);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 x_31 = x_6;
} else {
 lean::dec(x_6);
 x_31 = lean::box(0);
}
lean::inc(x_28);
if (lean::is_scalar(x_31)) {
 x_33 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_33 = x_31;
}
lean::cnstr_set(x_33, 0, x_28);
lean::cnstr_set_scalar(x_33, sizeof(void*)*1, x_30);
x_34 = x_33;
x_1 = x_34;
x_2 = x_28;
x_3 = x_30;
goto lbl_4;
}
lbl_4:
{
obj* x_35; obj* x_36; uint8 x_37; 
if (x_3 == 0)
{
obj* x_40; uint8 x_42; 
lean::dec(x_1);
x_42 = lean::string_iterator_has_next(x_0);
if (x_42 == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_47; 
x_43 = lean::box(0);
x_44 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_45 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_47 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_44, x_45, x_43, x_43, x_0);
x_40 = x_47;
goto lbl_41;
}
else
{
uint32 x_48; uint32 x_49; uint8 x_50; uint8 x_52; 
x_48 = lean::string_iterator_curr(x_0);
x_49 = 97;
x_52 = x_49 <= x_48;
if (x_52 == 0)
{
obj* x_53; obj* x_54; obj* x_55; obj* x_57; obj* x_58; obj* x_59; obj* x_61; 
x_53 = l_char_quote__core(x_48);
x_54 = l_char_has__repr___closed__1;
x_55 = lean::string_append(x_54, x_53);
lean::dec(x_53);
x_57 = lean::string_append(x_55, x_54);
x_58 = lean::box(0);
x_59 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_61 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_57, x_59, x_58, x_58, x_0);
x_40 = x_61;
goto lbl_41;
}
else
{
uint8 x_62; 
x_62 = 1;
x_50 = x_62;
goto lbl_51;
}
lbl_51:
{
uint32 x_63; uint8 x_64; 
x_63 = 102;
x_64 = x_48 <= x_63;
if (x_64 == 0)
{
obj* x_65; obj* x_66; obj* x_67; obj* x_69; obj* x_70; obj* x_71; obj* x_73; 
x_65 = l_char_quote__core(x_48);
x_66 = l_char_has__repr___closed__1;
x_67 = lean::string_append(x_66, x_65);
lean::dec(x_65);
x_69 = lean::string_append(x_67, x_66);
x_70 = lean::box(0);
x_71 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_73 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_69, x_71, x_70, x_70, x_0);
x_40 = x_73;
goto lbl_41;
}
else
{
if (x_50 == 0)
{
obj* x_74; obj* x_75; obj* x_76; obj* x_78; obj* x_79; obj* x_80; obj* x_82; 
x_74 = l_char_quote__core(x_48);
x_75 = l_char_has__repr___closed__1;
x_76 = lean::string_append(x_75, x_74);
lean::dec(x_74);
x_78 = lean::string_append(x_76, x_75);
x_79 = lean::box(0);
x_80 = l_mjoin___rarg___closed__1;
lean::inc(x_0);
x_82 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_78, x_80, x_79, x_79, x_0);
x_40 = x_82;
goto lbl_41;
}
else
{
obj* x_84; obj* x_85; obj* x_86; obj* x_87; 
lean::inc(x_0);
x_84 = lean::string_iterator_next(x_0);
x_85 = lean::box(0);
x_86 = lean::box_uint32(x_48);
x_87 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_87, 0, x_86);
lean::cnstr_set(x_87, 1, x_84);
lean::cnstr_set(x_87, 2, x_85);
x_40 = x_87;
goto lbl_41;
}
}
}
}
lbl_41:
{
obj* x_88; obj* x_89; 
x_88 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_89 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_88, x_40);
if (lean::obj_tag(x_89) == 0)
{
obj* x_90; obj* x_92; obj* x_94; obj* x_96; uint32 x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_102; obj* x_103; obj* x_105; obj* x_106; 
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_92 = lean::cnstr_get(x_89, 1);
lean::inc(x_92);
x_94 = lean::cnstr_get(x_89, 2);
lean::inc(x_94);
if (lean::is_exclusive(x_89)) {
 lean::cnstr_release(x_89, 0);
 lean::cnstr_release(x_89, 1);
 lean::cnstr_release(x_89, 2);
 x_96 = x_89;
} else {
 lean::dec(x_89);
 x_96 = lean::box(0);
}
x_97 = lean::unbox_uint32(x_90);
x_98 = lean::uint32_to_nat(x_97);
x_99 = l_lean_parser_parse__hex__digit___rarg___lambda__3___closed__1;
x_100 = lean::nat_sub(x_98, x_99);
lean::dec(x_98);
x_102 = lean::mk_nat_obj(10u);
x_103 = lean::nat_add(x_102, x_100);
lean::dec(x_100);
if (lean::is_scalar(x_96)) {
 x_105 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_105 = x_96;
}
lean::cnstr_set(x_105, 0, x_103);
lean::cnstr_set(x_105, 1, x_92);
lean::cnstr_set(x_105, 2, x_88);
x_106 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_94, x_105);
if (lean::obj_tag(x_106) == 0)
{
obj* x_108; obj* x_109; obj* x_110; 
lean::dec(x_0);
x_108 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_106);
x_109 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_110 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_108, x_109);
return x_110;
}
else
{
obj* x_111; uint8 x_113; 
x_111 = lean::cnstr_get(x_106, 0);
lean::inc(x_111);
x_113 = lean::cnstr_get_scalar<uint8>(x_106, sizeof(void*)*1);
x_35 = x_106;
x_36 = x_111;
x_37 = x_113;
goto lbl_38;
}
}
else
{
obj* x_114; uint8 x_116; obj* x_117; obj* x_119; obj* x_120; 
x_114 = lean::cnstr_get(x_89, 0);
lean::inc(x_114);
x_116 = lean::cnstr_get_scalar<uint8>(x_89, sizeof(void*)*1);
if (lean::is_exclusive(x_89)) {
 lean::cnstr_release(x_89, 0);
 x_117 = x_89;
} else {
 lean::dec(x_89);
 x_117 = lean::box(0);
}
lean::inc(x_114);
if (lean::is_scalar(x_117)) {
 x_119 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_119 = x_117;
}
lean::cnstr_set(x_119, 0, x_114);
lean::cnstr_set_scalar(x_119, sizeof(void*)*1, x_116);
x_120 = x_119;
x_35 = x_120;
x_36 = x_114;
x_37 = x_116;
goto lbl_38;
}
}
}
else
{
obj* x_123; obj* x_124; 
lean::dec(x_0);
lean::dec(x_2);
x_123 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_124 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_1, x_123);
return x_124;
}
lbl_38:
{
if (x_37 == 0)
{
obj* x_126; uint8 x_128; 
lean::dec(x_35);
x_128 = lean::string_iterator_has_next(x_0);
if (x_128 == 0)
{
obj* x_129; obj* x_130; obj* x_131; obj* x_132; 
x_129 = lean::box(0);
x_130 = l_lean_parser_monad__parsec_eoi__error___rarg___closed__1;
x_131 = l_mjoin___rarg___closed__1;
x_132 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_130, x_131, x_129, x_129, x_0);
x_126 = x_132;
goto lbl_127;
}
else
{
uint32 x_133; uint32 x_134; uint8 x_135; uint8 x_137; 
x_133 = lean::string_iterator_curr(x_0);
x_134 = 65;
x_137 = x_134 <= x_133;
if (x_137 == 0)
{
obj* x_138; obj* x_139; obj* x_140; obj* x_142; obj* x_143; obj* x_144; obj* x_145; 
x_138 = l_char_quote__core(x_133);
x_139 = l_char_has__repr___closed__1;
x_140 = lean::string_append(x_139, x_138);
lean::dec(x_138);
x_142 = lean::string_append(x_140, x_139);
x_143 = lean::box(0);
x_144 = l_mjoin___rarg___closed__1;
x_145 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_142, x_144, x_143, x_143, x_0);
x_126 = x_145;
goto lbl_127;
}
else
{
uint8 x_146; 
x_146 = 1;
x_135 = x_146;
goto lbl_136;
}
lbl_136:
{
uint32 x_147; uint8 x_148; 
x_147 = 70;
x_148 = x_133 <= x_147;
if (x_148 == 0)
{
obj* x_149; obj* x_150; obj* x_151; obj* x_153; obj* x_154; obj* x_155; obj* x_156; 
x_149 = l_char_quote__core(x_133);
x_150 = l_char_has__repr___closed__1;
x_151 = lean::string_append(x_150, x_149);
lean::dec(x_149);
x_153 = lean::string_append(x_151, x_150);
x_154 = lean::box(0);
x_155 = l_mjoin___rarg___closed__1;
x_156 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_153, x_155, x_154, x_154, x_0);
x_126 = x_156;
goto lbl_127;
}
else
{
if (x_135 == 0)
{
obj* x_157; obj* x_158; obj* x_159; obj* x_161; obj* x_162; obj* x_163; obj* x_164; 
x_157 = l_char_quote__core(x_133);
x_158 = l_char_has__repr___closed__1;
x_159 = lean::string_append(x_158, x_157);
lean::dec(x_157);
x_161 = lean::string_append(x_159, x_158);
x_162 = lean::box(0);
x_163 = l_mjoin___rarg___closed__1;
x_164 = l_lean_parser_monad__parsec_error___at_lean_parser_string__lit_view_value___spec__3___rarg(x_161, x_163, x_162, x_162, x_0);
x_126 = x_164;
goto lbl_127;
}
else
{
obj* x_165; obj* x_166; obj* x_167; obj* x_168; 
x_165 = lean::string_iterator_next(x_0);
x_166 = lean::box(0);
x_167 = lean::box_uint32(x_133);
x_168 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_168, 0, x_167);
lean::cnstr_set(x_168, 1, x_165);
lean::cnstr_set(x_168, 2, x_166);
x_126 = x_168;
goto lbl_127;
}
}
}
}
lbl_127:
{
obj* x_169; obj* x_170; 
x_169 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_170 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_169, x_126);
if (lean::obj_tag(x_170) == 0)
{
obj* x_171; obj* x_173; obj* x_175; obj* x_177; uint32 x_178; obj* x_179; obj* x_180; obj* x_181; obj* x_183; obj* x_184; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_191; 
x_171 = lean::cnstr_get(x_170, 0);
lean::inc(x_171);
x_173 = lean::cnstr_get(x_170, 1);
lean::inc(x_173);
x_175 = lean::cnstr_get(x_170, 2);
lean::inc(x_175);
if (lean::is_exclusive(x_170)) {
 lean::cnstr_release(x_170, 0);
 lean::cnstr_release(x_170, 1);
 lean::cnstr_release(x_170, 2);
 x_177 = x_170;
} else {
 lean::dec(x_170);
 x_177 = lean::box(0);
}
x_178 = lean::unbox_uint32(x_171);
x_179 = lean::uint32_to_nat(x_178);
x_180 = l_lean_parser_parse__hex__digit___rarg___lambda__5___closed__1;
x_181 = lean::nat_sub(x_179, x_180);
lean::dec(x_179);
x_183 = lean::mk_nat_obj(10u);
x_184 = lean::nat_add(x_183, x_181);
lean::dec(x_181);
if (lean::is_scalar(x_177)) {
 x_186 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_186 = x_177;
}
lean::cnstr_set(x_186, 0, x_184);
lean::cnstr_set(x_186, 1, x_173);
lean::cnstr_set(x_186, 2, x_169);
x_187 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_175, x_186);
x_188 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_36, x_187);
x_189 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_188);
x_190 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_191 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_189, x_190);
return x_191;
}
else
{
obj* x_192; uint8 x_194; obj* x_195; obj* x_196; obj* x_197; obj* x_198; obj* x_199; obj* x_200; obj* x_201; 
x_192 = lean::cnstr_get(x_170, 0);
lean::inc(x_192);
x_194 = lean::cnstr_get_scalar<uint8>(x_170, sizeof(void*)*1);
if (lean::is_exclusive(x_170)) {
 lean::cnstr_release(x_170, 0);
 x_195 = x_170;
} else {
 lean::dec(x_170);
 x_195 = lean::box(0);
}
if (lean::is_scalar(x_195)) {
 x_196 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_196 = x_195;
}
lean::cnstr_set(x_196, 0, x_192);
lean::cnstr_set_scalar(x_196, sizeof(void*)*1, x_194);
x_197 = x_196;
x_198 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_36, x_197);
x_199 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_198);
x_200 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_201 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_199, x_200);
return x_201;
}
}
}
else
{
obj* x_204; obj* x_205; obj* x_206; 
lean::dec(x_36);
lean::dec(x_0);
x_204 = l_lean_parser_parsec__t_orelse__mk__res___rarg(x_2, x_35);
x_205 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1;
x_206 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_204, x_205);
return x_206;
}
}
}
}
}
obj* l_lean_parser_parse__quoted__char___at_lean_parser_string__lit_view_value___spec__6(obj* x_0) {
_start:
{
obj* x_2; 
lean::inc(x_0);
x_2 = l_lean_parser_monad__parsec_any___at_lean_parser_string__lit_view_value___spec__5(x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_12; obj* x_14; uint32 x_16; uint32 x_17; uint8 x_18; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 2);
lean::inc(x_7);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 lean::cnstr_release(x_2, 1);
 lean::cnstr_release(x_2, 2);
 x_9 = x_2;
} else {
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_16 = 92;
x_17 = lean::unbox_uint32(x_3);
x_18 = x_17 == x_16;
if (x_18 == 0)
{
obj* x_19; 
x_19 = lean::box(0);
x_14 = x_19;
goto lbl_15;
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_9);
lean::dec(x_0);
x_22 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_23 = lean::box_uint32(x_16);
x_24 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_5);
lean::cnstr_set(x_24, 2, x_22);
x_25 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_24);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_22, x_25);
return x_26;
}
lbl_11:
{
uint32 x_28; uint32 x_29; uint8 x_30; 
lean::dec(x_10);
x_28 = 117;
x_29 = lean::unbox_uint32(x_3);
x_30 = x_29 == x_28;
if (x_30 == 0)
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_9);
x_32 = l_lean_parser_parse__quoted__char___rarg___lambda__7___closed__1;
x_33 = l_lean_parser_monad__parsec_unexpected__at___at_lean_parser_string__lit_view_value___spec__7___rarg(x_32, x_0, x_5);
x_34 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_33);
x_35 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_36 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_35, x_34);
return x_36;
}
else
{
obj* x_38; 
lean::dec(x_0);
x_38 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(x_5);
if (lean::obj_tag(x_38) == 0)
{
obj* x_39; obj* x_41; obj* x_43; obj* x_46; 
x_39 = lean::cnstr_get(x_38, 0);
lean::inc(x_39);
x_41 = lean::cnstr_get(x_38, 1);
lean::inc(x_41);
x_43 = lean::cnstr_get(x_38, 2);
lean::inc(x_43);
lean::dec(x_38);
x_46 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(x_41);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_49; obj* x_51; obj* x_54; 
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
x_49 = lean::cnstr_get(x_46, 1);
lean::inc(x_49);
x_51 = lean::cnstr_get(x_46, 2);
lean::inc(x_51);
lean::dec(x_46);
x_54 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(x_49);
if (lean::obj_tag(x_54) == 0)
{
obj* x_55; obj* x_57; obj* x_59; obj* x_62; 
x_55 = lean::cnstr_get(x_54, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get(x_54, 1);
lean::inc(x_57);
x_59 = lean::cnstr_get(x_54, 2);
lean::inc(x_59);
lean::dec(x_54);
x_62 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(x_57);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_65; obj* x_67; obj* x_70; obj* x_71; obj* x_73; obj* x_76; obj* x_78; obj* x_81; obj* x_83; uint32 x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; obj* x_95; 
x_63 = lean::cnstr_get(x_62, 0);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_62, 1);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_62, 2);
lean::inc(x_67);
lean::dec(x_62);
x_70 = lean::mk_nat_obj(16u);
x_71 = lean::nat_mul(x_70, x_39);
lean::dec(x_39);
x_73 = lean::nat_add(x_71, x_47);
lean::dec(x_47);
lean::dec(x_71);
x_76 = lean::nat_mul(x_70, x_73);
lean::dec(x_73);
x_78 = lean::nat_add(x_76, x_55);
lean::dec(x_55);
lean::dec(x_76);
x_81 = lean::nat_mul(x_70, x_78);
lean::dec(x_78);
x_83 = lean::nat_add(x_81, x_63);
lean::dec(x_63);
lean::dec(x_81);
x_86 = l_char_of__nat(x_83);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_88 = lean::box_uint32(x_86);
if (lean::is_scalar(x_9)) {
 x_89 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_89 = x_9;
}
lean::cnstr_set(x_89, 0, x_88);
lean::cnstr_set(x_89, 1, x_65);
lean::cnstr_set(x_89, 2, x_87);
x_90 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_67, x_89);
x_91 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_59, x_90);
x_92 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_51, x_91);
x_93 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_43, x_92);
x_94 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_93);
x_95 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_87, x_94);
return x_95;
}
else
{
obj* x_100; uint8 x_102; obj* x_103; obj* x_104; obj* x_105; obj* x_106; obj* x_107; obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
lean::dec(x_55);
lean::dec(x_47);
lean::dec(x_39);
lean::dec(x_9);
x_100 = lean::cnstr_get(x_62, 0);
lean::inc(x_100);
x_102 = lean::cnstr_get_scalar<uint8>(x_62, sizeof(void*)*1);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 x_103 = x_62;
} else {
 lean::dec(x_62);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_103)) {
 x_104 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_104 = x_103;
}
lean::cnstr_set(x_104, 0, x_100);
lean::cnstr_set_scalar(x_104, sizeof(void*)*1, x_102);
x_105 = x_104;
x_106 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_59, x_105);
x_107 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_51, x_106);
x_108 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_43, x_107);
x_109 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_108);
x_110 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_111 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_110, x_109);
return x_111;
}
}
else
{
obj* x_115; uint8 x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; 
lean::dec(x_47);
lean::dec(x_39);
lean::dec(x_9);
x_115 = lean::cnstr_get(x_54, 0);
lean::inc(x_115);
x_117 = lean::cnstr_get_scalar<uint8>(x_54, sizeof(void*)*1);
if (lean::is_exclusive(x_54)) {
 lean::cnstr_release(x_54, 0);
 x_118 = x_54;
} else {
 lean::dec(x_54);
 x_118 = lean::box(0);
}
if (lean::is_scalar(x_118)) {
 x_119 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_119 = x_118;
}
lean::cnstr_set(x_119, 0, x_115);
lean::cnstr_set_scalar(x_119, sizeof(void*)*1, x_117);
x_120 = x_119;
x_121 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_51, x_120);
x_122 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_43, x_121);
x_123 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_122);
x_124 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_125 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_124, x_123);
return x_125;
}
}
else
{
obj* x_128; uint8 x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; obj* x_135; obj* x_136; obj* x_137; 
lean::dec(x_39);
lean::dec(x_9);
x_128 = lean::cnstr_get(x_46, 0);
lean::inc(x_128);
x_130 = lean::cnstr_get_scalar<uint8>(x_46, sizeof(void*)*1);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 x_131 = x_46;
} else {
 lean::dec(x_46);
 x_131 = lean::box(0);
}
if (lean::is_scalar(x_131)) {
 x_132 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_132 = x_131;
}
lean::cnstr_set(x_132, 0, x_128);
lean::cnstr_set_scalar(x_132, sizeof(void*)*1, x_130);
x_133 = x_132;
x_134 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_43, x_133);
x_135 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_134);
x_136 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_137 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_136, x_135);
return x_137;
}
}
else
{
obj* x_139; uint8 x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; 
lean::dec(x_9);
x_139 = lean::cnstr_get(x_38, 0);
lean::inc(x_139);
x_141 = lean::cnstr_get_scalar<uint8>(x_38, sizeof(void*)*1);
if (lean::is_exclusive(x_38)) {
 lean::cnstr_release(x_38, 0);
 x_142 = x_38;
} else {
 lean::dec(x_38);
 x_142 = lean::box(0);
}
if (lean::is_scalar(x_142)) {
 x_143 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_143 = x_142;
}
lean::cnstr_set(x_143, 0, x_139);
lean::cnstr_set_scalar(x_143, sizeof(void*)*1, x_141);
x_144 = x_143;
x_145 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_144);
x_146 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_147 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_146, x_145);
return x_147;
}
}
}
lbl_13:
{
uint32 x_149; uint32 x_150; uint8 x_151; 
lean::dec(x_12);
x_149 = 116;
x_150 = lean::unbox_uint32(x_3);
x_151 = x_150 == x_149;
if (x_151 == 0)
{
uint32 x_152; uint8 x_153; 
x_152 = 120;
x_153 = x_150 == x_152;
if (x_153 == 0)
{
obj* x_154; 
x_154 = lean::box(0);
x_10 = x_154;
goto lbl_11;
}
else
{
obj* x_157; 
lean::dec(x_9);
lean::dec(x_0);
x_157 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(x_5);
if (lean::obj_tag(x_157) == 0)
{
obj* x_158; obj* x_160; obj* x_162; obj* x_164; obj* x_165; 
x_158 = lean::cnstr_get(x_157, 0);
lean::inc(x_158);
x_160 = lean::cnstr_get(x_157, 1);
lean::inc(x_160);
x_162 = lean::cnstr_get(x_157, 2);
lean::inc(x_162);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 lean::cnstr_release(x_157, 2);
 x_164 = x_157;
} else {
 lean::dec(x_157);
 x_164 = lean::box(0);
}
x_165 = l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_view_value___spec__8(x_160);
if (lean::obj_tag(x_165) == 0)
{
obj* x_166; obj* x_168; obj* x_170; obj* x_173; obj* x_174; obj* x_176; uint32 x_179; obj* x_180; obj* x_181; obj* x_182; obj* x_183; obj* x_184; obj* x_185; obj* x_186; 
x_166 = lean::cnstr_get(x_165, 0);
lean::inc(x_166);
x_168 = lean::cnstr_get(x_165, 1);
lean::inc(x_168);
x_170 = lean::cnstr_get(x_165, 2);
lean::inc(x_170);
lean::dec(x_165);
x_173 = lean::mk_nat_obj(16u);
x_174 = lean::nat_mul(x_173, x_158);
lean::dec(x_158);
x_176 = lean::nat_add(x_174, x_166);
lean::dec(x_166);
lean::dec(x_174);
x_179 = l_char_of__nat(x_176);
x_180 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_181 = lean::box_uint32(x_179);
if (lean::is_scalar(x_164)) {
 x_182 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_182 = x_164;
}
lean::cnstr_set(x_182, 0, x_181);
lean::cnstr_set(x_182, 1, x_168);
lean::cnstr_set(x_182, 2, x_180);
x_183 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_170, x_182);
x_184 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_162, x_183);
x_185 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_184);
x_186 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_180, x_185);
return x_186;
}
else
{
obj* x_189; uint8 x_191; obj* x_192; obj* x_193; obj* x_194; obj* x_195; obj* x_196; obj* x_197; obj* x_198; 
lean::dec(x_158);
lean::dec(x_164);
x_189 = lean::cnstr_get(x_165, 0);
lean::inc(x_189);
x_191 = lean::cnstr_get_scalar<uint8>(x_165, sizeof(void*)*1);
if (lean::is_exclusive(x_165)) {
 lean::cnstr_release(x_165, 0);
 x_192 = x_165;
} else {
 lean::dec(x_165);
 x_192 = lean::box(0);
}
if (lean::is_scalar(x_192)) {
 x_193 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_193 = x_192;
}
lean::cnstr_set(x_193, 0, x_189);
lean::cnstr_set_scalar(x_193, sizeof(void*)*1, x_191);
x_194 = x_193;
x_195 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_162, x_194);
x_196 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_195);
x_197 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_198 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_197, x_196);
return x_198;
}
}
else
{
obj* x_199; uint8 x_201; obj* x_202; obj* x_203; obj* x_204; obj* x_205; obj* x_206; obj* x_207; 
x_199 = lean::cnstr_get(x_157, 0);
lean::inc(x_199);
x_201 = lean::cnstr_get_scalar<uint8>(x_157, sizeof(void*)*1);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 x_202 = x_157;
} else {
 lean::dec(x_157);
 x_202 = lean::box(0);
}
if (lean::is_scalar(x_202)) {
 x_203 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_203 = x_202;
}
lean::cnstr_set(x_203, 0, x_199);
lean::cnstr_set_scalar(x_203, sizeof(void*)*1, x_201);
x_204 = x_203;
x_205 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_204);
x_206 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_207 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_206, x_205);
return x_207;
}
}
}
else
{
uint32 x_210; obj* x_211; obj* x_212; obj* x_213; obj* x_214; obj* x_215; 
lean::dec(x_9);
lean::dec(x_0);
x_210 = 9;
x_211 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_212 = lean::box_uint32(x_210);
x_213 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_213, 0, x_212);
lean::cnstr_set(x_213, 1, x_5);
lean::cnstr_set(x_213, 2, x_211);
x_214 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_213);
x_215 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_211, x_214);
return x_215;
}
}
lbl_15:
{
uint32 x_217; uint32 x_218; uint8 x_219; 
lean::dec(x_14);
x_217 = 34;
x_218 = lean::unbox_uint32(x_3);
x_219 = x_218 == x_217;
if (x_219 == 0)
{
uint32 x_220; uint8 x_221; 
x_220 = 39;
x_221 = x_218 == x_220;
if (x_221 == 0)
{
uint32 x_222; uint8 x_223; 
x_222 = 110;
x_223 = x_218 == x_222;
if (x_223 == 0)
{
obj* x_224; 
x_224 = lean::box(0);
x_12 = x_224;
goto lbl_13;
}
else
{
uint32 x_227; obj* x_228; obj* x_229; obj* x_230; obj* x_231; obj* x_232; 
lean::dec(x_9);
lean::dec(x_0);
x_227 = 10;
x_228 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_229 = lean::box_uint32(x_227);
x_230 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_230, 0, x_229);
lean::cnstr_set(x_230, 1, x_5);
lean::cnstr_set(x_230, 2, x_228);
x_231 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_230);
x_232 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_228, x_231);
return x_232;
}
}
else
{
obj* x_235; obj* x_236; obj* x_237; obj* x_238; obj* x_239; 
lean::dec(x_9);
lean::dec(x_0);
x_235 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_236 = lean::box_uint32(x_220);
x_237 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_237, 0, x_236);
lean::cnstr_set(x_237, 1, x_5);
lean::cnstr_set(x_237, 2, x_235);
x_238 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_237);
x_239 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_235, x_238);
return x_239;
}
}
else
{
obj* x_242; obj* x_243; obj* x_244; obj* x_245; obj* x_246; 
lean::dec(x_9);
lean::dec(x_0);
x_242 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_243 = lean::box_uint32(x_217);
x_244 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_244, 0, x_243);
lean::cnstr_set(x_244, 1, x_5);
lean::cnstr_set(x_244, 2, x_242);
x_245 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_7, x_244);
x_246 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_242, x_245);
return x_246;
}
}
}
else
{
obj* x_248; uint8 x_250; obj* x_251; obj* x_252; obj* x_253; obj* x_254; obj* x_255; 
lean::dec(x_0);
x_248 = lean::cnstr_get(x_2, 0);
lean::inc(x_248);
x_250 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_251 = x_2;
} else {
 lean::dec(x_2);
 x_251 = lean::box(0);
}
if (lean::is_scalar(x_251)) {
 x_252 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_252 = x_251;
}
lean::cnstr_set(x_252, 0, x_248);
lean::cnstr_set_scalar(x_252, sizeof(void*)*1, x_250);
x_253 = x_252;
x_254 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_255 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_254, x_253);
return x_255;
}
}
}
obj* l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_view_value___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::mk_nat_obj(0u);
x_4 = lean::nat_dec_eq(x_0, x_3);
if (x_4 == 0)
{
obj* x_5; 
x_5 = l_lean_parser_monad__parsec_any___at_lean_parser_string__lit_view_value___spec__5(x_2);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_8; obj* x_10; obj* x_12; obj* x_13; obj* x_14; uint32 x_16; uint32 x_17; uint8 x_18; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_5, 2);
lean::inc(x_10);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 lean::cnstr_release(x_5, 1);
 lean::cnstr_release(x_5, 2);
 x_12 = x_5;
} else {
 lean::dec(x_5);
 x_12 = lean::box(0);
}
x_13 = lean::mk_nat_obj(1u);
x_14 = lean::nat_sub(x_0, x_13);
lean::dec(x_0);
x_16 = 92;
x_17 = lean::unbox_uint32(x_6);
x_18 = x_17 == x_16;
if (x_18 == 0)
{
uint32 x_19; uint8 x_20; 
x_19 = 34;
x_20 = x_17 == x_19;
if (x_20 == 0)
{
obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_12);
x_22 = lean::string_push(x_1, x_17);
x_23 = l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_view_value___spec__4(x_14, x_22, x_8);
x_24 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_23);
return x_24;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_14);
x_26 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_12)) {
 x_27 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_27 = x_12;
}
lean::cnstr_set(x_27, 0, x_1);
lean::cnstr_set(x_27, 1, x_8);
lean::cnstr_set(x_27, 2, x_26);
x_28 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_27);
return x_28;
}
}
else
{
obj* x_30; 
lean::dec(x_12);
x_30 = l_lean_parser_parse__quoted__char___at_lean_parser_string__lit_view_value___spec__6(x_8);
if (lean::obj_tag(x_30) == 0)
{
obj* x_31; obj* x_33; obj* x_35; uint32 x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_31 = lean::cnstr_get(x_30, 0);
lean::inc(x_31);
x_33 = lean::cnstr_get(x_30, 1);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_30, 2);
lean::inc(x_35);
lean::dec(x_30);
x_38 = lean::unbox_uint32(x_31);
x_39 = lean::string_push(x_1, x_38);
x_40 = l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_view_value___spec__4(x_14, x_39, x_33);
x_41 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_35, x_40);
x_42 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_41);
return x_42;
}
else
{
obj* x_45; uint8 x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_1);
lean::dec(x_14);
x_45 = lean::cnstr_get(x_30, 0);
lean::inc(x_45);
x_47 = lean::cnstr_get_scalar<uint8>(x_30, sizeof(void*)*1);
if (lean::is_exclusive(x_30)) {
 lean::cnstr_release(x_30, 0);
 x_48 = x_30;
} else {
 lean::dec(x_30);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_45);
lean::cnstr_set_scalar(x_49, sizeof(void*)*1, x_47);
x_50 = x_49;
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_10, x_50);
return x_51;
}
}
}
else
{
obj* x_54; uint8 x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_1);
lean::dec(x_0);
x_54 = lean::cnstr_get(x_5, 0);
lean::inc(x_54);
x_56 = lean::cnstr_get_scalar<uint8>(x_5, sizeof(void*)*1);
if (lean::is_exclusive(x_5)) {
 lean::cnstr_release(x_5, 0);
 x_57 = x_5;
} else {
 lean::dec(x_5);
 x_57 = lean::box(0);
}
if (lean::is_scalar(x_57)) {
 x_58 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_58 = x_57;
}
lean::cnstr_set(x_58, 0, x_54);
lean::cnstr_set_scalar(x_58, sizeof(void*)*1, x_56);
x_59 = x_58;
return x_59;
}
}
else
{
uint32 x_61; obj* x_62; 
lean::dec(x_0);
x_61 = 34;
x_62 = l_lean_parser_monad__parsec_ch___at_lean_parser_string__lit_view_value___spec__2(x_61, x_2);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_65; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_63 = lean::cnstr_get(x_62, 1);
lean::inc(x_63);
x_65 = lean::cnstr_get(x_62, 2);
lean::inc(x_65);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 lean::cnstr_release(x_62, 1);
 lean::cnstr_release(x_62, 2);
 x_67 = x_62;
} else {
 lean::dec(x_62);
 x_67 = lean::box(0);
}
x_68 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_67)) {
 x_69 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_69 = x_67;
}
lean::cnstr_set(x_69, 0, x_1);
lean::cnstr_set(x_69, 1, x_63);
lean::cnstr_set(x_69, 2, x_68);
x_70 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_65, x_69);
return x_70;
}
else
{
obj* x_72; uint8 x_74; obj* x_75; obj* x_76; obj* x_77; 
lean::dec(x_1);
x_72 = lean::cnstr_get(x_62, 0);
lean::inc(x_72);
x_74 = lean::cnstr_get_scalar<uint8>(x_62, sizeof(void*)*1);
if (lean::is_exclusive(x_62)) {
 lean::cnstr_release(x_62, 0);
 x_75 = x_62;
} else {
 lean::dec(x_62);
 x_75 = lean::box(0);
}
if (lean::is_scalar(x_75)) {
 x_76 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_76 = x_75;
}
lean::cnstr_set(x_76, 0, x_72);
lean::cnstr_set_scalar(x_76, sizeof(void*)*1, x_74);
x_77 = x_76;
return x_77;
}
}
}
}
obj* l_lean_parser_parse__string__literal___at_lean_parser_string__lit_view_value___spec__1(obj* x_0) {
_start:
{
uint32 x_1; obj* x_2; 
x_1 = 34;
x_2 = l_lean_parser_monad__parsec_ch___at_lean_parser_string__lit_view_value___spec__2(x_1, x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_3 = lean::cnstr_get(x_2, 1);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_2, 2);
lean::inc(x_5);
lean::dec(x_2);
x_8 = lean::string_iterator_remaining(x_3);
x_9 = l_string_join___closed__1;
x_10 = l_lean_parser_parse__string__literal__aux___main___at_lean_parser_string__lit_view_value___spec__4(x_8, x_9, x_3);
x_11 = l_lean_parser_finish__comment__block___closed__2;
x_12 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_11, x_10);
x_13 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_5, x_12);
return x_13;
}
else
{
obj* x_14; uint8 x_16; obj* x_17; obj* x_18; obj* x_19; 
x_14 = lean::cnstr_get(x_2, 0);
lean::inc(x_14);
x_16 = lean::cnstr_get_scalar<uint8>(x_2, sizeof(void*)*1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_17 = x_2;
} else {
 lean::dec(x_2);
 x_17 = lean::box(0);
}
if (lean::is_scalar(x_17)) {
 x_18 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_18 = x_17;
}
lean::cnstr_set(x_18, 0, x_14);
lean::cnstr_set_scalar(x_18, sizeof(void*)*1, x_16);
x_19 = x_18;
return x_19;
}
}
}
obj* _init_l_lean_parser_string__lit_view_value___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_parse__string__literal___at_lean_parser_string__lit_view_value___spec__1), 1, 0);
return x_0;
}
}
obj* l_lean_parser_string__lit_view_value(obj* x_0) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_1; 
x_1 = lean::box(0);
return x_1;
}
else
{
obj* x_2; obj* x_4; obj* x_5; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 x_4 = x_0;
} else {
 lean::dec(x_0);
 x_4 = lean::box(0);
}
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_8 = l_lean_parser_string__lit_view_value___closed__1;
x_9 = l_string_join___closed__1;
x_10 = l_lean_parser_parsec__t_run___at_lean_parser_parsec_parse___spec__1___rarg(x_8, x_5, x_9);
if (lean::obj_tag(x_10) == 0)
{
obj* x_13; 
lean::dec(x_10);
lean::dec(x_4);
x_13 = lean::box(0);
return x_13;
}
else
{
obj* x_14; obj* x_17; 
x_14 = lean::cnstr_get(x_10, 0);
lean::inc(x_14);
lean::dec(x_10);
if (lean::is_scalar(x_4)) {
 x_17 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_17 = x_4;
}
lean::cnstr_set(x_17, 0, x_14);
return x_17;
}
}
}
}
obj* l_lean_parser_monad__parsec_ch___at_lean_parser_string__lit_view_value___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
uint32 x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = l_lean_parser_monad__parsec_ch___at_lean_parser_string__lit_view_value___spec__2(x_2, x_1);
return x_3;
}
}
obj* l_lean_parser_ident_parser___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
lean::inc(x_2);
lean::inc(x_1);
x_6 = l_lean_parser_token(x_1, x_2, x_3);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_18 = x_7;
} else {
 lean::dec(x_7);
 x_18 = lean::box(0);
}
switch (lean::obj_tag(x_12)) {
case 1:
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_11);
lean::dec(x_1);
lean::dec(x_2);
x_24 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_18)) {
 x_25 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_25 = x_18;
}
lean::cnstr_set(x_25, 0, x_12);
lean::cnstr_set(x_25, 1, x_14);
lean::cnstr_set(x_25, 2, x_24);
x_26 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_25);
x_27 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_24, x_26);
x_28 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_27, x_0);
x_29 = l_lean_parser_parsec__t_try__mk__res___rarg(x_28);
x_30 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_9);
return x_30;
}
case 3:
{
obj* x_32; 
lean::dec(x_18);
x_32 = lean::box(0);
x_19 = x_32;
goto lbl_20;
}
default:
{
obj* x_35; 
lean::dec(x_12);
lean::dec(x_18);
x_35 = lean::box(0);
x_19 = x_35;
goto lbl_20;
}
}
lbl_20:
{
obj* x_37; obj* x_38; obj* x_39; obj* x_41; obj* x_42; obj* x_44; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::dec(x_19);
x_37 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_37, 0, x_2);
x_38 = lean::box(0);
x_39 = l_string_join___closed__1;
lean::inc(x_0);
x_41 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_39, x_0, x_37, x_38, x_1, x_14, x_9);
x_42 = lean::cnstr_get(x_41, 0);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_41, 1);
lean::inc(x_44);
lean::dec(x_41);
x_47 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_42);
x_48 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_49 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_48, x_47);
x_50 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_49, x_0);
x_51 = l_lean_parser_parsec__t_try__mk__res___rarg(x_50);
if (lean::is_scalar(x_11)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_11;
}
lean::cnstr_set(x_52, 0, x_51);
lean::cnstr_set(x_52, 1, x_44);
return x_52;
}
}
else
{
obj* x_55; uint8 x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; 
lean::dec(x_1);
lean::dec(x_2);
x_55 = lean::cnstr_get(x_7, 0);
lean::inc(x_55);
x_57 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_58 = x_7;
} else {
 lean::dec(x_7);
 x_58 = lean::box(0);
}
if (lean::is_scalar(x_58)) {
 x_59 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_59 = x_58;
}
lean::cnstr_set(x_59, 0, x_55);
lean::cnstr_set_scalar(x_59, sizeof(void*)*1, x_57);
x_60 = x_59;
x_61 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_62 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_61, x_60);
x_63 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_62, x_0);
x_64 = l_lean_parser_parsec__t_try__mk__res___rarg(x_63);
if (lean::is_scalar(x_11)) {
 x_65 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_65 = x_11;
}
lean::cnstr_set(x_65, 0, x_64);
lean::cnstr_set(x_65, 1, x_9);
return x_65;
}
}
}
obj* _init_l_lean_parser_ident_parser___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_string("identifier");
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_1, 0, x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___rarg___lambda__1), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_lean_parser_ident_parser___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_parser_ident_parser___rarg___closed__1;
x_2 = lean::apply_2(x_0, lean::box(0), x_1);
return x_2;
}
}
obj* l_lean_parser_ident_parser(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_ident_parser_tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
}
obj* _init_l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_3; obj* x_4; obj* x_5; 
x_0 = lean::box(0);
x_1 = lean::mk_string("NOT_AN_IDENT");
lean::inc(x_1);
x_3 = l_lean_parser_substring_of__string(x_1);
x_4 = lean_name_mk_string(x_0, x_1);
x_5 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_5, 0, x_0);
lean::cnstr_set(x_5, 1, x_3);
lean::cnstr_set(x_5, 2, x_4);
lean::cnstr_set(x_5, 3, x_0);
lean::cnstr_set(x_5, 4, x_0);
return x_5;
}
}
obj* _init_l_lean_parser_ident_parser_view___rarg___lambda__1___closed__2() {
_start:
{
obj* x_0; 
x_0 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1;
return x_0;
}
}
obj* l_lean_parser_ident_parser_view___rarg___lambda__1(obj* x_0) {
_start:
{
switch (lean::obj_tag(x_0)) {
case 1:
{
obj* x_1; 
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
case 3:
{
obj* x_4; 
x_4 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__2;
return x_4;
}
default:
{
obj* x_6; 
lean::dec(x_0);
x_6 = l_lean_parser_ident_parser_view___rarg___lambda__1___closed__2;
return x_6;
}
}
}
}
obj* l_lean_parser_ident_parser_view___rarg___lambda__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_1, 0, x_0);
return x_1;
}
}
obj* _init_l_lean_parser_ident_parser_view___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser_view___rarg___lambda__1), 1, 0);
return x_0;
}
}
obj* _init_l_lean_parser_ident_parser_view___rarg___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser_view___rarg___lambda__2), 1, 0);
return x_0;
}
}
obj* l_lean_parser_ident_parser_view___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
lean::dec(x_0);
x_2 = l_lean_parser_ident_parser_view___rarg___closed__1;
x_3 = l_lean_parser_ident_parser_view___rarg___closed__2;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_lean_parser_ident_parser_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_ident_parser_view___rarg), 1, 0);
return x_2;
}
}
obj* _init_l_lean_parser_raw__ident_parser___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_parser_token_4__ident_x_27), 3, 0);
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_with__trailing___at_lean_parser_token___spec__3), 4, 0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_2, 0, x_0);
lean::closure_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_lean_parser_raw__ident_parser___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_lean_parser_raw__ident_parser___rarg___closed__1;
x_2 = lean::apply_2(x_0, lean::box(0), x_1);
return x_2;
}
}
obj* l_lean_parser_raw__ident_parser(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw__ident_parser___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_raw__ident_parser_tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::box(0);
return x_4;
}
}
obj* l_lean_parser_raw__ident_parser_view___rarg(obj* x_0) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
lean::dec(x_0);
x_2 = l_lean_parser_ident_parser_view___rarg___closed__1;
x_3 = l_lean_parser_ident_parser_view___rarg___closed__2;
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_2);
lean::cnstr_set(x_4, 1, x_3);
return x_4;
}
}
obj* l_lean_parser_raw__ident_parser_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_raw__ident_parser_view___rarg), 1, 0);
return x_2;
}
}
obj* l_lean_parser_symbol__or__ident___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_6; obj* x_7; obj* x_9; obj* x_11; 
lean::inc(x_2);
lean::inc(x_1);
x_6 = l_lean_parser_token(x_1, x_2, x_3);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
if (lean::is_exclusive(x_6)) {
 lean::cnstr_release(x_6, 0);
 lean::cnstr_release(x_6, 1);
 x_11 = x_6;
} else {
 lean::dec(x_6);
 x_11 = lean::box(0);
}
if (lean::obj_tag(x_7) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_7, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_7, 1);
lean::inc(x_14);
x_16 = lean::cnstr_get(x_7, 2);
lean::inc(x_16);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 lean::cnstr_release(x_7, 1);
 lean::cnstr_release(x_7, 2);
 x_18 = x_7;
} else {
 lean::dec(x_7);
 x_18 = lean::box(0);
}
switch (lean::obj_tag(x_12)) {
case 0:
{
obj* x_21; obj* x_23; obj* x_26; 
x_21 = lean::cnstr_get(x_12, 0);
lean::inc(x_21);
x_23 = lean::cnstr_get(x_21, 1);
lean::inc(x_23);
lean::dec(x_21);
x_26 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_26, 0, x_23);
x_19 = x_26;
goto lbl_20;
}
case 1:
{
obj* x_27; obj* x_29; obj* x_32; obj* x_33; 
x_27 = lean::cnstr_get(x_12, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_27, 1);
lean::inc(x_29);
lean::dec(x_27);
x_32 = l_lean_parser_substring_to__string(x_29);
x_33 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_33, 0, x_32);
x_19 = x_33;
goto lbl_20;
}
default:
{
obj* x_34; 
x_34 = lean::box(0);
x_19 = x_34;
goto lbl_20;
}
}
lbl_20:
{
uint8 x_35; 
if (lean::obj_tag(x_19) == 0)
{
uint8 x_37; 
x_37 = 1;
x_35 = x_37;
goto lbl_36;
}
else
{
obj* x_38; uint8 x_41; 
x_38 = lean::cnstr_get(x_19, 0);
lean::inc(x_38);
lean::dec(x_19);
x_41 = lean::string_dec_eq(x_38, x_0);
lean::dec(x_38);
if (x_41 == 0)
{
uint8 x_43; 
x_43 = 1;
x_35 = x_43;
goto lbl_36;
}
else
{
uint8 x_44; 
x_44 = 0;
x_35 = x_44;
goto lbl_36;
}
}
lbl_36:
{
if (x_35 == 0)
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_48 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_18)) {
 x_49 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_49 = x_18;
}
lean::cnstr_set(x_49, 0, x_12);
lean::cnstr_set(x_49, 1, x_14);
lean::cnstr_set(x_49, 2, x_48);
x_50 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_49);
x_51 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_52 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_51, x_50);
x_53 = l_lean_parser_parsec__t_try__mk__res___rarg(x_52);
if (lean::is_scalar(x_11)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_11;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_9);
return x_54;
}
else
{
obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_63; 
x_55 = l_string_quote(x_0);
x_56 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_56, 0, x_55);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_2);
x_58 = lean::box(0);
x_59 = l_string_join___closed__1;
x_60 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_59, x_56, x_57, x_58, x_1, x_14, x_9);
x_61 = lean::cnstr_get(x_60, 0);
lean::inc(x_61);
x_63 = lean::cnstr_get(x_60, 1);
lean::inc(x_63);
lean::dec(x_60);
if (lean::obj_tag(x_61) == 0)
{
obj* x_66; obj* x_68; obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; 
x_66 = lean::cnstr_get(x_61, 1);
lean::inc(x_66);
x_68 = lean::cnstr_get(x_61, 2);
lean::inc(x_68);
lean::dec(x_61);
x_71 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_18)) {
 x_72 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_72 = x_18;
}
lean::cnstr_set(x_72, 0, x_12);
lean::cnstr_set(x_72, 1, x_66);
lean::cnstr_set(x_72, 2, x_71);
x_73 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_68, x_72);
x_74 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_73);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_71, x_74);
x_76 = l_lean_parser_parsec__t_try__mk__res___rarg(x_75);
if (lean::is_scalar(x_11)) {
 x_77 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_77 = x_11;
}
lean::cnstr_set(x_77, 0, x_76);
lean::cnstr_set(x_77, 1, x_63);
return x_77;
}
else
{
obj* x_80; uint8 x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; 
lean::dec(x_12);
lean::dec(x_18);
x_80 = lean::cnstr_get(x_61, 0);
lean::inc(x_80);
x_82 = lean::cnstr_get_scalar<uint8>(x_61, sizeof(void*)*1);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 x_83 = x_61;
} else {
 lean::dec(x_61);
 x_83 = lean::box(0);
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_80);
lean::cnstr_set_scalar(x_84, sizeof(void*)*1, x_82);
x_85 = x_84;
x_86 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_16, x_85);
x_87 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_88 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_87, x_86);
x_89 = l_lean_parser_parsec__t_try__mk__res___rarg(x_88);
if (lean::is_scalar(x_11)) {
 x_90 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_90 = x_11;
}
lean::cnstr_set(x_90, 0, x_89);
lean::cnstr_set(x_90, 1, x_63);
return x_90;
}
}
}
}
}
else
{
obj* x_94; uint8 x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
lean::dec(x_1);
lean::dec(x_0);
lean::dec(x_2);
x_94 = lean::cnstr_get(x_7, 0);
lean::inc(x_94);
x_96 = lean::cnstr_get_scalar<uint8>(x_7, sizeof(void*)*1);
if (lean::is_exclusive(x_7)) {
 lean::cnstr_release(x_7, 0);
 x_97 = x_7;
} else {
 lean::dec(x_7);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_94);
lean::cnstr_set_scalar(x_98, sizeof(void*)*1, x_96);
x_99 = x_98;
x_100 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_101 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_100, x_99);
x_102 = l_lean_parser_parsec__t_try__mk__res___rarg(x_101);
if (lean::is_scalar(x_11)) {
 x_103 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_103 = x_11;
}
lean::cnstr_set(x_103, 0, x_102);
lean::cnstr_set(x_103, 1, x_9);
return x_103;
}
}
}
obj* l_lean_parser_symbol__or__ident___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___rarg___lambda__1), 4, 1);
lean::closure_set(x_2, 0, x_1);
x_3 = lean::apply_2(x_0, lean::box(0), x_2);
return x_3;
}
}
obj* l_lean_parser_symbol__or__ident(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_symbol__or__ident_tokens(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_6; 
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_6 = lean::box(0);
return x_6;
}
}
obj* l_lean_parser_symbol__or__ident_view___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; obj* x_5; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = l_mjoin___rarg___closed__1;
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_4);
return x_5;
}
}
obj* l_lean_parser_symbol__or__ident_view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__or__ident_view___rarg), 2, 0);
return x_2;
}
}
obj* l_lean_parser_symbol__core___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_16; 
lean::dec(x_1);
lean::inc(x_4);
lean::inc(x_3);
x_9 = l_lean_parser_token(x_3, x_4, x_5);
x_10 = lean::cnstr_get(x_9, 0);
lean::inc(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
if (lean::is_exclusive(x_9)) {
 lean::cnstr_release(x_9, 0);
 lean::cnstr_release(x_9, 1);
 x_14 = x_9;
} else {
 lean::dec(x_9);
 x_14 = lean::box(0);
}
lean::inc(x_0);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_16, 0, x_0);
if (lean::obj_tag(x_10) == 0)
{
obj* x_17; obj* x_19; obj* x_21; obj* x_23; obj* x_24; 
x_17 = lean::cnstr_get(x_10, 0);
lean::inc(x_17);
x_19 = lean::cnstr_get(x_10, 1);
lean::inc(x_19);
x_21 = lean::cnstr_get(x_10, 2);
lean::inc(x_21);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 lean::cnstr_release(x_10, 1);
 lean::cnstr_release(x_10, 2);
 x_23 = x_10;
} else {
 lean::dec(x_10);
 x_23 = lean::box(0);
}
switch (lean::obj_tag(x_17)) {
case 0:
{
obj* x_27; obj* x_29; uint8 x_32; 
lean::dec(x_14);
x_27 = lean::cnstr_get(x_17, 0);
lean::inc(x_27);
x_29 = lean::cnstr_get(x_27, 1);
lean::inc(x_29);
lean::dec(x_27);
x_32 = lean::string_dec_eq(x_0, x_29);
lean::dec(x_0);
if (x_32 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_39; obj* x_41; 
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_4);
x_35 = lean::box(0);
x_36 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_29, x_2, x_34, x_35, x_3, x_19, x_12);
x_37 = lean::cnstr_get(x_36, 0);
lean::inc(x_37);
x_39 = lean::cnstr_get(x_36, 1);
lean::inc(x_39);
if (lean::is_exclusive(x_36)) {
 lean::cnstr_release(x_36, 0);
 lean::cnstr_release(x_36, 1);
 x_41 = x_36;
} else {
 lean::dec(x_36);
 x_41 = lean::box(0);
}
if (lean::obj_tag(x_37) == 0)
{
obj* x_42; obj* x_44; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_52; obj* x_53; obj* x_54; 
x_42 = lean::cnstr_get(x_37, 1);
lean::inc(x_42);
x_44 = lean::cnstr_get(x_37, 2);
lean::inc(x_44);
lean::dec(x_37);
x_47 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
if (lean::is_scalar(x_23)) {
 x_48 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_48 = x_23;
}
lean::cnstr_set(x_48, 0, x_17);
lean::cnstr_set(x_48, 1, x_42);
lean::cnstr_set(x_48, 2, x_47);
x_49 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_44, x_48);
x_50 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_49);
x_51 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_47, x_50);
x_52 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_51, x_16);
x_53 = l_lean_parser_parsec__t_try__mk__res___rarg(x_52);
if (lean::is_scalar(x_41)) {
 x_54 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_54 = x_41;
}
lean::cnstr_set(x_54, 0, x_53);
lean::cnstr_set(x_54, 1, x_39);
return x_54;
}
else
{
obj* x_57; uint8 x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
lean::dec(x_17);
lean::dec(x_23);
x_57 = lean::cnstr_get(x_37, 0);
lean::inc(x_57);
x_59 = lean::cnstr_get_scalar<uint8>(x_37, sizeof(void*)*1);
if (lean::is_exclusive(x_37)) {
 lean::cnstr_release(x_37, 0);
 x_60 = x_37;
} else {
 lean::dec(x_37);
 x_60 = lean::box(0);
}
if (lean::is_scalar(x_60)) {
 x_61 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_61 = x_60;
}
lean::cnstr_set(x_61, 0, x_57);
lean::cnstr_set_scalar(x_61, sizeof(void*)*1, x_59);
x_62 = x_61;
x_63 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_62);
x_64 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_65 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_64, x_63);
x_66 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_65, x_16);
x_67 = l_lean_parser_parsec__t_try__mk__res___rarg(x_66);
if (lean::is_scalar(x_41)) {
 x_68 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_68 = x_41;
}
lean::cnstr_set(x_68, 0, x_67);
lean::cnstr_set(x_68, 1, x_39);
return x_68;
}
}
else
{
obj* x_73; obj* x_74; obj* x_75; obj* x_76; obj* x_77; obj* x_78; obj* x_79; obj* x_80; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_29);
x_73 = l_lean_parser_finish__comment__block___closed__2;
if (lean::is_scalar(x_23)) {
 x_74 = lean::alloc_cnstr(0, 3, 0);
} else {
 x_74 = x_23;
}
lean::cnstr_set(x_74, 0, x_17);
lean::cnstr_set(x_74, 1, x_19);
lean::cnstr_set(x_74, 2, x_73);
x_75 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_74);
x_76 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_77 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_76, x_75);
x_78 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_77, x_16);
x_79 = l_lean_parser_parsec__t_try__mk__res___rarg(x_78);
x_80 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_80, 0, x_79);
lean::cnstr_set(x_80, 1, x_12);
return x_80;
}
}
case 3:
{
obj* x_83; 
lean::dec(x_0);
lean::dec(x_23);
x_83 = lean::box(0);
x_24 = x_83;
goto lbl_25;
}
default:
{
obj* x_87; 
lean::dec(x_0);
lean::dec(x_17);
lean::dec(x_23);
x_87 = lean::box(0);
x_24 = x_87;
goto lbl_25;
}
}
lbl_25:
{
obj* x_89; obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_95; obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; 
lean::dec(x_24);
x_89 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_89, 0, x_4);
x_90 = lean::box(0);
x_91 = l_string_join___closed__1;
x_92 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_91, x_2, x_89, x_90, x_3, x_19, x_12);
x_93 = lean::cnstr_get(x_92, 0);
lean::inc(x_93);
x_95 = lean::cnstr_get(x_92, 1);
lean::inc(x_95);
lean::dec(x_92);
x_98 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_21, x_93);
x_99 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_100 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_99, x_98);
x_101 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_100, x_16);
x_102 = l_lean_parser_parsec__t_try__mk__res___rarg(x_101);
if (lean::is_scalar(x_14)) {
 x_103 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_103 = x_14;
}
lean::cnstr_set(x_103, 0, x_102);
lean::cnstr_set(x_103, 1, x_95);
return x_103;
}
}
else
{
obj* x_108; uint8 x_110; obj* x_111; obj* x_112; obj* x_113; obj* x_114; obj* x_115; obj* x_116; obj* x_117; obj* x_118; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
x_108 = lean::cnstr_get(x_10, 0);
lean::inc(x_108);
x_110 = lean::cnstr_get_scalar<uint8>(x_10, sizeof(void*)*1);
if (lean::is_exclusive(x_10)) {
 lean::cnstr_release(x_10, 0);
 x_111 = x_10;
} else {
 lean::dec(x_10);
 x_111 = lean::box(0);
}
if (lean::is_scalar(x_111)) {
 x_112 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_112 = x_111;
}
lean::cnstr_set(x_112, 0, x_108);
lean::cnstr_set_scalar(x_112, sizeof(void*)*1, x_110);
x_113 = x_112;
x_114 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_115 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_114, x_113);
x_116 = l_lean_parser_parsec__t_labels__mk__res___rarg(x_115, x_16);
x_117 = l_lean_parser_parsec__t_try__mk__res___rarg(x_116);
if (lean::is_scalar(x_14)) {
 x_118 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_118 = x_14;
}
lean::cnstr_set(x_118, 0, x_117);
lean::cnstr_set(x_118, 1, x_12);
return x_118;
}
}
}
obj* l_list_foldl___main___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__3(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_5; 
x_5 = lean::apply_3(x_0, x_2, x_3, x_4);
return x_5;
}
else
{
obj* x_6; obj* x_8; obj* x_11; 
x_6 = lean::cnstr_get(x_1, 0);
lean::inc(x_6);
x_8 = lean::cnstr_get(x_1, 1);
lean::inc(x_8);
lean::dec(x_1);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_orelse___at_lean_parser_parse__bin__lit___spec__1___rarg), 5, 2);
lean::closure_set(x_11, 0, x_0);
lean::closure_set(x_11, 1, x_6);
x_0 = x_11;
x_1 = x_8;
goto _start;
}
}
}
obj* l_lean_parser_combinators_any__of___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::box(0);
x_5 = l_lean_parser_combinators_any__of___rarg___closed__1;
x_6 = l_mjoin___rarg___closed__1;
x_7 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_5, x_6, x_4, x_4, x_1, x_2, x_3);
return x_7;
}
else
{
obj* x_8; obj* x_10; obj* x_13; 
x_8 = lean::cnstr_get(x_0, 0);
lean::inc(x_8);
x_10 = lean::cnstr_get(x_0, 1);
lean::inc(x_10);
lean::dec(x_0);
x_13 = l_list_foldl___main___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__3(x_8, x_10, x_1, x_2, x_3);
return x_13;
}
}
}
obj* l_lean_parser_unicode__symbol_lean_parser_has__tokens___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::inc(x_2);
x_4 = l_lean_parser_symbol_tokens___rarg(x_0, x_2);
x_5 = l_lean_parser_symbol_tokens___rarg(x_1, x_2);
x_6 = lean::box(0);
x_7 = l_lean_parser_list_cons_tokens___rarg(x_5, x_6);
x_8 = l_lean_parser_list_cons_tokens___rarg(x_4, x_7);
x_9 = l_lean_parser_tokens___rarg(x_8);
x_10 = l_lean_parser_tokens___rarg(x_9);
return x_10;
}
}
obj* l_lean_parser_unicode__symbol_lean_parser_has__tokens(obj* x_0, obj* x_1) {
_start:
{
obj* x_4; 
lean::dec(x_1);
lean::dec(x_0);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_unicode__symbol_lean_parser_has__tokens___rarg), 3, 0);
return x_4;
}
}
obj* l_lean_parser_unicode__symbol_lean_parser_has__view___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_4 = l_string_trim(x_1);
lean::inc(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_6, 0, x_4);
lean::inc(x_3);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__1), 6, 3);
lean::closure_set(x_8, 0, x_4);
lean::closure_set(x_8, 1, x_3);
lean::closure_set(x_8, 2, x_6);
x_9 = l_string_trim(x_2);
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_11, 0, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__1), 6, 3);
lean::closure_set(x_12, 0, x_9);
lean::closure_set(x_12, 1, x_3);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_8);
lean::cnstr_set(x_15, 1, x_14);
lean::inc(x_15);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_any__of___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__2), 4, 1);
lean::closure_set(x_17, 0, x_15);
x_18 = l_lean_parser_basic__parser__m_monad;
x_19 = l_lean_parser_basic__parser__m_monad__except;
x_20 = l_lean_parser_basic__parser__m_lean_parser_monad__parsec;
x_21 = l_lean_parser_basic__parser__m_alternative;
x_22 = l_lean_parser_combinators_any__of_view___rarg(x_18, x_19, x_20, x_21, x_15);
x_23 = l_lean_parser_combinators_monad__lift_view___rarg(x_0, x_17, x_22);
return x_23;
}
}
obj* l_lean_parser_unicode__symbol_lean_parser_has__view(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_unicode__symbol_lean_parser_has__view___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_parser_unicode__symbol___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_4 = l_string_trim(x_1);
lean::inc(x_4);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_6, 0, x_4);
lean::inc(x_3);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__1), 6, 3);
lean::closure_set(x_8, 0, x_4);
lean::closure_set(x_8, 1, x_3);
lean::closure_set(x_8, 2, x_6);
x_9 = l_string_trim(x_2);
lean::inc(x_9);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_dlist_singleton___rarg), 2, 1);
lean::closure_set(x_11, 0, x_9);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_symbol__core___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__1), 6, 3);
lean::closure_set(x_12, 0, x_9);
lean::closure_set(x_12, 1, x_3);
lean::closure_set(x_12, 2, x_11);
x_13 = lean::box(0);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_8);
lean::cnstr_set(x_15, 1, x_14);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_combinators_any__of___at_lean_parser_unicode__symbol_lean_parser_has__tokens___spec__2), 4, 1);
lean::closure_set(x_16, 0, x_15);
x_17 = lean::apply_2(x_0, lean::box(0), x_16);
return x_17;
}
}
obj* l_lean_parser_unicode__symbol(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_unicode__symbol___rarg), 4, 0);
return x_2;
}
}
obj* l_lean_parser_unicode__symbol_view__default___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_8; 
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
lean::dec(x_0);
x_8 = lean::box(0);
return x_8;
}
}
obj* l_lean_parser_unicode__symbol_view__default(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_unicode__symbol_view__default___rarg), 4, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__1___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__1(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_parser_indexed___spec__1___rarg), 2, 0);
return x_2;
}
}
obj* l_option_to__monad___main___at_lean_parser_indexed___spec__2___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
lean::dec(x_1);
if (lean::obj_tag(x_0) == 0)
{
obj* x_5; 
x_5 = l_lean_parser_parsec__t_failure___at_lean_parser_token___spec__4___rarg(x_2, x_3);
return x_5;
}
else
{
obj* x_6; obj* x_9; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_0, 0);
lean::inc(x_6);
lean::dec(x_0);
x_9 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_10 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_10, 0, x_6);
lean::cnstr_set(x_10, 1, x_2);
lean::cnstr_set(x_10, 2, x_9);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_3);
return x_11;
}
}
}
obj* l_option_to__monad___main___at_lean_parser_indexed___spec__2(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_option_to__monad___main___at_lean_parser_indexed___spec__2___rarg), 4, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__3___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__3(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_parser_indexed___spec__3___rarg), 2, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__4___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__4(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_parser_indexed___spec__4___rarg), 2, 0);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__5___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_1);
return x_2;
}
}
obj* l_rbmap_find___main___at_lean_parser_indexed___spec__5(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_rbmap_find___main___at_lean_parser_indexed___spec__5___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_lean_parser_indexed___rarg___lambda__1___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::box(0);
x_1 = lean::mk_string("ident");
x_2 = lean_name_mk_string(x_0, x_1);
return x_2;
}
}
obj* l_lean_parser_indexed___rarg___lambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
lean::dec(x_1);
lean::dec(x_0);
x_7 = lean::box(0);
x_8 = l_string_join___closed__1;
x_9 = l_mjoin___rarg___closed__1;
x_10 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_8, x_9, x_7, x_7, x_2, x_3, x_4);
return x_10;
}
else
{
obj* x_11; 
x_11 = lean::cnstr_get(x_1, 0);
lean::inc(x_11);
lean::dec(x_1);
switch (lean::obj_tag(x_11)) {
case 0:
{
obj* x_14; obj* x_17; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_26; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_14 = lean::cnstr_get(x_11, 0);
lean::inc(x_14);
lean::dec(x_11);
x_17 = lean::cnstr_get(x_14, 1);
lean::inc(x_17);
lean::dec(x_14);
x_20 = lean::box(0);
x_21 = lean_name_mk_string(x_20, x_17);
x_22 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_21);
x_23 = l_option_to__monad___main___at_lean_parser_indexed___spec__2___rarg(x_22, x_2, x_3, x_4);
x_24 = lean::cnstr_get(x_23, 0);
lean::inc(x_24);
x_26 = lean::cnstr_get(x_23, 1);
lean::inc(x_26);
if (lean::is_exclusive(x_23)) {
 lean::cnstr_release(x_23, 0);
 lean::cnstr_release(x_23, 1);
 x_28 = x_23;
} else {
 lean::dec(x_23);
 x_28 = lean::box(0);
}
x_29 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_30 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_29, x_24);
if (lean::is_scalar(x_28)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_28;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_26);
return x_31;
}
case 1:
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_38; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
lean::dec(x_11);
x_33 = l_lean_parser_indexed___rarg___lambda__1___closed__1;
x_34 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_33);
x_35 = l_option_to__monad___main___at_lean_parser_indexed___spec__2___rarg(x_34, x_2, x_3, x_4);
x_36 = lean::cnstr_get(x_35, 0);
lean::inc(x_36);
x_38 = lean::cnstr_get(x_35, 1);
lean::inc(x_38);
if (lean::is_exclusive(x_35)) {
 lean::cnstr_release(x_35, 0);
 lean::cnstr_release(x_35, 1);
 x_40 = x_35;
} else {
 lean::dec(x_35);
 x_40 = lean::box(0);
}
x_41 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_42 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_41, x_36);
if (lean::is_scalar(x_40)) {
 x_43 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_43 = x_40;
}
lean::cnstr_set(x_43, 0, x_42);
lean::cnstr_set(x_43, 1, x_38);
return x_43;
}
case 2:
{
obj* x_44; obj* x_47; obj* x_50; obj* x_51; obj* x_52; obj* x_54; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
x_44 = lean::cnstr_get(x_11, 0);
lean::inc(x_44);
lean::dec(x_11);
x_47 = lean::cnstr_get(x_44, 0);
lean::inc(x_47);
lean::dec(x_44);
x_50 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_47);
x_51 = l_option_to__monad___main___at_lean_parser_indexed___spec__2___rarg(x_50, x_2, x_3, x_4);
x_52 = lean::cnstr_get(x_51, 0);
lean::inc(x_52);
x_54 = lean::cnstr_get(x_51, 1);
lean::inc(x_54);
if (lean::is_exclusive(x_51)) {
 lean::cnstr_release(x_51, 0);
 lean::cnstr_release(x_51, 1);
 x_56 = x_51;
} else {
 lean::dec(x_51);
 x_56 = lean::box(0);
}
x_57 = l_lean_parser_parsec_result_mk__eps___rarg___closed__1;
x_58 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_57, x_52);
if (lean::is_scalar(x_56)) {
 x_59 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_59 = x_56;
}
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_54);
return x_59;
}
default:
{
obj* x_60; obj* x_61; obj* x_62; obj* x_64; obj* x_65; obj* x_67; obj* x_69; 
x_60 = lean::box(0);
x_61 = l_string_join___closed__1;
x_62 = l_mjoin___rarg___closed__1;
lean::inc(x_2);
x_64 = l_lean_parser_monad__parsec_error___at___private_init_lean_parser_token_1__finish__comment__block__aux___main___spec__1___rarg(x_61, x_62, x_60, x_60, x_2, x_3, x_4);
x_65 = lean::cnstr_get(x_64, 0);
lean::inc(x_65);
x_67 = lean::cnstr_get(x_64, 1);
lean::inc(x_67);
if (lean::is_exclusive(x_64)) {
 lean::cnstr_release(x_64, 0);
 lean::cnstr_release(x_64, 1);
 x_69 = x_64;
} else {
 lean::dec(x_64);
 x_69 = lean::box(0);
}
if (lean::obj_tag(x_65) == 0)
{
obj* x_70; obj* x_72; obj* x_74; obj* x_77; obj* x_78; obj* x_79; obj* x_81; obj* x_84; obj* x_85; 
x_70 = lean::cnstr_get(x_65, 0);
lean::inc(x_70);
x_72 = lean::cnstr_get(x_65, 1);
lean::inc(x_72);
x_74 = lean::cnstr_get(x_65, 2);
lean::inc(x_74);
lean::dec(x_65);
x_77 = l_rbnode_find___main___at_lean_parser_token__map_insert___spec__2___rarg(x_0, x_70);
x_78 = l_option_to__monad___main___at_lean_parser_indexed___spec__2___rarg(x_77, x_2, x_72, x_67);
x_79 = lean::cnstr_get(x_78, 0);
lean::inc(x_79);
x_81 = lean::cnstr_get(x_78, 1);
lean::inc(x_81);
lean::dec(x_78);
x_84 = l_lean_parser_parsec__t_bind__mk__res___rarg(x_74, x_79);
if (lean::is_scalar(x_69)) {
 x_85 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_85 = x_69;
}
lean::cnstr_set(x_85, 0, x_84);
lean::cnstr_set(x_85, 1, x_81);
return x_85;
}
else
{
obj* x_88; uint8 x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
lean::dec(x_0);
lean::dec(x_2);
x_88 = lean::cnstr_get(x_65, 0);
lean::inc(x_88);
x_90 = lean::cnstr_get_scalar<uint8>(x_65, sizeof(void*)*1);
if (lean::is_exclusive(x_65)) {
 lean::cnstr_release(x_65, 0);
 x_91 = x_65;
} else {
 lean::dec(x_65);
 x_91 = lean::box(0);
}
if (lean::is_scalar(x_91)) {
 x_92 = lean::alloc_cnstr(1, 1, 1);
} else {
 x_92 = x_91;
}
lean::cnstr_set(x_92, 0, x_88);
lean::cnstr_set_scalar(x_92, sizeof(void*)*1, x_90);
x_93 = x_92;
if (lean::is_scalar(x_69)) {
 x_94 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_94 = x_69;
}
lean::cnstr_set(x_94, 0, x_93);
lean::cnstr_set(x_94, 1, x_67);
return x_94;
}
}
}
}
}
}
obj* _init_l_lean_parser_indexed___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_peek__token), 3, 0);
return x_0;
}
}
obj* l_lean_parser_indexed___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_indexed___rarg___lambda__1), 5, 1);
lean::closure_set(x_4, 0, x_2);
x_5 = l_lean_parser_indexed___rarg___closed__1;
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_reader__t_bind___at_lean_parser_with__trailing___spec__2___rarg), 5, 2);
lean::closure_set(x_6, 0, x_5);
lean::closure_set(x_6, 1, x_4);
x_7 = lean::apply_2(x_0, lean::box(0), x_6);
return x_7;
}
}
obj* l_lean_parser_indexed(obj* x_0) {
_start:
{
obj* x_2; 
lean::dec(x_0);
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_lean_parser_indexed___rarg), 3, 0);
return x_2;
}
}
void initialize_init_lean_parser_combinators();
void initialize_init_lean_parser_string__literal();
static bool _G_initialized = false;
void initialize_init_lean_parser_token() {
 if (_G_initialized) return;
 _G_initialized = true;
 initialize_init_lean_parser_combinators();
 initialize_init_lean_parser_string__literal();
 l_lean_parser_match__token___closed__1 = _init_l_lean_parser_match__token___closed__1();
lean::mark_persistent(l_lean_parser_match__token___closed__1);
 l_lean_parser_match__token___closed__2 = _init_l_lean_parser_match__token___closed__2();
lean::mark_persistent(l_lean_parser_match__token___closed__2);
 l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__1 = _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__1();
lean::mark_persistent(l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__1);
 l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__2 = _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__2();
lean::mark_persistent(l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__2);
 l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__3 = _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__3();
lean::mark_persistent(l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__3);
 l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__4 = _init_l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__4();
lean::mark_persistent(l___private_init_lean_parser_token_1__finish__comment__block__aux___main___closed__4);
 l_lean_parser_finish__comment__block___closed__1 = _init_l_lean_parser_finish__comment__block___closed__1();
lean::mark_persistent(l_lean_parser_finish__comment__block___closed__1);
 l_lean_parser_finish__comment__block___closed__2 = _init_l_lean_parser_finish__comment__block___closed__2();
lean::mark_persistent(l_lean_parser_finish__comment__block___closed__2);
 l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__1 = _init_l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__1();
lean::mark_persistent(l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__1);
 l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__2 = _init_l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__2();
lean::mark_persistent(l_lean_parser_parsec__t_lookahead___at___private_init_lean_parser_token_2__whitespace__aux___main___spec__4___closed__2);
 l___private_init_lean_parser_token_2__whitespace__aux___main___closed__1 = _init_l___private_init_lean_parser_token_2__whitespace__aux___main___closed__1();
lean::mark_persistent(l___private_init_lean_parser_token_2__whitespace__aux___main___closed__1);
 l___private_init_lean_parser_token_2__whitespace__aux___main___closed__2 = _init_l___private_init_lean_parser_token_2__whitespace__aux___main___closed__2();
lean::mark_persistent(l___private_init_lean_parser_token_2__whitespace__aux___main___closed__2);
 l___private_init_lean_parser_token_2__whitespace__aux___main___closed__3 = _init_l___private_init_lean_parser_token_2__whitespace__aux___main___closed__3();
lean::mark_persistent(l___private_init_lean_parser_token_2__whitespace__aux___main___closed__3);
 l_lean_parser_with__trailing___rarg___closed__1 = _init_l_lean_parser_with__trailing___rarg___closed__1();
lean::mark_persistent(l_lean_parser_with__trailing___rarg___closed__1);
 l_lean_parser_raw_view___rarg___lambda__3___closed__1 = _init_l_lean_parser_raw_view___rarg___lambda__3___closed__1();
lean::mark_persistent(l_lean_parser_raw_view___rarg___lambda__3___closed__1);
 l_lean_parser_raw_view___rarg___closed__1 = _init_l_lean_parser_raw_view___rarg___closed__1();
lean::mark_persistent(l_lean_parser_raw_view___rarg___closed__1);
 l_lean_parser_raw_view___rarg___closed__2 = _init_l_lean_parser_raw_view___rarg___closed__2();
lean::mark_persistent(l_lean_parser_raw_view___rarg___closed__2);
 l_lean_parser_detail__ident__part__escaped = _init_l_lean_parser_detail__ident__part__escaped();
lean::mark_persistent(l_lean_parser_detail__ident__part__escaped);
 l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident__part__escaped_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_detail__ident__part__escaped_has__view_x_27 = _init_l_lean_parser_detail__ident__part__escaped_has__view_x_27();
lean::mark_persistent(l_lean_parser_detail__ident__part__escaped_has__view_x_27);
 l_lean_parser_detail__ident__part__escaped_has__view = _init_l_lean_parser_detail__ident__part__escaped_has__view();
lean::mark_persistent(l_lean_parser_detail__ident__part__escaped_has__view);
 l_lean_parser_detail__ident__part = _init_l_lean_parser_detail__ident__part();
lean::mark_persistent(l_lean_parser_detail__ident__part);
 l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_detail__ident__part_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1 = _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__1);
 l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2 = _init_l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2();
lean::mark_persistent(l_lean_parser_detail__ident__part_has__view_x_27___lambda__2___closed__2);
 l_lean_parser_detail__ident__part_has__view_x_27 = _init_l_lean_parser_detail__ident__part_has__view_x_27();
lean::mark_persistent(l_lean_parser_detail__ident__part_has__view_x_27);
 l_lean_parser_detail__ident__part_has__view = _init_l_lean_parser_detail__ident__part_has__view();
lean::mark_persistent(l_lean_parser_detail__ident__part_has__view);
 l_lean_parser_detail__ident__part_parser_lean_parser_has__tokens = _init_l_lean_parser_detail__ident__part_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_detail__ident__part_parser_lean_parser_has__tokens);
 l_lean_parser_detail__ident__part_parser_lean_parser_has__view = _init_l_lean_parser_detail__ident__part_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_detail__ident__part_parser_lean_parser_has__view);
 l_lean_parser_detail__ident__part_parser___closed__1 = _init_l_lean_parser_detail__ident__part_parser___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident__part_parser___closed__1);
 l_lean_parser_detail__ident__suffix = _init_l_lean_parser_detail__ident__suffix();
lean::mark_persistent(l_lean_parser_detail__ident__suffix);
 l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident__suffix_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_detail__ident__suffix_has__view_x_27 = _init_l_lean_parser_detail__ident__suffix_has__view_x_27();
lean::mark_persistent(l_lean_parser_detail__ident__suffix_has__view_x_27);
 l_lean_parser_detail__ident__suffix_has__view = _init_l_lean_parser_detail__ident__suffix_has__view();
lean::mark_persistent(l_lean_parser_detail__ident__suffix_has__view);
 l_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens = _init_l_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens();
lean::mark_persistent(l_lean_parser_detail__ident__suffix_parser_lean_parser_has__tokens);
 l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view = _init_l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view();
lean::mark_persistent(l_lean_parser_detail__ident__suffix_parser_lean_parser_has__view);
 l_lean_parser_detail__ident__suffix_parser___closed__1 = _init_l_lean_parser_detail__ident__suffix_parser___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident__suffix_parser___closed__1);
 l_lean_parser_detail__ident = _init_l_lean_parser_detail__ident();
lean::mark_persistent(l_lean_parser_detail__ident);
 l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_detail__ident_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1 = _init_l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident_has__view_x_27___lambda__2___closed__1);
 l_lean_parser_detail__ident_has__view_x_27 = _init_l_lean_parser_detail__ident_has__view_x_27();
lean::mark_persistent(l_lean_parser_detail__ident_has__view_x_27);
 l_lean_parser_detail__ident_has__view = _init_l_lean_parser_detail__ident_has__view();
lean::mark_persistent(l_lean_parser_detail__ident_has__view);
 l_lean_parser_detail__ident_x_27___closed__1 = _init_l_lean_parser_detail__ident_x_27___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident_x_27___closed__1);
 l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1 = _init_l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1();
lean::mark_persistent(l_lean_parser_rec__t_run__parsec___at_lean_parser_detail__ident_parser___spec__1___closed__1);
 l_lean_parser_detail__ident_parser___closed__1 = _init_l_lean_parser_detail__ident_parser___closed__1();
lean::mark_persistent(l_lean_parser_detail__ident_parser___closed__1);
 l_lean_parser_detail__ident_parser___closed__2 = _init_l_lean_parser_detail__ident_parser___closed__2();
lean::mark_persistent(l_lean_parser_detail__ident_parser___closed__2);
 l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__1 = _init_l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__1);
 l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__2 = _init_l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__2();
lean::mark_persistent(l_lean_parser_monad__parsec_foldl__aux___main___at___private_init_lean_parser_token_4__ident_x_27___spec__21___closed__2);
 l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__1 = _init_l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__1();
lean::mark_persistent(l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__1);
 l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__2 = _init_l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__2();
lean::mark_persistent(l_lean_parser_monad__parsec_many1__aux_x_27___main___at_lean_parser_parse__bin__lit___spec__2___closed__2);
 l_lean_parser_number = _init_l_lean_parser_number();
lean::mark_persistent(l_lean_parser_number);
 l_lean_parser_number_has__view_x_27___lambda__1___closed__1 = _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__1___closed__1);
 l_lean_parser_number_has__view_x_27___lambda__1___closed__2 = _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__1___closed__2);
 l_lean_parser_number_has__view_x_27___lambda__1___closed__3 = _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__3();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__1___closed__3);
 l_lean_parser_number_has__view_x_27___lambda__1___closed__4 = _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__4();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__1___closed__4);
 l_lean_parser_number_has__view_x_27___lambda__1___closed__5 = _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__5();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__1___closed__5);
 l_lean_parser_number_has__view_x_27___lambda__1___closed__6 = _init_l_lean_parser_number_has__view_x_27___lambda__1___closed__6();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__1___closed__6);
 l_lean_parser_number_has__view_x_27___lambda__2___closed__1 = _init_l_lean_parser_number_has__view_x_27___lambda__2___closed__1();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__2___closed__1);
 l_lean_parser_number_has__view_x_27___lambda__2___closed__2 = _init_l_lean_parser_number_has__view_x_27___lambda__2___closed__2();
lean::mark_persistent(l_lean_parser_number_has__view_x_27___lambda__2___closed__2);
 l_lean_parser_number_has__view_x_27 = _init_l_lean_parser_number_has__view_x_27();
lean::mark_persistent(l_lean_parser_number_has__view_x_27);
 l_lean_parser_number_has__view = _init_l_lean_parser_number_has__view();
lean::mark_persistent(l_lean_parser_number_has__view);
 l_lean_parser_number_x_27___closed__1 = _init_l_lean_parser_number_x_27___closed__1();
lean::mark_persistent(l_lean_parser_number_x_27___closed__1);
 l_lean_parser_string__lit = _init_l_lean_parser_string__lit();
lean::mark_persistent(l_lean_parser_string__lit);
 l_lean_parser_string__lit_has__view_x_27 = _init_l_lean_parser_string__lit_has__view_x_27();
lean::mark_persistent(l_lean_parser_string__lit_has__view_x_27);
 l_lean_parser_string__lit_has__view = _init_l_lean_parser_string__lit_has__view();
lean::mark_persistent(l_lean_parser_string__lit_has__view);
 l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1 = _init_l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1();
lean::mark_persistent(l_lean_parser_parse__hex__digit___at_lean_parser_string__lit_x_27___spec__5___closed__1);
 l_lean_parser_string__lit_x_27___closed__1 = _init_l_lean_parser_string__lit_x_27___closed__1();
lean::mark_persistent(l_lean_parser_string__lit_x_27___closed__1);
 l_lean_parser_token___closed__1 = _init_l_lean_parser_token___closed__1();
lean::mark_persistent(l_lean_parser_token___closed__1);
 l_lean_parser_number_parser___rarg___closed__1 = _init_l_lean_parser_number_parser___rarg___closed__1();
lean::mark_persistent(l_lean_parser_number_parser___rarg___closed__1);
 l_lean_parser_number_parser_view___rarg___closed__1 = _init_l_lean_parser_number_parser_view___rarg___closed__1();
lean::mark_persistent(l_lean_parser_number_parser_view___rarg___closed__1);
 l_lean_parser_number_parser_view___rarg___closed__2 = _init_l_lean_parser_number_parser_view___rarg___closed__2();
lean::mark_persistent(l_lean_parser_number_parser_view___rarg___closed__2);
 l_lean_parser_string__lit_parser___rarg___closed__1 = _init_l_lean_parser_string__lit_parser___rarg___closed__1();
lean::mark_persistent(l_lean_parser_string__lit_parser___rarg___closed__1);
 l_lean_parser_string__lit_parser_view___rarg___closed__1 = _init_l_lean_parser_string__lit_parser_view___rarg___closed__1();
lean::mark_persistent(l_lean_parser_string__lit_parser_view___rarg___closed__1);
 l_lean_parser_string__lit_parser_view___rarg___closed__2 = _init_l_lean_parser_string__lit_parser_view___rarg___closed__2();
lean::mark_persistent(l_lean_parser_string__lit_parser_view___rarg___closed__2);
 l_lean_parser_string__lit_view_value___closed__1 = _init_l_lean_parser_string__lit_view_value___closed__1();
lean::mark_persistent(l_lean_parser_string__lit_view_value___closed__1);
 l_lean_parser_ident_parser___rarg___closed__1 = _init_l_lean_parser_ident_parser___rarg___closed__1();
lean::mark_persistent(l_lean_parser_ident_parser___rarg___closed__1);
 l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1 = _init_l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_ident_parser_view___rarg___lambda__1___closed__1);
 l_lean_parser_ident_parser_view___rarg___lambda__1___closed__2 = _init_l_lean_parser_ident_parser_view___rarg___lambda__1___closed__2();
lean::mark_persistent(l_lean_parser_ident_parser_view___rarg___lambda__1___closed__2);
 l_lean_parser_ident_parser_view___rarg___closed__1 = _init_l_lean_parser_ident_parser_view___rarg___closed__1();
lean::mark_persistent(l_lean_parser_ident_parser_view___rarg___closed__1);
 l_lean_parser_ident_parser_view___rarg___closed__2 = _init_l_lean_parser_ident_parser_view___rarg___closed__2();
lean::mark_persistent(l_lean_parser_ident_parser_view___rarg___closed__2);
 l_lean_parser_raw__ident_parser___rarg___closed__1 = _init_l_lean_parser_raw__ident_parser___rarg___closed__1();
lean::mark_persistent(l_lean_parser_raw__ident_parser___rarg___closed__1);
 l_lean_parser_indexed___rarg___lambda__1___closed__1 = _init_l_lean_parser_indexed___rarg___lambda__1___closed__1();
lean::mark_persistent(l_lean_parser_indexed___rarg___lambda__1___closed__1);
 l_lean_parser_indexed___rarg___closed__1 = _init_l_lean_parser_indexed___rarg___closed__1();
lean::mark_persistent(l_lean_parser_indexed___rarg___closed__1);
}
