/* 
 * File:   can.h
 * Author: clagraff
 *
 * Created on November 16, 2015, 9:13 PM
 */

#ifndef CANMANAGER_H
#define	CANMANAGER_H

#include "../mbed/mbed.h"
#include <vector>


/**/
class CANManager {
private:
    CANManager();
    CANManager(CANManager const&);
    void operator=(CANManager const&);

public:
    static CANManager* getInstance();
    std::vector<std::vector<mbed::CANMessage>*> msgs;
    mbed::CAN* internalCAN = new mbed::CAN(p30, p29);
    void Handler();
    void Attach();
};

#endif	/* CANMANAGER_H */

