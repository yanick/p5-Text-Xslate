/* This file is automatically generated by tool/opcode.pl.
 * ANY CHANGES WILL BE LOST!
 */

/* forward decl for Xslate opcodes */
TXC(noop);
TXC(move_to_sb);
TXC(move_from_sb);
TXC_w_var(save_to_lvar);
TXC_w_var(load_lvar_to_sb);
TXC_w_key(local_s);
TXC(push);
TXC(pushmark);
TXC(nil);
TXC_w_sv(literal);
TXC_w_int(literal_i);
TXC_w_key(fetch_s); /* fetch a field from the top */
TXC_w_var(fetch_lvar);
TXC(fetch_field); /* fetch a field from a variable (bin operator) */
TXC_w_key(fetch_field_s); /* fetch a field from a variable (for literal) */
TXC(print);
TXC(print_raw);
TXC_w_sv(print_raw_s);
TXC(include);
TXC_w_var(for_start);
TXC_goto(for_iter);
TXC(add);
TXC(sub);
TXC(mul);
TXC(div);
TXC(mod);
TXC_w_sv(concat);
TXC_goto(and);
TXC_goto(dand);
TXC_goto(or);
TXC_goto(dor);
TXC(not);
TXC(plus); /* unary plus */
TXC(minus); /* unary minus */
TXC(eq);
TXC(ne);
TXC(lt);
TXC(le);
TXC(gt);
TXC(ge);
TXC(macrocall);
TXC_w_key(macro_begin);
TXC(macro_end);
TXC_w_key(macro);
TXC_w_key(function);
TXC(funcall);
TXC_w_key(methodcall_s);
TXC(enter);
TXC(leave);
TXC_goto(goto);
TXC_w_sv(depend); /* tell the vm to dependent template files */
TXC(end);

enum tx_opcode_t {
    TXOP_noop, /* 0 */
    TXOP_move_to_sb, /* 1 */
    TXOP_move_from_sb, /* 2 */
    TXOP_save_to_lvar, /* 3 */
    TXOP_load_lvar_to_sb, /* 4 */
    TXOP_local_s, /* 5 */
    TXOP_push, /* 6 */
    TXOP_pushmark, /* 7 */
    TXOP_nil, /* 8 */
    TXOP_literal, /* 9 */
    TXOP_literal_i, /* 10 */
    TXOP_fetch_s, /* 11 */
    TXOP_fetch_lvar, /* 12 */
    TXOP_fetch_field, /* 13 */
    TXOP_fetch_field_s, /* 14 */
    TXOP_print, /* 15 */
    TXOP_print_raw, /* 16 */
    TXOP_print_raw_s, /* 17 */
    TXOP_include, /* 18 */
    TXOP_for_start, /* 19 */
    TXOP_for_iter, /* 20 */
    TXOP_add, /* 21 */
    TXOP_sub, /* 22 */
    TXOP_mul, /* 23 */
    TXOP_div, /* 24 */
    TXOP_mod, /* 25 */
    TXOP_concat, /* 26 */
    TXOP_and, /* 27 */
    TXOP_dand, /* 28 */
    TXOP_or, /* 29 */
    TXOP_dor, /* 30 */
    TXOP_not, /* 31 */
    TXOP_plus, /* 32 */
    TXOP_minus, /* 33 */
    TXOP_eq, /* 34 */
    TXOP_ne, /* 35 */
    TXOP_lt, /* 36 */
    TXOP_le, /* 37 */
    TXOP_gt, /* 38 */
    TXOP_ge, /* 39 */
    TXOP_macrocall, /* 40 */
    TXOP_macro_begin, /* 41 */
    TXOP_macro_end, /* 42 */
    TXOP_macro, /* 43 */
    TXOP_function, /* 44 */
    TXOP_funcall, /* 45 */
    TXOP_methodcall_s, /* 46 */
    TXOP_enter, /* 47 */
    TXOP_leave, /* 48 */
    TXOP_goto, /* 49 */
    TXOP_depend, /* 50 */
    TXOP_end, /* 51 */
    TXOP_last
}; /* enum tx_opcode_t */

static const tx_exec_t tx_opcode[] = {
    TXCODE_noop,
    TXCODE_move_to_sb,
    TXCODE_move_from_sb,
    TXCODE_save_to_lvar,
    TXCODE_load_lvar_to_sb,
    TXCODE_local_s,
    TXCODE_push,
    TXCODE_pushmark,
    TXCODE_nil,
    TXCODE_literal,
    TXCODE_literal_i,
    TXCODE_fetch_s,
    TXCODE_fetch_lvar,
    TXCODE_fetch_field,
    TXCODE_fetch_field_s,
    TXCODE_print,
    TXCODE_print_raw,
    TXCODE_print_raw_s,
    TXCODE_include,
    TXCODE_for_start,
    TXCODE_for_iter,
    TXCODE_add,
    TXCODE_sub,
    TXCODE_mul,
    TXCODE_div,
    TXCODE_mod,
    TXCODE_concat,
    TXCODE_and,
    TXCODE_dand,
    TXCODE_or,
    TXCODE_dor,
    TXCODE_not,
    TXCODE_plus,
    TXCODE_minus,
    TXCODE_eq,
    TXCODE_ne,
    TXCODE_lt,
    TXCODE_le,
    TXCODE_gt,
    TXCODE_ge,
    TXCODE_macrocall,
    TXCODE_macro_begin,
    TXCODE_macro_end,
    TXCODE_macro,
    TXCODE_function,
    TXCODE_funcall,
    TXCODE_methodcall_s,
    TXCODE_enter,
    TXCODE_leave,
    TXCODE_goto,
    TXCODE_depend,
    TXCODE_end,
    NULL
}; /* tx_opcode[] */

static const U8 tx_oparg[] = {
    0U, /* noop */
    0U, /* move_to_sb */
    0U, /* move_from_sb */
    TXCODE_W_VAR, /* save_to_lvar */
    TXCODE_W_VAR, /* load_lvar_to_sb */
    TXCODE_W_KEY, /* local_s */
    0U, /* push */
    0U, /* pushmark */
    0U, /* nil */
    TXCODE_W_SV, /* literal */
    TXCODE_W_INT, /* literal_i */
    TXCODE_W_KEY, /* fetch_s */
    TXCODE_W_VAR, /* fetch_lvar */
    0U, /* fetch_field */
    TXCODE_W_KEY, /* fetch_field_s */
    0U, /* print */
    0U, /* print_raw */
    TXCODE_W_SV, /* print_raw_s */
    0U, /* include */
    TXCODE_W_VAR, /* for_start */
    TXCODE_GOTO, /* for_iter */
    0U, /* add */
    0U, /* sub */
    0U, /* mul */
    0U, /* div */
    0U, /* mod */
    TXCODE_W_SV, /* concat */
    TXCODE_GOTO, /* and */
    TXCODE_GOTO, /* dand */
    TXCODE_GOTO, /* or */
    TXCODE_GOTO, /* dor */
    0U, /* not */
    0U, /* plus */
    0U, /* minus */
    0U, /* eq */
    0U, /* ne */
    0U, /* lt */
    0U, /* le */
    0U, /* gt */
    0U, /* ge */
    0U, /* macrocall */
    TXCODE_W_KEY, /* macro_begin */
    0U, /* macro_end */
    TXCODE_W_KEY, /* macro */
    TXCODE_W_KEY, /* function */
    0U, /* funcall */
    TXCODE_W_KEY, /* methodcall_s */
    0U, /* enter */
    0U, /* leave */
    TXCODE_GOTO, /* goto */
    TXCODE_W_SV, /* depend */
    0U, /* end */
}; /* tx_oparg[] */

static void
tx_init_ops(pTHX_ HV* const ops) {
    (void)hv_stores(ops, STRINGIFY(noop), newSViv(TXOP_noop));
    (void)hv_stores(ops, STRINGIFY(move_to_sb), newSViv(TXOP_move_to_sb));
    (void)hv_stores(ops, STRINGIFY(move_from_sb), newSViv(TXOP_move_from_sb));
    (void)hv_stores(ops, STRINGIFY(save_to_lvar), newSViv(TXOP_save_to_lvar));
    (void)hv_stores(ops, STRINGIFY(load_lvar_to_sb), newSViv(TXOP_load_lvar_to_sb));
    (void)hv_stores(ops, STRINGIFY(local_s), newSViv(TXOP_local_s));
    (void)hv_stores(ops, STRINGIFY(push), newSViv(TXOP_push));
    (void)hv_stores(ops, STRINGIFY(pushmark), newSViv(TXOP_pushmark));
    (void)hv_stores(ops, STRINGIFY(nil), newSViv(TXOP_nil));
    (void)hv_stores(ops, STRINGIFY(literal), newSViv(TXOP_literal));
    (void)hv_stores(ops, STRINGIFY(literal_i), newSViv(TXOP_literal_i));
    (void)hv_stores(ops, STRINGIFY(fetch_s), newSViv(TXOP_fetch_s));
    (void)hv_stores(ops, STRINGIFY(fetch_lvar), newSViv(TXOP_fetch_lvar));
    (void)hv_stores(ops, STRINGIFY(fetch_field), newSViv(TXOP_fetch_field));
    (void)hv_stores(ops, STRINGIFY(fetch_field_s), newSViv(TXOP_fetch_field_s));
    (void)hv_stores(ops, STRINGIFY(print), newSViv(TXOP_print));
    (void)hv_stores(ops, STRINGIFY(print_raw), newSViv(TXOP_print_raw));
    (void)hv_stores(ops, STRINGIFY(print_raw_s), newSViv(TXOP_print_raw_s));
    (void)hv_stores(ops, STRINGIFY(include), newSViv(TXOP_include));
    (void)hv_stores(ops, STRINGIFY(for_start), newSViv(TXOP_for_start));
    (void)hv_stores(ops, STRINGIFY(for_iter), newSViv(TXOP_for_iter));
    (void)hv_stores(ops, STRINGIFY(add), newSViv(TXOP_add));
    (void)hv_stores(ops, STRINGIFY(sub), newSViv(TXOP_sub));
    (void)hv_stores(ops, STRINGIFY(mul), newSViv(TXOP_mul));
    (void)hv_stores(ops, STRINGIFY(div), newSViv(TXOP_div));
    (void)hv_stores(ops, STRINGIFY(mod), newSViv(TXOP_mod));
    (void)hv_stores(ops, STRINGIFY(concat), newSViv(TXOP_concat));
    (void)hv_stores(ops, STRINGIFY(and), newSViv(TXOP_and));
    (void)hv_stores(ops, STRINGIFY(dand), newSViv(TXOP_dand));
    (void)hv_stores(ops, STRINGIFY(or), newSViv(TXOP_or));
    (void)hv_stores(ops, STRINGIFY(dor), newSViv(TXOP_dor));
    (void)hv_stores(ops, STRINGIFY(not), newSViv(TXOP_not));
    (void)hv_stores(ops, STRINGIFY(plus), newSViv(TXOP_plus));
    (void)hv_stores(ops, STRINGIFY(minus), newSViv(TXOP_minus));
    (void)hv_stores(ops, STRINGIFY(eq), newSViv(TXOP_eq));
    (void)hv_stores(ops, STRINGIFY(ne), newSViv(TXOP_ne));
    (void)hv_stores(ops, STRINGIFY(lt), newSViv(TXOP_lt));
    (void)hv_stores(ops, STRINGIFY(le), newSViv(TXOP_le));
    (void)hv_stores(ops, STRINGIFY(gt), newSViv(TXOP_gt));
    (void)hv_stores(ops, STRINGIFY(ge), newSViv(TXOP_ge));
    (void)hv_stores(ops, STRINGIFY(macrocall), newSViv(TXOP_macrocall));
    (void)hv_stores(ops, STRINGIFY(macro_begin), newSViv(TXOP_macro_begin));
    (void)hv_stores(ops, STRINGIFY(macro_end), newSViv(TXOP_macro_end));
    (void)hv_stores(ops, STRINGIFY(macro), newSViv(TXOP_macro));
    (void)hv_stores(ops, STRINGIFY(function), newSViv(TXOP_function));
    (void)hv_stores(ops, STRINGIFY(funcall), newSViv(TXOP_funcall));
    (void)hv_stores(ops, STRINGIFY(methodcall_s), newSViv(TXOP_methodcall_s));
    (void)hv_stores(ops, STRINGIFY(enter), newSViv(TXOP_enter));
    (void)hv_stores(ops, STRINGIFY(leave), newSViv(TXOP_leave));
    (void)hv_stores(ops, STRINGIFY(goto), newSViv(TXOP_goto));
    (void)hv_stores(ops, STRINGIFY(depend), newSViv(TXOP_depend));
    (void)hv_stores(ops, STRINGIFY(end), newSViv(TXOP_end));
} /* tx_register_ops() */
