/**

\file

\author Mattia Basaglia

\section License
This file is part of Knotter.

Copyright (C) 2012  Mattia Basaglia

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
#ifndef CLIPBOARD_HPP
#define CLIPBOARD_HPP
#include "knotview.hpp"

class ClipboardItem
{
    protected:
        struct ClipboardNode
        {
            int     id;
            QPointF pos;
            explicit ClipboardNode ( int id, QPointF pos = QPointF() )
                : id ( id ), pos ( pos ) {}
        };

        struct ClipboardEdge
        {
            int n1;
            int n2;
            explicit ClipboardEdge ( int n1, int n2 )
                : n1 ( n1 ), n2 ( n2 ) {}
            bool operator== ( const ClipboardEdge& e )
                { return n1 == e.n1 && n2 == e.n2; }
        };

        QPointF              center;
        QList<ClipboardNode> nodes;
        QList<ClipboardEdge> edges;

    public:

        explicit ClipboardItem ( node_list nodes = node_list() );

        void paste ( KnotView*, QPointF p ) const;
        void copy ( KnotView* ) ;



};

#endif // CLIPBOARD_HPP
