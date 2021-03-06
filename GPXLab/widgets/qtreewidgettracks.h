/****************************************************************************
 *   Copyright (c) 2014 - 2015 Frederic Bourgeois <bourgeoislab@gmail.com>  *
 *                                                                          *
 *   This program is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by   *
 *   the Free Software Foundation, either version 3 of the License, or      *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   This program is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   You should have received a copy of the GNU General Public License      *
 *   along with This program. If not, see <http://www.gnu.org/licenses/>.   *
 ****************************************************************************/

#ifndef _QTREEWIDGETTRACKS_H_
#define _QTREEWIDGETTRACKS_H_

#include <QTreeWidget>
#include "gpx_wrapper.h"

/**
 * @addtogroup Widgets Widgets
 * @brief Widgets related functions
 * @{
 */

/**
 * @class QTreeWidgetTracks
 *
 * @brief QTreeWidget subclass
 *
 * Extends the QTreeWidget class.
 *
 * @see QTreeWidget
 *
 * @author Frederic Bourgeois <bourgeoislab@gmail.com>
 * @version 1.2
 * @date 4 Jan 2015
 */
class QTreeWidgetTracks : public QTreeWidget
{
    Q_OBJECT

public:

    /**
     * @brief Constructor
     * @param parent Parent
     */
    explicit QTreeWidgetTracks(QWidget *parent = 0);

    /**
     * @brief Generates the tree
     * @param gpxmw GPX_model wrapper
     */
    void build(const GPX_wrapper *gpxmw);

    /**
     * @brief Selects the track or track segment
     * @param trackNumber Track number
     * @param trackSegmentNumber Track segment number, if -1 select track
     */
    void select(int trackNumber, int trackSegmentNumber = -1);

    /**
     * @brief Sets the text of an item
     * @param name New text
     * @param trackNumber Track number
     * @param trackSegmentNumber Track segment number, -1 for track
     */
    void setItemName(const QString& name, int trackNumber, int trackSegmentNumber = -1);
};

/** @} Widgets */

#endif // _QTREEWIDGETTRACKS_H_
