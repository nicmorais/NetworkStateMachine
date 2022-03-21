#include "link_ok_state.h"
#include "enviando_start_state.h"

LinkOkState::LinkOkState(Device* parent)
{
    this->parent = parent;
    nome = "Estado 4 - Link Ok";
}

void LinkOkState::interfaceOk()
{
}

void LinkOkState::interfaceNOk()
{
}

void LinkOkState::pacoteOk()
{
}

void LinkOkState::pacoteNOk()
{
    parent->setState(new EnviandoStartState(parent));
}

void LinkOkState::semResposta()
{
    parent->setState(new EnviandoStartState(parent));
}
