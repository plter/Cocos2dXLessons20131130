//
//  Array.c
//  D02L02Array
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include <stdio.h>
#include "Array.h"
#include <stdlib.h>
#include <string.h>


void ArrayInit(Array *arr){
    ObjectInit((Object*)arr);
    
    arr->_length = 0;
    arr->_cap = 100;
    arr->_index = 0;
    arr->onDestory = &ArrayOnDestory;
    
    arr->_arr = malloc(sizeof(void*)*arr->_cap);
}


int ArrayLength(Array *arr){
    return arr->_length;
}

void ArrayAdd(Array *arr,void *data){
    arr->_arr[arr->_index] = data;
    arr->_index++;
    arr->_length++;
    
    if (arr->_index>=arr->_cap) {
        void ** tmp = arr->_arr;
        
        arr->_cap*=2;
        arr->_arr = malloc(sizeof(void*)*arr->_cap);
        
        for (int i=0; i<arr->_length; i++) {
            arr->_arr[i] = tmp[i];
        }
        free(tmp);
    }
}

void* ArrayGet(Array *arr,int index){
    return arr->_arr[index];
}


void ArrayOnDestory(void *arr){
    free(((Array*)arr)->_arr);
    
    ObjectOnDestory(arr);
}

