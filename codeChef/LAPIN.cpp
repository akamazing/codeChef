//
//  LAPIN.cpp
//  codeChef
//
//  Created by Abhishek Kumar on 5/13/17.
//  Copyright © 2017 Abhishek Kumar. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int T;
    int *dictionary = new int[26];
    
    cin>> T;
    string S;
    
    for (int i=0; i<T; i++){
        S = "";
        cin>> S;
        int flag = 0;
        int len = (int)S.length();
        int size = 0;
        for (int i=0; i<26; i++){
            dictionary[i] = 0;
        }
        for (size=0; size<(len/2); size++){
            dictionary[S[size]-'a'] += 1;
        }
        if (len%2==1){
            size += 1;
        }
        for (; size<len; size++){
            dictionary[S[size]-'a'] -= 1;
        }
        for ( size=0; size<26; size++){
            if (dictionary[size] != 0){
                
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
