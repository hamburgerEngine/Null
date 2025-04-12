#pragma once
#include "../engine/Common.h"
#include "../core/Paths.h"
namespace Audio
{
    class Audio : public Engine::Basic
    {
    private:
        Mix_Music* music;
        Mix_Chunk* audio;
    public:
        Audio();
        Audio(const char* path, bool music);
        void play();
        void playMusic(bool loop);
        void stopMusic();
        int getMusicPosition();
    };
}