//
//  main.c
//  D01L09GetNum
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[])
{
//    for (int i=0; i<100; i++) {
//        printf("rand num : %d\n",rand());
//    }
    
    printf("请输入0到100之间的数字\n");
    
    srand((unsigned int)time(NULL));
    int num = rand()%100;
    
    int inputNum;
    
    while (1) {
        scanf("%d",&inputNum);
        if (inputNum>num) {
            printf("你输入的数字大了\n");
        }else if (inputNum<num){
            printf("你输入的数字小了\n");
        }else{
            printf("正好\n");
            break;
        }
    }
    
    return 0;
}

