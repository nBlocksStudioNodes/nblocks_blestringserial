#ifndef __NB_BLESTRINGSERIAL
#define __NB_BLESTRINGSERIAL

#include "nworkbench.h"

class nBlock_BLEStringSerial: public nBlockSimpleNode<1> {
public:
    nBlock_BLEStringSerial(char * advertising_name);
    void triggerInput(nBlocks_Message message);
    void endFrame(void);
private:
};

#endif
