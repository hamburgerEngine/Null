#include <engine/Engine.h>
#include <states/TitleState.h>
#include <states/PlayState.h>
#include <SDL2/SDL.h>
#ifdef _WIN32
#undef main
#endif

Engine::Maindothx launch = {
    "Null Engine",
    1280,
    720
};

int main() {
    Engine::init(launch, new States::TitleState());
    return 0;
}