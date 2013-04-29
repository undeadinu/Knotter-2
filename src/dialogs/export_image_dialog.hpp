/**
  
\file

\author Mattia Basaglia

\section License
This file is part of Knotter.

Copyright (C) 2012-2013  Mattia Basaglia

Knotter is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Knotter is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef EXPORT_IMAGE_DIALOG_HPP
#define EXPORT_IMAGE_DIALOG_HPP

#include "ui_export_image_dialog.h"

class Export_Image_Dialog : public QDialog, private Ui::Export_Image_Dialog
{
    Q_OBJECT
    
public:
    explicit Export_Image_Dialog(QWidget *parent = 0);
    
protected:
    void changeEvent(QEvent *e);
private slots:
    void on_button_ratio_toggled(bool checked);
    void on_slider_compression_valueChanged(int value);
};

#endif // EXPORT_IMAGE_DIALOG_HPP
