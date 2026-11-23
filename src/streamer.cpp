// streamer.cpp — part of rob-run-radar.

#include "robrunradar/streamer.h"

#include <cstdio>

namespace robrunradar {

Streamer::Streamer(const std::string& config_path)
    : config_path_(config_path) {}

void Streamer::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Streamer::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-radar] streamer: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunradar
