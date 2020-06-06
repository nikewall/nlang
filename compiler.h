#pragma once

#include <iostream>
#include "lexer.h"

using namespace std;

class Compiler {
    Lexer lexer;

    public:
        void Run(string file_name);
}
