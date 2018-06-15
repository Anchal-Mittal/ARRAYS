#include<iostream>
using namespace std ;
int main(){
	int array[10];
	int size;
	cout << "ENTER THE SIZE OF THE ARRAY " << endl;
	cin >> size;
	cout << "ENTER THE ELEMENT OF THE ARRAY  "<< endl;
	for(int i=0;i<size;i++){
		cin >>array[i]	;
	}
	int max_far=0;
	int max_sum=0;
	for (int i=0;i<size;i++){
		max_far=max_far +array[i];
		if(max_far<0)
		   max_far=0;
		if(max_far>max_sum)
			max_sum=max_far;
	}
cout <<"LARGEST SUM OF CONTINOUS SUBARRAY IS "<< max_sum << endl;
return 0;
}
