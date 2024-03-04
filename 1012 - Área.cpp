#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
  double A, B, C;
  cin >> A >> B >> C;
  double area_triangulo = (A*C)/2;
  double area_circulo=3.14159*C*C;
  double area_trapezio=((A+B)*C)/2;
  double area_quadrado=B*B;
  double area_retangulo=A*B;
  
  cout << "TRIANGULO: " << fixed << setprecision(3) << area_triangulo << "\n";
  cout << "CIRCULO: " << fixed << setprecision(3) << area_circulo << "\n";
  cout << "TRAPEZIO: " << fixed << setprecision(3) << area_trapezio << "\n";
  cout << "QUADRADO: " << fixed << setprecision(3) << area_quadrado << "\n";
  cout << "RETANGULO: " << fixed << setprecision(3) << area_retangulo << "\n";
  
 
    return 0;
}
