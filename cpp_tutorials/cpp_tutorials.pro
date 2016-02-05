TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += ../*.cpp

include(deployment.pri)
qtcAddDeployment()

