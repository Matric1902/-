#ifndef SINGLEGAME_H
#define SINGLEGAME_H

#include "Board.h"

class Single : public Board
{
    Q_OBJECT
public:
    explicit Single(QWidget *parent = 0);
    ~Single();

    int _level;

    void back();
    void click(int id, int row, int col);

    Step* getBestMove();
    void getAllPossibleMove(QVector<Step*>& steps);
    int getMinScore(int level, int curMin);
    int getMaxScore(int level, int curMax);
    int score();

    void fakeMove(Step* step);
    void unfakeMove(Step* step);

signals:

public slots:
    void computerMove();
};

#endif // SINGLE_H
