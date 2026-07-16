#include "TriggerZone.h"

TriggerZone::TriggerZone(float pos)
{
	m_xpos = pos;
}

void TriggerZone::onTrigger()
{
	if (m_isTriggerable)
	{
		for (auto& t : m_triggerObjects)
		{
			t.onTrigger();
		}
	}
	m_isTriggerable = false;
}

float TriggerZone::getXPos() { return m_xpos; }