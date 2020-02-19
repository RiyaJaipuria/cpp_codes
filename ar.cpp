#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	int arr[]={10,2,39,16};
	int *begin=&arr[0];
	int *end=&arr[0]+(sizeof(arr)/sizeof(int));
	sort(begin,end);

	for(;begin!=end;begin++)
	{
		cout<<"value: "<<*begin<<endl;
	}
	return 0;
}

