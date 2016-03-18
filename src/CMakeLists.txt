

add_library(tractio SHARED
    trackVisImage.h
    trackVisImage.cpp
    )

target_link_libraries(tractio ${VTK_LIBRARIES})
