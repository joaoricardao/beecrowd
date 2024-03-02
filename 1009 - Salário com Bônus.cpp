#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    string nome;
    double salario, total_vendas, total, comissao;
    
    cin >> nome;
    cin >> salario;
    cin >> total_vendas;
    
    total = salario + (total_vendas*0.15);
    
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << "\n";
    
    return 0;
}
