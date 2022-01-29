#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<malloc.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n)
 {
	
    int i,j,k;
    float a[n],b[n];
    float temp; 
    triangle tr1[n];
    float p;
    
    for(i=0;i<n;i++)
    {
        p = (tr[i].a + tr[i].b + tr[i].c)/2;
        a[i]=p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c);
    }
    
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
        if(a[k] > a[k+1])
        {
            temp = a[k];
            a[k] = a[k+1];
            a[k+1] = temp;
        }
        }
    }
    
    for(i=0;i<n;i++)
    {
        tr1[i] = tr[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i] == a[j])
            {
                tr[j] = tr1[i];
                break;
            }
        }
    }
    
    
}
int main()
{
	int n,i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for ( i = 0; i < n; i++) 
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for ( i = 0; i < n; i++)
	 {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
