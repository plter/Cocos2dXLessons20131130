//
//  main.c
//  D01L01HelloC
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    for (int i=0; i<argc; i++) {
        printf("%s\n",argv[i]);
    }
    
    printf("Hello, World!\n");
    return 0;
}

