#include<iostream>
using namespace std;
int main(){
    int array[10];
	int size;
	int tot_sum=0;
	int sum=0;
	cout << "ENTER THE SIZE OF THE ARRAY " << endl;
	cin >> size;
	cout << "ENTER THE ELEMENT OF THE ARRAY  IN THE RANGE WITHOUT REPITION "<< endl;
	for(int i=0;i<size-1;i++){
		cin >>array[i]	;
	}
	for(int i=0;i<size-1;i++){
		sum=sum+array[i];
	}
	for(int i=1;i<=size;i++) {
      tot_sum=tot_sum+i;
   }
   cout << "THE MISSING NUMBER IS "<< (tot_sum-sum)<< endl ;
 return 0;  
}
