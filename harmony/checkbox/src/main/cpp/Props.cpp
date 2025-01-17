/**
 * MIT License
 * 
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * Ï
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANT KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <react/renderer/core/PropsParserContext.h>
#include <react/renderer/core/propsConversions.h>
#include "Props.h"

namespace facebook {
namespace react {

    RNCCheckboxProps::RNCCheckboxProps(const PropsParserContext &context, const RNCCheckboxProps &sourceProps,
                                       const RawProps &rawProps): ViewProps(context, sourceProps, rawProps),
            value(convertRawProp(context, rawProps, "value", sourceProps.value, {false})),
            disabled(convertRawProp(context, rawProps, "disabled", sourceProps.disabled, {false})),
            onCheckColor(convertRawProp(context, rawProps, "onCheckColor", sourceProps.onCheckColor, {})),
            markSize(convertRawProp(context, rawProps, "markSize", sourceProps.markSize, {-1.0})),
            shape(convertRawProp(context, rawProps, "shape", sourceProps.shape, {0})),
            strokeWidth(convertRawProp(context, rawProps, "strokeWidth", sourceProps.strokeWidth, {-1.0})),
            strokeColor(convertRawProp(context, rawProps, "strokeColor", sourceProps.strokeColor, {})),
            tintColor(convertRawProp(context, rawProps, "tintColor", sourceProps.tintColor, {}))
    {}

} // namespace react
} // namespace facebook
