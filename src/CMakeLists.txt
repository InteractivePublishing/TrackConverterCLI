
set(MODULE_NAME TrackIOConverter)

#
# SlicerExecutionModel
#
find_package(SlicerExecutionModel REQUIRED)
include(${SlicerExecutionModel_USE_FILE})

set(${MODULE_NAME}_SRCS
  trackVisImage.h
  trackVisImage.cpp
  )

#-----------------------------------------------------------------------------
set(${MODULE_NAME}_TARGET_LIBRARIES ${VTK_LIBRARIES})

#-----------------------------------------------------------------------------
SEMMacroBuildCLI(
  NAME ${MODULE_NAME}
  ADDITIONAL_SRCS ${${MODULE_NAME}_SRCS}
  TARGET_LIBRARIES ${${MODULE_NAME}_TARGET_LIBRARIES}
  EXECUTABLE_ONLY
)
