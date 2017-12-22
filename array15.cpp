#include<iostream>
#include<algorithm>
using namespace std;
void majorityElement(int array[10],int size){
	int count=0;
	int result=0;
	int var=NULL;
	for(int i=0;i<size;i++){
		count=0;
		for(int j=0;j<size;j++){
        		if(array[i]==array[j])
		            count++;
		        }
            if(result<count)
            var=array[i];
		    result=max(result,count);

	}
	if((result>=size/2)&&(var!=NULL))
	cout << "ELEMENT " <<var<<" EXIST THAT IS IN MAJORITY"<< endl;
	else
	cout <<":NONE"<< endl;
	
}

int main(){
	int size;
	int array[10];
	cout <<"ENTER THE SIZE OF THE ARRAY "<< endl;
	cin >> size;
	cout << "ENTER THE ELEMENTS OF THE ARRAY "<< endl;
	for (int i=0;i<size;i++)
		cin >>array[i];
	majorityElement(array,size);
return 0;
}
