//
//  main.c
//  D01L05Def
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>

#define M_PI 3.14

#define MAX(a,b) \
    a>b?a:b

#define HELLO() do{\
    char * str = "Hello eoe";\
    printf("%s\n",str);\
}while(0)


int main(int argc, const char * argv[])
{

    HELLO();
    
    
    
//    float a = M_PI;
    
    // insert code here...
//    printf("%d\n",MAX(2,3));
    return 0;
}

