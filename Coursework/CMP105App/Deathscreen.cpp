#include "Deathscreen.h"

Deathscreen::Deathscreen()
{
	setFillColor({255, 255, 255, 255});
	setPosition({ 0, 0 });
	setSize({ 750, 650 });
	setCollider(false);
	m_deathscreenTexture.loadFromFile("gfx/tvstatic.jpeg");
	setTexture(&m_deathscreenTexture);
}
