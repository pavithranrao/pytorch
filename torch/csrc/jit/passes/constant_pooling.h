#pragma once

#include <torch/csrc/jit/ir/ir.h>

namespace torch {
namespace jit {

TORCH_API void constantPooling(const std::shared_ptr<Graph>& graph);
}
} // namespace torch
