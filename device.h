#ifndef DEVICE_H
#define DEVICE_H

#include "state/device_state.h"
#include <string>
#include "event/event.h"

class Device{
  DeviceState *currentState;

public:
  Device();

  DeviceState* getState();

  void setState(DeviceState *state); 

  void triggerEvent(Event event);

};
#endif // DEVICE_H
