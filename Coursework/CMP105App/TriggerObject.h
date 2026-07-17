#pragma once
#include "Framework/GameObject.h"
#include <iostream>
class TriggerObject :
    public GameObject
{
public:
    TriggerObject();

    int getType() { return m_type; }

private:
    int m_type;

};

