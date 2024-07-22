#include <game.h>
#include <QApplication>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Game game;

    game.show();
    game.setWindowTitle("The Snake game");
    game.setWindowIcon(QIcon("C:/Users/BlackRock/OneDrive/Документы/Snake/Snake.jpg"));

    return app.exec();
}
