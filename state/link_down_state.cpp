#include "link_down_state.h"
#include <iostream>
#include "enviando_start_state.h"

LinkDownState::LinkDownState(Device* parent)
{
    this->parent = parent;
    nome = "Estado 1 - Link Down";
}

void LinkDownState::interfaceOk()
{
    parent->setState(new EnviandoStartState(parent));
}

void LinkDownState::interfaceNOk()
{
}

void LinkDownState::pacoteOk()
{
}

void LinkDownState::pacoteNOk()
{
}

void LinkDownState::semResposta()
{
}
