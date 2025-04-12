# Null Engine's Sprite System (Sparrow Atlas v2)

Uhh kinda works like haxeflixel??

Sprite Template (like bg shit):

```cpp
// StateName.cpp:
        Engine::Sprite* bg = new Engine::Sprite(getImage("imageherelol")); // make sure to not add ".png"
        bg->x = -80;
        bg->w = (int)(bg->w * 1.1f);
        add(bg);
```

Spritesheet Template:

```cpp
// StateName.cpp:
        ty = new Engine::Sprite(getImage("sticknshmoove"));
        ty->x = (int)round(1280 * 0.4f);
        ty->y = (int)round(720 * 0.07f);
        ty->parseSparrowSpritesheet(getXML("sticknshmoove"), 24, "idle", true);
        add(ty);
```

StateName.h
```cpp
        Engine::Sprite* ty; // goes in "public:"
````