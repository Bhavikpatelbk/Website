#include<stdio.h>
int main()
{
	int sub,sid,no,i,total,choice;
	float per;
	
	printf("\n-------------ITC---------------------\n");
	
	jump:
		printf("Enter Id: ");
		scanf("%d",&sid);
		
		printf("Enter Subjects: ");
		scanf("%d",&no);
		
		Char sub[20][10];
		int marks[10];
		
		//read subject name
	
	for(i=0;i<no;i++)
	{
		printf("Enter Subject %d Name: ");
		scanf("%s",&sub[i]);
	}
	printf("\n----------------------------------\n");
	for(i=0;i<no;i++)
	{
		printf("Marks %d: ",i+1);
		scanf("%d",&marks[i])               //100
	}
	printf("\n----------------------------------\n");
	for(i=0;i<no;i++)
	{
		total=total+marks[i];
	}
	per=total/no;
	
	//Grade
	
	printf("student id:%d-percentage:%2f",sid,per);
	
	//store
	
	printf("\n Do you want to another? 1 for Yes or 2 for No: ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		go to jump;
	}
	
	return 0;
}
