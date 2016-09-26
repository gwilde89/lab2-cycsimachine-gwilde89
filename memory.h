#ifndef MEMORY_H
#define MEMORY_H

#include <string>
using namespace std;

#define MAX_MEM 500

class Memory {
    string RAM[MAX_MEM];            // code memory
    int STACK[MAX_MEM];             // data memory
    bool DEBUG;                     // turn on debugging messages

    public:
        Memory(bool);               // constructor

        // code memory access routines
        string read(int addr);
        void(int addr, string data);

        // stack access routines
        void push(int);
        int pop(void);

        // code load routine
        void loader(string fname);

};

#endif
