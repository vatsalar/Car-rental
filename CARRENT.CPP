
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<fstream.h>
#include<dos.h>
#include<iomanip.h>
class rent_amt
{
	int days;
	char name[20];
	char c;
	public:
	void rent()
	{
		fstream of;
		int n,i;
		char s[100];
		char date[20];
		int count=0;
		while(count<1)
		{
			cout<<"\n\t\t\t\t1.HYUNDAI ELANTRA";
			cout<<"\n\t\t\t\t2.RENAULT KWID";
			cout<<"\n\t\t\t\t3.VOLKSWAGON VENTO";
			cout<<"\n\t\t\t\t4.EXIT";
			cout<<"\n\t\t\t\tENTER YOUR CHOICE:";
			cin>>n;
			switch(n)
			{
				case 1:clrscr();
				       of.open("ELANTRA.txt",ios::in);
				       while(of.eof()==0)
				       {
				       of>>s;
				       cout<<s<<" ";
				       }
				       cout<<"\n";
				       of.close();
				       cout<<"\nEnter 1 to return to the main menu else enter 0:";
				       cin>>i;
				       if(i==1)
				       {
				       clrscr();
				       continue;
				       }
				       else
				       {
				       count++;
				       clrscr();
				       cout<<"\n\t\t\t\tENTER YOUR NAME:";
				       gets(name);
				       fflush(stdin);
				       cout<<"\n\t\tEnter the number of days for which you want to rent the car:";
				       cin>>days;
				       fflush(stdin);
				       cout<<"\n\t\tEnter the date of pick-up:";
				       gets(date);
				       cout<<"Generating Invoice.........";
				       sleep(4);
				       clrscr();
				       invoice(days,name,7000,date);
				       }
				       break;
				case 2:clrscr();
				       of.open("KWID.txt",ios::in);
				       while(of.eof()==0)
				       {
				       of>>s;
				       cout<<s<<" ";
				       }
				       cout<<"\n";
				       of.close();
				       cout<<"\nEnter 1 to return to the main menu else enter 0:";
				       cin>>i;
				       if(i==1)
				       {
				       clrscr();
				       continue;
				       }
				       else
				       {
				       clrscr();
				       count++;
				       cout<<"\n\t\t\t\tENTER YOUR NAME:";
				       gets(name);
				       fflush(stdin);
				       cout<<"\n\t\tEnter the number of days for which you want to rent the car:";
				       cin>>days;
				       fflush(stdin);
				       cout<<"\n\t\tEnter the date of pick-up:";
				       gets(date);
				       cout<<"Generating Invoice.........";
				       sleep(4);
				       clrscr();
				       invoice(days,name,2500,date);
				       }
				       break;
				case 3:clrscr();
				       of.open("VENTO.txt",ios::in);
					  while(of.eof()==0)
				       {
				       of>>s;
				       cout<<s<<" ";
				       }
				       cout<<"\n";
				       of.close();
				       cout<<"\nEnter 1 to return to the main menu else enter 0:";
				       cin>>i;
				       if(i==1)
				       {
				       clrscr();
				       continue;
				       }
				       else
				       {
				       clrscr();
				       count++;
				       cout<<"\n\t\t\t\tENTER YOUR NAME:";
				       gets(name);
				       fflush(stdin);
				       cout<<"\n\t\tEnter the number of days for which you want to rent the car:";
				       cin>>days;
				       fflush(stdin);
				       cout<<"\n\t\tEnter the date of pick-up:";
				       gets(date);
				       cout<<"Generating Invoice.........";
				       sleep(4);
				       clrscr();
				       invoice(days,name,5000,date);
				       }
				       break;
				case 4:exit(0);
				default:cout<<"\n\t\t\t\tINVALID CHOICE";
			}
		}
		}
void invoice(int days,char name[],int amt,char date[])
{
cout<<"\n\n\n\t\t\t\tCUSTOMER INVOIVE";
cout<<"\n\t\t/////////////////////////////////////////////////";
cout<<"\n\t\t|Invoivce number:----------------------|"<<setw(10)<<"#######"<<"|";
cout<<"\n\t\t|Customer Name:------------------------|"<<setw(10)<<name<<"|";
cout<<"\n\t\t|Number of days:-----------------------|"<<setw(10)<<days<<"|";
cout<<"\n\t\t|Pick-up date:-------------------------|"<<setw(10)<<date<<"|";
cout<<"\n\t\t|Rental amount:------------------------|"<<setw(10)<<(days*amt)<<"|";
cout<<"\n\t\t_______________________________________________";
cout<<"\n\t\t#This is a computer generated invoice and it does not \n\t\t\trequire an authorised signature#";
cout<<"\n\t\t//////////////////////////////////////////////////";
cout<<"\n\t\tYou are advised to pay up the amout before due date.\n\t\t\tOtherwise penalty fee will be applied";
cout<<"\n\t\t//////////////////////////////////////////////////";
return;
}

};
class login_system:private rent_amt
{
	char user_name[15];
	char password[7];
	char us_name[30],pwd[30];
	public:
	void login()
	{
		char ch;
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tLOGIN DETAILS"<<endl;
		cout<<"\t\t\t--------------------------------";

		cout<<"\n\t\t\t\tUSERNAME:";
		gets(us_name);
		if(strcmp(us_name,"vidhi21_08")==0)
		{
			cout<<"\n\t\t\t\tPASSWORD:";
			gets(pwd);

			if(strcmp(pwd,"vidhi21")==0)
			{
				cout<<"\n\t\t\t\tACCESS GRANTED";
				cout<<"\n\t\t\t\t--------------------------------";
					system("cls");
				rent();
			}
			else
			{
			cout<<"\n\t\t\t\tINVALID PASSWORD";
			cout<<"\n\t\t\t--------------------------------";
			}
			}
			else
			{
			cout<<"\n\t\t\t\tINVALID USERNAME";
			cout<<"\n\t\t\t--------------------------------";
			}

		}
	};

void main()
{
clrscr();
int d=0,m,x;
int maxx,maxy,i;
int poly[30];
int gdriver=DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI ");
errorcode=graphresult();
if(errorcode!=grOk)
{
printf("Graphics error:%s\n",grapherrormsg(errorcode));
printf("Press any key to halt:");
getch();
exit(1);
}
cleardevice();
settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
outtextxy(180,30,"WELCOME");
outtextxy(260,110,"TO");
outtextxy(-2,190,"CAR RENTAL SERVICE");
poly[0]=250;
poly[1]=310;
poly[2]=400;
poly[3]=310;
poly[4]=500;
poly[5]=380;
poly[6]=550;
poly[7]=380;
poly[8]=550;
poly[9]=440;
poly[10]=500;
poly[11]=440;
poly[12]=100;
poly[13]=440;
poly[14]=100;
poly[15]=380;
poly[16]=180;
poly[17]=380;
poly[18]=270;
poly[19]=340;
poly[20]=320;
poly[21]=340;
poly[22]=poly[0];
poly[23]=poly[1];
setfillstyle(SOLID_FILL,0);
fillpoly(10,poly);
setfillstyle(WIDE_DOT_FILL,6);
arc(200,440,180,0,30);
arc(200,440,180,0,15);
arc(450,440,180,0,30);
arc(450,440,180,0,15);
floodfill(0,0,15);
getch();
//clrscr();
cleardevice();
setfillstyle(XHATCH_FILL,getmaxcolor());
bar(50,50,750,100);
x=0;
line(0,400,639,400);
line(50+x,370,90+x,370);
arc(110+x,370,0,180+x,20);
line(130+x,370,220+x,370);
arc(240+x,370,0,180+x,20);
line(260+x,370,300+x,370);
line(300+x,370,300+x,350);
line(300+x,350,240+x,330);
line(240+x,330,200+x,300);
line(200+x,300,110+x,300);
line(110+x,300,80+x,330);
line(80+x,330,50+x,340);
line(50+x,340,50+x,370);
line(165+x,305,165+x,330);
line(165+x,330,230+x,330);
line(230+x,330,195+x,305);
line(195+x,305,165+x,305);
circle(110+x,370,17);
circle(240+x,370,17);
delay(10);
login_system l1;
l1.login();
line(0,400,639,400);
line(50+x,370,90+x,370);
arc(110+x,370,0,180+x,20);
line(130+x,370,220+x,370);
arc(240+x,370,0,180+x,20);
line(260+x,370,300+x,370);
line(300+x,370,300+x,350);
line(300+x,350,240+x,330);
line(240+x,330,200+x,300);
line(200+x,300,110+x,300);
line(110+x,300,80+x,330);
line(80+x,330,50+x,340);
line(50+x,340,50+x,370);
line(165+x,305,165+x,330);
line(165+x,330,230+x,330);
line(230+x,330,195+x,305);
line(195+x,305,165+x,305);
circle(110+x,370,17);
circle(240+x,370,17);
delay(10);
getch();
closegraph();
}

