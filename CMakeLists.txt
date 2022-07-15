cmake_minimum_required(VERSION 3.3.2)
project (example)
set(CMAKE_MODULE_PATH
    ${CMAKE_MODULE_PATH}
    "/home/qiliang/rti_connext_dds-6.1.1/resource/cmake")

find_package(RTIConnextDDS "6.1.1" REQUIRED)
#add_definitions(${CONNEXTDDS_COMPILE_DEFINITIONS})
include_directories( ${CONNEXTDDS_INCLUDE_DIRS})

file(GLOB DDS_IDL_HEAD_CXX "idl/*.cxx")

set(PUB_SOURCES_PUB  hello_world_publisher.cxx  ${DDS_IDL_HEAD_CXX} )
set(SUB_SOURCES_PUB  hello_world_subscriber.cxx  ${DDS_IDL_HEAD_CXX} )

add_executable(RTIHelloWorldPublisher ${PUB_SOURCES_PUB})
target_link_libraries(RTIHelloWorldPublisher
    PUBLIC
        RTIConnextDDS::cpp2_api
        )

add_executable(RTIHelloWorldSubscriber ${SUB_SOURCES_PUB})
target_link_libraries(RTIHelloWorldSubscriber
            PUBLIC
                RTIConnextDDS::cpp2_api
                )
        
