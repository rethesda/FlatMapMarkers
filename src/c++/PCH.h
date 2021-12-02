#pragma once

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"

#include <memory>
#include <string>

#ifdef NDEBUG
#include <spdlog/sinks/basic_file_sink.h>
#else
#include <spdlog/sinks/msvc_sink.h>
#endif

using namespace std::literals;

namespace logger = SKSE::log;
namespace stl = SKSE::stl;

#include "Plugin.h"

#define DLLEXPORT __declspec(dllexport)
