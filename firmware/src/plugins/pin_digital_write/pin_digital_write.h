/*******************************************************************************
Copyright (C) 2015 OLogN Technologies AG

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2 as
    published by the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*******************************************************************************/


#if !defined __SA_PIN_DIGITAL_WRITE_PLUGIN_H__
#define __SA_PIN_DIGITAL_WRITE_PLUGIN_H__

#include <simpleiot/siot_common.h>
#include <simpleiot/siot_data_types.h>

typedef struct _pin_digital_write_plugin_config
{
    uint8_t pin_num;
} pin_digital_write_plugin_config;

typedef struct _pin_digital_write_plugin_state
{

} pin_digital_write_plugin_state;

uint8_t pin_digital_write_plugin_handler_init( const void* plugin_config, void* plugin_state );
uint8_t pin_digital_write_plugin_handler( const void* plugin_config, void* plugin_state, parser_obj* command, MEMORY_HANDLE reply/*, WaitingFor* waiting_for*/, uint8_t first_byte );


#endif // __SA_PIN_DIGITAL_WRITE_PLUGIN_H__