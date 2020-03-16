#include <iostream>
using namespace std;

int main(){
    
    int seconds;
    cin >> seconds;

    int s, m, h;

    h = seconds/3600;
    m = seconds/60 - h*60;
    s = seconds - m * 60 - h*3600;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}