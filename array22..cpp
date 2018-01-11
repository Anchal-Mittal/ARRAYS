#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//=========================================FINDING THE MAXIMUM SUM OF THE DE=IFFERENCE OF THE SUBSEQUENCE =================================

void maximumSubsequece(int array[10], int size){
sort(array,(array+size));
cout << "AFTER SORTING "<<endl;
for(int i=0;i<size;i++)
    cout <<  array[i] << " ";
    cout << endl;
    int sum=0;
    int i;
    for(i=0;i<size/2;i++){
        sum+=abs(array[i]-array[size-1-i]);
        sum+=abs(array[size-1-i]-array[i+1]);
    }
    sum +=abs(array[0]- array[i]);
    cout <<"THE MAXIMUM SUM IS" << sum;
}

//=================================================MAIN ==================================================================================

int main(){
int size , array[10];
cout <<"ËNTER THE SIZE OF THE ARRAY "<<endl;
cin >> size;
cout << "ENTER THE ELEMENT OF THE ARRAY "<< endl;
for(int i=0;i< size ;i++)
cin >> array[i];
maximumSubsequece(array,size);
}
