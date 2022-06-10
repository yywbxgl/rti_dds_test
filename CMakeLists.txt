cmake_minimum_required(VERSION 3.3.2)
project (example)
set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}
    "/home/wangtao/rti_connext_dds-6.1.0/resource/template/rti_workspace/examples/getting_started/resources/cmake")

find_package(RTIConnextDDS "6.1.0" REQUIRED)
#add_definitions(${CONNEXTDDS_COMPILE_DEFINITIONS})
include_directories( ${CONNEXTDDS_INCLUDE_DIRS})

set(SOURCES_PUB
    hello_world_publisher.cxx
    hello_world.cxx
    hello_worldPlugin.cxx
    hello_worldSupport.cxx)

add_executable(HelloWorld_c_publisher ${SOURCES_PUB})
target_link_libraries(HelloWorld_c_publisher
    PUBLIC
        RTIConnextDDS::cpp2_api
        )
