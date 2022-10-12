/* Funciones matematicas para nuestro codigo
 * Línea para no alterar el codigo
 */

#include "math.h"

int doubleInt(int a){
    if (a > MAX_INT){
        return -1;
    }
    return a*2;
}

double doubleDouble(double a){
    if(a > MAX_DOUBLE){
        return -1;
    }
    return a*2
}

double doubleFloat(float a){
    if(a > MAX_FLOAT){
        return -1;
    }
    return a*2
}
