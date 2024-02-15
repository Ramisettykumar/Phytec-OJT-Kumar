#include<stdio.h>
#include<unistd.h>
void loop_demo()
{
	int n=1;
	while(n<51)
	{
		printf("In while loop\n");
		printf("Numbers=%d\n",n);
		if(n == 45)
		break;
		n++;
		usleep(100000);
	}
}
int main()
{
	loop_demo();
}

