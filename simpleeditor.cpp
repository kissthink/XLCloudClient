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

#include "simpleeditor.h"
#include "ui_simpleeditor.h"

SimpleEditor::SimpleEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SimpleEditor),
    isAccepted(false)
{
    ui->setupUi(this);
}

SimpleEditor::~SimpleEditor()
{
    delete ui;
}

QString SimpleEditor::getText()
{
    return isAccepted ? ui->plainTextEdit->toPlainText() : QString ();
}

void SimpleEditor::on_buttonBox_accepted()
{
    isAccepted = true;
}
