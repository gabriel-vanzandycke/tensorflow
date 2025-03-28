/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_MLIR_TENSORFLOW_TRANSFORMS_PASSES_H_
#define TENSORFLOW_COMPILER_MLIR_TENSORFLOW_TRANSFORMS_PASSES_H_

namespace mlir {
class FunctionPassBase;

/// Transform functional control flow operations in the standard TensorFlow
/// dialect to MLIR Control Flow Graph (CFG) form.
FunctionPassBase *createTFFunctionalControlFlowToCFG();

/// Raise from the "TensorFlow Control Flow" dialect to the standard TensorFlow
/// dialect.
FunctionPassBase *createRaiseTFControlFlowPass();

/// Optimize Tensorflow graph.
FunctionPassBase *createTFOptimizePass();

}  // namespace mlir

#endif  // TENSORFLOW_COMPILER_MLIR_TENSORFLOW_TRANSFORMS_PASSES_H_
