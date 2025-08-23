add_subdirectory(add)

add_executable(headers
        headers.cpp
)

target_link_libraries(headers
        PRIVATE
        addlib
)