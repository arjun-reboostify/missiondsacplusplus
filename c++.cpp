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

void operator << (ostream& COUT, aman& stru){
    COUT << "Name-"<<stru.name<<endl;
    COUT << "num "<<stru.babu<<endl;
}
int main(){
    aman yt = aman("beautiful", 50);
    cout << yt;
    cin.get();
    return 0;
}
