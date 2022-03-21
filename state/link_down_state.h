#ifndef LINKDOWNSTATE_H
#define LINKDOWNSTATE_H

#include <stdio.h>
#include "../device.h"
#include "enviando_start_state.h"

class LinkDownState : public DeviceState
{
    public:
        LinkDownState(Device* parent);

        void interfaceOk() override ;

        void interfaceNOk() override;

        void pacoteOk() override;

        void pacoteNOk() override;

        void semResposta() override ;
    private:
        Device* parent;
};

#endif
