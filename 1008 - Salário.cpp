#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int n_func, horas_trabalhadas;
    double valor_hora, salario;
    
    cin >> n_func;
    cin >> horas_trabalhadas;
    cin >> valor_hora;
    salario = horas_trabalhadas*valor_hora;
    
    cout << "NUMBER = " << n_func << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << "\n";
    
 
    return 0;
}
