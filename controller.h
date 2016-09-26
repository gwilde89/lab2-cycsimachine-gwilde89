#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller {
    public:
        Controller(bool);           // constructor(with debug opt)
        void fetch();
        void decode();
        void execute();
        void retire();
        void TFS();                 // sequence the dance
};

#endif
