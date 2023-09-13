void() Function = {
//      ^ function.definition

    b++;
//   ^ operator

    self.field;
//  ^ variable.builtin
//      ^ operator

    self->field;
//         ^ variable
//      ^ operator
//  ^ variable.builtin

    int abc = 2 + 2;
//  ^ type
//       ^ variable.definition
//              ^ operator

    a = 10 - call(12, 13);
//  ^ variable
//      ^ number
//           ^ function.call

    a = 10 - call();
//  ^ variable
//      ^ number
//            ^ function.call

    self.field();
//         ^ function.call

    self.field(12, 13);
//         ^ function.call

};
