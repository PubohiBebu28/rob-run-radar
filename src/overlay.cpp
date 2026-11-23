// overlay.cpp — part of rob-run-radar.

#include "robrunradar/overlay.h"

#include <cstdio>

namespace robrunradar {

Overlay::Overlay(const std::string& config_path)
    : config_path_(config_path) {}

void Overlay::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Overlay::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-radar] overlay: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunradar
