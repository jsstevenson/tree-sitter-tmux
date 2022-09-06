module.exports = grammar({
  name: 'tmux',
  rules: {
    program: $ => repeat($.statement),
    statement: $ => choice(
      $.command_statement,
      $.assignment_statement,
      $.comment
    ),
    command_statement: $ => seq(
      $.command,
      optional($.command_args)
    ),
    command: $ => choice(
      "set",
      "set-option",
      "bind",
      "bind-key",
      "run",
    ),
    command_args: $ => repeat1(choice($.command_flag, $.command_arg)),
    command_flag: $ => /--?[a-zA-Z]+/,
    command_arg: $ => /\S+/,
    assignment_statement: $ => seq(
      $.var_name,
      "=",
      $.exp_value,
    ),
    var_name: $ => /[a-z][a-zA-Z0-9_]*/,
    aexp: $ => choice($.quoted_exp_value, $.exp_value),
    quoted_exp_value: $ => seq('"', $.exp_value, '"'),
    exp_value: $ => /.+/,
    comment: $ => /#.*/,
  }
});
