#include<iostream>
#include<string>
using namespace std;

struct aman{
    string name;
    int babu;
    aman(string lame, int count ){
        name=lame;
        babu=count;
    }
};
// operator overloading 
// void operator << (ostream& COUT, aman& stru){
ostream& operator << (ostream& COUT, aman& stru){   //using as constructor
    COUT << "Name-"<<stru.name<<endl;
    COUT << "num "<<stru.babu<<endl;
}
int main(){
    aman yt = aman("beautiful", 50);
    // cout << yt;
    operator<<(cout , yt);//overloading the operator
   
    cin.get();
    return 0;
}
