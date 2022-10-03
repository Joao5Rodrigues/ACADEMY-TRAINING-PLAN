#include "Operators.h"

UINT32 sum ( UINT32 input_1, UINT32 input_2, BOOLEAN * valid){
    if (input_1 > 200 || input_2 > 200 || input_1 < 0 || input_2 < 0){
        valid = FALSE;
    }else
        valid = TRUE;
    
    return (input_1 + input_2);
}

UINT32 subtraction (UINT32 input_1, UINT32 input_2, BOOLEAN * valid){
    if (input_1 > 200 || input_2 > 200 || input_1 < 0 || input_2 < 0){
        valid = FALSE;
    }else if (input_1 < input_2){
        valid = FALSE;
    }else   valid = TRUE;

    return (input_1 - input_2);
}

UINT32 multiplication ( UINT32 input_1, UINT32 input_2, BOOLEAN * valid){
    if (input_1 > 200 || input_2 > 200 || input_1 < 0 || input_2 < 0){
        valid = FALSE;
    }else   valid = TRUE;
    
    return (input_1 * input_2);
}

UINT32 division ( UINT32 input_1, UINT32 input_2, BOOLEAN * valid){
    if (input_1 > 200 || input_2 > 200 || input_1 < 0 || input_2 < 0){
        valid = FALSE;
    }else if (input_2 == 0){
        valid = FALSE;
    }else   valid = TRUE;
    
    return (input_1 / input_2);
}