//
//  Facade.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCFacade_h
#define SimpleMVC_SMVCFacade_h

namespace SimpleMVC {
    class SMVCFacade : public SMVCObject {
    private:
        typedef cocos2d::CCMutableDictionary<SMVCNotifier::SMVCEVENT_NAME, SMVCNotifier*> NOTIFIER_MAP_TYPE;
    public:
        SMVCFacade();
        ~SMVCFacade();
        void registerNotifier(SMVCNotifier* notifier);
        void sendNotification(SMVCNotifier::SMVCEVENT_NAME event, SMVCObject * dataObject);
        SMVCObject *retrieveInstance(std::string instName);
        void resetViewer();
        
        SMVCModel* mModel;
        SMVCViewer* mViewer;
        SMVCController* mController;
        
        NOTIFIER_MAP_TYPE* mNotifiers;
        
        
    };
    
    SMVCFacade* SMVCRetrieveFacade();
    void SMVCResetFacade();
}


#endif
