QT          += widgets
QT +=testlib
HEADERS     = glwidget.h \
              helper.h \
    threadclass.h \
              widget.h \
              window.h \


SOURCES     = glwidget.cpp \
              helper.cpp \
              main.cpp \
    threadclass.cpp \
              widget.cpp \
              window.cpp \


# install
target.path = $$[QT_INSTALL_EXAMPLES]/opengl/2dpainting
INSTALLS += target
