//
//  TestSuite.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>
#include "CCArray.h"
#include "TestCase.h"
#include "TestSuite.h"


namespace guangshun {
    using namespace cocos2d;
    TestSuite::TestSuite() {
        this->mTests = CCArray::array();
        this->mTests->init();
        this->mPassed = 0;
        this->mAll = 0;
    }
    TestSuite::~TestSuite() {
        unsigned i;
        for (i = 0; i < this->mTests->count(); ++i) {
            TestCase * ts = (TestCase*)this->mTests->objectAtIndex(i);
            ts->release();
        }
        this->mTests->release();
    }
    void TestSuite::setUp() {
    }
    void TestSuite::tearDown() {
    }
    void TestSuite::addTest(TestCase* testCase) {
        this->mTests->addObject(testCase);
    }
    
    void TestSuite::run() {
        unsigned i;
        this->mAll = 0;
        this->mPassed = 0;
        for (i = 0; i < this->mTests->count(); ++i) {
            TestCase * ts = (TestCase*)this->mTests->objectAtIndex(i);
            this->mPassed += ts->run();
            this->mAll += ts->getNumTest();
        }
    }
}


