#include <core/Paths.h>

const char* getImage(const char* name, FileType filetype) {
    std::string* _path = new std::string(basePath);
    _path->append("images/").append(name);
    switch (filetype)
    {
    case FileType::JPG:
        _path->append(".jpg");
        break;
    case FileType::BMP:
        _path->append(".bmp");
        break;
    case FileType::PNG:
        _path->append(".png");
        break;
    case FileType::TTF:
        _path->append(".ttf");
        break;
    }
    return _path->c_str();
}

const char* getImage(const char* name) {
    std::string* _path = new std::string(basePath);
    return _path->append("images/").append(name).append(".png").c_str();
}

const char* getXML(const char* name) {
    std::string* _path = new std::string(basePath);
    return _path->append("images/").append(name).append(".xml").c_str();
}

const char* getFont(const char* name) {
    std::string* _path = new std::string(basePath);
    return _path->append("fonts/").append(name).append(".ttf").c_str();
}

std::string* getAudio(const char* name, bool music) {
    std::string* _path = new std::string(basePath);
    _path->append(music ? "music/" : "sounds/").append(name).append(".ogg");
    return _path;
}