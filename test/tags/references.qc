void() Function = {

    self.field;
//        ^ reference.variable

    self->field;
//         ^ reference.variable

    a = 10 - call(12, 13);
//  ^ reference.variable
//           ^ reference.call

    self.field();
//         ^ reference.call

    self.field(12, 13);
//         ^ reference.call

    b++;
//  ^ reference.variable


};
