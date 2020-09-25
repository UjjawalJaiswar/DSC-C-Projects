#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<ctype.h>
fstream f;
class city
{
	char city[80];
     public:
	void entercity();
	void showcitydata();
}x1;
class cinema
{
     public:
	void s_cinema();
}x2;
class movie
{
	char movie[80];
   public:
	void in_mov();
	void showmovdata();
}x3;
char name[80];
class personal
{
	char name[80];
	int n;
	int date;
	int month;
	int year;
    public:
	void info();
	void info_w();
}pri;
class payment
{
	char card_no[16],date[10],blank[2],cvv[3],card_name[70];
	char c_1[70],c_2[50],id[16],pin[4];
      public:
	void credit();
	void netbanking();
	void condition_1(int);
	void condition_2(int);
	void condition_3(int);
	void condition_4(int);
	void condition_5(int);
	void condition_6(int);
	void net_data();
	void show_pay();
}pay;
class ticket
{
	char name[80];
	int n;
	int date;
	int month;
	int year;
    public:
	void display();
	void ticket_view();
	void tick_look();
}tick;
struct load
{
	void screen();
	void home();
	void designed();
	void box();
	void menu();
	void border();
	void loading();
	void eff_loading();
}load;
struct seats
{
	int s_plat();
	void seat_design();
	int s_gold();
	int s_silv();
	void control(int p1[],int p2[],int p3[],int p4[],int p5[],int p6[]);
}ran;
void casecity();
int l=1,pl=5,i=1,uk=0,dk=0,c=0,tk=0,pk=0,qp;
void load::screen()
{
	clrscr();
	textbackground(BLACK);
	for(int u=0;u<25;u++)
	{
		for (int m=0; m<=79; m++)
			cprintf(" ");
	cout<<endl;
	}
}
void load::border()
{
	_setcursortype(_NOCURSOR);
	gotoxy(1,1);
	cout<<"É";
	for(int i=2;i<79;i++)
	{

		gotoxy(i,1);
		textcolor(2);
		cprintf("Í");
		delay(19);
	}
	gotoxy(79,1);
	cout<<"»";
	for(int j=2;j<25;j++)
	{
		gotoxy(79,j);
		textcolor(9);
		cprintf("º");
		delay(19);
	}
	gotoxy(79,24);
	cout<<"¼";
	for(int g=78;g>0;g--)
	{
		gotoxy(g,24);
		textcolor(2);
		cprintf("Í");
		delay(19);
	}
	gotoxy(1,24);
	cout<<"È";
	for(int l=23;l>1;l--)
	{
		gotoxy(1,l);
		textcolor(9);
		cprintf("º");
		delay(12);
	}
}
void load::home()
{
	clrscr();
	textbackground(BLACK);
	for(int u=0;u<25;u++)
	{
		for (int m=0; m<79; m++)
		{
		       textcolor(7);
		       cprintf("Ü");
		}
		cout<<endl;
	}
	border();
	gotoxy(6,2);
	textcolor(4);
	cprintf("ÜÜÜÜÜÜÜÜÜÜÜÜ");
	gotoxy(10,3);
	cprintf("ÜÜÜ");
	gotoxy(10,4);
	cprintf("ÜÜÜ");
	gotoxy(10,5);
	cprintf("ÜÜÜ");
	gotoxy(10,6);
	cprintf("ÜÜÜ");
	gotoxy(10,7);
	cprintf("ÜÜÜ");
	gotoxy(19,3);
	textcolor(1);
	cprintf("ÜÜÜÜÜÜÜÜÜÜ");
	gotoxy(22,4);
	cprintf("ÜÜÜ");
	gotoxy(22,5);
	cprintf("ÜÜÜ");
	gotoxy(22,6);
	cprintf("ÜÜÜ");
	gotoxy(19,7);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(30,3);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(30,4);
	cprintf("ÜÜ");
	gotoxy(30,5);
	cprintf("ÜÜ");
	gotoxy(30,6);
	cprintf("ÜÜ");
	gotoxy(30,7);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(40,3);
	cprintf("ÜÜ");
	gotoxy(44,3);
	cprintf("ÜÜÜ");
	gotoxy(40,4);
	cprintf("ÜÜ");
	gotoxy(43,4);
	cprintf("ÜÜ");
	gotoxy(40,5);
	cprintf("ÜÜÜ");
	gotoxy(40,6);
	cprintf("ÜÜ");
	gotoxy(43,6);
	cprintf("ÜÜ");
	gotoxy(40,7);
	cprintf("ÜÜ");
	gotoxy(44,7);
	cprintf("ÜÜÜ");
	gotoxy(50,3);
	cprintf("ÜÜÜÜÜÜ");
	gotoxy(50,4);
	cprintf("ÜÜ");
	gotoxy(50,5);
	cprintf("ÜÜÜÜÜ");
	gotoxy(50,6);
	cprintf("ÜÜ");
	gotoxy(50,7);
	cprintf("ÜÜÜÜÜÜ");
	gotoxy(59,3);
	cprintf("ÜÜÜÜÜÜÜÜÜÜÜÜ");
	gotoxy(63,4);
	cprintf("ÜÜÜ");
	gotoxy(63,5);
	cprintf("ÜÜÜ");
	gotoxy(63,6);
	cprintf("ÜÜÜ");
	gotoxy(63,7);
	cprintf("ÜÜÜ");
	gotoxy(3,9);
	textcolor(1);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(3,10);
	cprintf("ÜÜ");
	gotoxy(12,10);
	cprintf("ÜÜ");
	gotoxy(3,11);
	cprintf("ÜÜ");
	gotoxy(11,11);
	cprintf("ÜÜ");
	gotoxy(3,12);
	cprintf("ÜÜÜÜÜÜÜÜ");
	gotoxy(3,13);
	cprintf("ÜÜ");
	gotoxy(10,13);
	cprintf("ÜÜ");
	gotoxy(3,14);
	cprintf("ÜÜ");
	gotoxy(11,14);
	cprintf("ÜÜ");
	gotoxy(3,15);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(15,11);
	textcolor(4);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(15,12);
	cprintf("ÜÜ");
	gotoxy(22,12);
	cprintf("ÜÜ");
	gotoxy(15,13);
	cprintf("ÜÜ");
	gotoxy(22,13);
	cprintf("ÜÜ");
	gotoxy(15,14);
	cprintf("ÜÜ");
	gotoxy(22,14);
	cprintf("ÜÜ");
	gotoxy(15,15);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(25,11);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(25,12);
	cprintf("ÜÜ");
	gotoxy(32,12);
	cprintf("ÜÜ");
	gotoxy(25,13);
	cprintf("ÜÜ");
	gotoxy(32,13);
	cprintf("ÜÜ");
	gotoxy(25,14);
	cprintf("ÜÜ");
	gotoxy(32,14);
	cprintf("ÜÜ");
	gotoxy(25,15);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(35,11);
	cprintf("ÜÜ");
	gotoxy(40,11);
	cprintf("ÜÜ");
	gotoxy(35,12);
	cprintf("ÜÜ");
	gotoxy(39,12);
	cprintf("ÜÜ");
	gotoxy(35,13);
	cprintf("ÜÜÜ");
	gotoxy(35,14);
	cprintf("ÜÜ");
	gotoxy(38,14);
	cprintf("ÜÜ");
	gotoxy(35,15);
	cprintf("ÜÜ");
	gotoxy(40,15);
	cprintf("ÜÜ");
	gotoxy(44,11);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(47,12);
	cprintf("ÜÜÜ");
	gotoxy(47,13);
	cprintf("ÜÜÜ");
	gotoxy(47,14);
	cprintf("ÜÜÜ");
	gotoxy(44,15);
	cprintf("ÜÜÜÜÜÜÜÜÜ");
	gotoxy(54,11);
	cprintf("ÜÜÜ");
	gotoxy(62,11);
	cprintf("ÜÜ");
	gotoxy(54,12);
	cprintf("ÜÜ");
	gotoxy(57,12);
	cprintf("ÜÜ");
	gotoxy(62,12);
	cprintf("ÜÜ");
	gotoxy(54,13);
	cprintf("ÜÜ");
	gotoxy(58,13);
	cprintf("ÜÜ");
	gotoxy(62,13);
	cprintf("ÜÜ");
	gotoxy(54,14);
	cprintf("ÜÜ");
	gotoxy(59,14);
	cprintf("ÜÜ");
	gotoxy(62,14);
	cprintf("ÜÜ");
	gotoxy(54,15);
	cprintf("ÜÜ");
	gotoxy(61,15);
	cprintf("ÜÜÜ");
	gotoxy(66,11);
	cprintf("ÜÜÜÜÜÜÜÜÜÜ");
	gotoxy(66,12);
	cprintf("ÜÜ");
	gotoxy(66,13);
	cprintf("ÜÜ");
	gotoxy(72,13);
	cprintf("ÜÜÜÜ");
	gotoxy(66,14);
	cprintf("ÜÜ");
	gotoxy(74,14);
	cprintf("ÜÜ");
	gotoxy(66,15);
	cprintf("ÜÜÜÜÜÜÜÜÜÜ");
}
void load::designed()
{
	  clrscr();
	  textcolor(14);
	  gotoxy(5,7);
	  cprintf("±±±±±±±±±");
	  gotoxy(7,8);
	  cprintf("±     ± ");
	  gotoxy(7,9);
	  cprintf("±     ±");
	  gotoxy(7,10);
	  cprintf("±     ±");
	  gotoxy(7,11);
	  cprintf("±     ±");
	  gotoxy(5,12);
	  cprintf("±±±±±±±±±");
	  gotoxy(15,8);
	  cprintf("±±±±±±±±");
	  gotoxy(15,9);
	  cprintf("±");
	  gotoxy(15,10);
	  cprintf("±±±±");
	  gotoxy(15,11);
	  cprintf("±");
	  gotoxy(15,12);
	  cprintf("±±±±±±±±");
	  gotoxy(23,8);
	  cprintf("±±        ±±");
	  gotoxy(23,9);
	  cprintf(" ±±      ±± ");
	  gotoxy(23,10);
	  cprintf("  ±±    ±±");
	  gotoxy(23,11);
	  cprintf("   ±±  ±±");
	  gotoxy(23,12);
	  cprintf("     ±±");
	  gotoxy(36,7);
	  cprintf("±");
	  gotoxy(36,8);
	  cprintf("±      ");
	  gotoxy(36,9);
	  cprintf("±     ");
	  gotoxy(36,10);
	  cprintf("±     ");
	  gotoxy(36,11);
	  cprintf("±     ");
	  gotoxy(36,12);
	  cprintf("±±±±±±");
	  gotoxy(43,7);
	  cprintf("±±±±±±±±");
	  gotoxy(43,8);
	  cprintf("±      ±");
	  gotoxy(43,9);
	  cprintf("±      ±");
	  gotoxy(43,10);
	  cprintf("±      ±");
	  gotoxy(43,11);
	  cprintf("±      ±");
	  gotoxy(43,12);
	  cprintf("±±±±±±±±");
	  gotoxy(52,8);
	  cprintf("±±±±±±");
	  gotoxy(52,9);
	  cprintf("±    ± ");
	  gotoxy(52,10);
	  cprintf("±±±±±±");
	  gotoxy(52,11);
	  cprintf("± ");
	  gotoxy(52,12);
	  cprintf("±");
	  gotoxy(59,8);
	  cprintf("±±±±±±±");
	  gotoxy(59,9);
	  cprintf("±");
	  gotoxy(59,10);
	  cprintf("±±±±±");
	  gotoxy(59,11);
	  cprintf("±");
	  gotoxy(59,12);
	  cprintf("±±±±±±");
	  gotoxy(66,7);
	  cprintf("±±±±±±±±±");
	  gotoxy(66,8);
	  cprintf("  ±     ± ");
	  gotoxy(66,9);
	  cprintf("  ±     ±");
	  gotoxy(66,10);
	  cprintf("  ±     ±");
	  gotoxy(66,11);
	  cprintf("  ±     ±");
	  gotoxy(66,12);
	  cprintf("±±±±±±±±±");
	  delay(2100);
	  gotoxy(3,20);
	  textcolor(8);
	  cprintf("DEVLOPED BY:");
	  clrscr();
	  textcolor(34);
	  gotoxy(5,7);
	  cprintf("±±±±±±±±±");
	  gotoxy(7,8);
	  cprintf("±     ± ");
	  gotoxy(7,9);
	  cprintf("±     ±");
	  gotoxy(7,10);
	  cprintf("±     ±");
	  gotoxy(7,11);
	  cprintf("±     ±");
	  gotoxy(5,12);
	  cprintf("±±±±±±±±±");
	  gotoxy(15,8);
	  cprintf("±±±±±±±");
	  gotoxy(15,9);
	  cprintf("   ±");
	  gotoxy(15,10);
	  cprintf("   ±");
	  gotoxy(15,11);
	  cprintf("   ±");
	  gotoxy(15,12);
	  cprintf("±±±±±±±±");
	  gotoxy(23,8);
	  cprintf("±±        ±");
	  gotoxy(23,9);
	  cprintf(" ±±      ±± ");
	  gotoxy(23,10);
	  cprintf("  ±±    ±±");
	  gotoxy(23,11);
	  cprintf("   ±±  ±±");
	  gotoxy(23,12);
	  cprintf("     ±±");
	  gotoxy(35,7);
	  cprintf("±     ±");
	  gotoxy(35,8);
	  cprintf("±     ±");
	  gotoxy(35,9);
	  cprintf("±±±±±±± ");
	  gotoxy(35,10);
	  cprintf("      ±");
	  gotoxy(35,11);
	  cprintf("      ±");
	  gotoxy(35,12);
	  cprintf("±±±±±±±");
	  gotoxy(44,7);
	  cprintf("±±±±±±±");
	  gotoxy(44,8);
	  cprintf("±     ±");
	  gotoxy(44,9);
	  cprintf("±±±±±±±");
	  gotoxy(44,10);
	  cprintf("±     ±");
	  gotoxy(44,11);
	  cprintf("±     ±");
	  gotoxy(44,12);
	  cprintf("±     ±");
	  gotoxy(52,8);
	  cprintf("±±±      ±");
	  gotoxy(52,9);
	  cprintf("±  ±±    ± ");
	  gotoxy(52,10);
	  cprintf("±   ±±   ±");
	  gotoxy(52,11);
	  cprintf("±    ±±  ±");
	  gotoxy(52,12);
	  cprintf("±     ±±±±");
	  gotoxy(62,8);
	  cprintf(" ±±±±±±");
	  gotoxy(62,9);
	  cprintf(" ±");
	  gotoxy(62,10);
	  cprintf(" ±±±±±±±");
	  gotoxy(62,11);
	  cprintf("       ±");
	  gotoxy(62,12);
	  cprintf(" ±±±±±±±");
	  gotoxy(71,7);
	  cprintf("±      ±");
	  gotoxy(71,8);
	  cprintf("±      ±");
	  gotoxy(71,9);
	  cprintf("±±±±±±±±");
	  gotoxy(71,10);
	  cprintf("±      ±");
	  gotoxy(71,11);
	  cprintf("±      ±");
	  gotoxy(71,12);
	  cprintf("±      ±");
	  gotoxy(3,20);
	  textcolor(8);
	  cprintf("DEVLOPED BY:");
	  delay(2390);
	  clrscr();
	  gotoxy(3,20);
	  textcolor(8);
	  cprintf("DEVLOPED BY:");
	  gotoxy(15,21);
	  textcolor(134);
	  cprintf("Divyansh Singh");
	  textcolor(1);
	  gotoxy(5,7);
	  cprintf("±       ±");
	  gotoxy(5,8);
	  cprintf("±       ± ");
	  gotoxy(5,9);
	  cprintf("±       ±");
	  gotoxy(5,10);
	  cprintf("±       ±");
	  gotoxy(5,11);
	  cprintf("±       ±");
	  gotoxy(5,12);
	  cprintf("±±±±±±±±±");
	  gotoxy(15,8);
	  cprintf("±±±±±±±");
	  gotoxy(15,9);
	  cprintf("      ±");
	  gotoxy(15,10);
	  cprintf("      ±");
	  gotoxy(15,11);
	  cprintf(" ±    ±");
	  gotoxy(15,12);
	  cprintf(" ±±±±±±");
	  gotoxy(23,8);
	  cprintf("±±±±±±±");
	  gotoxy(23,9);
	  cprintf("      ± ");
	  gotoxy(23,10);
	  cprintf("      ±");
	  gotoxy(23,11);
	  cprintf(" ±    ±");
	  gotoxy(23,12);
	  cprintf(" ±±±±±±");
	  gotoxy(32,7);
	  cprintf("±±±±±±±±");
	  gotoxy(32,8);
	  cprintf("±      ±");
	  gotoxy(32,9);
	  cprintf("±±±±±±±±");
	  gotoxy(32,10);
	  cprintf("±      ±");
	  gotoxy(32,11);
	  cprintf("±      ±");
	  gotoxy(32,12);
	  cprintf("±      ±");
	  gotoxy(43,7);
	  cprintf("±         ± ");
	  gotoxy(43,8);
	  cprintf("±         ± ");
	  gotoxy(43,9);
	  cprintf("±         ±");
	  gotoxy(43,10);
	  cprintf("±   ±±±   ± ");
	  gotoxy(43,11);
	  cprintf("±   ± ±   ±");
	  gotoxy(43,12);
	  cprintf("±±±±± ±±±±±");
	  gotoxy(55,8);
	  cprintf("±±±±±±±±");
	  gotoxy(55,9);
	  cprintf("±      ±");
	  gotoxy(55,10);
	  cprintf("±±±±±±±±");
	  gotoxy(55,11);
	  cprintf("±      ±");
	  gotoxy(55,12);
	  cprintf("±      ±");
	  gotoxy(64,8);
	  cprintf("±");
	  gotoxy(64,9);
	  cprintf("±");
	  gotoxy(64,10);
	  cprintf("±");
	  gotoxy(64,11);
	  cprintf("±");
	  gotoxy(64,12);
	  cprintf("±±±±±±±±");
	  delay(2300);
	  clrscr();
	  gotoxy(3,20);
	  textcolor(8);
	  cprintf("DEVLOPED BY:");
	  gotoxy(15,21);
	  textcolor(137);
	  cprintf("Divyansh Singh");
	  gotoxy(30,21);
	  textcolor(134);
	  cprintf("Ujjawal Jaiswar");
	  textcolor(2);
	  gotoxy(7,7);
	  cprintf("±±±±±±±±");
	  gotoxy(7,8);
	  cprintf("±      ");
	  gotoxy(7,9);
	  cprintf("±     ");
	  gotoxy(7,10);
	  cprintf("±    ±±± ");
	  gotoxy(7,11);
	  cprintf("±      ±");
	  gotoxy(7,12);
	  cprintf("±±±±±±±±");
	  textcolor(14);
	  gotoxy(16,8);
	  cprintf("±       ±");
	  gotoxy(16,9);
	  cprintf("±       ±");
	  gotoxy(16,10);
	  cprintf("±       ±");
	  gotoxy(16,11);
	  cprintf("±       ±");
	  gotoxy(16,12);
	  cprintf("±±±±±±±±±");
	  gotoxy(25,8);
	  cprintf(" ±±±±±±±±±± ");
	  gotoxy(25,9);
	  cprintf("     ± ");
	  gotoxy(25,10);
	  cprintf("     ±   ");
	  gotoxy(25,11);
	  cprintf("     ± ");
	  gotoxy(25,12);
	  cprintf(" ±±±±±±±±");
	  gotoxy(35,7);
	  cprintf("±±±±±±±±");
	  gotoxy(35,8);
	  cprintf("  ±    ±");
	  gotoxy(35,9);
	  cprintf("  ±    ±");
	  gotoxy(35,10);
	  cprintf("  ±    ±");
	  gotoxy(35,11);
	  cprintf("  ±    ±");
	  gotoxy(35,12);
	  cprintf("±±±±±±±±");
	  gotoxy(44,7);
	  cprintf("±±±±±±±");
	  gotoxy(44,8);
	  cprintf("±     ± ");
	  gotoxy(44,9);
	  cprintf("±     ±");
	  gotoxy(44,10);
	  cprintf("±±±±±±±");
	  gotoxy(44,11);
	  cprintf("±     ± ");
	  gotoxy(44,12);
	  cprintf("±     ±");
	  gotoxy(52,8);
	  cprintf("±±±      ±");
	  gotoxy(52,9);
	  cprintf("±  ±±    ±");
	  gotoxy(52,10);
	  cprintf("±   ±±   ±");
	  gotoxy(52,11);
	  cprintf("±    ±±  ±");
	  gotoxy(52,12);
	  cprintf("±     ±±±±");
	  gotoxy(63,8);
	  cprintf("±±±±±±±");
	  gotoxy(63,9);
	  cprintf("±");
	  gotoxy(63,10);
	  cprintf("±");
	  gotoxy(63,11);
	  cprintf("±");
	  gotoxy(63,12);
	  cprintf("±±±±±±±");
	  gotoxy(69,7);
	  cprintf(" ±±±±±±±±");
	  gotoxy(69,8);
	  cprintf(" ±      ± ");
	  gotoxy(69,9);
	  cprintf(" ±      ±");
	  gotoxy(69,10);
	  cprintf(" ±±±±±±±±");
	  gotoxy(69,11);
	  cprintf(" ±     ");
	  gotoxy(69,12);
	  cprintf(" ±±±±±±±±");
	  delay(2370);
	  clrscr();
	  gotoxy(3,20);
	  textcolor(8);
	  cprintf("DEVLOPED BY:");
	  gotoxy(15,21);
	  textcolor(137);
	  cprintf("Divyansh Singh");
	  gotoxy(30,21);
	  textcolor(134);
	  cprintf("Ujjawal Jaiswar");
	  gotoxy(47,20);
	  textcolor(8);
	  cprintf("UNDER GUIDANCE OF:");
	  gotoxy(52,21);
	  textcolor(137);
	  cprintf("Mr. Shaktirish Kumar Agarwal");
	  textcolor(5);
	  gotoxy(5,5);
	  cprintf("±±±±  ±±±±");
	  gotoxy(5,6);
	  cprintf("±  ±  ±  ±");
	  gotoxy(5,7);
	  cprintf("±  ±±±±  ± ");
	  gotoxy(5,8);
	  cprintf("±        ± ");
	  gotoxy(5,9);
	  cprintf("±        ±");
	  gotoxy(5,10);
	  cprintf("±        ±");
	  gotoxy(16,6);
	  cprintf("±      ±");
	  gotoxy(16,7);
	  cprintf("±      ±");
	  gotoxy(16,8);
	  cprintf("±      ±");
	  gotoxy(16,9);
	  cprintf("±      ±");
	  gotoxy(16,10);
	  cprintf("±±±±±±±±");
	  gotoxy(25,6);
	  cprintf("±±        ±± ");
	  gotoxy(25,7);
	  cprintf(" ±±      ±± ");
	  gotoxy(25,8);
	  cprintf("  ±±    ±±  ");
	  gotoxy(25,9);
	  cprintf("   ±±  ±± ");
	  gotoxy(25,10);
	  cprintf("     ±±");
	  gotoxy(46,5);
	  cprintf(" ±±±±±±±±");
	  gotoxy(49,6);
	  cprintf("±± ");
	  gotoxy(49,7);
	  cprintf("±±");
	  gotoxy(49,8);
	  cprintf("±±");
	  gotoxy(49,9);           //letter i
	  cprintf("±±");
	  gotoxy(46,10);
	  cprintf("±±±±±±±±±");
	  gotoxy(55,6);
	  cprintf(" ±±±±±±±±±  ");
	  gotoxy(55,7);
	  cprintf("        ±± ");
	  gotoxy(55,8);
	  cprintf("     ±±");
	  gotoxy(55,9);
	  cprintf("  ±±  ");
	  gotoxy(55,10);
	  cprintf(" ±±±±±±±±±");
	  gotoxy(66,6);
	  cprintf("±        ±");
	  gotoxy(66,7);
	  cprintf("±        ±");
	  gotoxy(66,8);
	  cprintf("±        ±");
	  gotoxy(66,9);
	  cprintf("±        ±");
	  gotoxy(66,10);
	  cprintf("±±±±±±±±±±");
	  delay(1200);
	  int r=1,n=7,op=0;
	  p:
	  r++;
	  textcolor(n);
	  gotoxy(35,13);
	  cprintf("(@@@@@@@@@@@)");
	  delay(op);
	  gotoxy(35,14);
	  cprintf(" (@@@@@@@@@)   ");
	  delay(op);
	  gotoxy(35,15);
	  cprintf("  (@@@@@@@)     ");
	  delay(op);
	  gotoxy(35,16);
	  cprintf(" (@@@@@@@@@)");
	  delay(op);
	  gotoxy(35,17);
	  cprintf("(@@@@@@@@@@@)     ");
	  delay(op);
	  gotoxy(35,18);
	  cprintf("ÜÜÜÜÜÜÜÜÜÜÜÜÜ");
	  if(r==2)
	  {
		delay(2200);
		n=228;
		op=380;
		goto p;
	  }
	  delay(160);
	  textcolor(59);
	  gotoxy(37,5);
	  cprintf("±±±±±±±±±");
	  gotoxy(37,6);
	  cprintf("    ±  ");
	  gotoxy(37,7);
	  cprintf("    ±    ");
	  gotoxy(37,8);
	  cprintf("    ±    ");
	  gotoxy(37,9);
	  cprintf("    ±    ");
	  gotoxy(37,10);
	  cprintf("±±±±±±±±");
	  textcolor(7);
	  gotoxy(24,3);
	  cprintf("   WELCOME...........   TOOOOO......");
	  textcolor(64);
	  gotoxy(35,13);
	  cprintf("(@@@@@@@@@@@)");
	  gotoxy(35,14);
	  cprintf(" (@@@@@@@@@)   ");
	  gotoxy(35,15);
	  cprintf("  (@@@@@@@)     ");
	  gotoxy(35,16);
	  cprintf(" (@@@@@@@@@)");
	  gotoxy(35,17);
	  cprintf("(@@@@@@@@@@@)     ");
	  gotoxy(35,18);
	  cprintf("ÜÜÜÜÜÜÜÜÜÜÜÜÜ");
}
void load::loading()
{
	clrscr();
	textcolor(WHITE);
	gotoxy(13,5);
	cprintf("±");
	gotoxy(13,6);
	cprintf("±");
	gotoxy(13,7);
	cprintf("±");
	gotoxy(13,8);
	cprintf("±");
	gotoxy(13,9);
	cprintf("±±±±±±±");
	gotoxy(22,5);
	cprintf("±±±±±±±");
	gotoxy(22,6);
	cprintf("±     ±");
	gotoxy(22,7);
	cprintf("±     ±");
	gotoxy(22,8);
	cprintf("±     ±");
	gotoxy(22,9);
	cprintf("±±±±±±±");
	gotoxy(31,5);
	cprintf("±±±±±±±");
	gotoxy(31,6);
	cprintf("±     ±");
	gotoxy(31,7);
	cprintf("±±±±±±±");
	gotoxy(31,8);
	cprintf("±     ±");
	gotoxy(31,9);
	cprintf("±     ±");
	gotoxy(40,5);
	cprintf("±±±±±±±±");
	gotoxy(40,6);
	cprintf(" ±     ±");
	gotoxy(40,7);
	cprintf(" ±     ±");
	gotoxy(40,8);
	cprintf(" ±     ±");
	gotoxy(40,9);
	cprintf("±±±±±±±±");
	gotoxy(49,5);
	cprintf("±±±±±±±");
	gotoxy(49,6);
	cprintf("   ± ");
	gotoxy(49,7);
	cprintf("   ±");
	gotoxy(49,8);
	cprintf("   ±");
	gotoxy(49,9);
	cprintf("±±±±±±±");
	gotoxy(57,5);
	cprintf("±±±    ±");
	gotoxy(57,6);
	cprintf("± ±±   ±");
	gotoxy(57,7);
	cprintf("±  ±±  ±");
	gotoxy(57,8);
	cprintf("±   ±± ±");
	gotoxy(57,9);
	cprintf("±    ±±±");
	gotoxy(66,5);
	cprintf("±±±±±±±±");
	gotoxy(66,6);
	cprintf("± ");
	gotoxy(66,7);
	cprintf("±    ±±±");
	gotoxy(66,8);
	cprintf("±      ±");
	gotoxy(66,9);
	cprintf("±±±±±±±±");
	eff_loading();
}
void load::eff_loading()
{
	textcolor(9);
	gotoxy(13,5);
	cprintf("±");
	gotoxy(13,6);
	cprintf("±");
	gotoxy(13,7);
	cprintf("±");
	gotoxy(13,8);
	cprintf("±");
	gotoxy(13,9);
	cprintf("±±±±±±±");
	delay(600);
	textcolor(10);
	gotoxy(22,5);
	cprintf("±±±±±±±");
	gotoxy(22,6);
	cprintf("±     ±");
	gotoxy(22,7);
	cprintf("±     ±");
	gotoxy(22,8);
	cprintf("±     ±");
	gotoxy(22,9);
	cprintf("±±±±±±±");
	delay(600);
	textcolor(11);
	gotoxy(31,5);
	cprintf("±±±±±±±");
	gotoxy(31,6);
	cprintf("±     ±");
	gotoxy(31,7);
	cprintf("±±±±±±±");
	gotoxy(31,8);
	cprintf("±     ±");
	gotoxy(31,9);
	cprintf("±     ±");
	delay(600);
	textcolor(12);
	gotoxy(40,5);
	cprintf("±±±±±±±±");
	gotoxy(40,6);
	cprintf(" ±     ±");
	gotoxy(40,7);
	cprintf(" ±     ±");
	gotoxy(40,8);
	cprintf(" ±     ±");
	gotoxy(40,9);
	cprintf("±±±±±±±±");
	delay(600);
	textcolor(13);
	gotoxy(49,5);
	cprintf("±±±±±±±");
	gotoxy(49,6);
	cprintf("   ± ");
	gotoxy(49,7);
	cprintf("   ±");
	gotoxy(49,8);
	cprintf("   ±");
	gotoxy(49,9);
	cprintf("±±±±±±±");
	delay(600);
	textcolor(14);
	gotoxy(57,5);
	cprintf("±±±    ±");
	gotoxy(57,6);
	cprintf("± ±±   ±");
	gotoxy(57,7);
	cprintf("±  ±±  ±");
	gotoxy(57,8);
	cprintf("±   ±± ±");
	gotoxy(57,9);
	cprintf("±    ±±±");
	delay(600);
	textcolor(1);
	gotoxy(66,5);
	cprintf("±±±±±±±±");
	gotoxy(66,6);
	cprintf("± ");
	gotoxy(66,7);
	cprintf("±    ±±±");
	gotoxy(66,8);
	cprintf("±      ±");
	gotoxy(66,9);
	cprintf("±±±±±±±±");
	getch();
}
void load::box()
{
	gotoxy(40,12);
	cout<<"Ú";
	for(int i=0;i<17;i++)
	{
		gotoxy(i+41,12);
		cout<<"Ä";
		gotoxy(i+41,18);
		cout<<"Ä";
	}
	gotoxy(40,18);
	cout<<"À";
	gotoxy(58,18);
	cout<<"Ù";
	for(int j=0;j<5;j++)
	{
		gotoxy(40,j+13);
		cout<<"³";
		gotoxy(58,j+13);
		cout<<"³";
	}
	gotoxy(58,12);
	cout<<"¿";
	gotoxy(45,13);
	textbackground(LIGHTGRAY);
	textcolor(BLACK);
	cprintf("A B O U T");
	gotoxy(41,15);
	cout<<"1)CREDITS";
	gotoxy(41,16);
	cout<<"2)PRIVACY POLICY";
	gotoxy(41,17);
	cout<<"3)RETURN";
}
void load::menu()
{
	char c_name[80];
	p:
	textbackground(BLACK);
	textcolor(LIGHTGRAY);
	for(int u=0;u<25;u++)
	{
		for (int m=0; m<=79; m++)
			cprintf(" ");
	}
	clrscr();
	for(int i=0,m=20;i<40;i++,m++)
	{
		gotoxy(m,5);
		cout<<"²";
	}
	for(i=0;i<16;i++)
	{
		gotoxy(60,i+5);
		cout<<"²²";
	}
	int x;
	for(i=0,x=20;i<40;i++,x++)
	{
		gotoxy(x,20);
		cout<<"²";
	}
	for(i=0;i<15;i++)
	{
		gotoxy(20,i+5);
		cout<<"²²";
	}
	gotoxy(32,6);
	cout<<"M  E  N  U";
	gotoxy(30,8);
	cout<<"1.)BOOK TICKET";
	gotoxy(30,10);
	cout<<"2.)CANCEL TICKET";
	gotoxy(30,12);
	cout<<"3.)ABOUT";
	gotoxy(30,14);
	cout<<"4.)EXIT";
	int choice;
	textcolor(10);
	gotoxy(25,19);
	cout<<"Enter your choice:";
	cin>>choice;
	char v;
	switch(choice)
	{
		case 1: clrscr();
			border();
			casecity();
			break;
		case 2: clrscr();
			tick.tick_look();
			gotoxy(10,22);
			cout<<"FOR CANCEL THE TICKET PRESS:C";
			gotoxy(67,22);
			cout<<"FOR exit:x";
			gotoxy(16,23);
			cin>>v;
			if(v=='c')
				cout<<"YOUR TICKET HAS BEEN CANCELLED";
			else
				exit(0);
			break;
		case 3:	box();
			int about_ch;
			gotoxy(25,19);
			cout<<"Enter your choice:  ";
			cin>>about_ch;
			switch(about_ch)
			{
				case 1:	designed();
					break;
				case 2:	clrscr();
					cout<<"\nCopyright(c) 2017-2022.C++ Project\nLicensed under the Apache License,Version 2.0;\nYou may not use this file except in compliance with the license.\nThis certificate is an license agreement which certifies that this program is \ncompletely a piece of information not stolen from any source and is completely\n in c++ language.";
					break;
				case 3:	goto p;
			}
			break;
		case 4:	break;
	}
	getch();
}
void city::showcitydata()
{
	cout<<i<<" ";
	puts(city);
	i++;
	cout<<endl;
}
void city::entercity()
{
	cout<<"Enter the name of the city:"<<endl;
	gets(city);
}
void city_data()
{
	f.open("City.dat",ios::binary|ios::out);
	for(int i=0;i<50;i++)
	{
		x1.entercity();
		f.write((char*)&x1,sizeof(x1));
	}
	f.close();
}
void bookticket()
{
	int x=2,y=2,sr=1;
	f.open("City.dat",ios::binary|ios::in);
	f.seekg(0);
	while(f.read((char*)&x1,sizeof(x1)))
	{
		if(sr==11)
		{
			x=17;
			y=2;
		}
		if(sr==21)
		{
			x=32;
			y=2;
		}
		if(sr==31)
		{
			x=47;
			y=2;

		}
		if(sr==41)
		{
			x=62;
			y=2;
		}
		gotoxy(x,y);
		y++;sr++;y++;
		x1.showcitydata();
	}
	f.close();
}
char cinema[20][20]={"PVR Cinema","Mira Cinema","Time Cinema","Cinepolis Cinema","Silver Leaf","Urvashi Cinema","Indra Cinema","Prateek Cinema","Kameshwari Cinema","Mukta Cinema","Melody Cinema","City Plus","Rajhansh","Valentine Complex","Kinnary Complex","Icon Plaza","Sterling Complex","Insignia INon","Vishal Theatre","Cinemax"};
void cinema::s_cinema()
{
	randomize();
	for(int i=1,j=5,o=1;i<=4;i++,j+=2,o++)
	{
		int a;
		a=random(20);
		gotoxy(17,j);
			cout<<i<<" "<<cinema[a]<<endl;

	}
}
void movie::in_mov()
{
	cout<<"Enter movie name: ";
	gets(movie);
}
void movie::showmovdata()
{
	gotoxy(13,pl);
	cout<<l<<" ";
	puts(movie);
	l++;
	pl+=2;
	cout<<endl;
}
void mov_data()
{
	f.open("Movie.dat",ios::binary|ios::out);
	for(int i=0;i<5;i++)
	{
		x3.in_mov();
		f.write((char*)&x3,sizeof(x3));
	}
	f.close();
}
void s_mov()
{
	f.open("Movie.dat",ios::binary|ios::in);
	p:
	qp=random(8001);
	if(qp%80!=0)
		goto p;
	f.seekg(qp);
	while(f.read((char*)&x3,sizeof(x3)))
	{
		x3.showmovdata();
		break;

	}
	f.close();
}
void call()
{

	randomize();
	for(int i=0;i<4;i++)
		s_mov();
}
void personal::info()
{
	gotoxy(16,5);
	cout<<"Enter name:-";
	gotoxy(29,5);
	gets(name);
	randomize();
	n=random(1000);
	gotoxy(16,8);
	cout<<"movie code:- "<<n<<"#";
	struct date d;
	getdate(&d);
	gotoxy(16,10);
	cout<<"date:-";
	gotoxy(25,10);
	date=printf("%i",d.da_day);
	for(int i=1;i<30;i++)
	{
		if(d.da_day==i)
			date=i;
	}
	gotoxy(27,10);
	cout<<"/";
	gotoxy(28,10);
	month=printf("%i",d.da_mon);
	for(int j=1;j<=16;j++)
	{
		if(d.da_mon==j)
			month=j;
	}
	gotoxy(30,10);
	cout<<"/";
	gotoxy(31,10);
	year=printf("%i",d.da_year);
	for(int k=1;k<=2100;k++)
	{
		if(d.da_year==k)
			year=k;
	}
}
void personal::info_w()
{
	fstream f;
	f.open("personal.dat",ios::binary|ios::out);
		pri.info();
		f.write((char*)&pri,sizeof(pri));
	f.close();
}
void s_stime()
{
	clrscr();
	int a=80;                                  //border
	for(int i=0;i<80;i++)
	{		                         //top
		delay(10);
		textcolor(14+BLINK);
		textbackground(118);
		cprintf("±") ;
	}
	for(int j=0,n=1;j<24;j++,n++)
	{                                 //right hand
		delay(30);
		delay(10);
		cprintf("±±") ;
		gotoxy(79,n);
	}
	for(i=0;i<79;i++,a--)
	{
		delay(30);                //bottom
		gotoxy(a,24);
		delay(10);
		cprintf("±") ;
	}
	for(j=0,n=24;j<24;j++,n--)
	{
		delay(30);                    //left hand
		gotoxy(1,n);
		delay(10);
		cprintf("±±") ;
	}
	char ch[5][6]={"08:20","10:50","13:00","18:00","21:40"};
	gotoxy(5,5);
	cout<<"----------------S E L E C T  S H O W  T I M I N G S--------------------";
	gotoxy(10,8);
	cout<<"SHOW NAME\t\t\t\tSHOW TIMINGS";
	gotoxy(10,9);
	cout<<"1)Popcorn\t\t\t\t"<<ch[0];
	gotoxy(10,10);
	cout<<"2)Ice -Cream\t\t\t\t"<<ch[1];
	gotoxy(10,11);
	cout<<"3)Cold Drink\t\t\t\t"<<ch[2];
	gotoxy(10,12);
	cout<<"4)Chips\t\t\t\t"<<ch[3];
	gotoxy(10,13);
	cout<<"5)Burger\t\t\t\t"<<ch[4];
}
void in_sno()
{
	load.screen();
	clrscr();
	int arr[11]={1,2,3,4,5,6,7,8,9,10},i=0,b;
	gotoxy(16,19);
	cout<<"SEATS WANTED???";
	gotoxy(10,20);
	cout<<"(use -> and <- for selecting then press enter)";
	gotoxy(16,11);
	cout<<arr[0];
	const char CPPKEYLEFT=75;
	const char CPPKEYRIGHT=77;
	const char ENTER=13;
	char arrow=0;
	arrow =kbhit();
	while(arrow!=13)
	{
		arrow =getch();
		switch(arrow)
		{
			case CPPKEYLEFT:if(i>0)
					{
						i-=1;
						gotoxy(16,11);
						cout<<arr[i];
					}
					else
					{
						gotoxy(16,11);
						cout<<arr[0];
					}
					break;
			case CPPKEYRIGHT:i+=1;
					gotoxy(16,11);
					cout<<arr[i];
					if(i>9)
					{
						i=0;
						gotoxy(16,11);
						cout<<arr[i]<<" ";
					}
					break;
			case ENTER:b=arr[i];
				   gotoxy(16,12);
				   textcolor(1);
				   cprintf("YOU ASKED FOR SEATS:-");
				   cout<<" "<<b;
				   clrscr();
				   ran.seat_design();
		}
	}

}
void casecity()
{
	_setcursortype(_NORMALCURSOR);
	bookticket();
	int n;
	gotoxy(16,22);
	cout<<"Select City:-";
	gotoxy(10,23);
	cout<<"(use no keys from 1-50)";
	cin>>n;
	switch(n)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:clrscr();
			load.border();
			x2.s_cinema();
			for(int i=10;i<70;i++)
			{
				gotoxy(i,4);
				cout<<"-";
				if((i==34)||(i==44))
				{
					gotoxy(i,4);
					cout<<"x";
				}
			}
			gotoxy(35,3);
			cout<<"-:Select Cinema:-";
			gotoxy(40,18);
			cout<<"(use no keys from 1-4)";
			int cn;
			cin>>cn;
			switch(cn)
			{
				case 1:
				case 2:
				case 3:
				case 4:	clrscr();
					load.border();
					for(int i=10;i<70;i++)
					{
						gotoxy(i,4);
						cout<<"-";
						if((i==34)||(i==44))
						{
							gotoxy(i,4);
							cout<<"x";
						}
					}
					gotoxy(32,3);
					cout<<"TODAY'S TOP GROSSING"<<endl;
					call();
					gotoxy(45,17);
					cout<<"YOUR MOVIE:";
					gotoxy(40,18);
					cout<<"(use no keys from 1-4):";
					int mov;
					cin>>mov;
					switch(mov)
					{
						case 1:
						case 2:
						case 3:
						case 4:clrscr();
							gotoxy(32,3);
							cout<<"Personal Info"<<endl;
							for(int i=10;i<70;i++)
							{
								gotoxy(i,4);
								cout<<"-";
								if((i==34)||(i==44))
								{
									gotoxy(i,4);
									cout<<"x";
								}
							}
							pri.info_w();
							getch();
							s_stime();
							gotoxy(45,17);
							cout<<"Select Show Timings:-";
							gotoxy(40,18);
							cout<<"(use no keys from 1-5):";
							int s_time;
							cin>>s_time;
							switch(s_time)
							{
								case 1:
								case 2:
								case 3:
								case 4:
								case 5:clrscr();
								       in_sno();
								       break;
					}               }
			}

	}
}
void seats::control(int p1[],int p2[],int p3[],int p4[],int p5[],int p6[])
{
	const char up=72;
	const char left=75;
	const char right=77;
	const char down=80;
	char control=0;
	control=kbhit();
	gotoxy(4,3);
	int a=4,bt,at,b=3,c=78,d=18,g=76,h=74,i,j,k,l;
	i=b+1;
	k=a-1;
	while(control!=13)
	{
		control=getch();
		if(control==up)
		{
			if(b<=j&&j>3&&b>3)
			{
				b-=1;
				i-=1;
				if(b<8)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				else if(b>9&&b<14)
				{
					if(a==4)
					{
						at=a+2;
						gotoxy(at,b);
						textcolor(1);
						cprintf("Ü");
					}
					else
					{
						gotoxy(a,b);
						textcolor(1);
						cprintf("Ü");
					}
				}
				else if(b>15&&b<19)
				{
					if(a==4)
					{
						gotoxy(4,23);
						bt=a+4;
						gotoxy(9,22);
						cout<<"bt:"<<bt;
						gotoxy(bt,b);
						textcolor(1);
						cprintf("Ü");
					}
					else
					{
						gotoxy(a-1,b);
						textcolor(1);
						cprintf("Ü");
					}
				}
				j-=1;
			}
		}
		if(control==down)
		{
			if(b>=3&&b<=i&&i<=d)
			{
				j=b+1;
				if(b<8)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				else if(b>9&&b<14)
				{
					if(a==4)
					{
						at=a+2;
						gotoxy(at,b);
						textcolor(1);
						cprintf("Ü");
					}
					else if(a==76)
					{
						at=a-2;
						gotoxy(at,b);
						textcolor(1);
						cprintf("Ü");
					}
					else
					{
						gotoxy(a,b);
						textcolor(1);
						cprintf("Ü");
					}
				}
				else if(b>15&&b<19)
				{
					if(a==4)
					{
						gotoxy(4,23);
						bt=a+4;
						gotoxy(9,22);
						cout<<"bt:"<<bt;
						gotoxy(bt,b);
						textcolor(1);
						cprintf("Ü");
					}
					else if(a==76)
					{
						bt=a-4;
						gotoxy(bt,b);
						textcolor(1);
						cprintf("Ü");

					}
					else
					{
						gotoxy(a,b);
						textcolor(1);
						cprintf("Ü");
					}
				}
				b+=1;
				i+=1;
			}
		}
		if(control==right)
		{
			l=a+1;
			if(a>=k&&a<h||a<g||a<c)
			{
				if(a==40)
				{
					a+=2;
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				else if(b>9&&b<14)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				else if(b>15&&b<19)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");

				}
				else if(b<8)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				  }
				a+=2;
				k+=2;
			}
		}
		if(control==left)
		{
			if(a<=c&&l>7||l>5||l>3)
			{
				if(a==40)
				{
					a-=2;
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				else if(b>9&&b<14)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				else if(b>15&&b<19)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				else if(b<8)
				{
					gotoxy(a,b);
					textcolor(1);
					cprintf("Ü");
				}
				a-=2;
				l-=2;
			}
		}
	 }
	 gotoxy(16,22);
	 cout<<"press any key";
	 clrscr();
}
int p=-1,q=-1,r=-1;
int seats::s_silv()
{
       int a,j,r,s,ar1[2];
	for(int i=4;i<=4;i++)
	{

			j=random(3)+16;
			ar1[0]=j;
			g:
			a=random(65)+8;
			if(a%2==0){ar1[1]=a;}
			else goto g;
			if(a==40)
				continue;
			gotoxy(a,j);
			textcolor(4);
			cprintf("Ü");
			cout<<endl;
	}
	p++;
	return ar1[p];
}
int seats::s_gold()
{
	int a,j,r,s,ar2[2];
	for(int i=4;i<6;i++)
	{

			j=random(4)+10;
			ar2[0]=j;
			g:
			a=random(70)+6;
			if(a%2==0){ar2[1]=a;}
			else goto g;
			if(a==40)
				continue;
			gotoxy(a,j);
			textcolor(4);
			cprintf("Ü");
			cout<<endl;
	}
	q++;
	return ar2[q];
}
int seats::s_plat()
{
	int a,j,r,s,ar3[2];
	for(int i=0;i<2;i++)
	{

			j=random(5)+3;
			ar3[0]=j;
			g:
			a=random(74)+4;
			if(a%2==0){ar3[1]=a;}
			else goto g;
			if(a==40)
				continue;
			gotoxy(a,j);
			textcolor(4);
			cprintf("Ü");
			cout<<endl;
	}
	r++;
	return ar3[r];
}
void seats::seat_design()
{
	int p1[40],p2[40],p3[40],p4[40],p5[40],p6[40];
	clrscr();
	gotoxy(2,2);
	textcolor(24+BLINK);
	cprintf("PLATINUM:");
	randomize();
	int arr1[2];
	for(int s=0;s<5;s++)   //5 rows                         //platinum
	{
		for(int c=4,a1=0;c<78;c+=2,a1++)
		{
			if(c==40)
			continue;
			gotoxy(c,s+3);
			cout<<"Ü";
			for(int z=0;z<2;z++)
				arr1[z]=s_plat();
			p1[a1]=arr1[0];
			p2[a1]=arr1[1];
		}                                              //platinum
	}
	gotoxy(2,9);
	textcolor(14+BLINK);
	cprintf("GOLD:");
	int arr2[2];
	for(int j=10;j<14;j++)          //4-rows  //gold
	{
		for(int k=6,a2=0;k<76;k+=2,a2++)
		{
			if(k==40)
				continue;
			gotoxy(k,j);
			cout<<"Ü";
			for(int y=0;y<2;y++)
				arr2[y]=s_gold();
			p3[a2]=arr2[0];
			p4[a2]=arr2[1];
		}                               //gold
	}
	gotoxy(2,15);
	textcolor(7+BLINK);
	cprintf("SILVER:");
	int arr3[2];
	for(int l=16;l<19;l++)                            //silver
	{
		for(int m=8,a3=0;m<74;m+=2,a3++)
		{
		if(m==40)
				continue;
			gotoxy(m,l);
			cout<<"Ü";
			for(int x=0;x<2;x++)
			arr3[x]=s_silv();
			p5[a3]=arr3[0];
			p6[a3]=arr3[1];
		}
	}
	control(p1,p2,p3,p4,p5,p6);
	delay(808);
	pay.show_pay();
}
void payment::show_pay()
{       int k;
	gotoxy(32,3);
	cout<<"Payment Choice";
	for(int i=10;i<70;i++)
	{
		gotoxy(i,4);
		cout<<"-";
		if((i==34)||(i==44))
		{
			gotoxy(i,4);
			cout<<"x";
		}
	}
	gotoxy(17,5);
	cout<<"1.By credit card";
	gotoxy(17,7);
	cout<<"1.By netbanking";
	gotoxy(22,17);
	cout<<"Enter the choice";
	cin>>k;
	switch(k)
	{
		case 1: clrscr();
			pay.credit();
			break;
		case 2: clrscr();
			pay.netbanking();
			break;
	}
}
void payment::condition_1(int len)
{
	for(int i=0;i<len;i++)
	{
		if(!isdigit(card_no[i]))
		{	uk=1;
			gotoxy(67,5);
			textcolor(4);
			cprintf("wrong input");
			delay(400);
			gotoxy(66,5);
			textcolor(16);
			cprintf("                        ");
			gotoxy(27,5);
			textcolor(16);
			cprintf("                                ");
		}
	}

}
void payment::condition_2(int len)
{
	for(int i=0;i<len;i++)
	{
		if(i==2)
			continue;
		if(!isdigit(date[i]))
		{	uk=1;
			gotoxy(67,9);
			textcolor(4);
			cprintf("wrong input");
			delay(400);
			gotoxy(67,9);
			textcolor(16);
			cprintf("                         ");
			gotoxy(30,9);
			textcolor(16);
			cprintf("                                ");
		}
	}

}
void payment::condition_3(int len)
{
	for(int i=0;i<len;i++)
	{
		if(!isdigit(cvv[i]))
		{	uk=1;
			gotoxy(67,12);
			textcolor(4);
			cprintf("wrong input");
			delay(400);
			gotoxy(66,12);
			textcolor(16);
			cprintf("                        ");
			gotoxy(22,12);
			textcolor(16);
			cprintf("                              ");
		}
	}
}
void payment::condition_4(int len)
{
	for(int i=0;i<len;i++)
	{
		if(!isalpha(card_name[i]))
		{	uk=1;
			gotoxy(67,17);
			textcolor(4);
			cprintf("wrong input");
			delay(400);
			gotoxy(66,17);
			textcolor(16);
			cprintf("                        ");
			gotoxy(42,15);
			textcolor(16);
			cprintf("                                 ");
			gotoxy(42,17);
			textcolor(16);
			cprintf("                                 ");
		}
	}
}
void payment::condition_5(int len)
{
	for(int i=0;i<len;i++)
	{
		if(!isdigit(id[i]))
		{	uk=1;
			gotoxy(67,5);
			textcolor(4);
			cprintf("wrong input");
			delay(400);
			gotoxy(66,5);
			textcolor(16);
			cprintf("                        ");
			gotoxy(27,5);
			textcolor(16);
			cprintf("                                 ");
		}
	}
}
void payment::condition_6(int len)
{
	for(int i=0;i<len;i++)
	{
		if(!isdigit(pin[i]))
		{	uk=1;
			gotoxy(67,8);
			textcolor(4);
			cprintf("wrong input");
			delay(400);
			gotoxy(66,8);
			textcolor(16);
			cprintf("                        ");
			gotoxy(22,8);
			textcolor(16);
			cprintf("                                 ");
		}
	}
}
void payment::net_data()
{	tk:
	gotoxy(16,5);
	cout<<"ID NUMBER:-";
	gotoxy(28,5);
	textcolor(4);
	cscanf("%s",id);
	tk=strlen(id);
	condition_5(tk);
	if(uk==1)
	{      	uk=0;
		goto tk;
	}
	if(tk!=16)
	{
		gotoxy(67,5);
		textcolor(4);
		cprintf("wrong input");
		delay(400);
		gotoxy(27,5);
		textcolor(16);
		cprintf("                                        ");
		gotoxy(66,5);
		textcolor(16);
		cprintf("                        ");
		goto tk;
	}
	else
	{
		gotoxy(28,5);
		textcolor(10);
		cprintf("%s",id);
	}
	pk:
	gotoxy(16,8);
	cout<<"PIN:-";
	gotoxy(22,8);
	textcolor(4);
	cscanf("%s",pin);
	pk=strlen(pin);
	condition_6(pk);
	if(uk==1)
	{      	uk=0;
		goto pk;
	}
	if(pk!=4)
	{
		gotoxy(67,8);
		textcolor(4);
		cprintf("wrong input");
		delay(400);
		gotoxy(22,8);
		textcolor(16);
		cprintf("                                        ");
		gotoxy(66,8);
		textcolor(16);
		cprintf("                        ");
		goto pk;
	}
	else
	{
		gotoxy(22,8);
		textcolor(10);
		cprintf("%s",pin);
	}
	load.loading();
	clrscr();
	delay(999);
	tick.tick_look();
	delay(1500);
	exit(0);
}
void payment::netbanking()
{       bk:
	gotoxy(30,3);
	cprintf("netbanking gateways");
	for(int i=10;i<70;i++)
	{
		gotoxy(i,4);
		cout<<"-";
		if((i==34)||(i==44))
		{
			gotoxy(i,4);
			cout<<"x";
		}
	}
	textcolor(4);
	gotoxy(20,5);
	puts("1.KOTAK BANK");
	gotoxy(20,7);
	puts("2.HDFC BANK");
	gotoxy(20,9);
	puts("3.CITI BANK");
	gotoxy(20,11);
	puts("4.IDBI BANK");
	gotoxy(16,20);
	cout<<"ENTER OUR CHOICE:-";
	gotoxy(35,20);
	cin>>c;
	switch(c)
	{
		case 1: clrscr();
			net_data();
			break;
		case 2: clrscr();
			net_data();
			break;
		case 3: clrscr();
			net_data();
			break;
		case 4: clrscr();
			net_data();
			break;
		default:clrscr();
			cprintf("wrong input");
			goto bk;
			break;
	}
}
void payment::credit()
{
	int k=0,kb=0,kbc=0,yu=0;
	gotoxy(30,3);
	cprintf("Debit/Credit Card INFO");
	for(int i=10;i<70;i++)
	{
		gotoxy(i,4);
		cout<<"-";
		if((i==34)||(i==44))
		{
			gotoxy(i,4);
			cout<<"x";
		}
	}
	r:
	gotoxy(16,5);
	cout<<"Card no.:-";
	gotoxy(27,5);
	highvideo();
	textcolor(4);
	cscanf("%s",card_no);
	k=strlen(card_no);
	textcolor(14);
	condition_1(k);
	if(uk==1)
	{      	uk=0;
		goto r;
	}
	if(k!=16)
	{
		gotoxy(67,5);
		textcolor(4);
		cprintf("wrong input");
		delay(400);
		gotoxy(27,5);
		textcolor(16);
		cprintf("                                        ");
		gotoxy(66,5);
		textcolor(16);
		cprintf("                        ");
		goto r;
	}
	else
	{
		gotoxy(27,5);
		textcolor(10);
		cprintf("%s",card_no);
	}
	kb:
	gotoxy(16,9);
	cout<<"Expiry date:-";
	gotoxy(16,10);
	cout<<"[mm/yyyy]";
	gotoxy(30,9);
	textcolor(4);
	cscanf("%s",date);
	kb=strlen(date);
	condition_2(kb);
	if(uk==1)
	{      	uk=0;
		goto kb;
	}
	if(kb!=7)
	{
			gotoxy(67,9);
			textcolor(4);
			cprintf("wrong input");
			delay(400);
			gotoxy(67,9);
			textcolor(16);
			cprintf("                         ");
			gotoxy(30,9);
			textcolor(16);
			cprintf("                                ");
			goto kb;
	}
	else
	{
		   gotoxy(30,9);
		   textcolor(10);
		   cprintf("%s",date);
	}
	kbc:
	gotoxy(16,12);
	cout<<"CVV:-";
	gotoxy(22,12);
	textcolor(4);
	cscanf("%s",cvv);
	kbc=strlen(cvv);
	condition_3(kbc);
	if(uk==1)
	{      	uk=0;
		goto kbc;
	}
	if(kbc!=3)
	{
		gotoxy(67,12);
		textcolor(4);
		cprintf("wrong input");
		delay(400);
		gotoxy(22,12);
		textcolor(16);
		cprintf("                     ");
		gotoxy(67,12);
		textcolor(16);
		cprintf("               ");
		goto kbc;
	}
	else
	{
		gotoxy(22,12);
		textcolor(10);
		cprintf("%s",cvv);
	}
	dk:
	gotoxy(16,14);
	cout<<"name in a card:-";
	gotoxy(24,15);
	cout<<"Enter first name:";
	textcolor(10);
	cscanf("%s",c_1);
	gotoxy(24,17);
	cout<<"Enter last name:";
	gotoxy(42,17);
	textcolor(10);
	cscanf("%s",c_2);
	strcpy(card_name,c_1);
	strcat(card_name,blank);
	strcat(card_name,c_2);
	dk=strlen(card_name);
	condition_4(dk);
	if(uk==1)
	{      	uk=0;
		goto dk;
	}
	load.loading();
	clrscr();
	delay(990);
	tick.tick_look();
	delay(1500);
	exit(0);
}
void ticket::tick_look()
{
	for(int i=8;i<70;i++)     //top& down
	{
		gotoxy(i,3);
		cout<<"Ä";
		gotoxy(i,19);
		cout<<"Ä";
	}
	for(int j=3,n=17;j<=5;j++,n++)          //vert
	{
		gotoxy(70,j);
		cout<<"*";
		gotoxy(70,n);
		cout<<"*";
		gotoxy(7,j);
		cout<<"*";
		gotoxy(7,n);
		cout<<"*";
	}                            //     "    ³  "
	for(int k=70,o=3;k<75;k+=2,o+=2)          //hori
	{
		gotoxy(k,5);
		cout<<"*";
		gotoxy(o,5);
		cout<<"*";
		gotoxy(k,17);
		cout<<"*";
		gotoxy(o,17);
		cout<<"*";
	}
	for(int l=6,a=3;l<17;l++,a++)       // right %left
	{
		gotoxy(74,l);
		cout<<"³";
		gotoxy(3,l);
		cout<<"³";
	}
	gotoxy(44,9);
	cout<<"  *********      *********";
	gotoxy(44,10);
	cout<<"***       *      *       ***";
	gotoxy(44,11);
	cout<<"* *       ********       * *";
	gotoxy(44,12);
	cout<<"***       *      *       ***";
	gotoxy(44,13);
	cout<<"  *********      *********";

	gotoxy(18,7);
	cout<<"movie name:-";
	gotoxy(18,9);
	cout<<"price:-";
	gotoxy(18,11);
	cout<<"date:-";
	gotoxy(18,13);
	cout<<"code:-";
	tick.ticket_view();
}
void ticket::display()
{
	gotoxy(31,7);
	puts(name);
	gotoxy(25,9);
	cout<<240;
	gotoxy(25,13);
	cout<<n<<"#";
	gotoxy(25,11);
	cout<<date<<" /"<<month<<"/"<<year;
}
void ticket::ticket_view()
{
	fstream f;
	f.open("personal.dat",ios::binary|ios::in);
	f.seekg(0);
	while(f.read((char*)&tick,sizeof(tick)))
	{
		tick.display();
	}
	f.close();
}
void main()
{
	clrscr();
	load.home();
	delay(900);
	load.designed();
	delay(900);
	load.menu();
	getch();
}
