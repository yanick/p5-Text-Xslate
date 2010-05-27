# This lines are automatically generated by tool/opcode_for_pp.pl.
# ANY CHANGES WILL BE LOST!

# Text::Xslate::PP::Const;

package Text::Xslate::PP;

use constant TXARGf_SV      => 0x01;
use constant TXARGf_INT     => 0x02;
use constant TXARGf_KEY     => 0x04;
use constant TXARGf_VAR     => 0x08;
use constant TXARGf_GOTO    => 0x10;

use constant TXCODE_W_SV    => TXARGf_SV;
use constant TXCODE_W_INT   => (TXARGf_SV | TXARGf_INT);
use constant TXCODE_W_VAR   => (TXARGf_SV | TXARGf_INT | TXARGf_VAR);
use constant TXCODE_W_KEY   => (TXARGf_SV | TXARGf_KEY);
use constant TXCODE_GOTO    => (TXARGf_SV | TXARGf_INT | TXARGf_GOTO);


package Text::Xslate::PP::Opcode;

# template representation, stored in $self->{template}{$file}
use constant TXo_NAME           => 0;
use constant TXo_ERROR_HANDLER  => 1;
use constant TXo_MTIME          => 2;
use constant TXo_CACHEPATH      => 3;
use constant TXo_FULLPATH       => 4;

# vm execution frame
use constant TXframe_NAME       => 0;
use constant TXframe_OUTPUT     => 1;
use constant TXframe_RETADDR    => 2;
use constant TXframe_START_LVAR => 3;

use constant TX_VERBOSE_DEFAULT => 1;

#
#
#

package Text::Xslate::PP::Const;

use strict;

my $loaded;

unless ( $loaded ) {
    require Text::Xslate::PP::Opcode;

    init_opcode_dispatch_table();

    $loaded++;
}


# make %Text::Xslate::OPS if not exists.
package Text::Xslate;

unless ( %Text::Xslate::OPS ) {
    my $i = 0;

    %Text::Xslate::OPS = map { ( $_ => $i++ ) } qw(
            noop
            move_to_sb
            move_from_sb
            save_to_lvar
            load_lvar_to_sb
            local_s
            push
            pushmark
            nil
            literal
            literal_i
            fetch_s
            fetch_lvar
            fetch_field
            fetch_field_s
            print
            print_raw
            print_raw_s
            include
            for_start
            for_iter
            add
            sub
            mul
            div
            mod
            concat
            and
            dand
            or
            dor
            not
            plus
            minus
            eq
            ne
            lt
            le
            gt
            ge
            macrocall
            macro_begin
            macro_end
            macro
            function
            funcall
            methodcall_s
            enter
            leave
            goto
            depend
            end
    );
}

# make OPARG flag list.
package Text::Xslate::PP;
use strict;

our $tx_oparg = [
    0,             # noop
    0,             # move_to_sb
    0,             # move_from_sb
    TXCODE_W_VAR,  # save_to_lvar
    TXCODE_W_VAR,  # load_lvar_to_sb
    TXCODE_W_KEY,  # local_s
    0,             # push
    0,             # pushmark
    0,             # nil
    TXCODE_W_SV,   # literal
    TXCODE_W_INT,  # literal_i
    TXCODE_W_KEY,  # fetch_s
    TXCODE_W_VAR,  # fetch_lvar
    0,             # fetch_field
    TXCODE_W_KEY,  # fetch_field_s
    0,             # print
    0,             # print_raw
    TXCODE_W_SV,   # print_raw_s
    0,             # include
    TXCODE_W_VAR,  # for_start
    TXCODE_GOTO,   # for_iter
    0,             # add
    0,             # sub
    0,             # mul
    0,             # div
    0,             # mod
    TXCODE_W_SV,   # concat
    TXCODE_GOTO,   # and
    TXCODE_GOTO,   # dand
    TXCODE_GOTO,   # or
    TXCODE_GOTO,   # dor
    0,             # not
    0,             # plus
    0,             # minus
    0,             # eq
    0,             # ne
    0,             # lt
    0,             # le
    0,             # gt
    0,             # ge
    0,             # macrocall
    TXCODE_W_KEY,  # macro_begin
    0,             # macro_end
    TXCODE_W_KEY,  # macro
    TXCODE_W_KEY,  # function
    0,             # funcall
    TXCODE_W_KEY,  # methodcall_s
    0,             # enter
    0,             # leave
    TXCODE_GOTO,   # goto
    TXCODE_W_SV,   # depend
    0,             # end
];

# make opcode dispatch table.
package Text::Xslate::PP::Const;
use strict;

sub init_opcode_dispatch_table {

    package Text::Xslate::PP::Opcode;

    our $Opcode_list = [
        \&op_noop,                # 0
        \&op_move_to_sb,          # 1
        \&op_move_from_sb,        # 2
        \&op_save_to_lvar,        # 3
        \&op_load_lvar_to_sb,     # 4
        \&op_local_s,             # 5
        \&op_push,                # 6
        \&op_pushmark,            # 7
        \&op_nil,                 # 8
        \&op_literal,             # 9
        \&op_literal_i,           # 10
        \&op_fetch_s,             # 11
        \&op_fetch_lvar,          # 12
        \&op_fetch_field,         # 13
        \&op_fetch_field_s,       # 14
        \&op_print,               # 15
        \&op_print_raw,           # 16
        \&op_print_raw_s,         # 17
        \&op_include,             # 18
        \&op_for_start,           # 19
        \&op_for_iter,            # 20
        \&op_add,                 # 21
        \&op_sub,                 # 22
        \&op_mul,                 # 23
        \&op_div,                 # 24
        \&op_mod,                 # 25
        \&op_concat,              # 26
        \&op_and,                 # 27
        \&op_dand,                # 28
        \&op_or,                  # 29
        \&op_dor,                 # 30
        \&op_not,                 # 31
        \&op_plus,                # 32
        \&op_minus,               # 33
        \&op_eq,                  # 34
        \&op_ne,                  # 35
        \&op_lt,                  # 36
        \&op_le,                  # 37
        \&op_gt,                  # 38
        \&op_ge,                  # 39
        \&op_macrocall,           # 40
        \&op_macro_begin,         # 41
        \&op_macro_end,           # 42
        \&op_macro,               # 43
        \&op_function,            # 44
        \&op_funcall,             # 45
        \&op_methodcall_s,        # 46
        \&op_enter,               # 47
        \&op_leave,               # 48
        \&op_goto,                # 49
        \&op_depend,              # 50
        \&op_end,                 # 51
    ];
}

1;
__END__

=pod

=head1 NAME

Text::Xslate::PP::Const - Text::Xslate constants in pure Perl

=head1 DESCRIPTION

This module is used by Text::Xslate::PP internally.

=head1 SEE ALSO

L<Text::Xslate>

L<Text::Xslate::PP>

=head1 LICENSE AND COPYRIGHT

Copyright (c) 2010 by Makamaka Hannyaharamitu (makamaka).

This library is free software; you can redistribute it and/or modify
it under the same terms as Perl itself.

=cut

