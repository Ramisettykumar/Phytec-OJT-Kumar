#include<stdio.h>
int e(x,n)
{
	static p=1,f=1;
	int r;
	if(n==0)
		return 1;
	else
	{
		r=e(x,n-1);
		p=p*x;
		f=f*n;
	}
	return r+p/f;
}

