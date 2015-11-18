/* 
 * File:   can.cpp
 * Author: clagraff
 * 
 * Created on November 16, 2015, 9:13 PM
 */
#include "../mbed/mbed.h"
#include "../mbed/CAN.h"

#include "canmanager.h"



CANManager::CANManager() {}

CANManager* CANManager::getInstance() {
    CANManager* inst = new CANManager();
    
    return inst;
}

void CANManager::Handler() {}

void CANManager::Attach() {
    this->internalCAN->attach(this, &CANManager::Handler);
}