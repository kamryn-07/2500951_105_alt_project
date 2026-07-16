#pragma once
#include "Framework/GameObject.h"
#include "Framework/Animation.h"
#include <iostream>
#include "Framework/AudioManager.h"


class Player :
    public GameObject
{
public:
    Player();

    void handleInput(float dt) override;
    void update(float dt) override;
    void collisionResponse(GameObject& collider) override;
    void setEdges(float left, float right) { m_leftEdge = left; m_rightEdge = right; };
    void setLeverPosition(sf::Vector2f leverPos) { m_leverPosition = leverPos; };
    void setEndGamePosition(sf::Vector2f endPos) { m_endPosition = endPos; };
    bool inLeverRange();
    bool inEndRange();
    bool getLeverPulled() { return m_leverPulled; };
    bool getGameEndTriggered() { return m_gameEndTriggered; };
    void reset();
    void setCanDoubleJump(bool value) { m_canDoubleJump = value; };
    bool canDoubleJump() { return m_canDoubleJump; };
    void setAudio(AudioManager* audio) { m_audio = audio; };

private:
    sf::Texture m_dinoTexture;
    Animation* m_currAnim;
    Animation m_idle;
    Animation m_walk;
    Animation m_sprint;
    sf::Vector2f m_accel;
    float m_sprintTimer = 0.f;
    bool m_isGrounded;
    float m_leftEdge;
    float m_rightEdge;
    sf::Vector2f m_leverPosition;
    sf::Vector2f m_endPosition;
    bool m_leverPulled = false;
    bool m_gameEndTriggered = false;
    bool m_canDoubleJump;
    bool m_hasDoubleJumped;
    AudioManager* m_audio;

    const float SPRINT_COOLDOWN = 0.45f;
    const float SPRINT_SPEED_MULT = 1.10f;
    const float SPEED = 2.25f;
    const float GRAVITY = 15.0f;
    const float COEFF_OF_REST = 1.0f;                   // tweak all this for extremely snappy movement (aka get rid of acceleration and tweak other random stuff)
    const float DRAG_FACTOR = 0.0f;
    const float AIR_DRAG_FACTOR = 0.99f;
    const float TURN_DRAG = 1.0f;
    const float JUMP_FORCE = 4.5f;
    const float SPRINT_ANIM_THRESHOLD = 999.0f;     //1.2f * SPEED;     // set sprint anim threshold real high for now until (if) sprint frames are animated for new spritesheet
    const float ACTIVATE_RANGE_SQUARED = 1250.0f;

};

