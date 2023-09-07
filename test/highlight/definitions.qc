
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
