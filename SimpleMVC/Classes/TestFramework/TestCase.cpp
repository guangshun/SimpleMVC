//
//  TestCase.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>

#include "CCObject.h"
#include "CCArray.h"
#include "TestCase.h"

using namespace cocos2d;

namespace guangshun {
    TestCase::TestCase() {
        this->mTests = CCArray::array();
        this->mTests->init();
    }
    TestCase::~TestCase() {
        this->mTests->release();
    }
    void TestCase::setUp() {
        
    }
    void TestCase::tearDown() {
        
    }
    unsigned TestCase::run() {
        unsigned ret = 0;
        for (unsigned i = 0; i < this->mTests->count(); ++i) {
            this->mFunc = (TestCase::TestCaseFunc)this->mTests->objectAtIndex(i);
            if (this->mFunc())
                ++ret;
        }
        return ret;
    }
    
    void TestCase::addTest(TestCase::TestCaseFunc func) {
        this->mTests->addObject((CCObject*)func);
    }
    unsigned TestCase::getNumTest() {
        return this->mTests->count();
    }
}