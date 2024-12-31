cmake_minimum_required(VERSION 3.15)  # Qt6 需要 CMake 3.15 或更高版本

# 设置项目名称和版本
project(pinyinime VERSION 1.0 LANGUAGES CXX)

# 查找 Qt6 包
find_package(Qt6 REQUIRED COMPONENTS Core)

# 包含头文件路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 添加头文件
set(HEADERS
    atomdictbase.h
    dictbuilder.h
    dictdef.h
    dictlist.h
    dicttrie.h
    lpicache.h
    matrixsearch.h
    mystdlib.h
    ngram.h
    pinyinime.h
    pinyinime_global.h
    searchutility.h
    spellingtable.h
    spellingtrie.h
    splparser.h
    sync.h
    userdict.h
    utf16char.h
    utf16reader.h
)

# 添加源文件
set(SOURCES
    dictbuilder.cpp
    dictlist.cpp
    dicttrie.cpp
    lpicache.cpp
    matrixsearch.cpp
    mystdlib.cpp
    ngram.cpp
    pinyinime.cpp
    searchutility.cpp
    spellingtable.cpp
    spellingtrie.cpp
    splparser.cpp
    sync.cpp
    userdict.cpp
    utf16char.cpp
    utf16reader.cpp
)

# 创建库
add_library(pinyinime SHARED ${SOURCES} ${HEADERS})

# 链接 Qt6 库
target_link_libraries(pinyinime Qt6::Core)

# 如果需要安装，可以添加 install 命令
# install(TARGETS pinyinime DESTINATION lib)