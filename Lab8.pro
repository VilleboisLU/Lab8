QT -= gui
QT += testlib
QT += network

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += C:/Test/Lab8/curl-8.11.0_4-win32-mingw/lib/libcurl.a
LIBS += C:/Test/Lab8/curl-8.11.0_4-win32-mingw/lib/libcurl.dll.a

INCLUDEPATH += C:/Test/Lab8/curl-8.11.0_4-win32-mingw/includer/curl

SOURCES += \
        addpage.cpp \
        autpage.cpp \
        edipage.cpp \
        filpage.cpp \
        main.cpp \
        navpage.cpp \
        regpage.cpp \
        seapage.cpp \
        web_tests.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    addpage.h \
    autpage.h \
    curl-8.11.0_4-win32-mingw/include/curl/curl.h \
    edipage.h \
    filpage.h \
    navpage.h \
    regpage.h \
    seapage.h \
    web_tests.h \
    webdriverxx.h \
    webdriverxx/browsers/chrome.h \
    webdriverxx/browsers/firefox.h \
    webdriverxx/browsers/ie.h \
    webdriverxx/browsers/phantom.h \
    webdriverxx/picojson.h \
    webdriverxx/wait.h \
    webdriverxx/wait_match.h \
    webdriverxx/webdriver.h

DISTFILES +=
