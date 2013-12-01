//
//  Object.h
//  D01L11OOC
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013 plter. All rights reserved.
//

#ifndef D01L11OOC_Object_h
#define D01L11OOC_Object_h

#define OBJECT_CONTENT \
    int _retainCount;\
    void (*onDestory)(void*);


typedef struct{
    OBJECT_CONTENT
} Object;

void ObjectInit(Object *obj);
void ObjectRetain(Object *obj);
void ObjectRelease(Object *obj);
int ObjectRetainCount(Object *obj);
void ObjectOnDestory(void* obj);

#define ObjectAlloc(TYPE) malloc(sizeof(TYPE))


#endif
