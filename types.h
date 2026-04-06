/*Name:M.Rahul
Start Date:30/10/2025
 End Date:12/11/2025
Description:LSB image Steganography*/
#ifndef TYPES_H
#define TYPES_H


/* User defined types */
typedef unsigned int uint;

/* Status will be used in fn. return type */
typedef enum
{
    e_success,
    e_failure
} Status;

typedef enum
{
    e_encode,
    e_decode,
    e_unsupported
} OperationType;

#endif
