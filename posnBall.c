#include "config.h"
void posnBall(uchar col, uchar offsetDwn, uchar offsetUp, bool erase)
{
    struct posnData ret;    // define a var ret of type struct posnData
    switch(offsetDwn|offsetUp)       // 0 to 7
    {
        case 0:
            ret.page = 0;
            if(erase == 1)
            {
                ret.dataHigh = 0;
            }
            else
            {
                ret.dataHigh = 0x07;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;     
            
        case 1:
            ret.page = 0;
            if(erase == 1)
            {
                ret.dataHigh = 0;
            }
            else
            {
                ret.dataHigh = 0x0e;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;   
            
        case 2:
            ret.page = 0;
            if(erase == 1)
            {
                ret.dataHigh = 0;
            }
            else
            {
                ret.dataHigh = 0x1c;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;
            
        case 3:
            ret.page = 0;
            if(erase == 1)
            {
                ret.dataHigh = 0;
            }
            else
            {
                ret.dataHigh = 0x38;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;  
            
        case 4:
            ret.page = 0;
            if(erase == 1)
            {
                ret.dataHigh = 0;
            }
            else
            {
                ret.dataHigh = 0x70;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;    
            
        case 5:
            ret.page = 0;
            if(erase == 1)
            {
                ret.dataHigh = 0;
            }
            else
            {
                ret.dataHigh = 0xe0;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;
            
            case 6:
            
            if(erase == 1)
            {
                ret.dataHigh = 0;
            }
            else
            {
                ret.page = 0;
                ret.dataHigh = 0x07;
                ret.page = 1;
                ret.dataLow = 0x00;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;
            
            case 7:
            
            if(erase == 1)
            {
                ret.dataHigh = 0;
                ret.dataLow = 0;
            }
            else
            {
                ret.page = 0;
                ret.dataHigh = 0x80;
                ret.page = 1;
                ret.dataLow = 0x03;
            }
            ret.col = col;
            ret.offsetDwn = offsetDwn;
            //render(ret, erase);
            break;
            
    }
}
