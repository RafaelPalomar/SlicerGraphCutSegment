cmake_minimum_required(VERSION 3.5)

project(GraphCutSegment)

#-----------------------------------------------------------------------------
# Extension meta-information
set(EXTENSION_HOMEPAGE "https://github.com/Slicer/SlicerGraphCutSegment")
set(EXTENSION_CATEGORY "Segmentation")
set(EXTENSION_CONTRIBUTORS "Daphne Chen (Western University), Andras Lasso (PerkLab)")
set(EXTENSION_DESCRIPTION "Graph cut algorithm based segmentation tool.")
set(EXTENSION_ICONURL "http://www.example.com/Slicer/Extensions/GraphCutSegment.png")
set(EXTENSION_SCREENSHOTURLS "https://raw.githubusercontent.com/Slicer/SlicerGraphCutSegment/master/screenshot.png")

#-----------------------------------------------------------------------------
# Extension dependencies
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#-----------------------------------------------------------------------------
# Extension modules
add_subdirectory(GraphCutInteractiveSegmenter)
add_subdirectory(GraphCutSegmentSelfTest)
## NEXT_MODULE

#-----------------------------------------------------------------------------
include(${Slicer_EXTENSION_CPACK})
