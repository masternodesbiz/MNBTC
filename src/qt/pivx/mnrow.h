// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2021-2023 The mnbtc Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MNROW_H
#define MNROW_H

#include <QWidget>

namespace Ui {
class MNRow;
}

class MNRow : public QWidget
{
    Q_OBJECT

public:
    explicit MNRow(QWidget *parent = nullptr);
    ~MNRow();

    void updateView(QString address, QString label, QString status, bool wasCollateralAccepted);

Q_SIGNALS:
    void onMenuClicked();
private:
    Ui::MNRow *ui;
};

#endif // MNROW_H
