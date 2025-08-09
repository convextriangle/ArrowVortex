qt_add_executable(ArrowVortex 
    main.cpp 
    MainWindow.cpp 
    MainWindow.h 
    MainWindow.ui
)

target_link_libraries(ArrowVortex PRIVATE Qt6::Widgets Qt6::OpenGLWidgets)

set_target_properties(ArrowVortex PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)