#include "Interface.h"

UINT32 do_math(OPERATION oper, UINT32 input_1, UINT32 input_2, UINT8 * valid){
    UINT32 output = 0;
    *valid = TRUE;
    switch (oper)
    {
    case SUM:
        output = sum(input_1,input_2,&valid);
        if(*valid==FALSE){
            *valid = 0;
            output = 0;
        }else *valid = 1;
        break;
    case SUB:
        output = subtraction(input_1,input_2,&valid);
        if(*valid==FALSE){
            *valid = 0;
            output = 0;
        }else *valid = 1;
        break;
    case MUL:
        output = multiplication(input_1,input_2,&valid);
        if(*valid==FALSE){
            *valid = 0;
            output = 0;
        }else *valid = 1;
        break;
    case DIV:
        output = division(input_1,input_2,&valid);
        if(*valid==FALSE){
            *valid = 0;
            output = 0;
        }else *valid = 1;
        break;
    default:
        break;
    }
    return output;
}

INT32 pitagoras(UINT16 cateto_1, UINT16 cateto_2){
    BOOLEAN valid_flag = TRUE;
    BOOLEAN check_failing = TRUE;
    INT32 output = 0;

    if (cateto_1>=255 || cateto_2>=255){
        check_failing = FALSE;
    }

    cateto_1 = multiplication(cateto_1, cateto_1, &valid_flag);
    if (valid_flag == FALSE){
        check_failing = FALSE;
    }

    cateto_2 = multiplication(cateto_2, cateto_2, &valid_flag);
    if (valid_flag == FALSE){
        check_failing = FALSE;
    }

    output = sum(cateto_1, cateto_2, &valid_flag);
    if (valid_flag == FALSE){
        check_failing = FALSE;
    }

    if(output == 0){
        check_failing = FALSE;
    }

    if(check_failing == TRUE){
        return output;//just C or C^2 
    }else return -1;
}