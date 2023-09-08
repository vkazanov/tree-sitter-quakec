
void() QCStyleFun;
// <-type
//        ^function

void CStyleFun ();
// <-type
//     ^function
//             ^punctuation.bracket
//               ^punctuation.delimiter

float(entity param1, entity param2) QCStyleFun;
// ^type
//      ^type
//            ^variable
//                     ^type
//                           ^variable
//                                    ^function

float CStyleFun(entity param1, entity param2);
// ^type
//      ^function
//                ^type
//                     ^variable
//                              ^type
//                                     ^variable

void(...) EmptyFunction1 = {};
//   ^punctuation.delimiter

void() BuiltinFunction1 = #12;
//                        ^constant.builtin

void(int param1, int param2) FrameFunction1 = [ $frame1, next ] {
//                                                       ^function
};

enum class ReturnCode: int {
// ^keyword
//    ^keyword
//          ^type
//                      ^type
//                         ^punctuation.bracket

    CONST1,
//   ^ constant
    CONST2,
    CONST3 = 10
};
