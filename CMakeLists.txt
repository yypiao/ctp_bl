cmake_minimum_required(VERSION 3.10)
project(ctp_bl)

set(CMAKE_CXX_STANDARD 11)

#set(INC_DIR D:/codeWorkSpaceC/ctp_bl/include)
#set(LINK_DIR D:/codeWorkSpaceC/ctp_bl/lib)
set(INC_DIR ${PROJECT_SOURCE_DIR}/include)
set(LINK_DIR ${PROJECT_SOURCE_DIR}/lib)

# 在这里动态库与静态库的设置是一样的
#添加头文件搜索路径
include_directories(${INC_DIR})
#添加库文件搜索路径
link_directories(${LINK_DIR})

#FIND_LIBRARY(RUNTIME_LIB rt /usr/lib /usr/local/lib NO_DEFAULT_PATH)

link_libraries("D:/codeWorkSpaceC/ctp_bl/lib/thostmduserapi.lib" "D:/codeWorkSpaceC/ctp_bl/lib/thosttraderapi.lib")
#target_link_libraries(${PROJECT_NAME} mybl)


#########################################
# Target（关于目标文件）
#########################################
#set(SOURCE_FILES)
add_executable(ctp_bl
#        ${SOURCE_FILES}
        main.cpp
        src/business/engine/APP.cpp
        src/business/engine/APP.h

        include/ThostFtdcMdApi.h
        include/ThostFtdcTraderApi.h
        include/ThostFtdcUserApiDataType.h
        include/ThostFtdcUserApiStruct.h

        src/base/ini/Inifile.cpp
        src/base/ini/Inifile.h
        src/utils/Lib.cpp
        src/utils/Lib.h
        src/utils/Logger.cpp
        src/utils/Logger.h
        src/business/engine/BaseExchApi.h
        src/business/ctp/ThostMdLink.cpp
        src/business/ctp/ThostMdLink.h
        )


# 设置可执行文件输出目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 链接库（动态库）
#target_link_libraries(ctp_bl thostmduserapi.dll thosttraderapi.dll)
#链接库（静态库）
target_link_libraries(ctp_bl thostmduserapi.lib thosttraderapi.lib)
