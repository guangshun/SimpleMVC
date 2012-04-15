//
//  SMVCViewer.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCViewer_h
#define SimpleMVC_SMVCViewer_h

namespace SimpleMVC {
    
    class SMVCViewer: public SMVCObject{
    private:
        typedef cocos2d::CCMutableDictionary<std::string, SMVCObject*> MEDIATOR_TYPE; 
    public:
        SMVCViewer();
        ~SMVCViewer();
        void registerMediator(SMVCMediator* mediator);
        
        MEDIATOR_TYPE *mMediators;

    };
}


#endif
