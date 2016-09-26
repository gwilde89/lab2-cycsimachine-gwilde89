#ifndef MACHINE_H
#define MACHINE_H
#include <string>
using namespace std;

class Machine {
    public:
        // Internal machine state
        int PC;                 // program counter
        int SP;                 // stack pointer
        int R1;                 // register 1
        int R2;                 // register 2
        int R3;                 // register 3
        string inst;            // current instruction
    public:
        // Public methods
        Machine(bool debug);    // constructor
        void run(string);       // start the machine with code file
        void loader(string);    // load code memory
        void reset(void);       // reset the machine
};

#endif
