#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int distance(char *a,char *b);
void taxiprint(int);
    int id=1;
    int taxi1,taxi2,taxi3,taxi4;
    int book1,book2,book3,book4;
  	int earning[4];
    struct taxi
    {
        int cusid;
        char starting[3];
        char ending[3];
        int starttime;
    }t[100];

    struct booking
    {
    
        int id;
        int cusid;
        char from[3];
        char to[3];
        int time2;
        int droptime;
        int amount;
    }b[4][100];

void booking(struct booking *b,struct taxi t,int no)
{
	b->cusid=t.cusid;
	b->id=id++;
	strcpy(b->from,t.starting);
	strcpy(b->to,t.ending);
	b->time2=t.starttime;
	b->droptime =distance(t.starting,t.ending)+t.starttime;
	if(b->droptime>12)
	{
 		b->droptime-=12;
	}
	b->amount=50+((distance(t.starting,t.ending)*15)-5)*10;
	earning[no]+=b->amount;
}

int distance(char *a,char *b)
{
	char start=a[0];
	char stop=b[0];
	return (abs(start-stop));
}
void decrement()
{
 	if(taxi1>0)
 		taxi1--;
 	if(taxi2>0)
 		taxi2--;
 	if(taxi3>0)
 		taxi3--;
 	if(taxi4>0)
 		taxi4--;
}
void taxiprint(int taxino)
{
 	printf("\n Taxi can be Allocated\n");
 	printf("\n taxi- %d is allocated\n\n",taxino);
}
void display()
{
// printf("%d %d %d %d",book1,book2,book3,book4);
	if(book1>0)
 	{
 		printf("\nTaxi 1 \n total Earning= %d\n",earning[0]);
     	
  		for(int i=0;i<book1;i++)
  		{
   			printf("Book Id:%d\nCustomer Id:%d\nFrom:%s\nTo:%s\nPick Time:%d\nDrop Time:%d\nAmount:%d\n",b[0][i].id,b[0][i].cusid,b[0][i].from,b[0][i].to,b[0][i].time2,b[0][i].droptime,b[0][i].amount);
  		}
 	}
 	if(book2>0)
 	{
	  	printf("\nTaxi 2 \n total Earning= %d\n",earning[1]);
	    
	  	for(int i=0;i<book2;i++)
	  	{
	   		printf("Book Id:%d\nCustomer Id:%d\nFrom:%s\nTo:%s\nPick Time:%d\nDrop Time:%d\nAmount:%d\n",b[1][i].id,b[1][i].cusid,b[1][i].from,b[1][i].to,b[1][i].time2,b[1][i].droptime,b[1][i].amount);
	  	}
 	}
	if(book3>0)
 	{
  		printf("\nTaxi 3 \n total Earning= %d\n",earning[2]);
     	
  		for(int i=0;i<book3;i++)
  		{
   			printf("Book Id:%d\nCustomer Id:%d\nFrom:%s\nTo:%s\nPick Time:%d\nDrop Time:%d\nAmount:%d\n",b[2][i].id,b[2][i].cusid,b[2][i].from,b[2][i].to,b[2][i].time2,b[2][i].droptime,b[2][i].amount);
  		}
 	}
	if(book4>0)
 	{
 		printf("\nTaxi 1 \n total Earning= %d\n",earning[3]);
     	
  		for(int i=0;i<book4;i++)
  		{
  			 printf("Book Id:%d\nCustomer Id:%d\nFrom:%s\nTo:%s\nPick Time:%d\nDrop Time:%d\nAmount:%d\n",b[3][i].id,b[3][i].cusid,b[3][i].from,b[3][i].to,b[3][i].time2,b[3][i].droptime,b[3][i].amount);
  		}
 	}
}
int main()
{

    while(1)
    {
        int user_choice,count,i;
        
        printf("\n...................Taxi_Booking..............................................\n");
        printf("\n 1.Booking  2.Details 3.exit \n");
        printf("Enter Choice:");
  		scanf("%d",&user_choice);
        if(user_choice==1)
        {
            printf("\nnumber of Booking :");
            scanf("%d",&count);
            for(i=0;i<count;i++)
            {
                printf("\nInput %d:\n",i+1);
                printf("\nCustomer Id :");
                scanf("%d",&t[i].cusid);
                printf("\npickup point :");
                scanf("%s",t[i].starting);
                printf("\ndrop point :");
                scanf("%s",t[i].ending);
                printf("\npickup time :");
                scanf("%d",&t[i].starttime);
                if(taxi1==0)
                {
                booking(&b[0][book1++],t[i],0);
                taxi1=distance(t[i].starting,t[i].ending);
                taxiprint(1);
                }
                else if(taxi2==0)
                {
                booking(&b[1][book2++],t[i],1);
                taxi2=distance(t[i].starting,t[i].ending);
                taxiprint(2);
                }
                else if(taxi3==0)
                {
                 booking(&b[2][book3++],t[i],2);
                taxi3=distance(t[i].starting,t[i].ending);
                taxiprint(3);
                }
                else if(taxi4==0)
                {
                 booking(&b[3][book4++],t[i],3);
                taxi4=distance(t[i].starting,t[i].ending);
                taxiprint(4);
                }
                else
                {
                 printf("ALL Taxi Are Busy.. Please Try after Some time");
                }
                decrement();
            }
        }
        else if(user_choice==2)
        {
			display();
        }
        else
        {
            return 0;
        }
    }
    
}

