
#include<iostream>
using namespace std;

iint sum(int array[10],int size){
	   if(size>-1)
	   return(sumrray,size-1)+array[size]);
	   else
	   return 0;
}
int main(){
	int array[10];
	int result; 
  int size; 
	cout << "ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENT OF THE ARRAY "<< endl;
	for (int i=0;i<size;i++)
	  cin >> array[i];
 result=sum(array,size-1);
 cout << "SUM OF THE ELEMENT IS "<< result;
return 0;
}
