#ifndef STARTRECEBIDOSTATE_H
#define STARTRECEBIDOSTATE_H

#include "device_state.h"
#include "../device.h"

class StartRecebidoState : public DeviceState
{
    public:
        StartRecebidoState(Device *parent);

        void interfaceOk() override ;

        void interfaceNOk() override;

        void pacoteOk() override;

        void pacoteNOk() override;

        void semResposta() override ;

      private:
        Device *parent;
};

#endif // STARTRECEBIDOSTATE_H
