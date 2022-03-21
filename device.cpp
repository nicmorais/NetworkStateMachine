#include "device.h"
#include "state/link_down_state.h"

Device::Device()
{
    currentState = new LinkDownState(this);
}

void Device::setState(DeviceState* state)
{
    delete currentState;
    this->currentState = state;
}

DeviceState* Device::getState()
{
    return currentState;
}

void Device::triggerEvent(Event event)
{
    switch (event) {
        case Event::InterfaceNOk: {
                currentState->interfaceNOk();
                break;
            }

        case Event::InterfaceOk: {
                currentState->interfaceOk();
                break;
            }

        case Event::PacoteNOk: {
                currentState->pacoteNOk();
                break;
            }

        case Event::PacoteOk: {
                currentState->pacoteOk();
                break;
            }

        case Event::semResposta: {
                currentState->semResposta();
                break;
            }
    }
}
