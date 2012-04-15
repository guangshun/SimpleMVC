//
//  SMVCNotifier.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCNotifier_h
#define SimpleMVC_SMVCNotifier_h

namespace SimpleMVC {
    class SMVCNotifier: public SMVCObject {
    public:
        typedef std::string SMVCEVENT_NAME;
        SMVCNotifier(SMVCEVENT_NAME event, SMVCObject* handler, SMVCObject::SMVCObjectCallback callback):
        mEvent(event), 
        mHandler(handler),
        mCallback(callback)
        {
            assert(event != "");
            assert(handler);
            assert(callback);
        }
        SMVCEVENT_NAME mEvent;
        SMVCObject* mHandler;
        SMVCObject::SMVCObjectCallback mCallback;
        
        SMVCEVENT_NAME getEvent() {
            return this->mEvent;
        }
        
        void notify(SMVCObject* dataObject) {
            (this->mHandler->*(this->mCallback))(dataObject);
        }
        
    };
}


#endif
