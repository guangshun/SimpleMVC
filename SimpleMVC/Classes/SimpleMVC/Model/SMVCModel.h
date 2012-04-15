//
//  SMVCModel.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCModel_h
#define SimpleMVC_SMVCModel_h

namespace SimpleMVC {
    
    class SMVCModel: public SMVCObject{
    private:
        typedef cocos2d::CCMutableDictionary<std::string, SMVCObject*> PROXY_TYPE; 
    public:
        SMVCModel();
        ~SMVCModel();
        void registerProxy(SMVCProxy* proxy);
        
        PROXY_TYPE *mProxies;

    };
}


#endif
