//
//  Object.c
//  D01L11OOC
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>
#include "Object.h"
#include <stdlib.h>


void ObjectOnDestory(){
    printf("Delete Object\n");
}

void ObjectInit(Object *obj){
    obj->_retainCount = 1;
    obj->onDestory = &ObjectOnDestory;
}

void ObjectRetain(Object *obj){
    obj->_retainCount++;
}

int ObjectRetainCount(Object *obj){
    return obj->_retainCount;
}

void ObjectRelease(Object *obj){
    obj->_retainCount--;
    
    if (obj->_retainCount<=0) {
        obj->onDestory();
        free(obj);
    }
}