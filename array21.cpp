//================================closet numbers from a list of unsorted integers=======================================

#include<bits/stdc++.h>
using namespace std;

//=========================================find  piviot element=========================================================

int partition(int array[10],int low,int sizee){
int i=low-1;
int pivot=array[sizee];
    for(int j=low;j<sizee;j++){
        if(array[j]<=pivot){
            i++;
            swap(array[j],array[i]);
        }
    }
 swap(array[i+1],array[sizee]);
return (i+1);
}


//============================================sort the  element========================================================

void quickSort(int array[10],int low , int sizee){
    if(low<sizee){
       int p=partition(array,low,sizee);
       quickSort(array,low,p-1);
       quickSort(array,p+1,sizee);
 }
}

//========================================find the closest pair=======================================================

void findClosestPair(int array[10],int size){
    quickSort(array,0,size);
    int mindif=array[1]-array[0];
    for(int i=2;i<size;i++){
        mindif=array[i]-array[i-1];
    }for(int i=2;i<size;i++){
        mindif=min(mindif,array[i]-array[i-1]);
    }
    for(int i=1;i<size;i++){
        if(mindif==(array[i]-array[i-1]))
          cout << array[i]<< " "<< array[i-1]<< "\n";
    }
 
}

//=====================================================main function ==================================================

int main() {
    int size, array[10];
    cout << "ENETR THE SIZE OF THE ARRAY "<< endl;
    cin >> size;
    cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
    for(int i=0;i<size;i++)
        cin >>array[i];
    findClosestPair(array,size);    
    
}
