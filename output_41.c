#include<stdio.h>
struct student
{
	char *name;
};
void main()
{
	struct student s,m;
	s.name="st";
	m=s;
	printf("%s%s",s.name,m.name);
}
