#include <states/State.h>

namespace Engine
{
    State::State() {
    }

    State::~State()
    {
        for (auto it = threads._threads.begin(); it != threads._threads.end(); it++)
        {
        }

        for (auto& object : objects)
        {
            delete object;
        }
    }

    void State::create() {}
    void State::update() {
        for (auto& object : objects) {
            object->update();
        }

        if (keysJustPressed[SDLK_w]) {
            std::cout << "Up";
        }
        if (keysJustPressed[SDLK_a]) {
            std::cout << "Left";
        }
        if (keysJustPressed[SDLK_s]) {
            std::cout << "Down";
        }
        if (keysJustPressed[SDLK_d]) {
            std::cout << "Right";
        }
    }
    void State::add(Engine::Basic* object) {
        objects.push_back(object);
    }

    void State::remove(Basic* object)
    {
        auto found = std::find(objects.begin(), objects.end(), object);
        if (found != objects.end())
        {
            objects.erase(found);
        }
    }

    void State::keyEvent(SDL_Keycode key, bool isPressed)
    {
        keysPressed[key] = isPressed;
        keysJustPressed[key] = isPressed;
    }

    void State::keyRelease(SDL_Keycode key)
    {
        keysJustPressed[key] = false;
    }

    void threadManager::add(const char* name, std::thread& thread)
    {
        _threads[name] = &thread;
        thread.detach();
    }

    void threadManager::add(const char* name, std::function<void()> func) {
        std::thread _tempThread(func);
        _threads[name] = &_tempThread;
        _tempThread.detach();
    }

    void threadManager::remove(const char* name)
    {
        _threads.erase(name);
    }

    std::thread& threadManager::operator[](const char* name) {
        return *_threads[name];
    }
}