//
//  SMVCObject.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>
#include "CCObject.h"
#include "SMVCObject.h"

using namespace cocos2d;
namespace SimpleMVC {
    SMVCObject::SMVCObject() {
            
    }
    
    SMVCObject::~SMVCObject() {
        
    }
    
    bool SMVCObject::less (const SMVCObject &other) const {
        return this->m_uID < other.m_uID;
    }
    
    bool operator < (const SMVCObject &lhs, const SMVCObject& rhs) {
        return lhs.less(rhs);
    }
    
}
