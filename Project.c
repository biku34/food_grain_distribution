#include<stdio.h>
#include<conio.h>
void portal_1();       					//Front Page
void con_dis();    						//Consumer or Distributor
void scheme();							//NFSA or AAY
void nfsa();							//nfsa
void aay();								//aay
void rules();							//how to use this portal
void customer_care();					//customer care 
void preg();							//pregnancy and maternal health
void ana();   		   				    //analysis of customers
void food();							//food grain availability
int age1[500],k,x1=0,ma=0,fem=0,kid=0,sen=0,o=0,st=0;
int r1[10000],w1[10000],d=0,c1[10000];
void main()
{
	portal_1();
}
void portal_1()
{
	printf("\n-----------------------------------------------------------------------------------------WELCOME TO FOOD DISTRIBUTION PORTAL-------------------------------------------------------------------------------------\n");
	 printf("----------------------------------------------------------------------------------(A Step Towards Digital Distribution of Food Grains)-----------------------------------------------------------------------------\n\n");	
	printf("What do you want to do : \n");
	printf("1. PDS Portal     2. Rules and Regulations Portal     3. Customer Care Portal");
	label2:
	printf("\n\nEnter the number : ");
	int ch;
	scanf("%d",&ch);
	if(ch==1)
	 con_dis();
	else if (ch==3)
	 customer_care();
	 else if(ch==2)
	 rules();
	 else
	 {
	 	printf("Wrong Input");
	 	goto label2;
	 }
}
void con_dis()
{
	int ch;
	printf("\n\nAre you a Consumer or Distributor ? Type 1 for Consumer and 2 for Distributor :  ");
	scanf("%d",&ch);
	printf("\n\n\n");
	if(ch==1)
	  scheme();
	else
	  distributor();
}
void scheme()
{
	int ch;
	printf("-----------------------------------------------------------------------------------------------WELCOME TO CONSUMER PORTAL------------------------------------------------------------------------------------------\n\n");
	printf("NFSA card holders will be getting 5 kg per person per month and AAY card holders will get 35 kg per family per month \n\n");
	printf("Are you covered under NFSA or AAY ? Type 1 for NFSA and 2 for AAY \n");
	scanf("%d",&ch);
	if(ch==1)
	  nfsa();
	else if(ch==2)
	  aay();
}
void nfsa()
{
	int fm,i,age,r,w,c,bill=0,sum=0,bill1=0,value,cg,value1;
	char name[50],gen[6],g[]="Female",g1[]="others";
	printf("Enter your total number of family members : ");
	scanf("%d",&fm);
	for(i=1;i<=fm;i++)
	{
		printf("Enter your name : ");
		scanf("%s",&name);
		printf("Gender : ");
		scanf("%s",&gen);
		value=strcmp(gen,g);
		value1=strcmp(gen,g1);
		if(value==0)
		{
			++fem;
			printf("For pregnancy and maternal health , we have a special package you want it ? Press 1 for Yes and 2 for No : ");
			scanf("%d",&cg);
			if(cg==1)
			{
				++x1;
			}
		}
		else if (value1==0)
			++o;
		else
		    ++ma;
		printf("Your Age : ");
		scanf("%d",&age);
		if(age<18)
		++kid;
		if(age>65)
		++sen;
		age1[k]=age;
		++k;
		label:
		printf("Enter amount of rice (in kg) : ");
		scanf("%d",&r);
		printf("Enter amount of wheat (in kg): ");
		scanf("%d",&w);
		printf("Enter amount of coarse grains(in kg) : ");
		scanf("%d",&c);
		sum=r+w+c;
		if(sum<=5)
		{
			bill=r*3+w*2+c*1;
		  	bill1+=bill;
		  	r1[d]=r;
		    w1[d]=w;
		    c1[d]=c;
		    ++d;
			printf("\n\n\n\nName - %s   ---  Age - %d ---  Gender - %s\n",name,age,gen);
			printf("Rice - %d rupees     Wheat - %d rupees     Coarse Grains - %d rupees     Bill - %d rupees \n\n\n",r*3,w*2,c,bill);
		}
		else 
		{
			printf("Sorry ! But only 5 kg food grains is alloted per person !\n");
			goto label;	
		}
	}
	printf("Total Bill - %d rupees",bill1);
	portal_1();
}
void aay()
{
	int r,i,w,c,bill=0,sum=0,fm,age,value,cg,value1;
	char name[50],gen[6],g[]="Female",g1[]="others";
	printf("Enter your total number of family members : ");
	scanf("%d",&fm);
	for(i=1;i<=fm;i++)
	{
		printf("Enter your name : ");
		scanf("%s",&name);
		printf("Gender : ");
		scanf("%s",&gen);
		value=strcmp(gen,g);
		value1=strcmp(gen,g1);
		if(value==0)
		{
			++fem;
			printf("For pregnancy and maternal health , we have a special package you want it ? Press 1 for Yes and 2 for No : ");
			scanf("%d",&cg);
			if(cg==1)
			{
				++x1;
			}
		}
		else if (value1==0)
	    	++o;
		else
	    	++ma;
		printf("Your Age : ");
		scanf("%d",&age);
		if(age<18)
		++kid;
		if(age>65)
		++sen;
		age1[k]=age;
		++k;
	}
	label1:
    printf("You will get 35 kg of food grains - rice @ 3 rupees per kg , wheat @ 2 rupees per kg , coarse grains @ 1 rupees per kg \n");
	printf("Enter amount of rice (in kg) : ");
	scanf("%d",&r);
	printf("Enter amount of wheat (in kg): ");
	scanf("%d",&w);
	printf("Enter amount of coarse grains(in kg) : ");
	scanf("%d",&c);
	sum=r+w+c;
	printf("\n\n\n");
	if(sum <= 35)
	{
		bill=r*3+w*2+c*1;
		printf("\n\n\n\nRice - %d rupees     Wheat - %d rupees     Coarse Grains - %d rupees \n",r*3,w*2,c);
	    printf("Total Bill - %d rupees",bill);
	    r1[d]=r;
	    w1[d]=w;
	    c1[d]=c;
	    ++d;
	}
		
	else
	{
		printf("Sorry ! But only 35 kg food grains is alloted per family !\n");
		goto label1;		
	}
	portal_1();
}
void distributor()
{
	char na[100],id[10];
	int ch;
	printf("-----------------------------------------------------------------------------------------------WELCOME TO DISTRIBUTOR PORTAL------------------------------------------------------------------------------------------\n\n");
	printf("Enter your name : ");
	scanf("%s",&na);
	printf("Enter your ID number : ");
	scanf("%s",&id);
	printf("Enter 1.Food availability section  2.Analysis Section \n");
	scanf("%d",&ch);
	if(ch==2)
	  ana();
	if(ch==1)
	  food();
}
void food()
{
	int r,w,c;
	int i;
	printf("Enter the amount of rice in stock : ");
	scanf("%d",&r);
	printf("Enter the amount of wheat in stock : ");
	scanf("%d",&w);
	printf("Enter the amount of coarse grains : ");
	scanf("%d",&c);
	for(i=0;i<100;i++)
	{
		r=r-r1[i];
		w=w-w1[i];
		c=c-c1[i];
	}
	printf("Amount of rice left : %d\n",r);
	printf("Amount of wheat left : %d\n",w);
	printf("Amount of coarse grains left : %d\n",c);
	portal_1();
}
void ana()
{
	int i,num,ln=0,up=10,f=0;
	printf("Age group division\n");
	while(up<=110)
	{
	   for(i=0;i<k;i++)
	   {
		   num=age1[i];
		   if(num>ln&&num<up)
		   ++f;
	   }
	   printf("AGE GROUP %d - %d = %d\n",ln,up,f);
	   ln+=10;
	   up+=10;
	   f=0;
	}
	printf("\nPregnancy and maternal kit taken - %d",x1);
	printf("\nMales - %d ",ma);
	printf("\nFemales - %d",fem);
	printf("\nThird Gender - %d",o);
	printf("\nNo. of Kids - %d",kid);
	printf("\nNo. of Senior Citizen - %d",sen);
	portal_1();
}
void rules()
{
	printf("WELCOME TO PDS PORTAL---------A step towards digitalization of food grains distributtion\n\n\n");
	printf("\nIn the PDS Portal the portal asks whether you are consumer or distributor\n");
	printf("\nIf you are a consumer you can enter the consumer portal\n");
	printf("\nSelect the type of card you hold ---NFSA or AAY\n");
	printf("\nUnder NFSA card portal enter the number of family members and their details to get the required food grains\n");
	printf("\nUnder AAY portal enter the number of family members and their details to get the required food grains\n");
	printf("\nIf you are a distributor enter the distributor portal\n");
	printf("\nYou can enter either the food availability section or the analysis section\n");
	printf("\nUnder the food availability section you can check the amount of foodgrains left");
	printf("\nUnder the analysis section you can analyse the customers \n\n\n\n\n");
	portal_1();
}
void customer_care()
{
	printf("\n\nName : Bikram Sadhukhan\n\n\n");
	printf("Phone : 9734464708\n\n\n");
	printf("Email : bikramsadhukhan505@gmail.com\n\n\n");
	printf("Enrollment Number : 012200300004002\n\n\n");
	printf("Address : Sripur Bazar , Balagarh , Hooghly\n\n\n");
	printf("Thanks for Visiting");
	printf("\n\n\n\n\n\n");
	portal_1();
}
