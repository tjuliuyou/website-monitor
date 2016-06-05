//
// Created by 刘优 on 16/6/4.
//

#ifndef WEBSITEMONITOR_NODE_LOGGER_H_
#define WEBSITEMONITOR_NODE_LOGGER_H_

#include "spdlog/spdlog.h"

namespace webmonitor {

namespace node {

const std::string NODE_TAG = "node_log";

bool init_logger(const std::string& path) noexcept;

}

}

#endif //WEBSITEMONITOR_NODE_LOGGER_H_
