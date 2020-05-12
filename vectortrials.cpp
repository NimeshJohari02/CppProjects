#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v1;
	v1.push_back(12);	
	v1.push_back(13);
	v1.push_back(14);
	v1.push_back(15);
	v1.push_back(16);
	
	int a=v1.back();
	v1.pop_back();
	cout<<a;
	
	
}
