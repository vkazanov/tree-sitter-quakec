void() Function = #23;

void() Function = {
//      ^ function.definition

    b++;
//   ^ operator

    "asdf";

    a = 1 + b;

    self.field;
//  ^ variable.builtin
//      ^ operator

    self->field;
//         ^ variable
//      ^ operator
//  ^ variable.builtin

    entity a = 1;

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
