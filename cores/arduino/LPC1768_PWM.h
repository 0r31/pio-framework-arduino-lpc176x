/**
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _LPC1768_PWM_H_
#define _LPC1768_PWM_H_

#include <pinmapping.h>

void LPC1768_PWM_init(void);
bool LPC1768_PWM_attach_pin(const pin_t pin);
bool LPC1768_PWM_write(const pin_t pin, const uint32_t value);
bool LPC1768_PWM_detach_pin(const pin_t pin);
constexpr bool useable_hardware_PWM(const pin_t pin);

#endif // _LPC1768_PWM_H_
