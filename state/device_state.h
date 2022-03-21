#ifndef DEVICESTATE_H
#define DEVICESTATE_H

#include <string>

class DeviceState
{

    public:
        std::string nome;
        virtual void interfaceOk() = 0;
        virtual void interfaceNOk() = 0;
        virtual void pacoteOk() = 0;
        virtual void pacoteNOk() = 0;
        virtual void semResposta() = 0;
        inline std::string getNome() { return nome; };
};

#endif
