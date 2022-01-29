#include<stdio.h>
#define sqr(x) x*x
void main()
{
	printf("\n%d",sqr(9));
	printf("\n%d",sqr(5+4));
	printf("\n%d",sqr((5+4)));
}/*In first case square of 9 is 81
In second case  square of 5=25 +4 becomes 29 because in macro definition 
+ operator has a lower priority.
However, the third case is equivalent to the first case and will give the result
81*/

