#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v;

	v.push_back(100);
	v.push_back(20);
	v.push_back(300);
	

	sort(v.begin(),v.end());
	//iterators are similar to pointers
	auto itr  = v.begin();
	for(;itr!=v.end();itr++)
	{
	
		cout<<"value: "<<*itr<<endl;
	}


	cout<<"size: "<<v.size()<<endl;
	v.clear();
	cout<<"size: "<<v.size()<<endl;

	return 0;
}


