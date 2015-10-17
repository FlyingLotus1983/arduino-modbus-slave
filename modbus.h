#ifndef _MODBUSPROTOCOL
#define _MODBUSPROTOCOL

//Maximum device list for network
#define DEVMAX		10
//Maximum control register que size
#define QUEMAX		10
//Maximum serial wait in micro seconds
#define SERIALMAXDELAY	100
#define SERIALBAUD		9600
//the total silence time needed to signify an EOM or SOM in RTU mode

//Define where the EEPROM data starts in the 400000 register bank
#define EEPROM_START	47000
//Define how many bytes of EEPROM are available to the modbus registers
#define EEPROM_LEN	2048
#define EEPROM_END	EEPROM_START + EEPROM_LEN - 1

//Each EEPROM byte will be stored in it's own register starting at
//EEPROMSTARTREG to EEPROMSTARTREG+EEPROMLEN-1

//Modbus function codes
#define READ_DO 	0x01
#define READ_DI		0x02
#define READ_AO 	0x03
#define READ_AI		0x04

#define WRITE_DO	0x05
#define WRITE_AO	0x06

#define RTU 		0x01
#define ASCII		0x02

#define MASTER		0x01
#define SLAVE		0x02

#define DO			0x00
#define DI			0x01
#define AI			0x03
#define AO			0x04

#endif