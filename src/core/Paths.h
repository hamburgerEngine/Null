#pragma once
#define basePath "assets/"
#include "../engine/Common.h"

enum class FileType
{
    JPG,
    BMP,
    PNG,
    TTF,
    XML
};

const char* getImage(const char* name, FileType filetype);
const char* getImage(const char* name);

const char* getXML(const char* name);

const char* getFont(const char* name);

std::string* getAudio(const char* name, bool music);