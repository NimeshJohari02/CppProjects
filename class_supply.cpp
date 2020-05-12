#include<iostream>
#include<string.h>
using namespace std;
class supply
{
int code;
char fname[40],sticker[10],ftype[50];
void gettype(char sticker[],char ftype[])
{
	if(strcmp(sticker,"GREEN")==0)
	{
		strcpy(ftype,"Vegetarian");
	}
	else if(strcmp(sticker,"YELLOW")==0)
	{
		strcpy(ftype,"Contains Egg");
	}
	else if(strcmp(sticker,"RED")==0)
	{
		strcpy(ftype,"Non-Vegetarian");
	}
}
public:
	void foodin()
	{
		cin>>code;
		cin>>fname;
		cin>>sticker;
		gettype(sticker,ftype);
	}
	void fout()
	{
		cout<<endl<<code<<endl<<fname<<sticker<<endl<<ftype<<endl;
	}
	
};
int main()
{ 
	supply s1;
	s1.foodin();
	s1.fout();
	return 0;
}
