#include "start_recebido_state.h"
#include "enviando_start_state.h"
#include "link_ok_state.h"
#include <iostream>

StartRecebidoState::StartRecebidoState(Device* parent)
{
    this->parent = parent;
    nome = "Estado 3 - Start Recebido";
}


void StartRecebidoState::interfaceOk()
{
}

void StartRecebidoState::interfaceNOk()
{
}

void StartRecebidoState::pacoteOk()
{
    parent->setState(new LinkOkState(parent));

}

void StartRecebidoState::pacoteNOk()
{
}

void StartRecebidoState::semResposta()
{
    parent->setState(new EnviandoStartState(parent));
}
