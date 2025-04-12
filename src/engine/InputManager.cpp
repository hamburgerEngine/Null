#include <engine/InputManager.h>

std::unordered_set<SDL_Scancode> InputManager::currentPressedKeys;
std::unordered_set<SDL_Scancode> InputManager::previousPressedKeys;

void InputManager::UpdateKeyStates() {
    const Uint8* state = SDL_GetKeyboardState(NULL);

    previousPressedKeys = currentPressedKeys;
    currentPressedKeys.clear();

    for (int i = 0; i < SDL_NUM_SCANCODES; ++i) {
        if (state[i]) {
            currentPressedKeys.insert(static_cast<SDL_Scancode>(i));
        }
    }
}

bool InputManager::justPressed(SDL_Scancode key) {
    return currentPressedKeys.find(key) != currentPressedKeys.end() &&
        previousPressedKeys.find(key) == previousPressedKeys.end();
}

bool InputManager::justReleased(SDL_Scancode key) {
    return previousPressedKeys.find(key) != previousPressedKeys.end() &&
        currentPressedKeys.find(key) == currentPressedKeys.end();
}
