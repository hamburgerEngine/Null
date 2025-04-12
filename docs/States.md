# Null Engine's State System

I unironically tried keeping this as close to HaxeFlixel as possible :D

soo I'ma just drop a template :P

Template State for AVGE:

```cpp
// PlayState.cpp
#include "PlayState.h"

namespace States
{
    void PlayState::create() {
        std::cout << "Current State: PlayState" << std::endl;
    }

    void PlayState::update() {
    }
}
```

```cpp
// PlayState.h
#pragma once
#include "State.h"
#include "../engine/Engine.h"

namespace States
{
    class PlayState : public virtual Engine::State
    {
    public:
        PlayState() {};
        ~PlayState() {};
        void create();
        void update();
    };
}
```

You can change "PlayState" to whatever your state name is gonna be!