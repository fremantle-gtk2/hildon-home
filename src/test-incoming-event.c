/*
 * This file is part of hildon-home
 * 
 * Copyright (C) 2008 Nokia Corporation.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <hildon/hildon.h>

#include "hd-incoming-event-window.h"

int
main (int argc, char **argv)
{
  gtk_init (&argc, &argv);

  /* Demo notification window */
  gtk_widget_show (hd_incoming_event_window_new (
			  FALSE,
			  "Email Sender",
			  "Email Subject",
			  12220784,
			  "qgn_list_messagin"));

  /* Start the main loop */
  gtk_main ();

  return 0;
}