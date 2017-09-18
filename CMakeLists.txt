#files

file(GLOB EssexEngineWindowDaemon_HEADERS
    "src/Daemons/WindowDaemon/*.h"
)
file(GLOB EssexEngineWindowDaemon_SRC
    ${EssexEngineWindowDaemon_HEADERS}
    "src/Daemons/WindowDaemon/*.cpp"
)

#setup headers

file(COPY ${EssexEngineWindowDaemon_HEADERS} DESTINATION "${CMAKE_BINARY_DIR}/lib/include/EssexEngineWindowDaemon/")

#setup build

add_library(EssexEngineWindowDaemon SHARED ${EssexEngineWindowDaemon_SRC})
target_link_libraries(EssexEngineWindowDaemon EssexEngineCore)