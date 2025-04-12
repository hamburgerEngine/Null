#pragma once
#include <engine/Engine.h> // Remember to add this to each State or else the switchState func won't be recognized.
#include <states/State.h>
#include <engine/Sprite.h>
#include <core/Paths.h>
#include <engine/Containers.h>

namespace States
{
    class PlayState : public virtual Engine::State
    {
    public:
        Engine::Sprite* ty; // woah basically: var ty:FlxSprite;
        PlayState() {};
        ~PlayState() {};
        void create();
        void update();
        // extra functions below!
    };
}