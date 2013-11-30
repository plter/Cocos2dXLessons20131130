//
//  main.c
//  D01L09Assert
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>
#include <assert.h>


int add(int a,int b){
    
    assert(a<100);
    assert(b<100);
    
    return a+b;
}


int main(int argc, const char * argv[])
{

    // insert code here...
    printf("%d\n",add(20, 3));
    return 0;
}

