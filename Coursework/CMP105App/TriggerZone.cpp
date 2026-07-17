#include "TriggerZone.h"

TriggerZone::TriggerZone(float pos)
{
	m_xpos = pos;
	m_isTriggerable = true;
}

int TriggerZone::onTrigger()
{
	if (m_isTriggerable)
	{
		for (auto& t : m_triggerObjects)
		{
			return t.getType();
		}
	}
	m_isTriggerable = false;
}

float TriggerZone::getXPos() { return m_xpos; }