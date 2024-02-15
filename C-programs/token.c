#include<stdio.h>
#include<string.h>
void str_demo()
{
	char data[1000]="Rahul:Dravid:Banglore:90909090:Sachin:Tendulkar:Mumbai:9988988:Sourav:Ganguly:kolkata:987986:Anil:kumble:Mysore:9887686:VVS:Laxman:Hyderabad:888686";
	char *token;
	token=strtok(data,":");
	while(token!=NULL)
	{
		printf("token = %s\n",token);
		token=strtok(NULL,":");
	}
}
int main()
{
	str_demo();
}

