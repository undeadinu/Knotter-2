# Copyright (C) 2012-2013  Mattia Basaglia
#
# Knotter is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Knotter is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

INCLUDEPATH += $$PWD

HEADERS += \
    $$PWD/node.hpp \
    $$PWD/graph.hpp \
    $$PWD/edge.hpp \
    src/graph/edge_style.hpp \
    src/graph/graph_item.hpp

SOURCES += \
    $$PWD/node.cpp \
    $$PWD/graph.cpp \
    $$PWD/edge.cpp \
    src/graph/edge_style.cpp \
    src/graph/graph_item.cpp
