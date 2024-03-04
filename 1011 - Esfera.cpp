#include <iostream>
#include <cmath> 
using namespace std;
 
int main() {
    int a, b, c;
    int maior_1=(a+b+abs(a-b))/2;
    int maior_2=(maior_1+c+abs(maior_1-c))/2;
    
    cout << maior_2 << " eh o maior\n";
    
 
    return 0;
}
