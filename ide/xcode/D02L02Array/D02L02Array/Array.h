//
//  Array.h
//  D02L02Array
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#ifndef D02L02Array_Array_h
#define D02L02Array_Array_h

#include "Object.h"

#define ARRAY_CONTENT \
    OBJECT_CONTENT\
    void ** _arr;\
    int _length;\
    int _cap;\
    int _index;

typedef struct{
    ARRAY_CONTENT
} Array;

void ArrayInit(Array *arr);
int ArrayLength(Array *arr);
void ArrayAdd(Array *arr,void* data);
void ArrayOnDestory(void *arr);
void* ArrayGet(Array *arr,int index);


#endif
