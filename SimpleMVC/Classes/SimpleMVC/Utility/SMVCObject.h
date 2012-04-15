//
//  SMVCObject.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCObject_h
#define SimpleMVC_SMVCObject_h

namespace SimpleMVC {
    
    class SMVCObject : public cocos2d::CCObject
    {
    public:
        typedef void (*SMVCObjectCallback)(SMVCObject* dataObject);
        SMVCObject();
        ~SMVCObject();
        bool less(const SMVCObject& other) const;
    };
    
    bool operator < (const SMVCObject &lhs, const SMVCObject& rhs);
}    

#endif
