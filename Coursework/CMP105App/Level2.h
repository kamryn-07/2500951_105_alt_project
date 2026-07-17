#pragma once
#include "Scene.h"
#include "Framework/Collision.h"
#include "Framework/TileMap.h"
#include "Player.h"
#include "Coin.h"
#include "Flag.h"

#include "KillObject.h"     // new additions woah
#include "TriggerZone.h"
#include "Deathscreen.h"

#include <algorithm> // for clamp


class Level2 :
    public Scene
{
public:
    Level2(sf::RenderWindow& window, Input& input, GameState& gameState, AudioManager& audio);

    void handleInput(float dt) override;
    void update(float dt) override;
    void render() override;
    void onBegin() override;
    void onEnd() override;

private:
    void updateCameraAndBackground();
    void checkAndSetMessages();

    TileMap m_tilemap;
    TileMap m_bgtilemap;

    Deathscreen deathscreen;    // deathscreen scary stuff
    Player m_player;
    
    float m_time = 0.0f;
    float m_timeSnap = 0.0f;

    Flag m_flag;

    const sf::Vector2i WORLD_SIZE = { 2880, 648 };
    const sf::Vector2i VIEW_SIZE = { 432, 432 };

    sf::Text m_alertText;
    sf::Font m_font;
    sf::Texture m_tileTexture;

    sf::Vector2f m_wallPos = { 11 * 72, 5 * 72 };

    std::vector<TriggerZone> m_triggerZones;	    // trigger zone vector
    std::vector<TriggerObject> m_triggerObjects;    // '' obj

    std::vector<std::string> m_promptMessages =
    {
        "[F] to complete",
    };
};

