#include "main.h"
#include "FXOS8700Q.h"
#include "mode.h"
#include "paceNow.h"
#include "parameters.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void paceNow( float PW, float AR2, int  chamber)
{
    if (chamber == 1)
    {
        VOut = AR2;
        wait_ms(PW*1000);
        VOut = 0;
    }
    else if (chamber == 2)
    {
        AOut = AR2;
        wait_ms(PW*1000);
        AOut = 0;
    }
}
