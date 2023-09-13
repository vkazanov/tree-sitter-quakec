int global;
// <-type
//    ^variable.definition

int global1, global2;
// <-type
//    ^variable.definition
//               ^variable.definition

int globalConstant = 11;
// <-type
//    ^variable.definition

.int field1, field2;
// ^type
//    ^variable.definition
//             ^variable.definition

void() QCStyleFun;
// <-type
//        ^function.definition

void CStyleFun ();
// <-type
//     ^function.definition
//             ^punctuation.bracket
//               ^punctuation.delimiter

float(entity param1, entity param2) QCStyleFun;
// ^type
//      ^type
//            ^variable.parameter
//                     ^type
//                           ^variable.parameter
//                                    ^function.definition

float CStyleFun(entity param1, entity param2);
// ^type
//      ^function.definition
//                ^type
//                     ^variable.parameter
//                              ^type
//                                     ^variable.parameter

void(...) EmptyFunction1 = {};
//   ^punctuation.delimiter

void() BuiltinFunction1 = #12;
//                        ^constant.builtin

void(int param1, int param2) FrameFunction1 = [ $frame1, next ] {
//                                                        ^function.call
};

enum class ReturnCode: int {
// ^keyword
//    ^keyword
//          ^type.definition
//                      ^type
//                         ^punctuation.bracket

    CONST1,
//   ^ constant
    CONST2,
    CONST3 = 10
};
