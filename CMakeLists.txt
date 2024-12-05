cmake_minimum_required(VERSION 3.10)

project(DeribitTradingSystem)

set(CMAKE_CXX_STANDARD 17)

# Find Boost and CURL
find_package(Boost REQUIRED)
find_package(CURL REQUIRED)

# WebSocket++ includes
include_directories("/usr/local/include")
link_directories("/usr/local/lib")

# Add your source files here
add_executable(DeribitTradingSystem
    main.cpp
    api.cpp
    websocket_server.cpp
    utils.cpp
)

# Link with Boost, CURL, and WebSocket++
target_link_libraries(DeribitTradingSystem ${Boost_LIBRARIES} ${CURL_LIBRARIES})
include_directories("/Users/ashutoshsingh/Documents/Project")
