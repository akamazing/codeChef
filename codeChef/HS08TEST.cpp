//
//  HS08TEST.cpp
//  codeChef
//
//  Created by Abhishek Kumar on 5/15/17.
//  Copyright © 2017 Abhishek Kumar. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int X = 0;
    float Y = 0.00;
    cin>> X>> Y;
    if ( X%5 !=0 )
        cout<< fixed<< setprecision(2)<< Y<< endl;
    else if ( X+0.5>Y )
        cout<< fixed<< setprecision(2)<< Y<< endl;
    else{
        Y = Y - (X + 0.5);
        cout<< fixed<< setprecision(2)<< Y<< endl;
    }
    return 0;
}
