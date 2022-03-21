#include <iostream>
#include "device.h"

int main()
{
  std::cout << "Network State Machine!" << std::endl;

  Device device;

  std::cout << device.getState()->getNome() << std::endl; // state 1

  std::cout << "Trigger Interface Ok" << std::endl;

  device.triggerEvent(Event::InterfaceOk);
  
  std::cout << device.getState()->getNome() << std::endl; // state 2

  std::cout << "Trigger Pacote Ok" << std::endl;

  device.triggerEvent(Event::PacoteOk);

  std::cout << device.getState()->getNome() << std::endl; // state 3

  return 0;
}
