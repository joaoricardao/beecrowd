#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double raio, area;

    cin >> raio;

    area = 3.14159 * raio * raio;

    cout << "A=" << fixed << setprecision(4) << area << "\n";

    return 0;
}
