#include <iostream>
#include <string>

#define CANTIDAD_INFRACCIONES 5
#define CANTIDAD_MAXIMA_INFRACCIONES 3

using namespace std;

int main()
{
    int totalMulta = 0;
    int infraccionesTipo3_4 = 0;
    int i=0;

    int tipoInfraccion = 0;
    int valorMulta = 0;
    char gravedad=NULL;
    string motivo = "";


    for(i=0; i<CANTIDAD_INFRACCIONES; i++){
        cout << "Ingrese tipo de infracción: " << endl;
        cin >> tipoInfraccion;

        cout << "Ingrese motivo de infracción: " << endl;
        cin >> motivo;

        cout << "Ingrese valor de la multa: " << endl;
        cin >> valorMulta;

        cout << "Ingrese la gravedad de infracción: " << endl;
        cin >> gravedad;


        totalMulta = totalMulta + valorMulta;
        if(gravedad == 'G' && (tipoInfraccion == 3 || tipoInfraccion == 4)){
            infraccionesTipo3_4++;
        }
    }

    cout << "La suma total de las multas es: " << totalMulta << endl;

    if(infraccionesTipo3_4 > CANTIDAD_MAXIMA_INFRACCIONES){
        cout << "Clausurar fabrica" << endl;
    }

    return 0;
}
