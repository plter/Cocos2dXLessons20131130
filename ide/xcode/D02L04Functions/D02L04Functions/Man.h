//
//  Man.h
//  D02L04Functions
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#ifndef __D02L04Functions__Man__
#define __D02L04Functions__Man__

#include <iostream>

#include "People.h"

class Man:public People{
    
public:
    Man(int age);
    virtual void sayHello();
    virtual void eat();
    virtual ~Man();
};

#endif /* defined(__D02L04Functions__Man__) */
