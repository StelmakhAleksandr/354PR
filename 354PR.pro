TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        app.cpp \
        decorator/beverage.cpp \
        decorator/coffee.cpp \
        decorator/condiment.cpp \
        decorator/milk.cpp \
        decorator/sugar.cpp \
        decorator/tea.cpp \
        main.cpp \
        sortHelper.cpp \
        timer.cpp

HEADERS += \
    app.h \
    decorator/beverage.h \
    decorator/coffee.h \
    decorator/condiment.h \
    decorator/milk.h \
    decorator/sugar.h \
    decorator/tea.h \
    sortHelper.h \
    timer.h
