cmake_minimum_required(VERSION 3.28)
project(Nonogrammar LANGUAGES C)
set(CMAKE_C_STANDARD 17)

set(SRC
    main
)

list(TRANSFORM SRC PREPEND "src/")
list(TRANSFORM SRC APPEND ".c")

add_executable(${PROJECT_NAME} ${SRC})
target_include_directories(${PROJECT_NAME} PRIVATE "inc/")
