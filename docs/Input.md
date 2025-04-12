# Null Engine's Input System

AVGE's Input system uses (SDL2's ScanCode)[https://wiki.libsdl.org/SDL2/SDL_Scancode] meaning adding input is as simple as finding the button you want and doing this:

# justPressed

```cpp
if (InputManager::justPressed(SDL_SCANCODE_RETURN))
{
    std::cout << "ENTER/RETURN PRESSED" << std::endl;
}
```        

But before you add any input stuff make sure to add:
```cpp
#include "../engine/InputManager.h"
```
to your defines

and in your state and add:
```cpp
InputManager::UpdateKeyStates();
```
to your update function!

# justReleased

```cpp
if (InputManager::justReleased(SDL_SCANCODE_RETURN))
{
    std::cout << "RETURN/ENTER RELEASED" << std::endl;
}
```        

But before you add any input stuff make sure to add:
```cpp
#include "../engine/InputManager.h"
```
to your defines

and in your state and add:
```cpp
InputManager::UpdateKeyStates();
```
to your update function!