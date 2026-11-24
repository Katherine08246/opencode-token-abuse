// pool.cpp — part of opencode-token-abuse.

#include "opencodetokenabuse/pool.h"

#include <cstdio>

namespace opencodetokenabuse {

Pool::Pool(const std::string& config_path)
    : config_path_(config_path) {}

void Pool::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Pool::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-token-abuse] pool: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodetokenabuse
