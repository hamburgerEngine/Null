#pragma once
#include <engine/Common.h>
#include <engine/Sprite.h>
#include <engine/Text.h>
#include <engine/Containers.h>
#include <core/Paths.h>
#include <engine/Shape.h>
#include <states/State.h>

namespace Engine
{
    /**
     * @brief This struct contains the launch option parameters.
     * @param title The title of the window.
     * @param width The width of the window.
     * @param height The height of the window.
     */
    struct Maindothx
    {
        const char* title;
        const int width;
        const int height;
    };

    extern State* curState;
    extern SDL_Window* window;
    extern SDL_Renderer* renderer;
    void switchState(State* state);
    void render(Engine::Basic* object);
    // This will initialize the main SDL window.
    extern void init(Engine::Maindothx launch, Engine::State* beginState);
    void destruct();
}