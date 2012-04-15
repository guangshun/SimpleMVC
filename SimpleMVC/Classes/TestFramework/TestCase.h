//
//  TestCase.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_TestCase_h
#define SimpleMVC_TestCase_h

#include <vector>

namespace guangshun {
    class TestCase : public cocos2d::CCObject {
    protected:
        typedef bool (TestCase::*TestCaseFunc)(void);
        typedef std::vector<TestCaseFunc> TestCaseFunVector;
    public:
        TestCase();
        ~TestCase();
        virtual void setUp();
        virtual void tearDown();
        unsigned run();
        void addTest(TestCaseFunc f);
        unsigned getNumTest();
    private:        
        TestCaseFunVector mTests;
    };
    
}

#endif
