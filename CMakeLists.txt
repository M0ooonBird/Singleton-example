cmake_minimum_required(VERSION 3.18)  
project(MyProject)                  

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 


file(GLOB_RECURSE SOURCES "src/*.cpp") 
file(GLOB_RECURSE HEADER_FILES "include/*.h" "include/*.hpp")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADER_FILES})
# 分组显示头文件
source_group("Include" FILES ${HEADER_FILES})


target_include_directories(${PROJECT_NAME} 
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)