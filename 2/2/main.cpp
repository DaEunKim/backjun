//
//  number.cpp
//  Summer
//
//  Created by 김다은 on 2016. 7. 5..
//  Copyright © 2016년 김다은. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


int main(void){
    int N;
    int count=0;
    cin >> N;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        if(N==a){
            count++;
        }

    }
    cout<< count<<endl;
    
}