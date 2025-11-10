#include <iostream>
using namespace std;
int main () {
    int day;

    cout<<"Enter the day ====>";
    cin>>day;

if (day==1 || day==2|| day==3|| day==4|| day==5) {
    cout<<"weekday"<<endl;
} else if (day==0 || day==6) {
    cout<<"weekend"<<endl;
} else {
    cout<<"invalid input"<<endl;
}
    return 0;
    
    
    
    

}
