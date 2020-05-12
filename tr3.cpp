#include<iostream>
using namespace std;
#include<stack>
void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
int main()
{
	stack <int> s1,s2;
	int n;
	cin>>n;
	while(n!=0)
	{
		int q=n%2;
		s1.push(q);
		n=n/2;
	}
	showstack(s1);
return 0;
}
