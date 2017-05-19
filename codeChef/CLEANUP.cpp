//
//  CLEANUP.cpp
//  codeChef
//
//  Created by Abhishek Kumar on 5/16/17.
//  Copyright © 2017 Abhishek Kumar. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

bool jobCompleted(int n, int *Arr, int M){
    int flag = 0;
    for (int i=0; i<M; i++)
        if ( n==Arr[i] ){
            flag = 1;
            break;
        }
    return flag;
}
int main(){
    int T=0, M=0, N=0;
    cin>> T;
    for (int i=0; i<T; i++){
        cin>> N>> M;
        int *completedArr = new int[M];
        for (int j=0; j<M; j++){
            cin>> completedArr[j];
        }
        int flipTurn = 0; int nChef = 0; int nAssistant = 0;
        int *chefJob = new int[N-M];
        int *assistantJob = new int[N-M];
        for (int j=1; j<=N; j++){
            if( jobCompleted(j, completedArr, M) ){
                continue;
            }
            if (!flipTurn){
                chefJob[nChef++] = j;
                flipTurn = 1;
            }
            else{
                assistantJob[nAssistant++] = j;
                flipTurn = 0;
            }
        }
        for (int j=0; j<nChef; j++)
            cout<< chefJob[j]<< " ";
        cout<< endl;
        for (int j=0; j<nAssistant; j++)
            cout<< assistantJob[j]<< " ";
        cout<< endl;
        delete[] completedArr;
        delete[] chefJob;
        delete [] assistantJob;
    }
    return 0;
}
