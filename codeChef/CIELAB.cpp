//
//  CIELAB.cpp
//  codeChef
//
//  Created by Abhishek Kumar on 5/15/17.
//  Copyright © 2017 Abhishek Kumar. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int A=0, B=0, Res=0;
    cin>> A>> B;
    Res = A-B;
    if (Res%10==9)
        Res-= 1;
    else Res+= 1;
    cout<< Res<< endl;
    return 0;
}
