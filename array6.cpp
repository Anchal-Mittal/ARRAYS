#include<iostream>
using namespace std;
int oddElementcount(int array[10],int size){
	int res=0;
  for(int i=0;i<=size;i++)
		 res=res^array[i];
	return res;
	}
int main(){
	int size;
	int array[10];
	cout << "ENTER THE SIZE OF THE ARRAY  "<< endl;
	cin  >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for(int i=0;i<size;i++)
	cin >>array[i];
	int res= oddElementcount(array,size-1);
	cout << res;
return 0;
}
