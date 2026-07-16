#pragma once
#include "Framework/GameObject.h"
#include <iostream>

class KillObject :
    public GameObject
{
public:
    KillObject();

    void collisionResponse(GameObject& collider) override;

private:
    sf::Vector2f m_pos;
    sf::Vector2f m_size;
};

