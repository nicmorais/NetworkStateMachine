#include "enviando_start_state.h"
#include "start_recebido_state.h"
#include <iostream>

EnviandoStartState::EnviandoStartState(Device* parent)
{
    this->parent = parent;
    nome = "Estado: 2 - Enviando Start";
}

void EnviandoStartState::interfaceOk()
{
}

void EnviandoStartState::interfaceNOk()
{
}

void EnviandoStartState::pacoteOk()
{
    parent->setState(new StartRecebidoState(parent));
}

void EnviandoStartState::pacoteNOk()
{
}

void EnviandoStartState::semResposta()
{
}
