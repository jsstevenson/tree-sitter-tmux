module.exports = grammar({
  name: 'tmux',
  rules: {
    program: $ => repeat($.statement),
    statement: $ => choice($.exp, $.command_statement),
    exp: $ => seq($.variable, $.eq_operator, $.aexp),
    eq_operator: $ => /=/,
    variable: $ => /[a-z][a-zA-Z0-9_]*/,
    aexp: $ => /"?.+"?/,
    command_statement: $ => seq($.command, $.args),
    command: $ => /.+/,
    args: $ => /.+/
    // comment: $ => /#.*$/
  }
});
