/***************************************************************************
 *   Copyright (C) 2007 by sebastian   *
 *   sebastian.bw@freenet.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef SIMULATIONVIEW_H
#define SIMULATIONVIEW_H

#include "simulationwidget.h"
#include "lightwidget.h"
#include "magnetismwidget.h"
#include "humiditywidget.h"
#include "sensorview.h"

#include <qframe.h>
#include <qwidget.h>

/**
 * @short The base class of Simulationwidget's functionality.
 * Base class also of Lightwidget, Magnetismwidget, 
 * These classes are all from .ui files and make SimulationView more comfortable.
 * @author sebastian <sebastian.bw@freenet.de>
*/
class SimulationView : public Simulationwidget
	{
	Q_OBJECT
	public:
	SimulationView( QWidget *parent );
	
	~SimulationView();
	
	Lightwidget *L;
	Magnetismwidget *M;
	Humiditywidget *H;
	SensorView *S;
	
	
	public slots:
	virtual void acceleration_popup_clicked();
	virtual void humidity_popup_clicked();
	virtual void light_popup_clicked();
	virtual void load_clicked();
	virtual void magnetism_popup_clicked();
	virtual void new_clicked();
	virtual void vibration_popup_clicked();
	virtual void save_clicked();
	virtual void pressure_popup_clicked();
	virtual void next_page_clicked();
	virtual void page_back_clicked();
	virtual void sensor_popup_clicked();
	virtual void pause_clicked();
	virtual void stop_clicked();
	virtual void play_clicked();

	};

#endif
