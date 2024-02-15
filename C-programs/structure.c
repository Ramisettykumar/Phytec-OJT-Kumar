#include<stdio.h>
#include<string.h>
struct book
{
	int Book_id;
	char Book_Name[10];
	char Author_Name[10];
	char Subject[10];
};
int main()
{
	 struct book a[10];
	 printf("Enter 10 book details\n");
	 for(int i=0;i<10;i++)
	 {
		 printf("enter book %d id: ",i+1);
		 scanf("%d",&a[i].Book_id);
		 printf("enter book %d name: ",i+1);
		 scanf("%s",a[i].Book_Name);
		 printf("enter book %d author name: ",i+1);
		 scanf("%s",a[i].Author_Name);
		 printf("enter book %d Subject: ",i+1);
		 scanf("%s",a[i].Subject);
}
	for(int i=0;i<10;i++)
	 {
	 	
		 printf("book %d id:%d\n",i+1,a[i].Book_id);
		 printf("book %d name:%s\n",i+1,a[i].Book_Name);
		 printf("book %d author name:%s\n",i+1,a[i].Author_Name);
		 printf("book %d Subject:%s\n",i+1,a[i].Subject);
	 
	 }

	

}
	
	 
	 

