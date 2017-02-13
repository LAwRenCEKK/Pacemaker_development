#include "main.h"
#include "FXOS8700Q.h"
#include "mode.h"
#include "paceNow.h"
#include "parameters.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

FXOS8700Q_acc acc( PTE25, PTE24, FXOS8700CQ_SLAVE_ADDR1); // Proper Ports and I2C Address for K64F Freedom board
MotionSensorDataUnits acc_data; // set up for accelerometer

int main()
{
    acc.enable(); // start up for acc
//ALL
    int FC = 0;
    parameters parametersObject;   //accessor object for the parameters
    mode modeObject;              //accessor object for the mode

    while (true)
    {
        FC += 1;  //Counter for egram

        parametersObject.update();     //first thing program does is update the values for parameters
        parametersObject.parameterSet(); //initializes IC and RC

        int* allParameters = parametersObject.getArray();  //get all the parameters

        // (wajih) i feel like this should be done in the parameters module no?


        int mode = allParameters[0]; //the first parameter in array is the mode
        int LRL = allParameters[1]; //according to the numbering convention
        float VPW = allParameters[10];
        float VAR = allParameters[8]; //LRL, VPW, VAR, MSR, AT, ReaT, RF, RecT)
        float MSR = allParameters[3];
        float ReaT = allParameters[23];
        float RF = allParameters[24];
        float RecT = allParameters[25];
        float SENSITIVITY = allParameters[26]
        float HYS = allParameters[27]
        float sample = allParameters[28]

        int AT = 0;

        acc.getAxis(acc_data); // divit up the data into x, y, z
        if (acc_data.x+acc_data.y+acc_data.z > 1.1)
        {
            AT = 1;
        } else
        {
            AT = 0;
        }

        switch(mode) {
        /*
        case 1:
            modeObject.AAT(LRL, VPW, VAR);
        break;

        case 2:
            modeObject.VVT(LRL, VPW, VAR);
        break;

        */
        case 3:

            modeObject.AOO(LRL, VPW, VAR);

        break;

        /*
        case 4:
            modeObject.AAI(LRL, VPW, VAR);
        break;
        */

        case 5:
            modeObject.VOO(LRL, VPW, VAR);
        break;


        case 6:
            int VVI(int LRL,float VPW, float VAR, float SENSITIVITY, float HYS, float sample)
        break;

        /*
        case 7:
            modeObject.VDD(LRL, VPW, VAR);
        break;
        */

        case 8:
            modeObject.DOO(LRL, VPW, VAR);
        break;

        /*
        case 9:
            modeObject.DDI(LRL, VPW, VAR);
        break;

        case 10:
            modeObject.DDD(LRL, VPW, VAR);
        break;

        case 11:
            modeObject.AOOR(LRL, VPW, VAR);
        break;

        case 12:
            modeObject.AAIR(LRL, VPW, VAR);
        break;
        */

        case 13:

            modeObject.void VOOR( LRL, VPW, VAR, MSR, AT, ReaT, RF, RecT); //must call once with AT == 0!!!!

        break;

        case 14:
            int VVIR (int LRL,float VPW,float VAR,int MSR,int AT, int ReaT, int RF, int RecT, int FC, float SENSITIVITY, float HYS, float sample)
        break;

        /*
        case 15:
            modeObject.VDDR(LRL, VPW, VAR);
        break;

        case 16:
            modeObject.DOOR(LRL, VPW, VAR);
        break;

        case 17:
            modeObject.DDIR(LRL, VPW, VAR);
        break;

        case 18:
            modeObject.DDDR() //etcetera etcetera
         break;
         */
   }

    }
}
