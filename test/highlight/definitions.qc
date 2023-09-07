
void() QCStyleFun;
// <-type
//        ^function

void CStyleFun ();
// <-type
//     ^function

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

enum class ReturnCode: int {
// ^keyword
//    ^keyword
//          ^type
//                      ^type

    CONST1,
//   ^ constant
    CONST2,
    CONST3 = 10
};
