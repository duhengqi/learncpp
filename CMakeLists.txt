cmake_minimum_required(VERSION 3.0.0) #最低要求的CMake版本
project(learnCpp VERSION 0.1.0) # 项目名称

#重新定义目标二进制可执行文件的存放位置
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#重新定义目标链接库文件的存放位置
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include(CTest)
enable_testing()
add_subdirectory(src)
#暂不编译test
#add_subdirectory(test)