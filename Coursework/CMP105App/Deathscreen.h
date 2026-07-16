#pragma once
#include "Framework/GameObject.h"
class Deathscreen :
    public GameObject
{
public:
    Deathscreen();

private:
    sf::Texture m_deathscreenTexture;

};

