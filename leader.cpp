#include<iostream>
using namespace std;
int main(){
	int size; 
	int array[10];
    int max=0;
    int temp=0;
	int sol[10];
	int k=0;
	cout << "ENTER THE SIZE OF THE ARRAY "<<  endl;
	cin >> size;
	cout << "ENTER THE ELEMENT THE ELEMENTS OF THE ARRAY " << endl;
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	for(int j =size-1;j>=0;j--){

		max=array[j];
		if(max>temp){
        temp=max;
		sol[k++]=max;
		
		}
	}
cout << "THE SUBARRAY IS " << endl;
for (int j=k;j>0;j--){
	cout << sol[j]<< " ";
}	
return 0;	
}
