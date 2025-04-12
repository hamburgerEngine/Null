#pragma once

#include <engine/SDLHandler.h>
#include <unordered_set>

class InputManager {
public:
    static void UpdateKeyStates();
    static bool justPressed(SDL_Scancode key);
    static bool justReleased(SDL_Scancode key);

private:
    static std::unordered_set<SDL_Scancode> currentPressedKeys;
    static std::unordered_set<SDL_Scancode> previousPressedKeys;
};
