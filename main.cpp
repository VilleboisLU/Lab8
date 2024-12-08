#include <QCoreApplication>
#include <QtTest/QTest>
#include <QProcess>
#include <QDebug>
#include <QObject>

#include "web_tests.h"
#include <webdriverxx.h>

using namespace webdriverxx;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTest::qExec(new Web_Tests, argc, argv);
    return a.exec();
}
