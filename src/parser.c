#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_set = 1,
  anon_sym_set_DASHoption = 2,
  anon_sym_bind = 3,
  anon_sym_bind_DASHkey = 4,
  anon_sym_run = 5,
  sym_command_flag = 6,
  sym_command_arg = 7,
  anon_sym_EQ = 8,
  sym_var_name = 9,
  anon_sym_DQUOTE = 10,
  sym_exp_value = 11,
  sym_comment = 12,
  sym_program = 13,
  sym_statement = 14,
  sym_command_statement = 15,
  sym_command = 16,
  sym_command_args = 17,
  sym_assignment_statement = 18,
  aux_sym_program_repeat1 = 19,
  aux_sym_command_args_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_set] = "set",
  [anon_sym_set_DASHoption] = "set-option",
  [anon_sym_bind] = "bind",
  [anon_sym_bind_DASHkey] = "bind-key",
  [anon_sym_run] = "run",
  [sym_command_flag] = "command_flag",
  [sym_command_arg] = "command_arg",
  [anon_sym_EQ] = "=",
  [sym_var_name] = "var_name",
  [anon_sym_DQUOTE] = "\"",
  [sym_exp_value] = "exp_value",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_command_statement] = "command_statement",
  [sym_command] = "command",
  [sym_command_args] = "command_args",
  [sym_assignment_statement] = "assignment_statement",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_command_args_repeat1] = "command_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_bind_DASHkey] = anon_sym_bind_DASHkey,
  [anon_sym_run] = anon_sym_run,
  [sym_command_flag] = sym_command_flag,
  [sym_command_arg] = sym_command_arg,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_var_name] = sym_var_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_exp_value] = sym_exp_value,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_command_statement] = sym_command_statement,
  [sym_command] = sym_command,
  [sym_command_args] = sym_command_args,
  [sym_assignment_statement] = sym_assignment_statement,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_command_args_repeat1] = aux_sym_command_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [sym_command_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_command_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_var_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_exp_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_args] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'k') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 12:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_bind_DASHkey);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_bind_DASHkey);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_run);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_run);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_command_flag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_command_flag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == '-') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'd') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'n') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'n') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'u') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == 'y') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_command_arg);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_command_arg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_command_arg);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_var_name);
      if (lookahead == 'd') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_var_name);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_var_name);
      if (lookahead == 'i') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_var_name);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_var_name);
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_var_name);
      if (lookahead == 't') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_var_name);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_var_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_exp_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_exp_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_set_DASHoption] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_bind_DASHkey] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [sym_command_flag] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_var_name] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym_statement] = STATE(2),
    [sym_command_statement] = STATE(8),
    [sym_command] = STATE(4),
    [sym_assignment_statement] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_set_DASHoption] = ACTIONS(7),
    [anon_sym_bind] = ACTIONS(5),
    [anon_sym_bind_DASHkey] = ACTIONS(7),
    [anon_sym_run] = ACTIONS(5),
    [sym_var_name] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym_command_statement] = STATE(8),
    [sym_command] = STATE(4),
    [sym_assignment_statement] = STATE(8),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(5),
    [anon_sym_set_DASHoption] = ACTIONS(7),
    [anon_sym_bind] = ACTIONS(5),
    [anon_sym_bind_DASHkey] = ACTIONS(7),
    [anon_sym_run] = ACTIONS(5),
    [sym_var_name] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [3] = {
    [sym_statement] = STATE(3),
    [sym_command_statement] = STATE(8),
    [sym_command] = STATE(4),
    [sym_assignment_statement] = STATE(8),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_set] = ACTIONS(17),
    [anon_sym_set_DASHoption] = ACTIONS(20),
    [anon_sym_bind] = ACTIONS(17),
    [anon_sym_bind_DASHkey] = ACTIONS(20),
    [anon_sym_run] = ACTIONS(17),
    [sym_var_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(26),
  },
  [4] = {
    [sym_command_args] = STATE(9),
    [aux_sym_command_args_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_set] = ACTIONS(31),
    [anon_sym_set_DASHoption] = ACTIONS(31),
    [anon_sym_bind] = ACTIONS(31),
    [anon_sym_bind_DASHkey] = ACTIONS(31),
    [anon_sym_run] = ACTIONS(31),
    [sym_command_flag] = ACTIONS(33),
    [sym_command_arg] = ACTIONS(33),
    [sym_var_name] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
  },
  [5] = {
    [aux_sym_command_args_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_set] = ACTIONS(37),
    [anon_sym_set_DASHoption] = ACTIONS(37),
    [anon_sym_bind] = ACTIONS(37),
    [anon_sym_bind_DASHkey] = ACTIONS(37),
    [anon_sym_run] = ACTIONS(37),
    [sym_command_flag] = ACTIONS(39),
    [sym_command_arg] = ACTIONS(39),
    [sym_var_name] = ACTIONS(37),
    [sym_comment] = ACTIONS(37),
  },
  [6] = {
    [aux_sym_command_args_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_set] = ACTIONS(43),
    [anon_sym_set_DASHoption] = ACTIONS(43),
    [anon_sym_bind] = ACTIONS(43),
    [anon_sym_bind_DASHkey] = ACTIONS(43),
    [anon_sym_run] = ACTIONS(43),
    [sym_command_flag] = ACTIONS(45),
    [sym_command_arg] = ACTIONS(45),
    [sym_var_name] = ACTIONS(43),
    [sym_comment] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 9,
      anon_sym_set,
      anon_sym_set_DASHoption,
      anon_sym_bind,
      anon_sym_bind_DASHkey,
      anon_sym_run,
      sym_command_flag,
      sym_command_arg,
      sym_var_name,
      sym_comment,
  [15] = 2,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_set_DASHoption,
      anon_sym_bind_DASHkey,
      sym_comment,
    ACTIONS(54), 4,
      anon_sym_set,
      anon_sym_bind,
      anon_sym_run,
      sym_var_name,
  [28] = 2,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_set_DASHoption,
      anon_sym_bind_DASHkey,
      sym_comment,
    ACTIONS(58), 4,
      anon_sym_set,
      anon_sym_bind,
      anon_sym_run,
      sym_var_name,
  [41] = 2,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_set_DASHoption,
      anon_sym_bind_DASHkey,
      sym_comment,
    ACTIONS(62), 4,
      anon_sym_set,
      anon_sym_bind,
      anon_sym_run,
      sym_var_name,
  [54] = 1,
    ACTIONS(64), 1,
      anon_sym_EQ,
  [58] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [62] = 1,
    ACTIONS(68), 1,
      sym_exp_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 15,
  [SMALL_STATE(9)] = 28,
  [SMALL_STATE(10)] = 41,
  [SMALL_STATE(11)] = 54,
  [SMALL_STATE(12)] = 58,
  [SMALL_STATE(13)] = 62,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_statement, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_args, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_args, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_args_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_args_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_args_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_statement, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_statement, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tmux(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
