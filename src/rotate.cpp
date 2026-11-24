// rotate.cpp — part of opencode-token-abuse.

#include "opencodetokenabuse/rotate.h"

#include <cstdio>

namespace opencodetokenabuse {

Rotate::Rotate(const std::string& config_path)
    : config_path_(config_path) {}

void Rotate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Rotate::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-token-abuse] rotate: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodetokenabuse
