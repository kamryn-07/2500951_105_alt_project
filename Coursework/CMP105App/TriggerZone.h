#pragma once
#include "Framework/GameObject.h"
#include <iostream>

class TriggerZone :
    public GameObject
{
public:
    TriggerZone(sf::Vector2f size, sf::Vector2f pos);

    void collisionResponse(GameObject& collider) override;

private:
    bool m_isTriggerable = true;

};

