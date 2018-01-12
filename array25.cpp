
#include<iostream>
using namespace std;

int maxSubArraySum(int a[], int size){
    int prev= 0;
    int update=0;
    for(int i=0;i<size;i++){
        update=update+a[i];
        if(update <0)
        update=0;
        else if (prev < update)
            prev =update;
    }
return prev;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int array[10];
	int size;
	cout << "ENTER THE SIZE OF THE ARRAY"<< endl;
	cin >> size;
	for (int i=0;i<size;i++){
	   cin >> array[i];
	}
	
	int max_sum = maxSubArraySum(array, size);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
