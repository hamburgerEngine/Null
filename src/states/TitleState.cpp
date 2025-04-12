#include <states/TitleState.h>
#include <states/PlayState.h>
#include <states/State.h>
#include <engine/InputManager.h> // Add to each state or no input 

namespace States
{
    /*
    *   Basic input stuff lol:
        SDL_SCANCODE_RIGHT // right arrow
        SDL_SCANCODE_LEFT // left arrow
        SDL_SCANCODE_DOWN // down arrow
        SDL_SCANCODE_UP // up arrow
        SDL_SCANCODE_RETURN // enter
    */

    void TitleState::create() {
        Engine::Sprite* bg = new Engine::Sprite(getImage("cooliobgmaybeOLD"));
        bg->x = -80;
        bg->w = (int)(bg->w * 1.1f);
        add(bg);
        Engine::Text* verText = new Engine::Text("Average GE v1.0", 5, 720 - 28, 24, { 255, 255, 255, 255 }, getFont("vcr"));
        verText->applyOutline({ 0, 0, 0, 255 }, 8);
        add(verText);
        inst = new Audio::Audio("RunFNFInst", true);
        inst->playMusic(true); // Set to false if you don't want it to loop!
        std::cout << "Current State: TitleState" << std::endl;
    }

    void TitleState::update() {
        InputManager::UpdateKeyStates(); // Always called first no matta wut.

        if (InputManager::justPressed(SDL_SCANCODE_RETURN))
        {
            inst->stopMusic();
            Engine::switchState(new PlayState());
        }

        if (InputManager::justReleased(SDL_SCANCODE_LEFT))
        {
            std::cout << "LEFT RELEASED!" << std::endl;
        }
    }
};