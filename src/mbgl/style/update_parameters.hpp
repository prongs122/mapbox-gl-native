#pragma once

#include <mbgl/map/mode.hpp>

namespace mbgl {

class TransformState;
class Scheduler;
class FileSource;
class AnnotationManager;

namespace style {

class Style;

class UpdateParameters {
public:
    UpdateParameters(float pixelRatio_,
                          MapDebugOptions debugOptions_,
                          const TransformState& transformState_,
                          Scheduler& workerScheduler_,
                          FileSource& fileSource_,
                          const MapMode mode_,
                          AnnotationManager& annotationManager_,
                          Style& style_,
                          uint32_t fixedPrefetchZoom_,
                          uint32_t dynamicPrefetchZoom_)
        : pixelRatio(pixelRatio_),
          debugOptions(debugOptions_),
          transformState(transformState_),
          workerScheduler(workerScheduler_),
          fileSource(fileSource_),
          mode(mode_),
          annotationManager(annotationManager_),
          style(style_),
          fixedPrefetchZoom(fixedPrefetchZoom_),
          dynamicPrefetchZoom(dynamicPrefetchZoom_) {}

    float pixelRatio;
    MapDebugOptions debugOptions;
    const TransformState& transformState;
    Scheduler& workerScheduler;
    FileSource& fileSource;
    const MapMode mode;
    AnnotationManager& annotationManager;

    // TODO: remove
    Style& style;

    const uint32_t fixedPrefetchZoom;
    const uint32_t dynamicPrefetchZoom;
};

} // namespace style
} // namespace mbgl
