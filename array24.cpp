#include<iostream>
using namespace std;

//===========================================sorted subsequence of size 3 ================================================================

void sortedSubsequenceOfsizeThree(int array[10], int size){
   for(int i=0;i<size;i++){
         int tempArray[3];
         int count =1;
         int temp=array[i];
      tempArray[0]=temp;
      for(int j=0;j<size;j++){
          if(count==3)
               break;
             if(temp<array[j]){
                temp=array[j];
                tempArray[count]=array[j];
                ++count;
            }
        }
    if(count==3){
    cout << "The output subsequenes are " ;
    for(int i=0;i<3;i++)
        cout << tempArray[i]<< " ";
        a}
    cout << endl;
    }
}

//============================================================main======================================================================

int  main(){
    int size, array[10];
    cout << "ENTER THE SIZE OF THE ARRAY "<<endl;
    cin >> size;
    cout << "ENTER THE ELEMENTS OF THE ARRAY" <<endl;
    for(int i=0;i<size;i++)
      cin >> array[i];
     sortedSubsequenceOfsizeThree(array,size);
    return 0;
}
