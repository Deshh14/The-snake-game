#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QVector>
#include <QPoint>
#include <QKeyEvent>
#include <QDebug>
#include <QPainter>
#include <QRandomGenerator>
#include <QMessageBox>

class Game : public QWidget
{
public:
    Game();

protected:
    void timerEvent(QTimerEvent*) override;
    void keyPressEvent(QKeyEvent*) override;
    void paintEvent(QPaintEvent*) override;

private:

    static const int DOT_WIDTH = 20;
    static const int DOT_HEIGHT = 20;
    static const int FIELD_WIDTH = 30;
    static const int FIELD_HEIGHT = 30;
    static const int DELAY = 100;

    int m_timerID;

    enum Directions {
        left, right, up, down
    };

    Directions m_dir;
    QPoint m_apple;
    bool m_inGame;
    QVector<QPoint> m_dots;


    void InitGame();
    void localApple();
    void doDrawing();
    void move();
    void CheckField();
    void GameOver();
    void СheckApple();

};

#endif // GAME_H
