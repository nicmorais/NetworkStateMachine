cmake_minimum_required(VERSION 3.5)

project(NetworkStateMachine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
        main.cpp
        device.h
        device.cpp
        state/link_down_state.h
        state/link_down_state.cpp
        state/enviando_start_state.h
        state/enviando_start_state.cpp
        state/device_state.h
        state/start_recebido_state.h
        state/start_recebido_state.cpp
        state/link_ok_state.h
        state/link_ok_state.cpp
 event/event.h)

add_executable(NetworkStateMachine
    main.cpp
${PROJECT_SOURCES})
