//
//  EASYPROB.cpp
//  codeChef
//
//  Created by Abhishek Kumar on 5/12/17.
//  Copyright © 2017 Abhishek Kumar. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int input[] = {137, 1315, 73, 136, 255, 1384, 16385};
    for ( int i=0; i<7; i++ ){
        string answer = "0";
        int temp = input[i];
        while (temp!=0){
            string strTmp = "";
            if (temp%2==0){
                strTmp += to_string(2);
                strTmp += "(";
                strTmp += answer;
                strTmp += ")";
                answer = strTmp;
            }
            else{
                strTmp += "2+";
                strTmp += to_string(2);
                strTmp += "(";
                strTmp += answer;
                strTmp += ")";
                answer = strTmp;
            }
            temp = temp/2;
        }
        string preRes = to_string(input[i]);
        preRes += "=";
        preRes += answer;
        cout<< preRes<<endl;
    }
    return 0;
}
