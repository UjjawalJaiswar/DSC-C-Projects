#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>                
#include<ctype.h>                  
#include<dos.h>                    
#include<time.h>

char catagories[][15]={"Computer","Electronics","Electrical","Civil","Mechnnical","Architecture"};
void returnfunc(void);
void mainmenu(void);
void addbooks(void);
void deletebooks(void);
void searchbooks(void);
void viewbooks(void);
void closeapplication(void);
int  getdata();
int  checkid(int);
int t(void);
//list of global files that can be accessed from anywhere in program
FILE *fp,*ft,*fs;
COORD coord = {0, 0};
//list of global variable
int s;
char findbook;
void gotoxy (int x, int y)
{
	coord.X = x; coord.Y = y; // X and Y coordinates
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct meroDate
{
	int mm,dd,yy;
};
struct books
{
	int id;
	char stname[20];
	char name[20];
	char Author[20];
	int quantity;
	float Price;
	int count;
	int rackno;
	char *cat;
	struct meroDate issued;
	struct meroDate duedate;
};
struct books a;

int main()
{
	mainmenu();
	getch();
	return 0;
}

void mainmenu()
{
	system("cls");
	int i;
	gotoxy(20,3);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(20,5);
	printf("\xDB\xDB\xDB\xDB\xB2 1. Add Books   ");
	gotoxy(20,7);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Delete books");	
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Search Books");	
	gotoxy(20,11);
	printf("\xDB\xDB\xDB\xDB\xB2 4. View Book list");
	gotoxy(20,13);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Close Application");
	gotoxy(20,15);	
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(20,17);
	t();
	gotoxy(20,18);
	printf("Enter your choice:");
	switch(getch())
	{
		case '1':
				addbooks();
				break;
		case '2':
				deletebooks();
				break;
		case '3':
				searchbooks();
				break;
		case '4':
				viewbooks();
				break;
		case '5':
		{
				system("cls");
				gotoxy(16,3);
				printf("\tL I B R A R Y  M A N A G E M E N T  S Y S T E M");
				gotoxy(16,6);
				printf("THANK YOU FOR VISITING");
				gotoxy(39,8);
				printf("SEE YOU SOON");
				gotoxy(52,10);
				printf("HAVE A NICE DAY");
				gotoxy(16,4);
				printf("苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘");
				gotoxy(16,11);
				printf("苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘");
				gotoxy(16,12);
				printf("苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘");
				gotoxy(16,13);
				printf("苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘苘");
				gotoxy(10,17);
				printf("Exiting in 3 second...");
				Sleep(3000);
				exit(0);
		}
		default:
		{
				gotoxy(10,23);
				printf("\aWrong Entry!!Please re-enter correct option");
				if(getch())
					mainmenu();
		}
	}
	
}

int getdata()
{
	int t;
	system("cls");
	gotoxy(20,3);
	printf("Enter the Information Below");
	gotoxy(20,4);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(20,5);
	printf("\xB2");
	gotoxy(46,5);
	printf("\xB2");
	gotoxy(20,6);
	printf("\xB2");
	gotoxy(46,6);
	printf("\xB2");
	gotoxy(20,7);
	printf("\xB2");
	gotoxy(46,7);
	printf("\xB2");
	gotoxy(20,8);
	printf("\xB2");
	gotoxy(46,8);
	printf("\xB2");
	gotoxy(20,9);
	printf("\xB2");
	gotoxy(46,9);
	printf("\xB2");
	gotoxy(20,10);
	printf("\xB2");
	gotoxy(46,10);
	printf("\xB2");
	gotoxy(20,11);
	printf("\xB2");
	gotoxy(46,11);
	printf("\xB2");
	gotoxy(20,12);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(21,5);
	printf("Category:");
	gotoxy(31,5);
	printf("%s",catagories[s-1]);
	gotoxy(21,6);
	printf("Book ID:\t");
	gotoxy(30,6);	
	scanf("%d",&t);
	if(checkid(t) == 0)
	{
		gotoxy(21,13);
		printf("\aThe book id already exists\a");
		getch();
		mainmenu();
		return 0;
	}
	a.id=t;
	gotoxy(21,7);
	printf("Book Name:");
	gotoxy(33,7);
	scanf("%s",a.name);
	gotoxy(21,8);
	printf("Author:");
	gotoxy(30,8);
	scanf("%s",a.Author);
	gotoxy(21,9);	
	printf("Quantity:");
	gotoxy(31,9);
	scanf("%d",&a.quantity);
	gotoxy(21,10);
	printf("Price:");
	gotoxy(28,10);
	scanf("%f",&a.Price);
	gotoxy(21,11);
	printf("Rack No:");
	gotoxy(30,11);	
	scanf("%d",&a.rackno);
	return 1;
}

int checkid(int t)  //check whether the book  exist in library or not
{
	rewind(fp);
	while(fread(&a,sizeof(a),1,fp)==1)
	if(a.id==t)
	return 0;  //returns 0 if book exists
	return 1; //return 1 if it does not
}

int t(void) //for time
{
	time_t t;
	time(&t);
	printf("Date and time:%s\n",ctime(&t));
	return 0 ;
}

void addbooks()
{
	system("cls");
	int i;
	gotoxy(20,5);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(20,7);	
	printf("\xDB\xDB\xDB\xDB\xB2 1. Computer");
	gotoxy(20,9);
	printf("\xDB\xDB\xDB\xDB\xB2 2. Electronics");
	gotoxy(20,11);
	printf("\xDB\xDB\xDB\xDB\xB2 3. Electrical");
	gotoxy(20,13);
	printf("\xDB\xDB\xDB\xDB\xB2 4. Civil");
	gotoxy(20,15);
	printf("\xDB\xDB\xDB\xDB\xB2 5. Mechanical");
	gotoxy(20,17);
	printf("\xDB\xDB\xDB\xDB\xB2 6. Architecture");
	gotoxy(20,19);
	printf("\xDB\xDB\xDB\xDB\xB2 7. Back to main menu");
	gotoxy(20,21);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(20,22);
	printf("Enter your choice:");
	scanf("%d",&s);
	if(s==7)
		mainmenu();
	fp=fopen("ujjawal.dat","ab+");
	if(getdata()==1)
	{
		a.cat=catagories[s-1];
		fseek(fp,0,SEEK_END);
		fwrite(&a,sizeof(a),1,fp);
		fclose(fp);
		gotoxy(21,14);
		printf("The record is sucessfully saved");
		gotoxy(21,15);
		printf("Save any more?(Y / N):");
		if(getch()=='n')
			mainmenu();
		else
			system("cls");
		addbooks();
	}
}

void deletebooks()
{
	system ("cls");
	int d;
	char another='y';
	while(another=='y')  //infinite loop for yes or no input
	{
		printf("Enter book id:");
		scanf("%d",&d);
		fp=fopen("ujjawal.dat","rb+");
		rewind(fp);
		while(fread(&a,sizeof(a),1,fp)==1)
		{
				if(a.id==d)
				{
					gotoxy(10,7);
					printf("The book record is available");
					gotoxy(10,8);
					printf("Book name is %s",a.name);
					gotoxy(10,9);
					printf("Rack No. is %d",a.rackno);
					findbook='t';
				}
		}
		if(findbook!='t')
		{
			gotoxy(10,10);
			printf("No record is found modify the search");
			if(getch())
			mainmenu();
		}	
		if(findbook=='t' )
		{
			gotoxy(10,9);
			printf("Do you want to delete it?(Y/N):");
			if(getch()=='y')
			{
				ft=fopen("test1.dat","wb+");  //temporary file for delete
				rewind(fp);
				while(fread(&a,sizeof(a),1,fp)==1)
				{
					if(a.id!=d)
					{
						fseek(ft,0,SEEK_CUR);
						fwrite(&a,sizeof(a),1,ft); //write all in tempory file except that
					}		                              //we want to delete
				}
				fclose(ft);
				fclose(fp);
				remove("ujjawal.dat");
				rename("test1.dat","ujjawal.dat"); //copy all item from temporary file to fp except that
				fp=fopen("ujjawal.dat","rb+");    //we want to delete
				if(findbook=='t')
				{
					gotoxy(10,10);
					printf("The record is sucessfully deleted");
					gotoxy(10,11);
					printf("Delete another record?(Y/N)");
				}
			}
			else
				mainmenu();
			fflush(stdin);
			another=getch();
		}
	}
	gotoxy(10,15);
	mainmenu();
}

void returnfunc(void)
{
	{
		printf(" Press ENTER to return to main menu");
	}
	a:
	if(getch()==13) //allow only use of enter
		mainmenu();
	else
		goto a;
}

void searchbooks()
{
	system("cls");
	int d;
	gotoxy(20,8);
	printf("---------------S E A R C H  B O O K S---------------");
	gotoxy(20,10);
	printf("\xDB\xDB\xDB\xB2 1. Search By ID");
	gotoxy(20,14);
	printf("\xDB\xDB\xDB\xB2 2. Search By Name");
	gotoxy( 15,20);
	printf("Enter Your Choice");
	fp=fopen("ujjawal.dat","rb+");
	rewind(fp);
	switch(getch())
	{
			case'1':
				{
					system("cls");
					gotoxy(25,4);
					printf("----Search Books By Id----");
					gotoxy(20,5);
					printf("Enter the book id:");
					scanf("%d",&d);
					gotoxy(20,7);
					printf("Searching........");
					while(fread(&a,sizeof(a),1,fp)==1)
					{
						if(a.id==d)
						{
							Sleep(2);
							gotoxy(20,7);
							printf("The Book is available");
							gotoxy(20,8);
							printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
							gotoxy(20,9);
							printf("\xB2 ID:%d",a.id);gotoxy(47,9);printf("\xB2");
							gotoxy(20,10);
							printf("\xB2 Name:%s",a.name);gotoxy(47,10);printf("\xB2");
							gotoxy(20,11);
							printf("\xB2 Author:%s ",a.Author);
							gotoxy(47,11);
							printf("\xB2");
							gotoxy(20,12);
							printf("\xB2 Qantity:%d ",a.quantity);gotoxy(47,12);printf("\xB2"); gotoxy(47,11);printf("\xB2");
							gotoxy(20,13);
							printf("\xB2 Price:Rs.%.2f",a.Price);gotoxy(47,13);printf("\xB2");
							gotoxy(20,14);
							printf("\xB2 Rack No:%d ",a.rackno);gotoxy(47,14);printf("\xB2");
							gotoxy(20,15);
							printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
							findbook='t';
						}

					}		
					if(findbook!='t')  //checks whether conditiion enters inside loop or not
					{
						gotoxy(20,8);
						printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
						gotoxy(20,9);printf("\xB2");  gotoxy(38,9);printf("\xB2");
						gotoxy(20,10);
						printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
						gotoxy(22,9);printf("\aNo Record Found");
					}
					gotoxy(20,17);
					printf("Try another search?(Y/N)");
					if(getch()=='y')
						searchbooks();
					else
						mainmenu();
					break;
				}
				case '2':
				{
					char s[15];	
					system("cls");
					gotoxy(25,4);
					printf("****Search Books By Name****");
					gotoxy(20,5);
					printf("Enter Book Name:");
					scanf("%s",s);
					int d=0;
					while(fread(&a,sizeof(a),1,fp)==1)
					{
						if(strcmp(a.name,(s))==0) //checks whether a.name is equal to s or not
						{			
							gotoxy(20,7);
							printf("The Book is available");
							gotoxy(20,8);
							printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
							gotoxy(20,9);
							printf("\xB2 ID:%d",a.id);gotoxy(47,9);printf("\xB2");
							gotoxy(20,10);
							printf("\xB2 Name:%s",a.name);gotoxy(47,10);printf("\xB2");
							gotoxy(20,11);
							printf("\xB2 Author:%s",a.Author);gotoxy(47,11);printf("\xB2");
							gotoxy(20,12);
							printf("\xB2 Qantity:%d",a.quantity);gotoxy(47,12);printf("\xB2");
							gotoxy(20,13);
							printf("\xB2 Price:Rs.%.2f",a.Price);gotoxy(47,13);printf("\xB2");
							gotoxy(20,14);
							printf("\xB2 Rack No:%d ",a.rackno);gotoxy(47,14);printf("\xB2");
							gotoxy(20,15);
							printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
							d++;
						}
					}
					if(d==0)
					{
						gotoxy(20,8);
						printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
						gotoxy(20,9);printf("\xB2");  gotoxy(38,9);printf("\xB2");
						gotoxy(20,10);
						printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
						gotoxy(22,9);
						printf("\aNo Record Found");
					}
					gotoxy(20,17);
					printf("Try another search?(Y/N)");
					if(getch()=='y')
						searchbooks();
					else
						mainmenu();
					break;
				}
				default :
					getch();
				searchbooks();
	}
	fclose(fp);
}

void viewbooks(void)  //show the list of book persists in library
{
	int i=0,j;
	system("cls");
	gotoxy(1,1);
	printf("*********************************Book List*****************************");
	gotoxy(2,2);
	printf(" CATEGORY     ID    BOOK NAME     AUTHOR       QTY     PRICE     RackNo ");
	j=4;
	fp=fopen("ujjawal.dat","rb");
	while(fread(&a,sizeof(a),1,fp)==1)
	{
		gotoxy(3,j);
		printf("%s",a.cat);
		gotoxy(16,j);
		printf("%d",a.id);
		gotoxy(22,j);
		printf("%s",a.name);
		gotoxy(36,j);
		printf("%s",a.Author);
		gotoxy(50,j);
		printf("%d",a.quantity);
		gotoxy(57,j);
		printf("%.2f",a.Price);
		gotoxy(69,j);
		printf("%d",a.rackno);	
		printf("\n\n");
		j++;
		i=i+a.quantity;
	}
	gotoxy(3,25);
	printf("Total Books =%d",i);
	fclose(fp);
	gotoxy(35,25);
	returnfunc();
}


