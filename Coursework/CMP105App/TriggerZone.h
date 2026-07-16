#pragma once
#include "TriggerObject.h"
#include <iostream>
#include <vector>

class TriggerZone
{
public:
    TriggerZone(float pos);

    void onTrigger();
    float getXPos();

private:
    bool m_isTriggerable = true;
    float m_xpos;

    std::vector<TriggerObject> m_triggerObjects;

};

