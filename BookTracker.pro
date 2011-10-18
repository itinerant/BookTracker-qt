TEMPLATE = app
TARGET =
DEPENDPATH += .
INCLUDEPATH += .
HEADERS += Book.h BookTracker.h
FORMS += BookTracker.ui
SOURCES += Book.cpp BookTracker.cpp main.cpp
QT += sql sql
ProjectSettings {
 SHOW_QT_VERSION_WARNING =  0
 EDITOR =  QMakeProjectEditor
 APP_TITLE =  BookTracker
 QT_VERSION =  QT  4.7
 mac {

 } CONFIG +=  release
}
CONFIG += release
RC_FILE = BookTracker.icns
