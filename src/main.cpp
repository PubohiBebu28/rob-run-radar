// main.cpp — entry point. Wires config and subsystems together.

#include "robrunradar/settings.h"
#include "robrunradar/mapper.h"
#include "robrunradar/streamer.h"
#include "robrunradar/overlay.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robrunradar::Settings settings = robrunradar::Settings::load_default();
    robrunradar::Mapper mapper(settings.store_path);
    robrunradar::Streamer streamer(settings.store_path);
    robrunradar::Overlay overlay(settings.store_path);
    std::fprintf(stderr, "[rob-run-radar] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
