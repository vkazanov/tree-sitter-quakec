int global;
//    ^definition.variable

int global1, global2;
//    ^definition.variable
//               ^definition.variable

int globalConstant = 11;
//    ^definition.variable

.int field1, field2;
//    ^definition.variable
//             ^definition.variable

void() QCStyleFun;
//        ^definition.function

void CStyleFun ();
//     ^definition.function

float(entity param1, entity param2) QCStyleFun;
//                                    ^definition.function

float CStyleFun(entity param1, entity param2);
//      ^definition.function

void() BuiltinFunction1 = #12;
//      ^definition.function

void(int param1, int param2) FrameFunction1 = [ $frame1, next ] {
//                            ^definition.function
};

enum class ReturnCode: int {
//          ^definition.type
    CONST1,
    CONST2,
    CONST3 = 10
};
