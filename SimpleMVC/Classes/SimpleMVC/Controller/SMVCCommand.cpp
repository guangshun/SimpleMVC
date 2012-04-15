//
//  SMVCCommand.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <string>
#include "CCString.h"
#include "CCObject.h"
#include "SMVCObject.h"
#include "SMVCCommand.h"

using namespace cocos2d;

namespace SimpleMVC {
    SMVCCommand::SMVCCommand(std::string name) {
        this->mName = name;
    }
    
    SMVCCommand::~SMVCCommand() {
        
    }
    
    std::string SMVCCommand::getName() const {
        return this->mName;
    }
}
