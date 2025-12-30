// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    
    cin.get();
    cin.get();
    cin.get();
    
 string grade[]={ "A","B+","B","C+","C","D+","D","F","W"};
 int lucky = rand()%9;
 
    cout<<"You will get " << grade[lucky] << " in this 261102."<<endl;
    
    return 0;
    
}