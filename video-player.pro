QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ctrl_bar_wgt.cpp \
    custom_slider.cpp \
    main.cpp \
    mainwindow.cpp \
    media_list.cpp \
    play_list_wgt.cpp \
    setting_wgt.cpp \
    show_wgt.cpp \
    title_wgt.cpp

HEADERS += \
    ctrl_bar_wgt.h \
    custom_slider.h \
    mainwindow.h \
    media_list.h \
    play_list_wgt.h \
    setting_wgt.h \
    show_wgt.h \
    title_wgt.h

FORMS += \
    about_dialog.ui \
    ctrl_bar_wgt.ui \
    mainwindow.ui \
    play_list_wgt.ui \
    setting_wgt.ui \
    show_wgt.ui \
    title_wgt.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
