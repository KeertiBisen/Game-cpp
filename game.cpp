#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand(time(0));
int userchoice;
int computerchoice= rand () % 3;
cout<<"Welcome to the Rock,Paper,Scissor game!"<<endl;
cout<<"Enter 0 for Rock,1 for Paper, 2 for Scissor"<<endl;
cin>>userchoice;
cout<<"You chose: "<<endl;
if(userchoice==0)
{  cout<<"Rock"<<endl; }
    else if(userchoice==1)
 {
      cout<<"Paper"<<endl;
 }
    else if(userchoice==2)
{
    cout<<"Scissor"<<endl;
}
else {
    cout<<"Invalid choice"<<endl;
}
cout<<"Computer chose : "<<endl;
if(computerchoice ==0){
    cout<<"Rock"<<endl;
}
else if(computerchoice==1){
    cout<<"Paper"<<endl;
}
else{
    cout<<"Scissor"<<endl;
}
if(userchoice==computerchoice)
{
    cout<<"Its a tie!"<<endl;
}
else if((userchoice==0&&computerchoice==2)||(userchoice==1&&computerchoice==0)||(userchoice==1 && computerchoice==2))
{
    cout<<"Congratulation! You win."<<endl;
}
else{
    cout<<"Ooooooops you lose! Computer wins."<<endl;
}
return 0;
}
