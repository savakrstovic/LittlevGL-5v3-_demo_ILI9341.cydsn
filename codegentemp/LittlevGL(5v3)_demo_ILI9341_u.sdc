# Component constraints for C:\Users\Sava\Documents\PSoC Creator\GUI_and_display\LittlevGL(5v3)_demo_ILI9341.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\Sava\Documents\PSoC Creator\GUI_and_display\LittlevGL(5v3)_demo_ILI9341.cydsn\LittlevGL(5v3)_demo_ILI9341.cyprj
# Date: Fri, 31 May 2019 08:49:31 GMT
# GraphicLCDIntf
# False paths present for both 8 and 16 bits Graphic LCD Interface configurations 
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_0}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_0}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_0}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_0}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_1}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_1}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_1}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_1}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_2}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_2}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_2}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_2}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_3}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_3}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_3}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_3}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_4}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_4}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_4}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_4}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_5}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_5}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_5}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_5}]]} 
   
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_6}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_6}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_6}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_6}]]} 
 
expr {(16) == 8 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd8:Lsb\/p_out_7}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_7}]] : \
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Lsb\/p_out_7}] -to [get_pins {\GraphicLCDIntf:LsbReg\/status_7}]]} 
   
# False paths present only for 16 bits Graphic LCD Interface configuration
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_0}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_0}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_1}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_1}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_2}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_2}]] : {}}

expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_3}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_3}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_4}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_4}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_5}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_5}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_6}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_6}]] : {}}
   
expr {(16) == 16 ?
   [set_false_path -from [get_pins {\GraphicLCDIntf:GraphLcd16:Msb\/p_out_7}] -to [get_pins {\GraphicLCDIntf:GraphLcd16:MsbReg\/status_7}]] : {}}

