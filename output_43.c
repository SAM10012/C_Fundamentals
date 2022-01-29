void main()
{
	int p=10;
	int *t=&p;
	int **y=&t;
	int q=**y;
	int m=**(&t);
	if(m==q)
	printf("hi");
	else printf("hello");
}
