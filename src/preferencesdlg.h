/*
 *  CloudClient - A Qt cloud client for lixian.vip.xunlei.com
 *  Copyright (C) 2012 by Aaron Lewis <the.warl0ck.1989@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PREFERENCESDLG_H
#define PREFERENCESDLG_H

#include <QDialog>
#include <QSettings>

#include "util.h"
#include "config.h"

namespace Ui {
class PreferencesDlg;
}

class PreferencesDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit PreferencesDlg(QWidget *parent = 0);
    ~PreferencesDlg();
    
private slots:
    void on_buttonBox_accepted();

private:
    Ui::PreferencesDlg *ui;

    QString tmp_lastCred;
};

#endif // PREFERENCESDLG_H
