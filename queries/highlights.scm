[
 "break"
 "return"
 "continue"
 "enum"
 "for"
 "while"
 "do"
 "class"
 "nosave"

 "#define"
 "#undef"
 "#ifdef"
 "#ifndef"
 "#else"
 "#endif"
 ] @keyword

[
 "--"
 "-"
 "-="
 "->"
 "="
 "!="
 "*"
 "&"
 "&&"
 "+"
 "++"
 "+="
 "<"
 "=="
 ">"
 "||"
] @operator

[
 ";"
 ":"
 "..."
] @punctuation.delimiter

[
 "(" ")"
 "{" "}"
 "[" "]"
] @punctuation.bracket

((identifier) @variable.builtin
 (#eq? @variable.builtin "self"))

(field_expression
 operator: ["." "->"] @operator
 field: (identifier) @variable)

(simple_type) @type

(comment) @comment

(numeric_literal) @number
(string_literal) @string

(funcall_expression
 function: (identifier) @function)

(function_declaration
  name: (identifier) @function)

(function_definition
 name: (identifier) @function)

(function_definition
 frame_function_name: (identifier) @function)


(builtin_literal) @constant.builtin

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$"))

(parameter
 name: (identifier) @variable)

(enum_definition
 name: (identifier) @type)
