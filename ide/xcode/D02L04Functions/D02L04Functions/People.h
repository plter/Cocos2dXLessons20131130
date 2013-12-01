//
//  People.h
//  D02L04Functions
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#ifndef __D02L04Functions__People__
#define __D02L04Functions__People__

#include <iostream>

class People {
    
public://Object
    People(int age);
    
    inline void setAge(int age){
        _age = age;
    }
    
    inline int getAge(){
        return _age;
    }
    
    virtual void sayHello();
    virtual void eat()=0;
    virtual ~People();
    
//public:
//    virtual void sayHi();
    
private:
    int _age;
    
};


#endif /* defined(__D02L04Functions__People__) */
