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
            }

        case Event::InterfaceOk: {
                currentState->interfaceOk();
            }

        case Event::PacoteNOk: {
                currentState->pacoteNOk();
            }

        case Event::PacoteOk: {
                currentState->pacoteOk();
            }

        case Event::semResposta: {
                currentState->semResposta();
            }
    }
}
