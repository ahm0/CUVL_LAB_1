#include <iostream>
#include "error.h"

using namespace std;

int main()
{
    ERROR_ST error_ok = createError(ERR_OK, "Todo Bien");
    cout << "Número: " << error_ok.err_no << endl;
    logError(error_ok);

    ERROR_ST error_mal = createError(ERR_NO_GARAGE, "Sin cocheras");
    cout << "Número: " << error_mal.err_no << endl;
    logError(error_mal);
    printError(error_mal, "hola mundo!");
    printError(error_mal);

    return 0;
}
