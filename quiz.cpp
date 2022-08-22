#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void record();
void resetscore();
void help();
void scoreedit(float, char[]);
int main()
     {
     int a1,ar2,a3,b,i,n;
    
     int choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n   Welcome to The Game ");
  
     printf("\n\t\t________________________________________");
     
     printf("\n\t\t > Press 1 to start the game");
     printf("\n\t\t > Press 2 to view the highest score");
     printf("\n\t\t > Press 3 to reset score");
     printf("\n\t\t > press 4 for help");
     printf("\n\t\t > press 5 to quit");
     printf("\n\t\t________________________________________\n\n");
     scanf("%d", &choice);
       if (choice==2)
	{
	record();
	goto mainhome;
	}
     else if (choice==4)
	{
	help();
	getch();
	goto mainhome;
	}
	else if (choice==3)
	{
	resetscore();
	getch();
	goto mainhome;}
	else if (choice==5)
	exit(1);
	 else if(choice==1)
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     scanf("%s",&playername);
     
    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n >> Your game starts with CHALLANGE ROUND. In this you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded Rs 1000");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t ALL THE BEST !");
    printf("\n\n\n Press Y  to start the game!\n"); 
	printf("\n Press any other key to return to the main menu!");
    
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }
 home:
 	system("cls");
 	a1=0;
     for(i=1;i<=10;i++)
     {
	 system("cls");
     ar2=i;

     switch(ar2)
		{
		case 1:
		printf("\n\nWhat is the National Game of Nepal?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Volleyball\t\tD.Baseball");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect");
			a1++;
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong! The correct answer is C.Volleyball");
			   getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nHow many heritage properties of Nepal are listed in the World Heritage List?");
		printf("\n\nA.7\t\tB.20\n\nC.8\t\tD.10");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect");
			a1++;
			getch();
			 break;}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is A.7");
			   getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect");
			a1++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is C.8");
			   getch();
		       goto score;
		       break;
			   }

        case 4:
		printf("\n\n\nWhat percentage of the total land area of ??Nepal is cultivated on land?");
		printf("\n\nA.17.97%\t\tB.27.97%\n\nC.16.97%\t\tD.26.97%");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect");
			a1++;
			getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.17.97%");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nHow many MW of electricity has been produced in Nepal so far?");
		printf("\n\nA.1040Mw\t\tB.1142Mw\n\nC.1120Mw\t\tD.1412Mw");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");
			a1++;
			getch(); 
			break;
			}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.1142Mw");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nHow many trade points have been opened between Nepal and India?");
		printf("\n\nA.18\t\tB.27\n\nC.45\t\tD.20");
		if (toupper(getch())=='B' )
			{
			printf("\n\nCorrect!!!");
			a1++;
			getch();
			 break;}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.27");
			   goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWho is known as the Bullet King?");
		printf("\n\nA.Pratap Singh Shah\t\tB.Surendra Bikram Shah\n\nC.Tribhuvan Bir Bikram Shah\t\tD.Trilokya Vikram Shah");
		if (toupper(getch())=='D')
			{
			printf("\n\nCorrect!!!");
			a1++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Trilokya Vikram Shah");
			   getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWhich is the only district not getting fish in Nepal?");
		printf("\n\nA.Taplejung\t\tB.Manang\n\nC.Bara\t\tD.Parsa");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect!!!");
			a1++;
			getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is B.Manang");
			   getch();
		       goto score;
		       break;}
        case 9:
		printf("\n\n\nWho made the palace school open to the public?");
		printf("\n\nA.Bir shamsher\t\tB.Fatya Jung Shah\n\nC.Subarna Shamsher J.B.R\t\tD.Lokendra Bahadur Chand");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect!!!");
			a1++;
			getch(); 
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Bir shamsher");
			   getch();
			   break;
			   goto score;
			   }

        case 10:
		printf("\n\n\nWhich country is more literate women than men?");
		printf("\n\nA.Nepal\t\tB.China\n\nC.Hungary\t\tD.Korea");
		if (toupper(getch())=='C')
			{
			printf("\n\nCorrect!!!");
			a1++;
			getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Hungary");
			  getch();
              break;
			  goto score;
			  }

        case 11:
		printf("\n\n\nWhat is the estimated number of rivers in Nepal?");
		printf("\n\nA.6000\t\tB.8000\n\nC.4000\t\tD.7000");
		if (toupper(getch())=='A')
			  {
			  printf("\n\nCorrect");
			  a1++;
			  getch();
			   break;
			   }
		else
              {
			  printf("\n\nWrong!!! The correct answer is A.6000");
			  getch();
              break;
			  goto score;
			  }

        case 12:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
		if (toupper(getch())=='A')
			{
			printf("\n\nCorrect");
			a1++;
			getch();
			 break;
			 }
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");
			   getch();
		       break;
			   goto score;
			   }

		case 13:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect");
			a1++;
			getch();
			 break;
			 }
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.AB");
			   getch();
		       goto score;
		       break;
			   }

		case 14:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect");
			a1++; 
			getch();
			break;
			}
		else
		       
			   {printf("\n\nWrong!!! The correct answer is C.Kathmandu");
			   getch();
			   goto score;
		       break;
			   }

		case 15:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{
			printf("\n\nCorrect");
			a1++;
			getch();
			break;
			}
		else
		       {
			   printf("\n\nWrong!!! The correct answer is B.Valves");
			   getch();
			   goto score;
		       break;
			   }}}
    score:
	system("cls");
	float score=(float)a1*1000;
	if(score>0.00 && score<1000.00)
	{
	     printf("\n\t You won $%.2f",score);
		 goto go;
		 }

	 else if(score==1000.00)
	{
	    printf("\n\n\n \t\t------------- CONGRATULATION -------------");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t-------------SORRY, TRY AGAIN NEXT TIME-------------");
	    printf("\n\t\t Thanks for your participation");
		goto go;
		}
go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		scoreedit(score,playername);
		goto mainhome;
		}
		}
		}
	


void record()
    {
	system("cls");
	char name[20];
	float score;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&score);
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,score);
	printf("\n\n\t\t-------------------------------------------------------");
	fclose(f);
	getch();
	}

void resetscore()
    {
	system("cls");
    float soc;
	char num[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&num,&soc);
	soc=0;
	fprintf(f,"%s,%.2f",num,soc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded Rs 1000");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
	printf("\n\n\t*********************BEST OF LUCK*********************************");
    }

void scoreedit(float score, char lnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",lnm,sc);
	    fclose(f);
		}
		}
