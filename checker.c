#include <stdio.h>
#include <assert.h>
int IsValueInRange(float value, float MinThreshold, float MaxThreshold);
int batteryIsOk(float temperature, float soc, float chargeRate) {
  int retValue;
  printf("Checking temperature!\n");
  retValue=IsValueInRange(temperature,0,45);
  printf("Checking soc!\n");
  retValue=IsValueInRange(soc,20,80);
  printf("Checking chargeRate!\n");
  retValue=IsValueInRange(chargeRate,-1000,0.8);
  return retValue;
}

int IsValueInRange(float value, float MinThreshold, float MaxThreshold)
{
  if(value < MinThreshold || value > MaxThreshold) {
    printf("Value out of range!\n");
    return 0;
 }
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  // assert(!batteryIsOk(50, 85, 0));
}
