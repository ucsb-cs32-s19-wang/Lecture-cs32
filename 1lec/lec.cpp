#include <iostream>
#include "functions.h"

int main(){
    int x = 50;
    std::cout << "original number is:\n" << x << std::endl;
    std::cout << "new number is:\n" << doubleInt(x) << std::endl;
    return 0;
}
/**
 * Compilation: 
 *  1. preprocessor: (compile code)
 *  Text-based program that runs before compilation. 
 *  Looks for statements such as #includeand modifies the source code,
 *  which is used as the input for the compiler
 *  2. Compilation: (create .o)
 *  Translates source code into "object code"
 *  Lower level represenation optimtized for ecuting instructions
 *  lower level representation are stored in a .o object
 *  3. Linker:
 *  Resolves: dependencies and maps appropriate functions located
 *  on various object files. the output of the linker is an executable files
 *  for the specific platform
 * 
 */
/**
 * Errors:
 * 2. compilation Error:
 *      这里的error: 看不懂code 没有declare
 * 3. Linker error:
 *      这里的error: 没有连起来 读不完整
 */
