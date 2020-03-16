#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int a;
    int b;

    cin >> a >> b;

    int s, l;
    s = a * b;
    l = 2 * (a + b);

    cout << s << " " << l << endl;

    return 0;
}