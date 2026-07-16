#pragma once
#include "Scene.h"
#include "Framework/Collision.h"
class Menu :
    public Scene
{
public:
    Menu(sf::RenderWindow& window, Input& input, GameState& gameState, AudioManager& audio);

    void handleInput(float dt) override;
    void update(float dt) override;
    void render() override;
    void onBegin() override;
    void onEnd() override;

private:

    GameObject m_playButton;
    GameObject m_play2Button;
    sf::Font m_font;
    sf::Text m_playButtonLabel;
    sf::Text m_playButton2Label;
    GameObject m_titleImage;
    sf::Texture m_titleSplash;

    sf::Color m_defaultButtonColour = sf::Color(255, 255, 255, 125);
    sf::Color m_hoverButtonColour = sf::Color(255, 255, 255, 255);
};

