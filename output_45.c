#include<stdio.h>
int main()
{
	int p,q;
	printf("Enter two numbers:\n");
	scanf("%d",&p);
	scanf("%d",&q);
	#if(4<2)
		printf("%d",p);
		#elif(2>-1)
			printf("%d",q);
			#else
			printf("bye");
			#endif
	
}
