// hello its me Abbde Selam Taleb 
// this is the solution of exercice
#include <iostream>
using namespace std;
int main(){
    // i take s=165000 just for example like a salarie
    float S=165000;
    //and this its the supplement salarie
    float S_supp=0;
    int y;//ans this one its how many years his work in our company 
    string rank;// his rank lik boss,greated in high school,or,hight education
    cout<<" how many years you work in this company:";
    cin>>y;
    if(y>=1 && y<=5){
 S_supp=S_supp+(S*10)/100;
     }else if(y>=6){
        S_supp=S_supp+(S*15)/100;
     }
 cout<<"select your rank:boss,hight.education,graduate.school:";
 cin>>rank;
 if(rank=="boss"){
    S_supp=S_supp+(S*10)/100;
 }else if(rank=="hight.education"){
        S_supp=S_supp+(S*5)/100;
 }else if(rank=="graduate.school"){
    S_supp=S_supp+(S*12)/100;
 }else{
    cout<<"???error***??write or choose the correct rank";
 }
 cout<<S_supp;
 return 0;
}
// thank you for  attention

