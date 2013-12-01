//
//  Object.h
//  D02L05CPPObject
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#ifndef __D02L05CPPObject__Object__
#define __D02L05CPPObject__Object__

#include <iostream>


class Object {
    
public:
    Object();
    inline void retain(){
        _retainCount++;
    };
    inline void release(){
        _retainCount--;
        if (_retainCount<=0) {
            delete this;
        }
    };
    inline int retainCount(){
        return _retainCount;
    };
    virtual ~Object();
    
private:
    int _retainCount;
};

typedef void (Object::*CallBack)();
#define Callback_Selector(m) (CallBack)(&m)

#endif /* defined(__D02L05CPPObject__Object__) */
