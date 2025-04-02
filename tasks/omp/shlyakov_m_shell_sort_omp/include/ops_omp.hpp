#pragma once

#include <omp.h>

#include <utility>
#include <vector>

#include "core/task/include/task.hpp"

namespace shlyakov_m_shell_sort_omp {

class TestTaskOpenMP : public ppc::core::Task {
 public:
  explicit TestTaskOpenMP(ppc::core::TaskDataPtr task_data) : Task(std::move(task_data)) {}

  bool PreProcessingImpl() override;
  bool ValidationImpl() override;
  bool RunImpl() override;
  bool PostProcessingImpl() override;

 private:
  std::vector<int> input_, output_;
};

}  // namespace shlyakov_m_shell_sort_omp