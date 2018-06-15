#include<iostream>
using namespace std;
int main(){

	int array[10];
	int size;
	int num_sum;
	int sum=0;
	int i,j=0;
	cout << "ENTER THE SIZE OF THE ARRAY " << endl;
	cin >> size;
	cout << "ENTER THE ELEMENT OF THE ARRAY  "<< endl;
	for(int i=0;i<size;i++){
		cin >>array[i]	;
	}
	cout << "ENTER THE SUM NUMBER  "<<endl;
	cin >> num_sum;
	for(i=0;i<size;i++){
		sum=sum+array[i];
		
		if(sum >num_sum){
			sum=sum-array[j];
			j++;
		}
		if(sum==num_sum){
			break;
		}
		
}        
		if(sum==num_sum){
		cout << "THE SUBARRAY IS "<< endl;
		for(int k=j;k<=i;k++){
			cout << array[k]<< " ";
		}
	}
return 0;
	}
	
