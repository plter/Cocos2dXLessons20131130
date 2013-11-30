//
//  main.c
//  D01L03Method
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>


void hello(){
    printf("Hello eoe\n");
}


typedef void(*H)();


int main(int argc, const char * argv[])
{
    
    

    H h;
//    h = hello;
    h = &hello;
    
    h();
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

