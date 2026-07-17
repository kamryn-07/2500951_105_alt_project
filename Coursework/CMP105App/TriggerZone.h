#pragma once
#include "TriggerObject.h"
#include <iostream>
#include <vector>

class TriggerZone
{
public:
    TriggerZone(float pos);

    int onTrigger();
    float getXPos();

    std::vector<TriggerObject> m_triggerObjects;

private:
    bool m_isTriggerable = true;
    float m_xpos = 0.0f;

};

