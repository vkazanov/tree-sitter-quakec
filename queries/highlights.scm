[
 "break"
 "return"
 "continue"
 "enum"
 "for"
 "while"
 "do"
 "class"

 "#define"
 "#undef"
 "#ifdef"
 "#ifndef"
 "#else"
 "#endif"
 ] @keyword

"--" @operator
"-" @operator
"-=" @operator
"->" @operator
"=" @operator
"!=" @operator
"*" @operator
"&" @operator
"&&" @operator
"+" @operator
"++" @operator
"+=" @operator
"<" @operator
"==" @operator
">" @operator
"||" @operator

"." @delimiter
";" @delimiter

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

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]*$"))

(identifier) @variable
