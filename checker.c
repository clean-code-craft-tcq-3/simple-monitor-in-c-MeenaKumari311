#include <stdio.h>
#include <assert.h>
int IsValueInRange(float value, float MinThreshold, float MaxThreshold);
int batteryIsOk(float temperature, float soc, float chargeRate) {
  int retValue=0;
  printf("Checking temperature!\n");
  retValue=IsValueInRange(temperature,0,45);
  if(retValue==1)
  {printf("Checking soc!\n");
  retValue=IsValueInRange(soc,20,80);
  }
  if(retValue==1)
  {
  printf("Checking chargeRate!\n");
  retValue=IsValueInRange(chargeRate,-1000,0.8);
  }
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
  assert(!batteryIsOk(50, 85, 0));
  assert(!batteryIsOk(-10, 85, 0));
  assert(!batteryIsOk(25, 10, 0.5));
  assert(!batteryIsOk(25, 90, 0.5));
  assert(!batteryIsOk(25, 70, 0.9));
}
