/****************************************************************************
*
* Copyright (C) 2014, Jon Magnuson <my.name at google's mail service>
* All Rights Reserved.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*
****************************************************************************/


/*
 * QueueMessage.h
 *
 *  Created on: Mar 17, 2014
 *      Author: jon
 */

#ifndef QUEUEMESSAGE_H_
#define QUEUEMESSAGE_H_

/* Application includes. */
#include "barcnt.h"

typedef struct _queuemsg_t
{
	void *buffer_ptr;
	size_t buffer_len;
	barcnt_t *consumer_count_barrier;

} queuemsg_t;

#endif /* QUEUEMESSAGE_H_ */
