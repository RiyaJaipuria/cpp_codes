#include<iostream>
#include<map>

using namespace std;

int main()
{
	//pair<int, int> p = make_pair(10,20);
	//cout<<p.first<<"-"<<p.second<<endl;
	map<int, int> mp;

	mp[2]=20;
	mp[3]=13;

	mp.insert(make_pair(10,100));
	mp[7]=700;



	//iterate
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<"----"<<it->second<<endl;

	}
	return 0;

}

