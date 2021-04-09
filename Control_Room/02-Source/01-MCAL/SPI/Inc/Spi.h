#ifndef SPI_H_
#define SPI_H_

#include "Std_Types.h"

#define SPI_SCK  7
#define SPI_MISO 6
#define SPI_MOSI 5
#define SPI_SS   4

/*
	Function Name        : SPI_vInitMaster
	Function Returns     : void
	Function Arguments   : void
	Function Description : Initialize the master.
*/
void SPI_vInitMaster (void);

/*
	Function Name        : SPI_vInitSlave
	Function Returns     : void
	Function Arguments   : void
	Function Description : Initialize the slave.
*/
void SPI_vInitSlave (void);

/*
	Function Name        : SPI_ui8TransmitRecive
	Function Returns     : uint8
	Function Arguments   : uint8 data
	Function Description : Send data in case of master or receive data and send response in case of slave.
*/
u8 SPI_ui8TransmitRecieve (u8 data);

#endif /* SPI_H_ */
