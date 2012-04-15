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
    }
    
    TestCase::~TestCase() {
    }
    
    void TestCase::setUp() {
    }
    
    void TestCase::tearDown() {
    }
    
    unsigned TestCase::run() {
        unsigned ret = 0;
        for (size_t i = 0; i < mTests.size(); ++i) {
            TestCaseFunc mem_func_ptr = mTests[i];
            assert(mem_func_ptr != NULL);
            if ((this->*mem_func_ptr)())
                ++ret;
        }
        return ret;
    }
    
    void TestCase::addTest(TestCase::TestCaseFunc func) {
        assert(func);
        mTests.push_back(func);
    }
    
    unsigned TestCase::getNumTest() {
        return mTests.size();
    }
}