#include<iostream>
#include<algorithm>
using namespace std;
void findPair(int array[10],int size,int element){
	int flag=0;
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
        		if(array[i]+array[j]==element){
					cout << "ELEMENT "<< array[i] <<" & "<< array[j]<< "GIVE SUM WHICH IS EQUAL TO GIVEN ELEMENT"<<endl;
					flag =1;
		        }
			}
	}
	if(flag==0)
	cout << "NO SUCH PAIR EXIST "<< endl;
}

int main(){
	int size;
	int array[10];
	int element;
	cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for (int i=0;i<size;i++)
		cin >>array[i];
	cout << "ENTER THE ELEMENT"<<endl;
	cin >> element;
    findPair(array,size,element);
return 0;
}
