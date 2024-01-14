#include<stdio.h>
#include<math.h>
#include<string.h>

int seats_101[42]={0};
int seats_102[42]={0};
int seats_103[42]={0};
int seats_104[42]={0};
int seats_105[42]={0};

int c, c1=1, c2, i ,j ,k=1, snum;
int flightnum;
int countbus=0, counteco=0;
int t;

void main()
{
	int choice;
	
	int i=0, a=0;
	char uname[10], c=' ';
	char pass[10];
	char user[10]="Abdullah";
	char password[10]="hasan";
	
	do
	{
		system("cls");
		printf("\n\n\t\t\t\t*********************** LOGIN ************************");
		printf("\n\n\n\n\n\n\t\t\t\t\tEnter Username (Abdullah): ");
		scanf("%s",&uname);
		printf("\n\n\t\t\t\t\tEnter Password (hasan): ");
		while(i<10)
		{
			pass[i] = getch();
			c = pass[i];
			if(c==13) 
			break;
			else
			printf("*");
			i++;
		}
		pass[i] = '\0';
		
		i=0;
		
		if(strcmp(uname,user)!=0 && strcmp(pass,password)!=0)
		{
			system("cls");
			a++;
	    	printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	        printf("\n\n\n\n\n\n\t\t\t\t\tINCORRECT USERNAME OR PASSWORD\n");
	        printf("\n\n\n\n\n\t\t\t\t*************************************************");
			getch();
		}
		else{
			
    system("cls");
	printf("\n\n\n\n\n\t\t\t\t****************** PF Project *******************");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t     CYBER\n");
	printf("\t\t\t\t\t\t   Airlines...");
	printf("\n\n\t\t\t\t\t   Press any key to Continue...\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t*************************************************");
	getch();
	
	do
	{
	system("cls");
	printf("\n\n\t\t\t\t*********************** CYBER Airlines ************************");
	printf("\n\n\n\n\n\n\t\t\t\t\t1. Show available Flights.\n");
	printf("\n\t\t\t\t\t2. Book a ticket\n");
	printf("\n\t\t\t\t\t3. Cancel Ticket.\n");
	printf("\n\t\t\t\t\t4. Check your Flight Progress.\n");
	printf("\n\t\t\t\t\t5. Exit.\n\n");
	printf("\t\t\t\t\tEnter your Choice(1-5): ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		{
            available_flights();
            break;
		}
	    case 2:
	    {
	    	booking();
	    	break;
		}
		case 3:	
		{
			cancel();
			break;
		}
		case 4:
		{
			progress();	
			break;
		}
		case 5:
	    {
	    	t = total(countbus,counteco);
	    	system("cls");
	    	printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	        printf("\n\n\n\n\n\n\t\t\t\tYour Total Fare for all tickets is: %d\n",t);
	        printf("\n\n\n\n\n\t\t\t\t*************************************************");
			getch();
	    	system("cls");
	    	printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	        printf("\n\n\n\n\n\n\t\t\t\t\tThank You for using our Services.\n");
	        printf("\n\n\n\n\n\t\t\t\t*************************************************");
			getch();

			break;				
		}
		default:
		{
			printf("\n\n\t\t\t\t\tInvalid Choice..........");
		}
	}
    }
    while(choice!=5);
}
}
while(a < 3 && choice!=5);

if(a>=3)
{
	system("cls");
	printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	printf("\n\n\n\n\n\n\t\t\t\tYOU'VE ENTERED WRONG USERNAME OR PASSWORD THREE TIMES.\n");
    printf("\n\n\n\n\n\t\t\t\t*************************************************");
	getch();
}
}

int booking()
{
		
	do
	{
		system("cls");
		printf("\n\n\t\t\t\t*********************** BOOKING ************************");
		printf("\n\n\n\n\n\n\t\t\t\t\t1. Bussiness Class.(Rs.45000)\n");
	    printf("\n\t\t\t\t\t2. Economy Class.(Rs.30000)\n");
	    printf("\n\t\t\t\t\t3. Exit.\n\n");
	    printf("\t\t\t\t\tEnter your Choice(1-3): ");
	    scanf("%d",&c);
	
	    switch(c)
	    {
		    case 1:
		    {
			    system("cls");
			    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			    flights();
			    printf("\n\n\n\n\t\t\tEnter Flight Number(101-105): ");
			    scanf("%d",&flightnum); 
			    
			    switch(flightnum)
			    {
			    	
			    case 101:
			    {			
			    printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Bussiness class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=1;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\n\n\t\t\t\tAvailable Seats are (1-21)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_101[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_101[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_101[snum-1]!=1);
			    break;
				}
			
				case 102:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Bussiness class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=1;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\n\n\t\t\t\tAvailable Seats are (1-21)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_102[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_102[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_102[snum-1]!=1);
			    break;
				}
				
				case 103:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Bussiness class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=1;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\n\n\t\t\t\tAvailable Seats are (1-21)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_103[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_103[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_103[snum-1]!=1);
			    break;
				}		
				
				case 104:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Bussiness class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=1;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\n\n\t\t\t\tAvailable Seats are (1-21)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_104[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_104[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_104[snum-1]!=1);
			    break;	
				}
				
				case 105:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Bussiness class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=1;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\n\n\t\t\t\tAvailable Seats are (1-21)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_105[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_105[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_105[snum-1]!=1);
			    break;
				}	
				
				default:
				{
					system("cls");
					printf("\n\n\t\t\t\t*********************** BOOKING ************************");
					printf("\n\n\n\n\t\t\t\t\tInvalid Entry....");
					getch();
					break;
		        }
		        
	            }
	            break;
	        }	
		
		    case 2:
		    {
			    system("cls");
			    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			    flights();
			    printf("\n\n\n\n\t\t\tEnter Flight Number(101-105): ");
			    scanf("%d",&flightnum); 
			    
			    switch(flightnum)
			    {
			    	
			    case 101:
			    {		
			    printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Economy class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=22;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\t\t\t\tAvailable Seats are (22-42)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_101[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_101[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_101[snum-1]!=1);
			    break;
				}
			
				case 102:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Economy class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=22;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\t\t\t\tAvailable Seats are (22-42)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_102[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_102[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_102[snum-1]!=1);
			    break;
				}
				
				case 103:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Economy class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=22;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\t\t\t\tAvailable Seats are (22-42)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_103[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_103[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_103[snum-1]!=1);
			    break;
				}		
				
				case 104:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Economy class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=22;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\t\t\t\tAvailable Seats are (22-42)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_104[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_104[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_104[snum-1]!=1);
			    break;	
				}
				
				case 105:
				{
				printf("\n\n\n\n\t\t\tWould you like to see the Seating Pattern for Economy class?\n");
			    printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
			    scanf("%d",&c2);
			
			
			    if(c2 == 1)
			    {
			    	k=22;
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** Seating Pattern ************************\n\n");
				    printf("\n\n\n");
				    for(i=1;i<=7;i++)
				    {
					    for(j=1;j<=3;j++)
					    {
						    printf("\t\tSeat%d\t\t",k++);
					    }
					    printf("\n\n\n");
				    }
				    printf("\n\n\t\t\t\t\tPress any key to Continue...");
				    getch();
			    }
			    
			    do
			    {
				    system("cls");
				    printf("\n\n\t\t\t\t*********************** BOOKING ************************");
			        printf("\n\n\n\t\t\t\tAvailable Seats are (22-42)\n\n");
			        printf("\t\t\t\tEnter your Seat Number: ");
			        scanf("%d",&snum);
			
			        if(seats_105[snum-1] == 1)
			        {
				        system("cls");
				        printf("\n\n\t\t\t\t*********************** BOOKING ************************");
				        printf("\n\n\n\t\t\t\tSeat Taken Would you like to choose another seat?");
				        printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
				        scanf("%d",&c1);
			        }
			        else
			        {
				        seats_105[snum-1] = 1;
				        ticket(snum,flightnum);
			        }
			    }
			    while(c1==1 && seats_105[snum-1]!=1);
			    break;
				}	
				
				default:
				{
					printf("\n\n\t\t\t\t\tInvalid Entry....");
					break;
		        }
		        
	            }
	            break;
	        }
	            
		    case 3:
			{
			system("cls");
	    	printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	        printf("\n\n\n\n\n\n\t\t\t\t\tThank You for using our Services.\n");
	        printf("\n\n\n\n\n\t\t\t\t*************************************************");
			getch();
			break;
			}
		
		    default:
			{
				printf("\n\n\t\t\t\t\tInvalid Entry....");
				getch();
				break;
			}
			
		
	    }

	    if(c1==0)
		{
			system("cls");
	    	printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	        printf("\n\n\n\n\n\n\t\t\t\t\tThank You for using our Services.\n");
	        printf("\n\n\n\n\n\t\t\t\t*************************************************");
			getch();
        	break;
		}
		
    }
	while(c!=3);
}

int available_flights()
{
	int a;
	
	system("cls");
	printf("\n\n\t\t\t\t*********************** FLIGHTS ************************");
	printf("\n\n\n\n\t\t\t\t\t1. PK-101 KHI-LHR\n");
	printf("\n\t\t\t\t\t2. PK-102 KHI-ISL\n");
	printf("\n\t\t\t\t\t3. PK-103 ISL-LHR\n");
	printf("\n\t\t\t\t\t4. PK-104 ISL-KHI\n");
	printf("\n\t\t\t\t\t5. PK-105 LHR-KHI\n");
	
	printf("\n\t\t\t\t\tDo you want to book a flight?");
	printf("\n\t\t\t\t\tPress 1 if Yes and 0 if No: ");
	scanf("%d",&a);
	
	if(a==1)
	{
		booking();
	}
	else
	{
		printf("\n\n\t\t\t\t\tThank You for using our Service.");
	}
}

int flights()
{
	printf("\n\n\n\n\t\t\t\t\t1. PK-101 KHI-LHR\n");
	printf("\n\t\t\t\t\t2. PK-102 KHI-ISL\n");
	printf("\n\t\t\t\t\t3. PK-103 ISL-LHR\n");
	printf("\n\t\t\t\t\t4. PK-104 ISL-KHI\n");
	printf("\n\t\t\t\t\t5. PK-105 LHR-KHI\n");
}
int cancel()
{
	int fn, sn;
	
	system("cls");
	printf("\n\n\t\t\t\t*********************** CANCELLATION ************************");
	printf("\n\n\n\n\t\t\t\t\tEnter Your Flight Number(101-105): ");
	scanf("%d",&fn);
	printf("\n\n\t\t\t\t\tEnter Your Seat Number: ");
	scanf("%d",&sn);
	switch(fn)
	{
		case 101:
		{
			system("cls");
			printf("\n\n\t\t\t\t*********************** CANCELLATION ************************");
			if(seats_101[sn-1]==1)
			{
				seats_101[sn-1] = 0;
	    	    printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tCANCELLATION SUCCESSFULL\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
			else
			{
				printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tYOU DON'T HAVE A RESERVATION\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
		}
		case 102:
		{
			system("cls");
			printf("\n\n\t\t\t\t*********************** CANCELLATION ************************");
			if(seats_102[sn-1]==1)
			{
				seats_102 [sn-1] = 0;
	    	    printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tCANCELLATION SUCCESSFULL\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
			else
			{
				printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tYOU DON'T HAVE A RESERVATION\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
		}
		case 103:
		{
			system("cls");
			printf("\n\n\t\t\t\t*********************** CANCELLATION ************************");
			if(seats_103[sn-1]==1)
			{
				seats_103[sn-1] = 0;
	    	    printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tCANCELLATION SUCCESSFULL\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
			else
			{
				printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tYOU DON'T HAVE A RESERVATION\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
		}
		case 104:
		{
			system("cls");
			printf("\n\n\t\t\t\t*********************** CANCELLATION ************************");
			if(seats_104[sn-1]==1)
			{
				seats_104[sn-1] = 0;
	    	    printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tCANCELLATION SUCCESSFULL\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
			else
			{
				printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tYOU DON'T HAVE A RESERVATION\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
		}
		case 105:
		{
			system("cls");
			printf("\n\n\t\t\t\t*********************** CANCELLATION ************************");
			if(seats_105[sn-1]==1)
			{
				seats_105[sn-1] = 0;
	    	    printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tCANCELLATION SUCCESSFULL\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
			else
			{
				printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	            printf("\n\n\n\n\n\n\t\t\t\t\tYOU DON'T HAVE A RESERVATION\n");
	            printf("\n\n\n\n\n\t\t\t\t*************************************************");
			    getch();
		    	break;
			}
		}	
		default:
		{
			system("cls");
			printf("\n\n\t\t\t\t*********************** CANCELLATION ************************");
			printf("\n\n\n\n\n\n\n\t\t\t\t*************************************************");
	        printf("\n\n\n\n\n\n\t\t\t\t\tINVALID FLIGHT NUMBER\n");
	        printf("\n\n\n\n\n\t\t\t\t*************************************************");
		    getch();
		    break;
		}	
	}
}
int progress()
{
	int num, fn;
	
	system("cls");
	num = rand();
	
	printf("\n\n\t\t\t\t*********************** FLIGHT PROGRESS ************************");
	printf("\n\n\n\n\t\t\t\t\tEnter Your Flight Number(101-105): ");
	scanf("%d",&fn);
	
	system("cls");
	
	if(fn < 101 || fn > 105 )
	{
		printf("\n\n\t\t\t\t*********************** FLIGHT PROGRESS ************************");
		printf("\n\n\n\n\n\t\t\t\t\tInvalid Flight Number Entered..........");
	}
	else if(num%2 == 0)
	{
		printf("\n\n\t\t\t\t*********************** FLIGHT PROGRESS ************************");
		printf("\n\n\n\n\n\n\n\n\t\t---------------------------------------------------------------------------");
		printf("\n\n\n\t\t\tFLIGHT WILL BE ARRIVING SHORTLY");
		printf("\n\n\n\t\t---------------------------------------------------------------------------");
	}
	else
	{
		printf("\n\n\t\t\t\t*********************** FLIGHT PROGRESS ************************");
		printf("\n\n\n\n\n\n\n\n\t\t---------------------------------------------------------------------------");
		printf("\n\n\n\t\t\t\t  FLIGHT WILL BE DELAYED DUE TO SOME ISSUE");
		printf("\n\n\n\t\t---------------------------------------------------------------------------");
	} 
	
	getch();

}

int ticket(int sno, int fno)
{
	char fname[20];
	char lname[20];
	char flightname[20];
	
	printf("\n\n\n\n\n\t\t\t\t\tEnter First Name: ");
	scanf("%s",fname);
	printf("\n\n\t\t\t\t\tEnter Second Name: ");
	scanf("%s",lname);
	
    system("cls"); 
	printf("\n\n\n\n\n\t\t\t\t\t\tBOOKING SUCCESSFUL!!!!");
	
	
	printf("\n\n\n\n\n\n\t\t--------------------------------- TICKET ---------------------------------");
	printf("\n\n\t\t\tName: %s %s",fname,lname);
	printf("\t\t\tSeat No: %d\t\t",sno);
	printf("\n\n\t\t\tFlight No: %d\t\t",fno);
	switch(fno)
	{
		case 101:
		{
			printf("\t\tRoute: KHI-LHR");
			break;
		}
		case 102:
		{
			printf("\t\tRoute: KHI-ISL");
			break;   		
		}	
		case 103:
		{
			printf("\t\tRoute: ISL-LHR");
			break;
		}
		case 104:
		{
			printf("\t\tRoute: ISL-KHI");
			break;
		}	
		case 105:
		{
			printf("\t\tRoute: LHR-KHI");
			break;
		}
    }
    
    printf("\n\n\t\t---------------------------------------------------------------------------");
    getch();
    
    if(snum < 22)
    {
    	countbus++;
	}
	else
	{
		counteco++;
	}
	
}

int total(int b, int e)
{
	int t;
	
	t = (b*45000) + (e*30000);
	return t;
}










