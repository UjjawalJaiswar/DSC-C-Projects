//THE NUMBER GAME
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void game(int b,int z,int y ,int p,int a);
void marks(int a,int b,int z,int y,int p,int s,int o,int n,int m,int i,int position);
void page1()
{
int a;
for(int i=0;i<40;i++)
{
	delay(30);
	cout<<"«¬";
}                              //BORDER
for(int j=0,n=2;j<23;j++,n++)
{
	delay(30);
	gotoxy(1,n);
	cout<<"«¬";
}
for(i=0;i<39;i++)
{
	delay(30);
	cout<<"«¬";
}
for(j=0,n=2;j<23;j++,n++)
{
	delay(30);
	gotoxy(79,n);
	cout<<"«¬";
}
for(i=1;i<6;i++)
{
	if(i==1)
	{
		gotoxy(4,3);
		for(j=1;j<4;j++)
		cout<<"±²";
	}
	if(i==5)
	{
		gotoxy(4,7);                  //LETTER C
		for(j=1;j<4;j++)
		cout<<"±²";
	}
	if(i==2)
	{
		gotoxy(4,4);
		cout<<"±²";
	}
	if(i==3)
	{
		gotoxy(4,5);
		cout<<"±²";
	}
	if(i==4)
	{
		gotoxy(4,6);
		cout<<"±²";
	}
}
for(i=3;i<=7;i++)
{
	delay(60);
	gotoxy(11,i);
	cout<<"±²";                  //letter R
}
for(i=12;i<=17;i++)
{
	delay(60);
	gotoxy(i,3);                 //LETTER R
	cout<<"±²";
}
for(i=3;i<=5;i++)
{
	delay(60);                  //LETTER R
	gotoxy(17,i);
	cout<<"±²";
}
for(i=17;i>12;i--)
{
	delay(60);
	gotoxy(i,5);                 //LETTER R
	cout<<"±²";
}
for(i=5;i<=7;i++)
{
	delay(60);
	gotoxy(i+9,i);              //LETTER R
	cout<<"±²";
}
for(i=7;i>=3;i--)
{
	delay(60);
	gotoxy(20,i);
	cout<<"±²";                  //letter A
}
for(i=20;i<25;i++)
{
	delay(60);
	gotoxy(i,3);                 //LETTER A
	cout<<"±²";
}
for(i=3;i<=7;i++)
{
	delay(60);
	gotoxy(26,i);
	cout<<"±²";                  //letter A
}

for(i=20;i<25;i++)
{
	delay(60);                  //LETTER A
	gotoxy(i,5);
	cout<<"±²";
}
for(i=1;i<6;i++)
{
	if(i==1)
	{
		gotoxy(29,3);
		for(j=1;j<4;j++)
		cout<<"±²";
	}
	if(i==5)
	{
		gotoxy(29,7);                  //LETTER C
		for(j=1;j<4;j++)
		cout<<"±²";
	}
	if(i==2)
	{
		gotoxy(29,4);
		cout<<"±²";
	}
	if(i==3)
	{
		gotoxy(29,5);
		cout<<"±²";
	}
	if(i==4)
	{
		gotoxy(29,6);
		cout<<"±²";
	}
}
for(i=3;i<=7;i++)
{
	delay(90);                        //LETTER K
	gotoxy(36,i);
	cout<<"±²";
}
for(i=5,a=38;i>2;a++,i--)
{
	delay(90);
	gotoxy(a,i);                      //LETTER K
	cout<<"±²";
}
for(i=5,a=38;i<=7;i++,a++)
{
	delay(90);                        //LETTER K
	gotoxy(a,i);
	cout<<"±²";
}
for(i=1;i<=6;i++)
{
	if(i==1)
	{
		gotoxy(44,3);
		for(j=1;j<6;j++)
		cout<<"²±";                         //letter T
	}
	else
	{
		for(int k=1,s=4;k<=4;k++,s++)
		{
			gotoxy(44,s);
			cout<<"    ";
			cout<<"²±";
		}
	}
}
for(i=3;i<8;i++)
{
	delay(90);
	gotoxy(55,i);                    //LETTER H
	cout<<"±²";
}
for(i=3;i<8;i++)
{
	delay(90);                       //LETTER H
	gotoxy(61,i);
	cout<<"±²";
}
for(i=55;i<=59;i++)
{
	delay(90);
	gotoxy(i,5);                     //LETTER H
	cout<<"±²";
}
for(i=3;i<8;i++)
{
	delay(90);
	gotoxy(64,i);                   //LETTER E
	cout<<"±²";
}
for(i=64;i<69;i++)
{
	delay(90);                     //LETTER E
	gotoxy(i,3);
	cout<<"±²";
}
for(i=64;i<69;i++)
{
	delay(90);                     //LETTER E
	gotoxy(i,5);
	cout<<"±²";
}
for(i=64;i<69;i++)
{
	delay(90);                     //LETTER E
	gotoxy(i,7);
	cout<<"±²";
}
for(i=1;i<6;i++)
{
	if(i==1)
	{
		gotoxy(29,9);
		for(j=1;j<4;j++)
		cout<<"±²";
	}
	if(i==5)
	{
		gotoxy(29,13);                  //LETTER C
		for(j=1;j<4;j++)
		cout<<"±²";
	}
	if(i==2)
	{
		gotoxy(29,10);
		cout<<"±²";
	}
	if(i==3)
	{
		gotoxy(29,11);
		cout<<"±²";
	}
	if(i==4)
	{
		gotoxy(29,12);
		cout<<"±²";
	}
}
for(i=36;i<41;i++)
{
	delay(90);
	gotoxy(i,9);                      //LETTER O
	cout<<"±²";
}
for(i=9;i<14;i++)
{
	delay(90);                        //LETTER O
	gotoxy(42,i);
	cout<<"±²";
}
for(i=41;i>35;i--)
{
	delay(90);
	gotoxy(i,13);                      //LETTER O
	cout<<"±²";
}
for(i=13;i>=9;i--)
{
	delay(90);
	gotoxy(36,i);                     //LETTER O
	cout<<"±²";
}
for(i=9;i<=13;i++)
{
	delay(90);
	gotoxy(45,i);                       //LETTER D
	cout<<"±²";
}
delay(100);
gotoxy(47,9);
cout<<"±²";
delay(100);
gotoxy(49,10);
cout<<"±²";
delay(100);
gotoxy(50,11);
cout<<"±²";
delay(100);
gotoxy(49,12);
cout<<"±²";
delay(100);
gotoxy(47,13);
cout<<"±²";
for(i=9;i<=13;i++)
{
	delay(90);
	gotoxy(53,i);                   //LETTER E
	cout<<"±²";
}
for(i=53;i<58;i++)
{
	delay(90);                     //LETTER E
	gotoxy(i,9);
	cout<<"±²";
}
for(i=53;i<58;i++)
{
	delay(90);                     //LETTER E
	gotoxy(i,11);
	cout<<"±²";
}
for(i=53;i<58;i++)
{
	delay(90);                     //LETTER E
	gotoxy(i,13);
	cout<<"±²";
}
int q;
for(i=0,q=25;i<30;i++,q++)
{
	if(i%2==0)
	{
		gotoxy(36,19);
		delay(10);
		cout<<"loading/-";
		gotoxy(q,20);
		delay(100);
		cout<<"þ";
		delay(100);
	}
	else
	{
		gotoxy(36,19);
		delay(10);
		cout<<"loading/_";
		gotoxy(q,20);
		delay(100);
		cout<<"þ";
		delay(100);
	}
}
gotoxy(27,21);
delay(40);
cout<<"Press any key to continue";
getch();
clrscr();
}
void number()
{
int a,b,c,d,x=8888,y,z,p,q;
label:
randomize();
a=random(x)+1111;
q=a;
p=q%10;//last digit
q=q/10;
y=q%10;//second last digit
q=q/10;
z=q%10;//second digit
b=q;
b=q/10;//first digit
if(((b==z)||(z==y)||(y==p)||(b==p)||(b==y)||(z==p)))    //to avoid repetetion of digits
{
	goto label;
	clrscr();
}
else if(((b==0)||(z==0)||(y==0)||(p==0)))               //to avoid any zero
{
	goto label;
	clrscr();
}
else
clrscr();
game(b,z,y,p,a);
}
void game(int b,int z,int y ,int p,int a)
{
const int ar=50;
int arr[ar],m,n,o,s,logic,choice;
char ex,ch;
char name[20];
gotoxy(28,12);
cout<<"PLAYER PROFILE: ";
cin>>name;
d:
clrscr();
for(int i=0;i<80;i++)
{
	delay(30);
	cout<<"±";
}     				                         //BORDER
for(int j=0,qwerty=2;j<23;j++,qwerty++)
{
	delay(30);
	gotoxy(1,qwerty);
	cout<<"±±";
}
for(i=0;i<39;i++)
{
	delay(30);
	cout<<"±±";
}
for(j=0,qwerty=2;j<23;j++,qwerty++)
{
	delay(30);
	gotoxy(79,qwerty);
	cout<<"±±";
}
gotoxy(10,3);
cout<<"-------------------G@MER$ MENU---------------------";
gotoxy(61,5);
cout<<"1.) NEW GAME\n";
gotoxy(61,6);
cout<<"2.)?HELP\n";
gotoxy(61,7);
cout<<"3.) ABOUT\n";
gotoxy(61,8);
cout<<"4.)PRIVACY POLICY\n";
gotoxy(61,9);
cout<<"5.)EXIT";
gotoxy(5,8);
x:
cin>>choice;
switch(choice)
	{
	default:gotoxy(5,8);
		cout<<"Only press keys from 1-4 for input";
		gotoxy(3,8);
		cout<<" ";
		goto x;
	case 1: clrscr();
		cout<<"\nEnter the four digit password you think is suitable:"<<endl;
		gotoxy(60,1);
		cout<<name<<" VS C0MPUTER";
		gotoxy(30,21);
		cout<<"ACTIVITY";
		gotoxy(15,22);
		cout<<"______________________________________________________";
		gotoxy(15,24);
		cout<<"______________________________________________________";
		for(int i=1,position=5,point=5;i<=9;i++,position++,point++)
		{
			gotoxy(7,4);
			cout<<"PASSWORD"<<endl;
			gotoxy(20,4);
			cout<<"SCORE"<<endl;
			gotoxy(4,position);
			cout<<i;
			gotoxy(6,5);
			p:
			gotoxy(8,position);
			cin>>arr[ar];
			logic=arr[ar];
			m=logic%10;//last digit
			logic=logic/10;
			n=logic%10;//second last digit
			logic=logic/10;
			o=logic%10;//second digit
			s=logic;
			s=logic/10;//first digit
			if(s==0)
			{
				gotoxy(20,23);
				cout<<"Invalid Input";
				delay(1000);
				gotoxy(20,23);
				goto p;
				cout<<"    ";
				gotoxy(8,position);
			}
			if(o==s)
			{
				gotoxy(20,23);
				cout<<"Invalid Input";
				delay(1000);
				gotoxy(20,23);
				goto p;
				cout<<"    ";
				gotoxy(8,position);
			}

			if(n==s)
			{
				gotoxy(20,23);
				cout<<"Invalid Input";
				delay(1000);
				gotoxy(20,23);
				goto p;
				cout<<"    ";
				gotoxy(8,position);
			}
			if(m==n)
			{
				gotoxy(20,23);
				cout<<"Invalid Input";
				delay(1000);
				gotoxy(20,23);
				goto p;
				cout<<"    ";
				gotoxy(8,position);
			}
			if(s>9)
			{
				gotoxy(20,23);
				cout<<"Only 4-Digit Number";
				delay(1000);
				gotoxy(20,23);
				clreol();
				goto p;
			}
			if(((s==o)||(o==n)||(n==m)||(s==m)||(s==n)||(o==m)))
			{
				gotoxy(20,23);
				cout<<"Invalid Number:Repetetion of digits not allowed-2344"<<endl;
				gotoxy(20,23);
				delay(1000);
				clreol();
				gotoxy(8,position);
				cout<<"    ";
				gotoxy(8,position);
				goto p;
			}
				else if(((s==0)||(o==0)||(n==0)||(m==0)))
			{
				gotoxy(20,23);
				cout<<"Invalid Number:0 can not be used on any place-1023"<<endl;
				gotoxy(20,23);
				delay(1000);
				clreol();
				gotoxy(8,position);
				cout<<"    ";
				gotoxy(8,position);
				goto p;
			}
			if(i==2)
			{
				gotoxy(20,23);
				cout<<"Something unusual is happening??";
				delay(1000);
				gotoxy(20,23);
				clreol();
			}
			if(i==5)
			{
				gotoxy(20,23);
				cout<<"You have been traced,speed up your work or...";
				delay(1000);
				gotoxy(20,23);
				clreol();
			}
			if(arr[ar]==a)
			{
				int score=40;
				gotoxy(20,position);
				cout<<score;
				gotoxy(20,23);
				cout<<"CONGRATULATIONS";
				delay(1000);
				cout<<"!";
				delay(1000);
				cout<<"!";
				delay(1000);
				gotoxy(20,24);
				cout<<"YOU CRACKED THE CODE";
				break;
	case 2:clrscr();
	       gotoxy(25,4);
	       cout<<"HOW TO PLAY THIS GAME";
	       cout<<"\n1.After entering the 4-digit no. the score is on screen.";
	       cout<<"\n2.Each digit correctly placed gives you 10 points each.";
	       cout<<"\n3.If the digit is correct but placement is wrong you get 2 points.";
	       cout<<"\n4.You have only 9 chances.";
	       cout<<"\n5.Repetition of digits or using 0 is not valid.";
	       gotoxy(55,20);
	       cout<<"Use 'E' to exit";
	       j:
	       cin>>ex;
	       if(ex=='E')
	       goto d;
	       else
	       gotoxy(55,20);
	       delay(1000);
	       clreol();
	       gotoxy(55,20);
	       cout<<"Only E allowed";
	       goto j;
	       break;
	case 3:clrscr();
	       cout<<"\nDeveloped by:Ujjawal Jaiswar";
	       cout<<"\nProgrammed by:Ujjawal Jaiswar";
	       cout<<"\nProject given by:Mr.Shaktirish Kumar Agarwal";
	       cout<<"\nCode Language:C++";
	       gotoxy(65,23);
	       cout<<"Use 'E' to exit";
	       t:
	       gotoxy(5,10);
	       cin>>ex;
	       if(ex=='E')
	       goto d;
	       else
	       gotoxy(55,20);
	       delay(1000);
	       clreol();
	       gotoxy(55,20);
	       cout<<"Only E allowed";
	       goto t;
	       break;
	case 4:clrscr();
	 cout<<"\nCopyright(c) 2016-2022.C++ Project\nLicensed under the Apache License,Version 2.0;\nYou may not use this file except in compliance with the license.\nThis certificate is an license agreement which certifies that this program is \ncompletely a piece of information not stolen from any source and is completely\n in c++ language.";
	       gotoxy(65,23);
	       cout<<"Use 'E' to exit";
	       m:
	       cin>>ex;
	       if(ex=='E')
	       goto d;
	       else
	       gotoxy(55,20);
	       delay(1000);
	       clreol();
	       gotoxy(55,20);
	       cout<<"Only E allowed";
	       goto m;
		break;
	case 5:gotoxy(5,22);
		cout<<"ARE YOU SURE YOU WANT TO EXIT";
		gotoxy(7,23);
		cout<<"YES\tNO";
		gotoxy(45,23);
		cout<<"Use 'Y' for YES and 'N' for NO";
		gotoxy(3,8);
		cout<<" ";
		k:
		gotoxy(5,10);
		cin>>ch;
		if(ch=='Y')
		break;
		else if(ch=='N')
		goto d;
		else
		gotoxy(45,23);
	       delay(1000);
	       clreol();
	       gotoxy(45,23);
		cout<<"Only 'Y' or 'N'";
		gotoxy(3,8);
		cout<<" ";
		goto k;
			}
			marks(a,b,z,y,p,s,o,n,m,i,position);
		}
		getch();
}    }
void marks(int a,int b,int z,int y,int p,int s,int o,int n,int m,int i,int position)
{
int score,s1=0,s2=0,s3=0,s4=0;
if(b==s)
s1=10;
if(z==o)
s2=10;
if(y==n)
s3=10;
if(p==m)
s4=10;
if(((b==o)||(b==n)||(b==m)))
s1=2;
if(((z==s)||(z==n)||(z==m)))
s2=2;
if(((y==s)||(y==o)||(y==m)))
s3=2;
if(((p==s)||(p==o)||(p==n)))
s4=2;
score=s1+s2+s3+s4;
gotoxy(20,position);
cout<<score;
if(i==9)
{
	gotoxy(20,23);
	cout<<"ATTENTION!!!This is a Cyber Crime you are traced....";
	delay(100);
	clreol();
	delay(10);
	gotoxy(20,23);
	cout<<"The police is outside your place";
	delay(100);
	clreol();
	gotoxy(70,5);
	cout<<a;
	delay(10);
	gotoxy(20,23);
	cout<<"YOU LOSE       Try again next time";
}
}
void main()
{
clrscr();
page1();
number();
getch();
}

