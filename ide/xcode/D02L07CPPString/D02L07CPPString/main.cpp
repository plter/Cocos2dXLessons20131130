//
//  main.cpp
//  D02L07CPPString
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(int argc, const char * argv[])
{
    string str = "Hello eoe";
//    if(str.compare("Hello eoe")==0){
//        printf("Same\n");
//    }else{
//        printf("Different\n");
//    }
//    
//    printf("%s\n",str.c_str());
    
//    printf("%c\n",str[0]);
    
//    str+=" world";
//    printf("%s\n",str.c_str());
    
    stringstream ss;
    ss<<"Hello"<<" world "<<20;
    
    printf("%s\n",ss.str().c_str());
    
    
    
    return 0;
}

