// utils.cpp — part of opencode-token-abuse.

#include "opencodetokenabuse/utils.h"

#include <cstdio>

namespace opencodetokenabuse {

Utils::Utils(const std::string& config_path)
    : config_path_(config_path) {}

void Utils::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Utils::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-token-abuse] utils: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodetokenabuse
