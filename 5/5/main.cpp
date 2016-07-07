//
//  main.cpp
//  5
//
//  Created by 김다은 on 2016. 7. 7..
//  Copyright © 2016년 김다은. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    int A;
    int B;
    int C;
    cin >> A >> B >> C;
    if((C>A and A>B and C>B) or (B>A and A>C and B>C) or (A==B and A>C) or (A==B and A<C)){
        cout<< A << endl;
    }
    if((A>B and B>C and A>C) or(C>B and B>A and C>A) or (B==C and B>A) or (B==C and B<A)){
        cout << B << endl;
    }
    if((A>C and C>B and A>B) or (B>C and C>A and B>A) or (A==C)){
        cout << C << endl;
    }
    if(A==B==C)
    {
        cout<<A<<endl;
    }
}
