#include<iostream>
using namespace std;
int main(){
	int array[10];
	int n,pos,min;
	cout << "ENTER THE SIZE OF THE ARRAY"<<endl;
	cin >> n;
	cout << "ENTER THE ELEMENT OF THE ARRAY"<< endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int k;
	cout << "ENTER THE LOCATION FROM WHICH ELEMENT IS FIXED"<< endl;
    cin >> k;
    int temp;
	

	  for(int i=0;i<n;i++){
          if(i==k)
          continue;
		  min=i;

		   for(int j=i+1;j<n;j++){
               if(j==k)
                  continue;
			   if(array[min]>array[j])

				  min=j;

		    }

            temp=array[i];      

		    array[i]=array[min];

            array[min]=temp;          

	  }
cout << "THE RESULT OF THIS IS "<< endl;
for(int i=0;i<n;i++){
	cout<< array[i] << " ";
}
return 0;
}
