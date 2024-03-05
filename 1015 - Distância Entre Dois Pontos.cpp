#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
 
    double x1, x2, y1, y2, distancia;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    
    distancia =pow((((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))),0.5);
    
    cout << fixed << setprecision(4) << distancia << "\n";
 
    return 0;
}
