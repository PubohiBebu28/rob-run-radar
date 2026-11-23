// overlay — part of rob-run-radar.

#pragma once

#include <string>
#include <vector>

namespace robrunradar {

class Overlay {
public:
    explicit Overlay(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace robrunradar
