#include <iostream>
#include <iomanip> // Para usar setprecision
using namespace std;

int main() {
    int codigo_peca1, num_peca1, codigo_peca2, num_peca2;
    double valor_unitario_peca1, valor_unitario_peca2;

    cin >> codigo_peca1 >> num_peca1 >> valor_unitario_peca1;
    cin >> codigo_peca2 >> num_peca2 >> valor_unitario_peca2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << (num_peca1 * valor_unitario_peca1) + (num_peca2 * valor_unitario_peca2) << "\n";

    return 0;
}
