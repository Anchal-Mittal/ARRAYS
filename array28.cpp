#include <iostream>
#include<algorithm>
using namespace std;

void contingous(int array[10],int size){
    int flag;
    sort(array,array+size);
    for(int i=array[i];i<=array[size-1];i++){
        if((array[i]==array[i+1]+1)||(array[i]==array[i+1]))
                flag=1;
        else 
          flag=0;
    }
  if(flag==1)
  cout << "CONITINGOUS SUBSEQUENCE EXIST" << endl;
  else
    cout << "CONITINGOUS NOT SUBSEQUENCE EXIST" << endl;
  
  
}
int main() {
	int size;
	int array[10];
	cout << "ENTER THE SIZE OF THE ARRAY"<< endl;
	cin >> size;
	cout <<"ENTER THE ELEMENT OF THE ARRAY" << endl;
	for (int i=0;i<size;i++)
	cin >> array[i];
	contingous(array,size);
	return 0;
}
