#ifndef ALU_H
#define ALU_H

#include "instructions.h"

class ALU {
    ALU(bool);

    int math(Code icode, int r1, int r2);
};

#endif
