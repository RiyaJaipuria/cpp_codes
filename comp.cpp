#include<iostream>
#include<set>
#include<map>
template <typename type>
struct mycomp{
	bool operator()(const type & first,const type & second) const{
		return first < second;
	}
};


using namespace std;

int main()
{
	map<int,string,mycomp<int>> mymap;
	mymap[10]="abc",mymap[30]="xyz",mymap[20]="def";
	for(auto &elem:mymap)
	{
		cout<<elem.first<<"-"<<elem.second<<endl;
	}


	set <int,mycomp <int>> myset;
	myset.insert(40),myset.insert(10),myset.insert(50);
	for(auto &elem:myset)
	{
		cout<<elem<<"-"<<endl;
	}

	return 0;
}

