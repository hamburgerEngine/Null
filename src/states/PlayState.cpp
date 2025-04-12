#include <states/PlayState.h>

namespace States
{
    void PlayState::create() {
        std::cout << "Current State: PlayState" << std::endl;
        Engine::Sprite* bg = new Engine::Sprite(getImage("cooliobgmaybeOLD"));
        bg->x = -80;
        bg->w = (int)(bg->w * 1.1f);
        add(bg);
        ty = new Engine::Sprite(getImage("sticknshmoove"));
        ty->x = (int)round(1280 * 0.4f);
        ty->y = (int)round(720 * 0.07f);
        ty->w = (int)(ty->w * 0.5f);
        ty->h = (int)(ty->h * 0.5f);
        ty->parseSparrowSpritesheet(getXML("sticknshmoove"), 24, "idle", true);
        add(ty);
    }

    void PlayState::update() {}
}
