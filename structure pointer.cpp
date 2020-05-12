//structure to a pointer
#include<stdio.h>
struct stud
{
	int roll;
	char  name[10];
};
int main()
{
	struct  stud s1;
	struct stud *ptr;
	ptr = &s1;
	scanf("%d",&ptr->roll);
	scanf("%s",ptr->name);
	printf("%d",(*ptr).roll);
	printf("%s",(*ptr).name);	
	return 0;
	
}
