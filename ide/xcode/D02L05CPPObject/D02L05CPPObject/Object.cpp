//
//  Object.cpp
//  D02L05CPPObject
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include "Object.h"


Object::Object(){
    _retainCount = 1;
}

Object::~Object(){
    printf("Delete Object\n");
}