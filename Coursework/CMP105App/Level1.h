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
#include "TriggerObject.h"

#include <algorithm> // for clamp


class Level1 :
    public Scene
{
public:
    Level1(sf::RenderWindow& window, Input& input, GameState& gameState, AudioManager& audio);

    void handleInput(float dt) override;
    void update(float dt) override;
    void render() override;
    void onBegin() override;
    void onEnd() override;

    bool getDrawBridge() { return m_drawBridge; }
    void setDrawBridge(bool t) { m_drawBridge = t; }

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
    std::vector<TriggerObject> m_bridge;
    bool m_drawBridge = true;

    TriggerObject m_bridge0;
    TriggerObject m_bridge1;
    TriggerObject m_bridge2;
    TriggerObject m_bridge3;
    TriggerObject m_bridge4;

    std::vector<std::string> m_promptMessages =
    {
        "[F] to complete",
    };
};

