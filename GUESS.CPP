#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

int main()
{ system("cls");
char ch;
cout<<"*******Lets play a guessing game*******\n";
int input;
do{
cout<<"Enter a number between 0 to 10";
cin>>input;
if(input>10)
{cout<<"You have entered the number in not the given range";
break;
}
if(input==random(11)){
cout<<"You are Correct\n want to play again then enter Y/N";
}
else{
cout<<"You have entered wrong number\nwant to play again then enter Y/N";
}
cin>>ch;


}while (ch=='Y');
getch();
}

