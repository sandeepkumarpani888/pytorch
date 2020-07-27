#pragma once

#include <torch/csrc/jit/ir/ir.h>

namespace torch {
namespace jit {

TORCH_API std::shared_ptr<Graph> Canonicalize(
    const std::shared_ptr<Graph>& graph,
    bool keep_unique_names = true);

TORCH_API void CanonicalizeOutputs(std::shared_ptr<Graph>& graph);

c10::optional<const Use> firstOrLastUse(Value* v, bool find_first);

} // namespace jit
} // namespace torch
