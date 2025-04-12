#pragma once
#include <engine/Common.h>
#include <states/State.h>
#include <engine/Sprite.h>
#include <core/Paths.h>
#include <engine/Containers.h>
#include <engine/Text.h>
#include <states/PlayState.h>
#include <engine/Engine.h>
#include <audio/Audio.h>

namespace States
{
    class TitleState : public virtual Engine::State
    {
    public:
        Audio::Audio* inst;
        TitleState() {};
        ~TitleState() {};
        void create() override;
        void update() override;
    };
}