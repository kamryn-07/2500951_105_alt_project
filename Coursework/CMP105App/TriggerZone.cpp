#include "TriggerZone.h"

TriggerZone::TriggerZone(sf::Vector2f size, sf::Vector2f pos)
{
	setSize(size);
	setPosition(pos);
}

void TriggerZone::collisionResponse(GameObject& collider)
{
	m_isTriggerable = false;
	std::cout << "collision" << '\n';
}