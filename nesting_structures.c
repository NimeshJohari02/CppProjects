#include<stdio.h>
struct pd
{
	char name[50];
	int age;
};
struct ad
{
	int roll,marks;	
};
struct dbms
{
	struct pd ob1;
	struct ad ob2;
};
void main()
{
	struct dbms obf;
	printf("Enter The Name of The Student");
	scanf("%s",&obf.ob1.name);
	printf("Enter The age of The Student");
	scanf("%d",&obf.ob1.age);
	printf("Enter The ROll Number The Student");
	scanf("%d",&obf.ob2.roll);
	printf("Enter The MArks of The Student");
	scanf("%d",&obf.ob2.marks);
	printf("Entered The Name of The Student= %s \n",obf.ob1.name);
	printf("Entered The AGE of The Student= %d \n",obf.ob1.age);
	printf("Entered The ROLL NO of The Student= %d \n",obf.ob2.roll);
	printf("Entered The MARKS of The Student= %d \n",obf.ob2.marks);
}
