int main()
{
	int a[6]={1,2,3,4,5,6};
	int *pa;
	pa=a;
	printf("%d\n",*(a+5));
	printf("%d\n",a[5]);
	printf("%d\n",pa[5]);
	
}
