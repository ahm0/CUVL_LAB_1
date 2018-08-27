#include <iostream>

#define CANTIDAD 10

using namespace std;

int main()
{
    int i=0;
    int suma=0;
    for(i=1; i <= CANTIDAD; i++){
        cout << "Número: " << i << endl;
        suma = suma + i;
    }
    cout << "La suma de los primeros " << CANTIDAD << " números naturales es: " << suma << endl;
    return 0;
}
