/* Copyright (c) 2016 Baidu, Inc. All Rights Reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
==============================================================================*/

#ifndef MOBILE_DEEP_LEARNING_SOFT_MAX_LAYER_H
#define MOBILE_DEEP_LEARNING_SOFT_MAX_LAYER_H

#include "commons/commons.h"
#include "base/layer.h"

namespace mdl {
    class SoftmaxLayer : public Layer {
    public:
        SoftmaxLayer(const Json &config);

        ~SoftmaxLayer();

        void forward(int thread_num);

        int _outer_count;
        int _inner_count;
        int _softmax_dim;
        Matrix*_sum_matrix;
        Matrix* _scale_matrix;

    };

}

#endif //MOBILE_DEEP_LEARNING_SOFT_MAX_LAYER_H
