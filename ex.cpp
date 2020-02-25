#include<iostream>
#include<forward_list>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	//map - transform
	vector<int> v {1,2,3,4,5,6,7};
	vector<int> vout(v.size());
	transform(v.begin(),v.end(),vout.begin(),[](int & value) { return value * 3;});
	//for(auto & val:vout)
		//cout<<val<<endl;
	
	//filter
	vector <int> :: iterator endfilter =  remove_if(vout.begin(),vout.end(),[](int & value){
			if(value%2==0)
				return true;
			return false;

			});
	for(auto itr = vout.begin();itr!=endfilter;itr++)
		cout<<*itr<<endl;


	
	return 0;
}

