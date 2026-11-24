// cli.cpp — part of opencode-token-abuse.

#include "opencodetokenabuse/cli.h"

#include <cstdio>

namespace opencodetokenabuse {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[opencode-token-abuse] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace opencodetokenabuse
