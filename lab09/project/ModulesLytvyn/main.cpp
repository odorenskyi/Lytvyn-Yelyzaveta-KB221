#define _USE_MATH_DEFINES
#include <cmath>

float s_calculation(float x, float y, float z)
{
    float S1 = sqrt( abs( pow(z, 2) * y/2 ) );
    float S2 = (M_PI * x + pow(M_E, abs(y)) ) / y;
    float S = S1 + S2;
    return S;
}
