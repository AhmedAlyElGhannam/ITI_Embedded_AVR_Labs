#include "dio_private.h"
#include "dio_cfg.h"
#include "dio.h"

error_t MCAL_DIO_enumSetPinVal(u8 copy_u8PinVal, u8 copy_u8PortName)
{
    error_t ret_enumStatus = ALL_OK;

    if (copy_u8PinVal > MAX_PIN_NUM)
    {
        ret_enumStatus = INV_PIN_NUM;
        goto out;
    }

    if (copy_u8PortName > MAX_PORT_NUM)
    {
        ret_enumStatus = INV_PORT_NUM;
        goto out;
    }

    switch (copy_u8PortName)
    {
        case PORTA:

        break;

        case PORTB:

        break;

        case PORTC:

        break;

        case PORTD:

        break;
    }

out:
    return ret_enumStatus;
}