//
//  main.cpp
//  4
//
//  Created by 김다은 on 2016. 7. 6..
//  Copyright © 2016년 김다은. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(void){
    int n;
    cin >>n;
    
    int a=1;
    int b=0;
    int result=0;
    for(int i=0;i<n;i++){
        result=a+b;
        a=b;
        b = result;
        
        
    }
    cout<< result <<endl;
}