#include<stdio.h>
int main()
{
	int start_reading,end_reading,total_kms;
	float reiumbresment;
	printf("Enter the start_reading and end_reading: ");
	scanf("%d%d",&start_reading,&end_reading);
	total_kms=end_reading-start_reading;
	reiumbresment=total_kms*20;
	printf("Total reiumbresment is %f",reiumbresment);
	return 0;
}

