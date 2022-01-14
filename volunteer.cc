#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
struct eve
{
int maxpart;
char name[50],venue[75],date[30],info[200];
};

struct volunteer
{
char firstname[50];
int age;
};
void main()
{
clrscr();
int i,n,m,age,a;
struct eve e[10];
struct volunteer v[1];
char ch,ch1;
char chosen[100],name[100],del[100],venue[75],date[30],info[200];
char random[5]=" ";
cout<<"VOLUNTEERING PROGRAM";
cout<<"\n 1. Add an event";
cout<<"\n 2. Delete an event";
cout<<"\n 3. Join an event";
cout<<"\n 4. View an event";
do
{
cout<<"\n Enter a choice (1-4)";
cin>>ch;
switch(ch)
{
case'1':
cout<<"Enter number of events you want to add: ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"\nEnter name of event "<<i<<" ";
gets(e[i].name);
cout<<"\nEnter maximum number of participants "<<i;
cin>>e[i].maxpart;
cout<<"\nEnter venue "<<i;
gets(e[i].venue);
cout<<"\nEnter date and time "<<i;
gets(e[i].date);
cout<<"\nAdditional information "<<i;
gets(e[i].info);
}
break;
case'2':cout<<"Enter name of event you want to delete";
cin>>del[100];
if(del[1]==name[1])
{
for(i=1;i<=1;i++)
{
e[i].name[100]=random[5];
e[i].venue[75]=random[5];
e[i].date[30]=random[5];
e[i].info[200]=random[5];
cout<<"Event has been deleted";
}
break;
}

case'3':
cout<<"Enter name of event you want to join";
cin>>chosen[100];
cout<<"\n";
if(chosen[1]==name[1])
{
for(i=1;i<=1;i++)
{
cout<<"Enter name\n";
gets(v[i].firstname);
cout<<"You have succesfully joined the event";
}
break;
}


case'4':
cout<<"Enter number of the event you want to view";
cin>>i;
do
{
cout<<"\n ********************************";
cout<<"\n Displaying information";
cout<<"\nname of event\n";
puts(e[i].name);
cout<<"\n maximum number of participants\n";
cout<<e[i].maxpart;
cout<<"\nEnter venue\n";
puts(e[i].venue);
cout<<"\nEnter date and time\n";
puts(e[i].date);
cout<<"\nAdditional information\n";
puts(e[i].info);
for(i=1;i<=1;i++)
{
cout<<"Details of participants name and age: ";
puts(v[i].firstname);
}
cout<<"Which event number you want to view, enter 0 to enter a new option: ";
cin>>i;
}
while(i!=0);
break;
}

cout<<"\n Want to enter one more (y/n)? ";
cin>>ch1;

}
while(ch1=='y'||ch1=='Y');
getch();
}