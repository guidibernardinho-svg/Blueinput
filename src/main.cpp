#include <SDL2/SDL.h>
#include "app.h"

int main(int argc, char* argv[]) {
    App app;

    if (!app.init()) return -1;
    app.run();
    app.quit();

    return 0;
}#include <SDL2/SDL.h>
#include "app.h"

int main(int argc, char* argv[]) {
    App app;

    if (!app.init()) return -1;
    app.run();
    app.quit();

    return 0;
}
