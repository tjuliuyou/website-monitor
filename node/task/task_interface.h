//
// Created by 刘优 on 16/6/2.
//

#ifndef WEBSITEMONITOR__NODE_TASK_INTERFACE_H_
#define WEBSITEMONITOR__NODE_TASK_INTERFACE_H_

#include <iostream>
#include <string>

namespace webmonitor {

namespace node {

class TaskInterface {

public:

  virtual ~TaskInterface() { }

  virtual bool reach_time(const std::time_t&) const = 0;

  virtual bool varify_task_content() const = 0;

  bool run() {
    _running = true;
    _last_run_time = std::time(nullptr);
    auto ret = _do_run();
    _running = false;
    return ret;
  }

protected:

  virtual bool _do_run() = 0;

  bool _is_running() const { return _running;}

  std::time_t _last_run_time{std::time(nullptr)};

private:

  bool _running{false};

};

}

// inline bool operator==(const TaskInterface &lhs, const TaskInterface &rhs) {
//   return (lhs.equal_to(rhs) && lhs.dump() == rhs.dump());
// }
//
// inline bool operator!=(const TaskInterface &lhs, const TaskInterface &rhs) {
//   return !(lhs == rhs);
// }

} //namespace webmonitor

#endif //WEBSITEMONITOR__NODE_TASK_INTERFACE_H_
