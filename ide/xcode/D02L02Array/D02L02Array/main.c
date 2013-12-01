//
//  main.c
//  D02L02Array
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include <stdio.h>
#include "Array.h"
#include <stdlib.h>



int main(int argc, const char * argv[])
{

    Array *arr = ObjectAlloc(Array);
    ArrayInit(arr);
    
//    ArrayAdd(arr, "Hello");
//    ArrayAdd(arr, "eoe");
    
    for (int j=0; j<200; j++) {
        ArrayAdd(arr, "Hello");
    }
    
    
    for (int i=0; i<ArrayLength(arr); i++) {
        printf("%s\n",ArrayGet(arr, i));
    }
    
    ObjectRelease((Object*)arr);
    
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

