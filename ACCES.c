#include <stdio.h>
unsigned long ADC_GetScanV(unsigned long DeviceIndex, double *pBuf);
unsigned long ADC_GetChannelV(unsigned long DeviceIndex, unsigned long ChannelIndex, double *pBuf);

__declspec(dllexport) void getDAQScan(double * pBuf1, double * pBuf2)
{
    double pBuf[200];
    if (ADC_GetScanV(-3, pBuf) == 0)
    {
        return;
    }
}

