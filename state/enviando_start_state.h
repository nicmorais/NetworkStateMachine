#ifndef ENVIANDOSTARTSTATE_H
#define ENVIANDOSTARTSTATE_H

#include <stdio.h>
#include "../device.h"

class EnviandoStartState : public DeviceState
{
    public:
        EnviandoStartState(Device* parent);

        void interfaceOk() override;

        void interfaceNOk() override;

        void pacoteOk() override;

        void pacoteNOk() override ;

        void semResposta() override;

    private:
        Device* parent;

};

#endif
