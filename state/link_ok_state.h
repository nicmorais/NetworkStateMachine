#ifndef LINKOKSTATE_H
#define LINKOKSTATE_H

#include "device_state.h"
#include "../device.h"

class LinkOkState : public DeviceState
{
    public:
        LinkOkState(Device *parent);

      void interfaceOk() override ;

      void interfaceNOk() override;

      void pacoteOk() override;

      void pacoteNOk() override;

      void semResposta() override ;

    private:
      Device *parent;
};

#endif // LINKOKSTATE_H
