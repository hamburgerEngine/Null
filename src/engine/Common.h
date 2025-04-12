#pragma once
// Standard Libary Includes
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <thread>
#include <chrono>
#include <map>
#include <memory>
#include <engine/SDLHandler.h>
#include <cmath>
#include <deque>
#include <functional>
#include <unordered_set>
#include <tinyxml2.h>

#define screenCenterX (1280 / 2)
#define screenCenterY (720 / 2)

namespace Engine
{
    enum class Type
    {
        NOTHING,
        SPRITE,
        TEXT,
        GROUP,
        SHAPE,
        AUDIO
    };

    class Basic
    {
    private:
        static int globalID;
    public:
        Engine::Type type;
        int ID = 0;

        virtual void update();
    };
};