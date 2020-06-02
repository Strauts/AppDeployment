cmake_minimum_required(VERSION 3.5)

project(KKOGSK LANGUAGES CXX)

find_package(Qt5 COMPONENTS Core Widgets LinguistTools Gui REQUIRED Quick Sql)


set(project_ui
    mainwindow.ui
    SecondWindowDialog.ui
    QuestionDialog.ui
    LoginDialog.ui
    ProfileDialog.ui
    homepagedialog.ui
    calenderdialog.ui
    resultsdialog.ui
    qt5databasedialog.ui
    settingsdialog.ui
    avatardialog.ui
    tasksdialog.ui
    rewarddialog.ui
    registerdialog.ui
    workerprofiledialog.ui
    workerresultdialog.ui
    changepwdialog.ui
    commentdialog.ui
    patientdialog.ui
    patientInformationdialog.ui
    readquestiondialog.ui
    bodyquestiondialog.ui
    secondwindowbodydialog.ui
    onepicquestiondialog.ui
    textquestiondialog.ui
    mainwindowuserdialog.ui
    choosetestdialog.ui
    nextquestion.ui
    jumpqdialog.ui)

set(project_headers
    mainwindow.h
    SecondWindowDialog.h
    QuestionDialog.h
    LoginDialog.h
    ProfileDialog.h
    homepagedialog.h
    calenderdialog.h
    resultsdialog.h
    qt5databasedialog.h
    settingsdialog.h
    avatardialog.h
    tasksdialog.h
    rewarddialog.h
    registerdialog.h
    workerprofiledialog.h
    workerresultdialog.h
    changepwdialog.h
    commentdialog.h
    patientdialog.h
    patientinformationdialog.h
    readquestiondialog.h
    bodyquestiondialog.h
    secondwindowbodydialog.h
    onepicquestiondialog.h
    textquestiondialog.h
    mainwindowuserdialog.h
    choosetestdialog.h
    nextquestion.h
    jumpqdialog.h)

set(project_sources
    main.cpp
    mainwindow.cpp
    SecondWindowDialog.cpp
    QuestionDialog.cpp
    LoginDialog.cpp
    ProfileDialog.cpp
    homepagedialog.cpp
    calenderdialog.cpp
    resultsdialog.cpp
    qt5databasedialog.cpp
    settingsdialog.cpp
    avatardialog.cpp
    tasksdialog.cpp
    rewarddialog.cpp
    registerdialog.cpp
    workerprofiledialog.cpp
    workerresultdialog.cpp
    changepwdialog.cpp
    commentdialog.cpp
    patientdialog.cpp
    patientinformationdialog.cpp
    readquestiondialog.cpp
    bodyquestiondialog.cpp
    secondwindowbodydialog.cpp
    onepicquestiondialog.cpp
    textquestiondialog.cpp
    mainwindowuserdialog.cpp
    choosetestdialog.cpp
    nextquestion.cpp
    jumpqdialog.cpp)

qt5_wrap_ui(project_headers_wrapped ${project_ui})
qt5_wrap_cpp(project_sources_moc ${project_headers})


set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(CMAKE_INSTALL_UCRT_LIBRARIES TRUE)

# QtCreator supports the following variables for Android, which are identical to qmake Android variables.
# Check http://doc.qt.io/qt-5/deployment-android.html for more information.
# They need to be set before the find_package(Qt5 ...) call.

if(ANDROID)
    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    if (ANDROID_ABI STREQUAL "armeabi-v7a")
        set(ANDROID_EXTRA_LIBS
            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libcrypto.so
            ${CMAKE_CURRENT_SOURCE_DIR}/path/to/libssl.so)
    endif()
endif()

set(TS_FILES KKOGSK_nb_NO.ts)

if(ANDROID)
  add_library(${PROJECT_NAME}
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    bgandfontresource.qrc
    ResourceButton.qrc
    ResourcePictures1.qrc
    ResourcePictures2.qrc
    ${project_headers}
    ${project_sources}
    ${project_sources_moc}
    ${project_headers_wrapped}
    ${TS_FILES}
  )
else()
  add_executable(${PROJECT_NAME}
#    KKOGSK
#     main.cpp
#    mainwindow.cpp
#    mainwindow.h
#    mainwindow.ui
    bgandfontresource.qrc
    ResourceButton.qrc
    ResourcePictures1.qrc
    ResourcePictures2.qrc
    ${project_headers}
    ${project_sources}
    ${project_sources_moc}
    ${project_headers_wrapped}
    ${TS_FILES}
  )
endif()
#   can change to public linking
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    Qt5::Widgets
    Qt5::Gui
    Qt5::Core
    Qt5::Quick
    Qt5::Sql
)


qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
