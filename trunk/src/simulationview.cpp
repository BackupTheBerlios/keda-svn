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
#include "simulationview.h"
#include <qlayout.h>

SimulationView::SimulationView( QWidget *parent ): Simulationwidget( parent )
	{
	L = new Lightwidget( light_frame );
	light_frameLayout->addMultiCellWidget( L, 1, 1, 0, 1 );
	L->hide();
	M = new Magnetismwidget( magnetism_frame );
	magnetism_frameLayout->addMultiCellWidget( M, 1, 1, 0, 1 );
	M->hide();
	H = new Humiditywidget( humidity_frame );
	humidity_frameLayout->addMultiCellWidget( H, 1, 1, 0, 1 );
	H->hide();
	S = new SensorView( sensor_frame );
	sensor_frameLayout->addMultiCellWidget( S, 1, 1, 0, 1 );
	S->hide();
	}

SimulationView::~SimulationView()
	{
	}

void SimulationView::new_clicked()
	{
	}

void SimulationView::save_clicked()
	{
	}

void SimulationView::load_clicked()
{
}

void SimulationView::light_popup_clicked()
	{
	if( L->isVisible() )
		L->hide();
	else
		L->show();
	}

void SimulationView::magnetism_popup_clicked()
	{
	if( M->isVisible() )
		M->hide();
	else
		M->show();
	}

void SimulationView::humidity_popup_clicked()
	{
	if( H->isVisible() )
		H->hide();
	else
		H->show();
	}

void SimulationView::sensor_popup_clicked()
	{
	if( S->isVisible() )
		S->hide();
	else
		S->show();
	}

void SimulationView::acceleration_popup_clicked()
	{
	
	}

void SimulationView::vibration_popup_clicked()
	{
	
	}

void SimulationView::pressure_popup_clicked()
	{
	
	}

void SimulationView::next_page_clicked()
	{
	
	}

void SimulationView::page_back_clicked()
	{
	
	}

void SimulationView::play_clicked()
	{
	}

void SimulationView::stop_clicked()
	{
	}

void SimulationView::pause_clicked()
	{
	}


