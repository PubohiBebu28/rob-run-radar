// mapper.cpp — part of rob-run-radar.

#include "robrunradar/mapper.h"

#include <cstdio>

namespace robrunradar {

Mapper::Mapper(const std::string& config_path)
    : config_path_(config_path) {}

void Mapper::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Mapper::run() {
    if (verbose_) std::fprintf(stderr, "[rob-run-radar] mapper: run\n");
    // core logic lives here
    return true;
}

}  // namespace robrunradar
