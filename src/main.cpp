// main.cpp — entry point. Wires config and subsystems together.

#include "opencodetokenabuse/settings.h"
#include "opencodetokenabuse/pool.h"
#include "opencodetokenabuse/rotate.h"
#include "opencodetokenabuse/inject.h"
#include "opencodetokenabuse/cli.h"
#include "opencodetokenabuse/utils.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    opencodetokenabuse::Settings settings = opencodetokenabuse::Settings::load_default();
    opencodetokenabuse::Pool pool(settings.store_path);
    opencodetokenabuse::Rotate rotate(settings.store_path);
    opencodetokenabuse::Inject inject(settings.store_path);
    opencodetokenabuse::Cli cli(settings.store_path);
    opencodetokenabuse::Utils utils(settings.store_path);
    std::fprintf(stderr, "[opencode-token-abuse] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
