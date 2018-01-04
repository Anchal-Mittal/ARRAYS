//======================Rearrange positive and negative numbers with constant extra space==================================
#include<iostream>
using namespace std;

//==========================================swap two numbers=============================================================
void swap(signed int &num1, signed int &num2){
    signed int temp=num1;
    num1=num2;
    num2=temp;
}

//===============================================rearrange the negative elements at initial===============================
void NegativefirstCome(signed int Array[10],int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(Array[i]<0){
            swap(Array[i],Array[j]);
            j++;
        }
    }
    
    for (int i=0;i<size;i++)
        cout << Array[i]<< " ";
}

//=========================================main function==================================================================
int main(){
    signed int size;
    int Array[10];
    cout << "ENTER THE SIZE OF TEH ARRAY " << endl;
    cin >>size;
    for (int i=0; i<size;i++)
        cin >> Array[i];
    NegativefirstCome(Array,size);
return 0;
}
