#include "main.h"
#include "FXOS8700Q.h"
#include "mode.h"
#include "paceNow.h"
#include "parameters.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void VOO(int LRL,float VPW, float VAR) //function for VOO
{
    float VAR2;
    wait_ms(60000/LRL);
    VAR2 = VAR/6.6;
    paceNow(VPW,VAR2,1);
}
void AOO(int LRL,float APW,float AAR) //function for AOO
{
    float AAR2;
    wait_ms(60000/LRL);
    AAR2 = AAR/6.6;
    paceNow(APW,AAR2,2);
}
void DOO(int LRL,float APW,float AAR,float VPW,float VAR, int FAVD)
{
    float AAR2;
    float VAR2;
    AAR2 = AAR/6.6;
    VAR2 = VAR/6.6;
    wait_ms(60000/LRL);
    paceNow(APW,AAR2,2);
    wait_ms(FAVD);
    paceNow(VPW,VAR2,1);

}

void VOOR(int LRL,float VPW,float VAR,int MSR,int AT, int ReaT, int RF, int RecT, int FC) //must call once with AT == 0!!!!
{
    float VAR2 = VAR/6.6;
    float LRL2 = (60000/LRL);
    float MSR2 = (60000/MSR);
    float MSR3 = MSR2 - LRL2;
    float MSR4 = (MSR3/16);
    int NRT;
    int check = FC;


    if (AT == 1)
    {
        float newRate = LRL2 - MSR4*RF/IC;
        NRT = NRT + newRate;
        append(NRT, check); //appending twice to get the bars
        append(NRT, check);

        wait_ms(newRate);
        paceNow(VPW,VAR2,1);

        NRT = NRT + VPW;
        append(NRT, check);  //twice append to get the bars
        append(NRT, check);

        if (IC =! 1)
        {
            IC = IC - 1;
        }
        RC = RecT;
    }
    else
    {
        float oldRate = LRL2 - MSR4*RF/IC;
        float newRate = oldRate + MSR4*RF/RC;

        NRT = NRT + newRate;
        append(NRT, check); //appending twice to get the bars
        append(NRT, check);

        wait_ms(newRate);
        paceNow(VPW,VAR2,1);

        NRT = NRT + VPW;
        append(NRT, check);  //twice append to get the bars
        append(NRT, check);

        if (RC =! 1)
        {
            RC = RC - 1;
        }
        IC = ReaT;
    }
}

int VVI(int LRL,float VPW, float VAR, float SENSITIVITY, float HYS, float sample)
{
    float VAR2;
    float LRL2 = 0;
    float newWait;
    bool pace = true;

    VAR2 = VAR/6.6;
    AnalogIn sensor(PTC16);  //sensing pin according to shield
    while(LRL2 < LRL)
    {
        LRL2 = (LRL/sample)+LRL2;
        wait_ms(LRL2);
        if(sensor > SENSITIVITY)                //Saying that SENSITIVITY% is threshold for noise and beat falls within sampling time
        {
            newWait = HYS/sample;
            wait_ms(60000/newWait);     //skip a pace: time like VOO (wait for next event)
            wait_ms(HYS*1000);         //time like paceNow (wait for pacing event to "not occur") depending on hysteresis
            HYS += 1;               //give it more time to wait (increase the waiting time) arbitrarily 1
            pace = false;
            break;
        }
    }
    if (pace)
    {
        paceNow(VPW,VAR2,1); //regular pace bc nothing sensed
    }
}

int VVIR (int LRL,float VPW,float VAR,int MSR,int AT, int ReaT, int RF, int RecT, int FC, float SENSITIVITY, float HYS, float sample)
{
    float VAR2 = VAR/6.6;
    float LRL2 = (60000/LRL);
    float MSR2 = (60000/MSR);
    float MSR3 = MSR2 - LRL2;
    float MSR4 = (MSR3/16);
    int NRT;
    int check = FC;

    float VAR2;
    float LRL3 = 0;
    float newWait;
    bool pace = true;

    VAR2 = VAR/6.6;
    AnalogIn sensor(PTC16);  //sensing pin according to shield
    if (AT == 1)
    {
        float newRate = LRL2 - MSR4*RF/IC;
        NRT = NRT + newRate;
        append(NRT, check); //appending twice to get the bars
        append(NRT, check);

        wait_ms(newRate);
        while(LRL2 < LRL)
        {
            LRL2 = (LRL/sample)+LRL2;
            wait_ms(LRL2);
            if(sensor > SENSITIVITY)                //Saying that SENSITIVITY% is threshold for noise and beat falls within sampling time
            {
                newWait = HYS/sample;
                wait_ms(60000/newWait);     //skip a pace: time like VOO (wait for next event)
                wait_ms(HYS*1000);         //time like paceNow (wait for pacing event to "not occur") depending on hysteresis
                HYS += 1;               //give it more time to wait (increase the waiting time) arbitrarily 1
                pace = false;
                break;
            }
        }
        if (pace)
        {
            paceNow(VPW,VAR2,1); //regular pace bc nothing sensed
        }

        NRT = NRT + VPW;
        append(NRT, check);  //twice append to get the bars
        append(NRT, check);

        if (IC =! 1)
        {
            IC = IC - 1;
        }
        RC = RecT;
    }
    else
    {
        float oldRate = LRL2 - MSR4*RF/IC;
        float newRate = oldRate + MSR4*RF/RC;

        NRT = NRT + newRate;
        append(NRT, check); //appending twice to get the bars
        append(NRT, check);

        wait_ms(newRate);
        while(LRL2 < LRL)
        {
            LRL2 = (LRL/sample)+LRL2;
            wait_ms(LRL2);
            if(sensor > SENSITIVITY)                //Saying that SENSITIVITY% is threshold for noise and beat falls within sampling time
            {
                newWait = HYS/sample;
                wait_ms(60000/newWait);     //skip a pace: time like VOO (wait for next event)
                wait_ms(HYS*1000);         //time like paceNow (wait for pacing event to "not occur") depending on hysteresis
                HYS += 1;               //give it more time to wait (increase the waiting time) arbitrarily 1
                pace = false;
                break;
            }
        }
        if (pace)
        {
            paceNow(VPW,VAR2,1); //regular pace bc nothing sensed
        }

        NRT = NRT + VPW;
        append(NRT, check);  //twice append to get the bars
        append(NRT, check);

        if (RC =! 1)
        {
            RC = RC - 1;
        }
        IC = ReaT;
    }

}



void append(float NRT, int check)
{

    if (check <= 20)
    {
        std::ofstream outfile;
        outfile.open("egramx.txt", std::ios_base::app);
        outfile << NRT;
    }

    else
    {
        std::ofstream ofs;
        ofs.open("egramx.txt", std::ofstream::out | std::ofstream::trunc);
        ofs.close()
    }

}
