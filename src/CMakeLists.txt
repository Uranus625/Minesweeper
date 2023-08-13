cmake_minimum_required(VERSION 3.5)

project(minesweeper)
find_package(Qt5 COMPONENTS Core Widgets Multimedia REQUIRED)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)

QT5_WRAP_CPP(MOC_SOURCES1 ../include/mainwindow.h)
QT5_WRAP_CPP(MOC_SOURCES2 ../include/dialog.h)

include_directories (../include)
aux_source_directory (. SRC_LIST)
add_executable (minesweeper ${SRC_LIST} ${MOC_SOURCES1} ${MOC_SOURCES2})
target_link_libraries(minesweeper PRIVATE Qt5::Widgets Qt5::Core Qt5::Multimedia)
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
