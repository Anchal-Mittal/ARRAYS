//=======================================union using the concept of merge sort=========================================

#include<iostream>
#include<algorithm>
using namespace std;

//=======================================find the union of two arrays==================================================

void Union(int array1[10],int array2[10],int size1,int size2){
      sort(array1,array1+size1);
      sort(array2,array2+size2);
      int k=0;
      int i=0;int j=0;
      int resultArray[size1+size2];
      while((i<size1)&&(j<size2)){
          if(array1[i]<array2[j])
              resultArray[k++]=array1[i++];
         
          else if(array1[i]>array2[j])
              resultArray[k++]=array2[j++];
          else {
              resultArray[k++]=array1[i++];
              j++;
           }
      }

      while(i<size1)
           resultArray[k++]=array1[i++];
      
      while(j<size2)
           resultArray[k++]=array2[j++];
          
      cout << "THE UNION OF THE ARRAYS ";
      for(int inc=0;inc<k;inc++)
           cout <<resultArray[inc] << " ";             

}

//=================================================main================================================================

int main(){
    int size1, size2,array1[10],array2[10];
    cout << "ENTER THE SIZE OF FIRST ARRAY " << endl;
    cin >>size1;
    cout << "ENTER THE ELEMENTS OF THE ARRAY 1"<<endl;
    for(int i=0;i<size1;i++)
        cin >> array1[i];
    cout << "ENTER THE SIZE OF THE SECOND ARRAY "<< endl;
    cin >> size2;
    cout << "ENTER THE ELEMENTS OF THE ARRAY 2 "<< endl;
    for(int i=0;i<size2;i++)
       cin >>array2[i];    
    Union(array1,array2,size1,size2);   
}
