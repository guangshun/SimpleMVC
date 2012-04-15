//
//  TestSuite.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_TestSuite_h
#define SimpleMVC_TestSuite_h

namespace guangshun {
class TestSuite : public cocos2d::CCObject
{
public:
    TestSuite();
    ~TestSuite();
    void setUp();
    void tearDown();
    void addTest(TestCase* testCase);
    void run();
    
    cocos2d::CCArray* mTests;
    unsigned mPassed;
    unsigned mAll;
};
}


#endif
