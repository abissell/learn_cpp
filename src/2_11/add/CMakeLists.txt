add_library(addlib
        add.cpp
        add.h
)

target_include_directories(addlib
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)