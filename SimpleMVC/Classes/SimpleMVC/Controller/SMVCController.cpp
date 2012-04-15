//
//  SMVCController.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>

#include "CCObject.h"
#include "CCMutableDictionary.h"
#include "SMVCObject.h"
#include "SMVCCommand.h"
#include "SMVCController.h"

using namespace cocos2d;

namespace SimpleMVC {
    SMVCController::SMVCController() {
        this->mCommands = new COMMAND_TYPE();
    }
    
    SMVCController::~SMVCController() {
        if (this->mCommands->begin()) {
            SMVCObject * o;
            while ((o = this->mCommands->next())) {
                o->release();
            }
        }
        this->mCommands->release();
    }
    
    void SMVCController::registerCommand(SMVCCommand* command) {
        this->mCommands->setObject(command, command->getName());
    }    
}
