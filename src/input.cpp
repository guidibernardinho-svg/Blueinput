#include "input.h"
#include <iostream>

bool Input::init() {
    if (SDL_Init(SDL_INIT_GAMECONTROLLER) < 0) {
        std::cout << "Erro SDL\n";
        return false;
    }

    if (SDL_NumJoysticks() > 0) {
        controller = SDL_GameControllerOpen(0);

        if (controller) {
            std::cout << "Controle conectado!\n";
        }
    }

    return true;
}

void Input::update() {
    SDL_GameControllerUpdate();
}

bool Input::isPressed(SDL_GameControllerButton button) {
    if (!controller) return false;
    return SDL_GameControllerGetButton(controller, button);
}

int Input::getAxis(SDL_GameControllerAxis axis) {
    if (!controller) return 0;
    return SDL_GameControllerGetAxis(controller, axis);
}

void Input::shutdown() {
    if (controller) {
        SDL_GameControllerClose(controller);
        controller = nullptr;
    }
    SDL_Quit();
}
