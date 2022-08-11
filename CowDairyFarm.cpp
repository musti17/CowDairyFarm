#include<stdio.h>
#include<string.h>
#include<stdio.h>
struct date
{
	int d;
	int m;
	int y;
};
float milkYield1(int *ptr,int cows){
	float *j,tot1=0;
	scanf("%f",j);
	printf("Cow ID#:%d produced %.2f litres of milk on the first yield\n",*ptr,*j);
	tot1=tot1+*j;
	return tot1;
	}
float milkYield2(int *s,int cows ){
	float *q,tot2=0;
	scanf("%f",q);
	printf("Cow ID#:%d produced %.2f litres of milk on the second yield\n",*s,*q);
	tot2=tot2+*q;
	return tot2;
}
void adminview(){
    char pass[]="bhainscolony";char password[12];int check,in; FILE *fptr;
    float total1=0,total2=0,sum;float tot=0;
    int cow_id[100],i,cows,*p,choice;int access;
	float s_Milkyield1[100],s_Milkyield2[100];float vol1[100],*j;
	j=&vol1[0];
	printf("Enter password: \n");
	scanf("%s",&password);
	check=strcmp(password,pass);
	if(check==0)
	{
	printf("access granted\n");
			
			printf("\n\tMENU\nPress 1 to input milk yield and take percentage of a cow \n Press 2 to get total milk produced\nPress 3 to store the input for today in a file\nPress 4 to check which cows produced milk less than required\n");
	    	scanf("%d",&in);
	    	switch(in)
	    	{
	    		case 1:{
	    			system("COLOR 0A");
	    			int cow_id[100],i,cows,*p,cowss;struct date d2;
					float s_Milkyield1[100],s_Milkyield2[100];
					p=&cow_id[0];
					printf("Enter the number of cows in the farm:\n");
					scanf("%d",&cows);
					printf("Enter the ID for milk to be calculated:\n");
					scanf("%d",&cowss);
	 				printf("Catalog of Data for First Milk Yield of the day!\n");
	
	for(i=1;i<=cows;i++){
		printf("\nInput unique ID of the cow:\n");
		scanf("%d",p+i);
		printf("Enter first milk yield of the day for Cow ID#%d:\n",*(p+i));
		s_Milkyield1[i]=milkYield1(p+i,cows);
		if(cowss==*(p+i))
		{
			tot=tot+(s_Milkyield1[i]);
		}
		total1=total1+s_Milkyield1[i];
			} 
		
	
	printf("\nCompleted First Milk Yield of the Day,take a break and come back in the evening for the second yield!\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	getch();
	system("cls");
	printf("\nCatalog of Data for Second Milk Yield of the Day:\n");
	
	for(i=1;i<=cows;i++){
	printf("\nEnter second milk yield of the day for Cow ID#%d:\n",*(p+i));
	s_Milkyield2[i]=milkYield2(p+i,cows);
	if(cowss==*(p+i))
		{
			tot=tot+(s_Milkyield2[i]);
		}
	total2=total2+s_Milkyield2[i];}
	printf("%f is the percentage produced by cow#%d ",tot*100/(total1+total2),cowss);
	fptr=fopen("percentage.txt","a+");
if(fptr == NULL)
{
printf("Error!"); 
}
	printf("enter the date in format DD/MM/YY\n");
        scanf("%d%d%d",&d2.d,&d2.m,&d2.y);
        fprintf(fptr,"Date %d/%d/%d\n",d2.d,d2.m,d2.y);
fprintf(fptr," Total %% by cow %d is is %f \n ",cowss,tot*100/(total1+total2));
fclose(fptr);
	break;}	
		case 2:{
			system("COLOR 6C");
			int cow_id[100],i,cows,*p;struct date d1;FILE *fptr;
			fptr=fopen("total.txt","a+");
			if(fptr== NULL){printf("Error!Check if file exists"); }	
			
					float s_Milkyield1[100],s_Milkyield2[100];
					p=&cow_id[0];
					printf("Enter the number of cows in the farm:\n");
					scanf("%d",&cows);
	 				printf("Catalog of Data for First Milk Yield of the day!\n");
	 				printf("enter the date in format DD/MM/YY\n");
        scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
        fprintf(fptr,"Date %d/%d/%d\n",d1.d,d1.m,d1.y);
        
	
	for(i=1;i<=cows;i++){
		printf("\nInput unique ID of the cow:\n");
		scanf("%d",p+i);
		printf("Enter first milk yield of the day for Cow ID#%d:\n",*(p+i));
		s_Milkyield1[i]=milkYield1(p+i,cows);
		total1=total1+s_Milkyield1[i];	} 
	  printf("%f is the total of milk yield of the morning\n",total1);
	
	printf("\nCompleted First Milk Yield of the Day,take a break and come back in the evening for the second yield!\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	
	
	printf("\nCatalog of Data for Second Milk Yield of the Day:\n");
	
	for(i=1;i<=cows;i++){
	printf("\nEnter second milk yield of the day for Cow ID#%d:\n",*(p+i));
	s_Milkyield2[i]=milkYield2(p+i,cows);
	total2=total2+s_Milkyield2[i];}
	printf("%f is the total of milk yield of the evening\n",total2);
	fprintf(fptr,"total of milk yield of the day is %.2f\n",total1+total2);
	fclose(fptr);

	
	break;}break;	
		case 3:
			system("COLOR 2D");
		{struct date d;int num,cows,limit,date;float yield1,yield2;FILE *fptr;fptr = fopen("cow.txt","a+");
        if(fptr == NULL){printf("Error!"); }
        printf("enter the number of cows ");
        scanf("%d",&cows);
        printf("enter the date in format DD/MM/YY\n");
        scanf("%d%d%d",&d.d,&d.m,&d.y);
        fprintf(fptr,"Date %d/%d/%d\n",d.d,d.m,d.y);
        for(i=0;i<cows;i++)
        {
        printf("Enter the Cow ID for cow : %d\n",i+1);
        scanf("%d",&num);
        fprintf(fptr,"COW ID : %d\n",num);
        printf("Enter the milk yield for cow : %d\n",i+1);
        scanf("%f",&yield1);
        fprintf(fptr,"Yield 1 : %.2f \n",yield1 );
        printf("Enter the yield 2 for cow : %d\n",i+1);
        scanf("%f",&yield2);
        fprintf(fptr,"Yield 2: %.2f\n",yield2);
		
		} fclose(fptr);};break;
        case 4:
        	{   float min;float milk;int cow_id[100],i,cows,*p,cowss;FILE *fptr2;
					float s_Milkyield1[100],s_Milkyield2[100];struct date d;char save;
					p=&cow_id[0];
					system("COLOR 8E");
				printf("Enter minimum accepted yield for today\n");
				scanf("%f",&min);
				printf("Enter the number of cows in the farm:\n");
				scanf("%d",&cows);
	 			printf("Catalog of Data for First Milk Yield of the day!\n");
	
	for(i=1;i<=cows;i++){
		printf("\nInput unique ID of the cow:\n");
		scanf("%d",p+i);
		printf("Enter first milk yield of the day for Cow ID#%d:\n",*(p+i));
		s_Milkyield1[i]=milkYield1(p+i,cows);
		}
	printf("\nCompleted First Milk Yield of the Day,take a break and come back in the evening for the second yield!\n");
	printf("--------------------------------------------------------------------------------------------------------\n");
	
	
	printf("\nCatalog of Data for Second Milk Yield of the Day:\n");
	
	for(i=1;i<=cows;i++){
	printf("\nEnter second milk yield of the day for Cow ID#%d:\n",*(p+i));
	s_Milkyield2[i]=milkYield2(p+i,cows);
	}
	printf("enter the date in format DD/MM/YY\n");
        scanf("%d%d%d",&d.d,&d.m,&d.y);
        fptr2=fopen("limit.txt","a");
        if(fptr2 == NULL){printf("Error!Check if file exists"); }
        fprintf(fptr2,"Date %d/%d/%d\n",d.d,d.m,d.y); 
	for(i=1;i<=cows;i++)
	{
		milk=s_Milkyield1[i]+s_Milkyield2[i];
		if(milk<min)
       {
	   fprintf(fptr2,"Yield less than %f produced by Cow#%d of %f litres.\n",min,*(p+i),milk);
        printf("Yield less than %f produced by Cow#%d of %f litres\n",min,*(p+i),milk);
	}
	} 
	fclose(fptr2);
			 break; 
			
	}
		 

}

}
	else 
	{   system("COLOR 4C");
		printf("wrong password\n");
	
	}
}
struct time 
{
	int hours;
	int min;
};
void employeeview(void)
{   int ID;int num,time;FILE *fptr;struct time t1;
fptr = fopen("employee.txt","a+");
if(fptr == NULL)
{
printf("Error!"); 
}
printf("Enter your ID please: \n");
scanf("%d",&num);
fprintf(fptr," The ID of Employee is %d\n",num);
printf("Now enter your entrance time hours and then minutes\n");
scanf("%d %d",&t1.hours,&t1.min);
fprintf(fptr," who entered at time %d hours and %d minutes\n",t1.hours,t1.min);
fclose(fptr);
}
int main(){
int choice,ch;
do{
printf("Hello! Enter 1 for Admin View And 2 For Employee view.\n");
scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			adminview();break;
		case 2:
			employeeview();	break;
	}
	printf("still want to use code? 2 to exit else any integer\n");
	scanf("%d",&ch);
}while(ch!=2);
}
