#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  int retValue;
  printf("Checking temperature!\n");
  retValue=IsValueInRange(float temperature,0,45);
  printf("Checking soc!\n");
  retValue=IsValueInRange(float soc,20,80);
  printf("Checking chargeRate!\n");
  retValue=IsValueInRange(float chargeRate,0,0.8);
  return retValue;
}

int IsValueInRange(float value, float MinThreshold, float MaxThreshold)
{
  if(value < MinThreshold || value > Maxthreshold) {
    printf("Value out of range!\n");
    return 0;
 }
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
