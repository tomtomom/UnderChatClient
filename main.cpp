#include <QtCore/QCoreApplication>
#include <cstdio>

#define APPLICATION_TITLE "UnderChat"
#define MAJORRELEASE 0
#define MINORRELEASE 1
#define PATCHNUMBER  0

int main(int argc, char *argv[])
{
    QCoreApplication LocalCLient(argc, argv);

    return LocalCLient.exec();
}
