// inject.cpp — part of opencode-token-abuse.

#include "opencodetokenabuse/inject.h"

#include <cstdio>

namespace opencodetokenabuse {

Inject::Inject(const std::string& config_path)
    : config_path_(config_path) {}

void Inject::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Inject::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-token-abuse] inject: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodetokenabuse
