###########################################################################
## Makefile generated for component 'RobotSample'. 
## 
## Makefile     : RobotSample.mk
## Generated on : Sun Oct 22 13:15:57 2023
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/RobotSample.elf
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = RobotSample
MAKEFILE                  = RobotSample.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2023b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2023b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = D:/TT_ROBOT/Task3_Robot/New
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
SLIB_PATH                 = C:/Users/nguye/DOCUME~1/MATLAB/R2023b/ARDUIN~1/ARDUIN~2/FASTER~1
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBSSC_SLI_OBJS           = ./ssc_sli_0267402d.o ./ssc_sli_0763c151.o ./ssc_sli_0bd269e6.o ./ssc_sli_0d6d0780.o ./ssc_sli_136b443c.o ./ssc_sli_136f97a1.o ./ssc_sli_140b3534.o ./ssc_sli_15d5f6ce.o ./ssc_sli_1c690f90.o ./ssc_sli_1db813e8.o ./ssc_sli_256cd4b6.o ./ssc_sli_2bbd58a4.o ./ssc_sli_2f6ea1cd.o ./ssc_sli_360cfd63.o ./ssc_sli_37d957ac.o ./ssc_sli_3fb4607e.o ./ssc_sli_40d56d93.o ./ssc_sli_42b14021.o ./ssc_sli_43618287.o ./ssc_sli_466b08dd.o ./ssc_sli_496799bd.o ./ssc_sli_4e028390.o ./ssc_sli_550a4805.o ./ssc_sli_5a0cb974.o ./ssc_sli_5d63aeeb.o ./ssc_sli_62d81790.o ./ssc_sli_6305062f.o ./ssc_sli_77063d8b.o ./ssc_sli_7a618260.o ./ssc_sli_7f65db03.o ./ssc_sli_880e593a.o ./ssc_sli_89d0f30a.o ./ssc_sli_8a64c4e2.o ./ssc_sli_93019ea6.o ./ssc_sli_9abcdb7f.o ./ssc_sli_9b67747c.o ./ssc_sli_9c030181.o ./ssc_sli_c7dda239.o ./ssc_sli_d064c978.o ./ssc_sli_d80c44d2.o ./ssc_sli_dcd66f69.o ./ssc_sli_e66fe6d5.o ./ssc_sli_e7b327bb.o ./ssc_sli_eb0a5702.o ./ssc_sli_edbee55c.o ./ssc_sli_f6bd9cc8.o ./ssc_sli_f9b5dbc5.o ./ssc_sli_fa0ce53e.o ./ssc_sli_fbdf29da.o
LIBSM_SSCI_OBJS           = ./sm_ssci_3dd14f0a.o ./sm_ssci_646478c5.o ./sm_ssci_b2b6b422.o ./sm_ssci_c16a187b.o
LIBSSC_CORE_OBJS          = ./ssc_core_01dcc633.o ./ssc_core_04da2c69.o ./ssc_core_05058dd9.o ./ssc_core_06ba68a6.o ./ssc_core_09b5fa6e.o ./ssc_core_0bd666aa.o ./ssc_core_0d65be6c.o ./ssc_core_0f019bd9.o ./ssc_core_0f0420a6.o ./ssc_core_18bf4d77.o ./ssc_core_1c6b0332.o ./ssc_core_1fd25120.o ./ssc_core_24b4cdee.o ./ssc_core_280c0222.o ./ssc_core_2cd54448.o ./ssc_core_3169e4b7.o ./ssc_core_32d8b307.o ./ssc_core_3306c008.o ./ssc_core_360a4baf.o ./ssc_core_37d4ea84.o ./ssc_core_40db642d.o ./ssc_core_40dfdbdc.o ./ssc_core_41017299.o ./ssc_core_4666b45b.o ./ssc_core_48b1386a.o ./ssc_core_4ad9135b.o ./ssc_core_4db6bd68.o ./ssc_core_4db86fcc.o ./ssc_core_4e03e39d.o ./ssc_core_4e04eecd.o ./ssc_core_4e06e3bd.o ./ssc_core_54d55ae9.o ./ssc_core_5505224d.o ./ssc_core_550b4c41.o ./ssc_core_56b1a2bf.o ./ssc_core_576cd129.o ./ssc_core_59b034b8.o ./ssc_core_5a046b27.o ./ssc_core_5d6ba758.o ./ssc_core_67d1f118.o ./ssc_core_68da074b.o ./ssc_core_6b663a17.o ./ssc_core_6b6b89d2.o ./ssc_core_6dd833f3.o ./ssc_core_7209d3a5.o ./ssc_core_73d9c2b7.o ./ssc_core_76d825be.o ./ssc_core_770cead7.o ./ssc_core_7a613edb.o ./ssc_core_83db8762.o ./ssc_core_856738f2.o ./ssc_core_8569edc5.o ./ssc_core_89d7fa79.o ./ssc_core_8a6471dc.o ./ssc_core_8cd9cb37.o ./ssc_core_8d0064b8.o ./ssc_core_96061071.o ./ssc_core_990fe1a4.o ./ssc_core_9b607b15.o ./ssc_core_9b671e57.o ./ssc_core_9c016445.o ./ssc_core_9c01d168.o ./ssc_core_9dd110ad.o ./ssc_core_9fb0e229.o ./ssc_core_9fb25b4f.o ./ssc_core_9fb2e56c.o ./ssc_core_a1d393be.o ./ssc_core_a269ab09.o ./ssc_core_a4d4c45e.o ./ssc_core_a4da1d0a.o ./ssc_core_a6b78ccc.o ./ssc_core_a76299bc.o ./ssc_core_a867d880.o ./ssc_core_a9bbaecc.o ./ssc_core_a9bf1ff2.o ./ssc_core_aa09f23c.o ./ssc_core_abd05c18.o ./ssc_core_abd5e7b4.o ./ssc_core_acb64294.o ./ssc_core_acb6462e.o ./ssc_core_b1038cbb.o ./ssc_core_b10e34f4.o ./ssc_core_b2b3b239.o ./ssc_core_b369cd13.o ./ssc_core_b402b40d.o ./ssc_core_b7b88213.o ./ssc_core_b96ebc21.o ./ssc_core_bad68669.o ./ssc_core_bc648043.o ./ssc_core_bfdb08db.o ./ssc_core_c3003040.o ./ssc_core_c5b050d7.o ./ssc_core_c5b63cb2.o ./ssc_core_c607b660.o ./ssc_core_c8d83e88.o ./ssc_core_cab615c8.o ./ssc_core_cabdc251.o ./ssc_core_cc067f58.o ./ssc_core_cc0bcab0.o ./ssc_core_ce6a84bb.o ./ssc_core_d06d763c.o ./ssc_core_d3d34d7c.o ./ssc_core_d4b9397b.o ./ssc_core_d70a6a09.o ./ssc_core_d807fa59.o ./ssc_core_dcda6edd.o ./ssc_core_deb7fd8d.o ./ssc_core_e0d0866d.o ./ssc_core_e2b61d72.o ./ssc_core_e400c1c2.o ./ssc_core_ead8f455.o ./ssc_core_edb836de.o ./ssc_core_ee000fbe.o ./ssc_core_ee01086d.o ./ssc_core_ee0f0141.o ./ssc_core_f9b6dbed.o ./ssc_core_fa09e9e6.o ./ssc_core_fbd34e62.o ./ssc_core_ff06d9a4.o
LIBSSC_ST_OBJS            = ./ssc_st_12be8102.o ./ssc_st_43603aca.o ./ssc_st_59ba8c5e.o ./ssc_st_65b906f8.o ./ssc_st_7f64b2fa.o ./ssc_st_870f70cf.o ./ssc_st_a3b260e9.o ./ssc_st_a7639c45.o ./ssc_st_a868d115.o ./ssc_st_d56af4a2.o
LIBMC_OBJS                = ./mc_026e4f4b.o ./mc_03b98f6f.o ./mc_0764157d.o ./mc_0bd30dee.o ./mc_0d6fd085.o ./mc_0ed73c49.o ./mc_0edc34e3.o ./mc_10d4ab75.o ./mc_11086079.o ./mc_110e6c6c.o ./mc_1407e917.o ./mc_140e3c4c.o ./mc_15d12d95.o ./mc_15d828ca.o ./mc_220ba961.o ./mc_2565d6e0.o ./mc_2a642f54.o ./mc_2a6a9b24.o ./mc_2a6b417d.o ./mc_2bbf87e3.o ./mc_2cdc96b4.o ./mc_32d501e3.o ./mc_32dc008a.o ./mc_3b6a945d.o ./mc_3e66abdf.o ./mc_4105189f.o ./mc_47b8cebe.o ./mc_47b91db1.o ./mc_4b0301c6.o ./mc_4c6117e3.o ./mc_51d4094e.o ./mc_52623861.o ./mc_52688a58.o ./mc_53b1fc84.o ./mc_53b6fcf3.o ./mc_550847c3.o ./mc_5766048f.o ./mc_59b6e413.o ./mc_5bd2c9c1.o ./mc_5d65cd86.o ./mc_5edd42ef.o ./mc_630208f8.o ./mc_630dda0e.o ./mc_67da200d.o ./mc_67da4f41.o ./mc_6b6d311a.o ./mc_6e61d16c.o ./mc_6fb1c336.o ./mc_7207b6f4.o ./mc_7809a65c.o ./mc_7a613aec.o ./mc_7bbf41f0.o ./mc_7cd58f0b.o ./mc_7cdbe436.o ./mc_7d0547c8.o ./mc_7d099de7.o ./mc_7eb21b39.o ./mc_81b0ada5.o ./mc_81b5717e.o ./mc_84b5f9fb.o ./mc_870ec75e.o ./mc_89d597cf.o ./mc_90b6aa0a.o ./mc_95b62b73.o ./mc_9ab7d9b0.o ./mc_9b6376d1.o ./mc_9b6c1529.o ./mc_a00e5f46.o ./mc_a2647600.o ./mc_a26bab1a.o ./mc_a3b90582.o ./mc_a6b5ed24.o ./mc_a7684938.o ./mc_a865d1dd.o ./mc_acb3fad7.o ./mc_af0bc203.o ./mc_af0cc4c9.o ./mc_b0de9cbc.o ./mc_b2b86ae3.o ./mc_b362c5eb.o ./mc_b7b03d44.o ./mc_b96a0bad.o ./mc_bb0520ee.o ./mc_bdbb9b78.o ./mc_c2dbf4b2.o ./mc_c7de7352.o ./mc_c8d25d23.o ./mc_cab8a1f9.o ./mc_ce6656ce.o ./mc_d20085b7.o ./mc_d9d38185.o ./mc_dbbb14d2.o ./mc_dcdddfae.o ./mc_debb448f.o ./mc_e7b99cf6.o ./mc_e7bc2f1a.o ./mc_e9661c4a.o ./mc_e969ae87.o ./mc_edbf543c.o ./mc_ee000fbe.o ./mc_efdea3a7.o ./mc_f0012953.o ./mc_f00d2f9b.o ./mc_f3be157c.o ./mc_fbd54145.o ./mc_fcb15a9b.o ./mc_fd619d14.o ./mc_fd6341bb.o
LIBSM_OBJS                = ./sm_01d3ac26.o ./sm_04d045b9.o ./sm_09b59221.o ./sm_0cb6a5fa.o ./sm_1dba7276.o ./sm_1e022f29.o ./sm_26df822b.o ./sm_38d4abbe.o ./sm_43618472.o ./sm_440126a7.o ./sm_45dc522c.o ./sm_466cdd79.o ./sm_4b066b5a.o ./sm_4c61739a.o ./sm_5763bdb7.o ./sm_6166f1eb.o ./sm_62d41fb5.o ./sm_630c0817.o ./sm_67d72683.o ./sm_6fbd150d.o ./sm_73d210b9.o ./sm_916806b3.o ./sm_95b82517.o ./sm_9abcb56e.o ./sm_a0028316.o ./sm_a1d32671.o ./sm_a3ba6de7.o ./sm_a50cd7b1.o ./sm_aa059a3a.o ./sm_acba2496.o ./sm_b40db855.o ./sm_b66990f5.o ./sm_badd8656.o ./sm_bc63e36c.o ./sm_bfda6e42.o ./sm_c0ba649d.o ./sm_c5b9546f.o ./sm_c60bdc8d.o ./sm_c7d3720c.o ./sm_cabca465.o ./sm_d3d79f0f.o ./sm_d3d946fd.o ./sm_d4bb3938.o ./sm_d6dc1822.o ./sm_da690167.o ./sm_dbbace78.o ./sm_df66e89b.o ./sm_e8bab6d7.o ./sm_ec6029c9.o ./sm_efdfa66e.o ./sm_f3b314ce.o
LIBPM_MATH_OBJS           = ./pm_math_01dec08e.o ./pm_math_04d19358.o ./pm_math_050e87e9.o ./pm_math_1966ea7d.o ./pm_math_1ad202b7.o ./pm_math_1c69d5b2.o ./pm_math_1c6b6a1b.o ./pm_math_29dc7f63.o ./pm_math_2a66252c.o ./pm_math_2f607a02.o ./pm_math_32d9636d.o ./pm_math_3309726a.o ./pm_math_3463da5d.o ./pm_math_360e4b46.o ./pm_math_3fbf046b.o ./pm_math_48b75553.o ./pm_math_48bd51fb.o ./pm_math_5a01dda4.o ./pm_math_646fa971.o ./pm_math_6b69e06e.o ./pm_math_7565727c.o ./pm_math_7cd5543c.o ./pm_math_89df260e.o ./pm_math_8cd61cd6.o ./pm_math_8d05b7c0.o ./pm_math_93014cb0.o ./pm_math_a001e9ec.o ./pm_math_b7b980b1.o ./pm_math_bad43c87.o ./pm_math_c7d2cd09.o ./pm_math_d1be0f30.o ./pm_math_d80b9e3b.o ./pm_math_da630bd2.o ./pm_math_e8b06b42.o ./pm_math_ee02b2b3.o ./pm_math_f760e8f6.o ./pm_math_f866cdd2.o ./pm_math_fd679a52.o
LIBPM_OBJS                = ./pm_09bc42e2.o ./pm_14098e54.o ./pm_26dc3230.o ./pm_4fd5f5b9.o ./pm_9dd7a82d.o ./pm_fed8c2c9.o

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Arduino AVR
# Supported Version(s):    
# ToolchainInfo Version:   2023b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# ARDUINO_ROOT
# ARDUINO_PORT
# ARDUINO_MCU
# ARDUINO_BAUD
# ARDUINO_PROTOCOL
# ARDUINO_F_CPU

#-----------
# MACROS
#-----------

SHELL            = %SystemRoot%/system32/cmd.exe
PRODUCT_HEX      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).hex
PRODUCT_BIN      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).eep
ARDUINO_TOOLS    = $(ARDUINO_ROOT)/hardware/tools/avr/bin
ELF2EEP_OPTIONS  = -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0
DOWNLOAD_ARGS    =  >tmp.trash 2>&1 -P$(ARDUINO_PORT) -V -q -q -q -q -F -C$(ARDUINO_ROOT)/hardware/tools/avr/etc/avrdude.conf -p$(ARDUINO_MCU) -c$(ARDUINO_PROTOCOL) -b$(ARDUINO_BAUD) -D -Uflash:w:

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm -lcore

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: Arduino AVR Assembler
AS_PATH = $(ARDUINO_TOOLS)
AS = "$(AS_PATH)/avr-gcc"

# C Compiler: Arduino AVR C Compiler
CC_PATH = $(ARDUINO_TOOLS)
CC = "$(CC_PATH)/avr-gcc"

# Linker: Arduino AVR Linker
LD_PATH = $(ARDUINO_TOOLS)
LD = "$(LD_PATH)/avr-gcc"

# C++ Compiler: Arduino AVR C++ Compiler
CPP_PATH = $(ARDUINO_TOOLS)
CPP = "$(CPP_PATH)/avr-g++"

# C++ Linker: Arduino AVR C++ Linker
CPP_LD_PATH = $(ARDUINO_TOOLS)
CPP_LD = "$(CPP_LD_PATH)/avr-gcc"

# Archiver: Arduino AVR Archiver
AR_PATH = $(ARDUINO_TOOLS)
AR = "$(AR_PATH)/avr-ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Binary Converter: Binary Converter
OBJCOPY_PATH = $(ARDUINO_ROOT)/hardware/tools/avr/bin
OBJCOPY = "$(OBJCOPY_PATH)/avr-objcopy"

# Hex Converter: Hex Converter
OBJCOPY_PATH = $(ARDUINO_ROOT)/hardware/tools/avr/bin
OBJCOPY = "$(OBJCOPY_PATH)/avr-objcopy"

# Download: Download
DOWNLOAD_PATH = $(ARDUINO_TOOLS)
DOWNLOAD = "$(DOWNLOAD_PATH)/avrdude"

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: Make Tool
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  =
ECHO                = echo
MV                  =
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =



#---------------------------
# Model-Specific Options
#---------------------------

ASFLAGS = -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  -Wall -x assembler-with-cpp $(ASFLAGS_ADDITIONAL) $(DEFINES) $(INCLUDES) -c

CFLAGS = -std=gnu11  -c -w -ffunction-sections -fdata-sections  -MMD -DARDUINO=10801  -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  -Os -g

LDFLAGS = -w -Os -Wl,--gc-sections,--relax -g

SHAREDLIB_LDFLAGS = -g

CPPFLAGS = -std=gnu++11 -fpermissive -fno-exceptions -fno-threadsafe-statics  -c -w -ffunction-sections -fdata-sections  -MMD -DARDUINO=10801  -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  -Os -g

CPP_LDFLAGS = -w -Os -Wl,--gc-sections,--relax -g

CPP_SHAREDLIB_LDFLAGS = -g

ARFLAGS = rcs

OBJCOPYFLAGS_BIN = $(ELF2EEP_OPTIONS) $(PRODUCT) $(PRODUCT_BIN)

OBJCOPYFLAGS_HEX = -O ihex -R .eeprom $(PRODUCT) $(PRODUCT_HEX)

DOWNLOAD_FLAGS = $(DOWNLOAD_ARGS)$(PRODUCT_HEX):i

EXECUTE_FLAGS = 

MAKE_FLAGS = -f $(MAKEFILE)

###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/RobotSample.elf
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/RobotSample_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/common -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src -I$(MATLAB_ROOT)/extern/physmod/win64/lang/include -I$(MATLAB_ROOT)/extern/physmod/win64/mc/include -I$(MATLAB_ROOT)/extern/physmod/win64/pd/include -I$(MATLAB_ROOT)/extern/physmod/win64/pm/include -I$(MATLAB_ROOT)/extern/physmod/win64/pm_log/include -I$(MATLAB_ROOT)/extern/physmod/win64/pm_math/include -I$(MATLAB_ROOT)/extern/physmod/win64/sm/include -I$(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/include -I$(MATLAB_ROOT)/extern/physmod/win64/ssc_comp/include -I$(MATLAB_ROOT)/extern/physmod/win64/ssc_core/include -I$(MATLAB_ROOT)/extern/physmod/win64/ssc_ds/include -I$(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/include -I$(MATLAB_ROOT)/extern/physmod/win64/ssc_st/include -I$(ARDUINO_ROOT)/hardware/arduino/avr/cores/arduino -I$(ARDUINO_ROOT)/hardware/arduino/avr/variants/mega -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2023b/toolbox/target/SUPPOR~1/ARDUIN~1/include -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2023b/toolbox/target/SUPPOR~1/ARDUIN~1/SCHEDU~1/include -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2023b/toolbox/target/SUPPOR~1/ARDUIN~2/include -I$(ARDUINO_ROOT)/hardware/tools/avr/avr/include/avr

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DXCP_ADDRESS_GRANULARITY=XCP_ADDRESS_GRANULARITY_BYTE -DCODERTARGET_XCP_DAQ_PACKED_MODE -DCODERTARGET_XCP_MAX_CONTIGUOUS_SAMPLES=2 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DMW_TIMERID=5 -DMW_PRESCALAR=256 -DMW_TIMERCOUNT=64911 -DMW_SCHEDULERCOUNTER=1 -DARDUINO_NUM_SERIAL_PORTS=4 -D_RTT_BAUDRATE_SERIAL0_=9600 -D_RTT_BAUDRATE_SERIAL1_=9600 -D_RTT_BAUDRATE_SERIAL2_=9600 -D_RTT_BAUDRATE_SERIAL3_=9600 -D_RTT_CONFIG_SERIAL0_=SERIAL_8N1 -D_RTT_CONFIG_SERIAL1_=SERIAL_8N1 -D_RTT_CONFIG_SERIAL2_=SERIAL_8N1 -D_RTT_CONFIG_SERIAL3_=SERIAL_8N1 -D_RTT_ANALOG_REF_=0 -DMW_RTIO_SERIAL0
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DEXT_MODE=1 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DXCP_EXTMODE_SIMULATION_TIME_IN_TICKS -DXCP_DAQ_SUPPORT -DXCP_CALIBRATION_SUPPORT -DXCP_TIMESTAMP_SUPPORT -DXCP_TIMESTAMP_BASED_ON_SIMULATION_TIME -DXCP_SET_MTA_SUPPORT -DEXTMODE_XCP_TRIGGER_SUPPORT -DXCP_MEM_BLOCK_1_SIZE=32 -DXCP_MEM_BLOCK_1_NUMBER=1 -DXCP_MEM_BLOCK_2_SIZE=56 -DXCP_MEM_BLOCK_2_NUMBER=1 -DXCP_MEM_BLOCK_3_SIZE=48 -DXCP_MEM_BLOCK_3_NUMBER=1 -DXCP_MEM_RESERVED_POOLS_TOTAL_SIZE=517 -DXCP_MEM_RESERVED_POOLS_NUMBER=2 -DXCP_MEM_DAQ_RESERVED_POOL_BLOCKS_NUMBER=3 -DXCP_MEM_DAQ_RESERVED_POOLS_NUMBER=1 -DXCP_MIN_EVENT_NO_RESERVED_POOL=2 -DXCP_MAX_CTO_SIZE=32 -DXCP_MAX_DTO_SIZE=65532 -DXCP_MAX_ODT_ENTRY_SIZE=255 -DEXTMODE_STATIC -DEXTMODE_STATIC_SIZE=2048 -DON_TARGET_WAIT_FOR_START=1 -DTID01EQ=1
DEFINES_SKIPFORSIL = -DXCP_CUSTOM_PLATFORM -DEXIT_FAILURE=1 -DEXTMODE_DISABLEPRINTF -DEXTMODE_DISABLETESTING -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DSTACK_SIZE=64 -DRT
DEFINES_STANDARD = -DMODEL=RobotSample -DNUMST=2 -DNCSTATES=12 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_create.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_setParameters.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_asserts.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_deriv.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_checkDynamics.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_compOutputs.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_asm_delegate.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_sim_delegate.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_mode_zero_crossings.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_logging.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_geometries.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_gateway.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_mode.c $(START_DIR)/RobotSample_ert_rtw/rt_backsubrr_dbl.c $(START_DIR)/RobotSample_ert_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/RobotSample_ert_rtw/rt_lu_real.c $(START_DIR)/RobotSample_ert_rtw/rt_matrixlib_dbl.c $(START_DIR)/RobotSample_ert_rtw/RobotSample.c $(START_DIR)/RobotSample_ert_rtw/RobotSample_data.c $(START_DIR)/RobotSample_ert_rtw/rtGetInf.c $(START_DIR)/RobotSample_ert_rtw/rtGetNaN.c $(START_DIR)/RobotSample_ert_rtw/rt_nonfinite.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_common.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_classic_trigger.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp_standard.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp_daq.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp_calibration.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/xcp_fifo.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/xcp_transport.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/xcp_mem_default.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/xcp_drv_rtiostream.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/common/xcp_utils.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/xcp_frame_serial.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_param_default_serial.c C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/src/MW_ArduinoHWInit.cpp C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/scheduler/src/arduinoAVRScheduler.cpp C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/src/platform_timer.c C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/src/rtiostream_serial_daemon.cpp

MAIN_SRC = $(START_DIR)/RobotSample_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = RobotSample_871ffa15_1.o RobotSample_871ffa15_1_create.o RobotSample_871ffa15_1_setParameters.o RobotSample_871ffa15_1_asserts.o RobotSample_871ffa15_1_deriv.o RobotSample_871ffa15_1_checkDynamics.o RobotSample_871ffa15_1_compOutputs.o RobotSample_871ffa15_1_asm_delegate.o RobotSample_871ffa15_1_sim_delegate.o RobotSample_871ffa15_1_mode_zero_crossings.o RobotSample_871ffa15_1_logging.o RobotSample_871ffa15_1_geometries.o RobotSample_871ffa15_1_gateway.o xcp_ext_mode.o rt_backsubrr_dbl.o rt_forwardsubrr_dbl.o rt_lu_real.o rt_matrixlib_dbl.o RobotSample.o RobotSample_data.o rtGetInf.o rtGetNaN.o rt_nonfinite.o xcp_ext_common.o xcp_ext_classic_trigger.o xcp.o xcp_standard.o xcp_daq.o xcp_calibration.o xcp_fifo.o xcp_transport.o xcp_mem_default.o xcp_drv_rtiostream.o xcp_utils.o xcp_frame_serial.o xcp_ext_param_default_serial.o MW_ArduinoHWInit.o io_wrappers.o arduinoAVRScheduler.o platform_timer.o rtiostream_serial_daemon.o

MAIN_OBJ = ert_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = ./ssc_sli.a ./sm_ssci.a ./ssc_core.a ./ssc_st.a ./mc.a ./sm.a ./pm_math.a ./pm.a $(SLIB_PATH)/MW_RebuildSrc_Core.o

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_SKIPFORSIL = -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_MEGA2560_ -DARDUINO_NUM_SERIAL_PORTS=4
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------
# Linker
#-----------

LDFLAGS_ = -L"$(SLIB_PATH)"
LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

LDFLAGS += $(LDFLAGS_) $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -L"$(SLIB_PATH)"
SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_) $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_SKIPFORSIL = -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR -D_RUNONTARGETHARDWARE_BUILD_ -D_ROTH_MEGA2560_ -DARDUINO_NUM_SERIAL_PORTS=4
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -L"$(SLIB_PATH)"
CPP_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

CPP_LDFLAGS += $(CPP_LDFLAGS_) $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -L"$(SLIB_PATH)"
CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = -mmcu=atmega2560 

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_) $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


DERIVED_SRCS = $(subst .o,.dep,$(OBJS))

build:

%.dep:



-include codertarget_assembly_flags.mk
-include *.dep


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild postbuild download execute


all : build postbuild
	echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	echo "### Successfully generated all binary outputs."


prebuild : 


postbuild : $(PRODUCT)
	echo "### Invoking postbuild tool "Binary Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_BIN)
	echo "### Done invoking postbuild tool."
	echo "### Invoking postbuild tool "Hex Converter" ..."
	$(OBJCOPY) $(OBJCOPYFLAGS_HEX)
	echo "### Done invoking postbuild tool."


download : postbuild
	echo "### Invoking postbuild tool "Download" ..."
	$(DOWNLOAD) $(DOWNLOAD_FLAGS)
	echo "### Done invoking postbuild tool."


execute : download
	echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(CPP_LD) $(CPP_LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : %.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : %.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(RELATIVE_PATH_TO_ANCHOR)/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/mc/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/mc/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/mc/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/mc/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/pm/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/pm/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/pm/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/pm/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/pm_math/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/pm_math/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/pm_math/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/pm_math/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/sm/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/sm/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/sm/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/sm/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/sm_ssci/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_core/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_core/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_core/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_core/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_sli/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_st/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_st/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_st/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/win64/ssc_st/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(START_DIR)/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/RobotSample_ert_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(START_DIR)/RobotSample_ert_rtw/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(START_DIR)/RobotSample_ert_rtw/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/RobotSample_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/rtw/c/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/rtw/c/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/simulink/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/simulink/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/common/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/common/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/common/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/common/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.S.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/%.S
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_create.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_create.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_setParameters.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_setParameters.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_asserts.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_asserts.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_deriv.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_deriv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_checkDynamics.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_checkDynamics.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_compOutputs.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_compOutputs.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_asm_delegate.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_asm_delegate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_sim_delegate.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_sim_delegate.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_mode_zero_crossings.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_mode_zero_crossings.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_logging.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_logging.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_geometries.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_geometries.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_871ffa15_1_gateway.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_871ffa15_1_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_ext_mode.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_mode.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_backsubrr_dbl.o : $(START_DIR)/RobotSample_ert_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_forwardsubrr_dbl.o : $(START_DIR)/RobotSample_ert_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_lu_real.o : $(START_DIR)/RobotSample_ert_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_matrixlib_dbl.o : $(START_DIR)/RobotSample_ert_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample.c
	$(CC) $(CFLAGS) -o "$@" "$<"


RobotSample_data.o : $(START_DIR)/RobotSample_ert_rtw/RobotSample_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


ert_main.o : $(START_DIR)/RobotSample_ert_rtw/ert_main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetInf.o : $(START_DIR)/RobotSample_ert_rtw/rtGetInf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetNaN.o : $(START_DIR)/RobotSample_ert_rtw/rtGetNaN.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.o : $(START_DIR)/RobotSample_ert_rtw/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_ext_common.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_common.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_ext_classic_trigger.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_classic_trigger.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_standard.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp_standard.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_daq.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp_daq.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_calibration.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/protocol/src/xcp_calibration.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_fifo.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/xcp_fifo.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_transport.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/xcp_transport.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_mem_default.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/xcp_mem_default.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_drv_rtiostream.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/platform/default/xcp_drv_rtiostream.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_utils.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/common/xcp_utils.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_frame_serial.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/server/transport/src/xcp_frame_serial.c
	$(CC) $(CFLAGS) -o "$@" "$<"


xcp_ext_param_default_serial.o : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_param_default_serial.c
	$(CC) $(CFLAGS) -o "$@" "$<"


MW_ArduinoHWInit.o : C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/src/MW_ArduinoHWInit.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


io_wrappers.o : C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinobase/src/io_wrappers.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


arduinoAVRScheduler.o : C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/scheduler/src/arduinoAVRScheduler.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


platform_timer.o : C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/src/platform_timer.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtiostream_serial_daemon.o : C:/ProgramData/MATLAB/SupportPackages/R2023b/toolbox/target/supportpackages/arduinotarget/src/rtiostream_serial_daemon.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

./ssc_sli.a : $(LIBSSC_SLI_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_OBJS)


./sm_ssci.a : $(LIBSM_SSCI_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_SSCI_OBJS)


./ssc_core.a : $(LIBSSC_CORE_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_OBJS)


./ssc_st.a : $(LIBSSC_ST_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_ST_OBJS)


./mc.a : $(LIBMC_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_OBJS)


./sm.a : $(LIBSM_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSM_OBJS)


./pm_math.a : $(LIBPM_MATH_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_MATH_OBJS)


./pm.a : $(LIBPM_OBJS)
	echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	echo "### PRODUCT = $(PRODUCT)"
	echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	echo "### BUILD_TYPE = $(BUILD_TYPE)"
	echo "### INCLUDES = $(INCLUDES)"
	echo "### DEFINES = $(DEFINES)"
	echo "### ALL_SRCS = $(ALL_SRCS)"
	echo "### ALL_OBJS = $(ALL_OBJS)"
	echo "### LIBS = $(LIBS)"
	echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	echo "### ASFLAGS = $(ASFLAGS)"
	echo "### CFLAGS = $(CFLAGS)"
	echo "### LDFLAGS = $(LDFLAGS)"
	echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	echo "### CPPFLAGS = $(CPPFLAGS)"
	echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	echo "### ARFLAGS = $(ARFLAGS)"
	echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	echo "### OBJCOPYFLAGS_BIN = $(OBJCOPYFLAGS_BIN)"
	echo "### OBJCOPYFLAGS_HEX = $(OBJCOPYFLAGS_HEX)"
	echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(RM) *.dep
	$(ECHO) "### Deleted all derived files."


