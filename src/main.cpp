#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //创建QApplication对象
    Minesweeper w; // 创建主窗口对象
    w.show();  // 显示主窗口
    return a.exec();  // 启动应用程序的事件循环
}
