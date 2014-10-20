/*
 * spi.h
 *
 *  Created on: 2014.10.20.
 *      Author: Grimgrin
 */

#ifndef SPI_H_
#define SPI_H_


void spi_init(uint32_t base, uint32_t baud);
void spi_advanced_init(uint32_t base, uint16_t baudReg);


#endif /* SPI_H_ */
