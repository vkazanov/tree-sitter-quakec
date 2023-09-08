void() Function = {
    b++;
//   ^ operator

    self.field;
//  ^ variable.builtin
//      ^ operator
    self->field;
//         ^ variable
//      ^ operator

	int a = 2 + 2;
//  ^ type
//      ^ variable
//            ^ operator

	a = 10 - call(12, 13);
//  ^ variable
//      ^ number
//           ^ function


};
