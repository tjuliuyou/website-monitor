//
// Created by 刘优 on 16/6/4.
//

#ifndef WEBSITEMONITOR_COMMON_OPTIONS_H_
#define WEBSITEMONITOR_COMMON_OPTIONS_H_

#include <string>

namespace webmonitor {

class LocalConfig;

class Options {

public:
  explicit Options(const std::string& config_path);
  ~Options();

  std::string get_log_path() const;
  std::string get_log_config_path() const;
  int get_report_frequency() const;
  int get_fetchtask_frequency() const;
  int get_taskserver_port() const;
  std::string get_taskserver_addr() const;
  std::string get_upload_addr() const;
  int get_upload_port() const;

private:
  std::unique_ptr<LocalConfig> _config;
};

} //namespace webmonitor

#endif //WEBSITEMONITOR_COMMON_OPTIONS_H_
