//#
//# Automatically generated file. DO NOT EDIT.
//# Espressif IoT Development Framework (ESP-IDF) Project Configuration
//#
#define CONFIG_IDF_TARGET_ESP32=y
#define CONFIG_IDF_TARGET="esp32"
#define CONFIG_IDF_FIRMWARE_CHIP_ID=0x0000

//#
//# SDK tool configuration
//#
#define CONFIG_SDK_TOOLPREFIX="xtensa-esp32-elf-"
#define CONFIG_APP_COMPILE_TIME_DATE=y
// #define CONFIG_APP_EXCLUDE_PROJECT_VER_VAR is not set
// #define CONFIG_APP_EXCLUDE_PROJECT_NAME_VAR is not set
#define CONFIG_APP_RETRIEVE_LEN_ELF_SHA=16
// #define CONFIG_BOOTLOADER_LOG_LEVEL_NONE is not set
// #define CONFIG_BOOTLOADER_LOG_LEVEL_ERROR is not set
// #define CONFIG_BOOTLOADER_LOG_LEVEL_WARN is not set
#define CONFIG_BOOTLOADER_LOG_LEVEL_INFO=y
// #define CONFIG_BOOTLOADER_LOG_LEVEL_DEBUG is not set
// #define CONFIG_BOOTLOADER_LOG_LEVEL_VERBOSE is not set
#define CONFIG_BOOTLOADER_LOG_LEVEL=3
// #define CONFIG_BOOTLOADER_VDDSDIO_BOOST_1_8V is not set
#define CONFIG_BOOTLOADER_VDDSDIO_BOOST_1_9V=y
// #define CONFIG_BOOTLOADER_FACTORY_RESET is not set
// #define CONFIG_BOOTLOADER_APP_TEST is not set
#define CONFIG_BOOTLOADER_WDT_ENABLE=y
// #define CONFIG_BOOTLOADER_WDT_DISABLE_IN_USER_CODE is not set
#define CONFIG_BOOTLOADER_WDT_TIME_MS=9000
// #define CONFIG_BOOTLOADER_APP_ROLLBACK_ENABLE is not set
// #define CONFIG_SECURE_SIGNED_APPS_NO_SECURE_BOOT is not set
// #define CONFIG_SECURE_BOOT_ENABLED is not set
// #define CONFIG_SECURE_FLASH_ENC_ENABLED is not set
#define CONFIG_ESPTOOLPY_BAUD_OTHER_VAL=115200
// #define CONFIG_ESPTOOLPY_FLASHMODE_QIO is not set
// #define CONFIG_ESPTOOLPY_FLASHMODE_QOUT is not set
#define CONFIG_ESPTOOLPY_FLASHMODE_DIO=y
// #define CONFIG_ESPTOOLPY_FLASHMODE_DOUT is not set
#define CONFIG_ESPTOOLPY_FLASHMODE="dio"
// #define CONFIG_ESPTOOLPY_FLASHFREQ_80M is not set
#define CONFIG_ESPTOOLPY_FLASHFREQ_40M=y
// #define CONFIG_ESPTOOLPY_FLASHFREQ_26M is not set
// #define CONFIG_ESPTOOLPY_FLASHFREQ_20M is not set
#define CONFIG_ESPTOOLPY_FLASHFREQ="40m"
// #define CONFIG_ESPTOOLPY_FLASHSIZE_1MB is not set
#define CONFIG_ESPTOOLPY_FLASHSIZE_2MB=y
// #define CONFIG_ESPTOOLPY_FLASHSIZE_4MB is not set
// #define CONFIG_ESPTOOLPY_FLASHSIZE_8MB is not set
// #define CONFIG_ESPTOOLPY_FLASHSIZE_16MB is not set
#define CONFIG_ESPTOOLPY_FLASHSIZE="2MB"
#define CONFIG_ESPTOOLPY_FLASHSIZE_DETECT=y
#define CONFIG_ESPTOOLPY_BEFORE_RESET=y
// #define CONFIG_ESPTOOLPY_BEFORE_NORESET is not set
#define CONFIG_ESPTOOLPY_BEFORE="default_reset"
#define CONFIG_ESPTOOLPY_AFTER_RESET=y
// #define CONFIG_ESPTOOLPY_AFTER_NORESET is not set
#define CONFIG_ESPTOOLPY_AFTER="hard_reset"
// #define CONFIG_ESPTOOLPY_MONITOR_BAUD_9600B is not set
// #define CONFIG_ESPTOOLPY_MONITOR_BAUD_57600B is not set
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_115200B=y
// #define CONFIG_ESPTOOLPY_MONITOR_BAUD_230400B is not set
// #define CONFIG_ESPTOOLPY_MONITOR_BAUD_921600B is not set
// #define CONFIG_ESPTOOLPY_MONITOR_BAUD_2MB is not set
// #define CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER is not set
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER_VAL=115200
#define CONFIG_ESPTOOLPY_MONITOR_BAUD=115200
#define CONFIG_PARTITION_TABLE_SINGLE_APP=y
// #define CONFIG_PARTITION_TABLE_TWO_OTA is not set
// #define CONFIG_PARTITION_TABLE_CUSTOM is not set
#define CONFIG_PARTITION_TABLE_CUSTOM_FILENAME="partitions.csv"
#define CONFIG_PARTITION_TABLE_FILENAME="partitions_singleapp.csv"
#define CONFIG_PARTITION_TABLE_OFFSET=0x8000
#define CONFIG_PARTITION_TABLE_MD5=y
#define CONFIG_ENABLE_ARDUINO_DEPENDS=y
#define CONFIG_AUTOSTART_ARDUINO=y
// #define CONFIG_ARDUINO_RUN_CORE0 is not set
#define CONFIG_ARDUINO_RUN_CORE1=y
// #define CONFIG_ARDUINO_RUN_NO_AFFINITY is not set
#define CONFIG_ARDUINO_RUNNING_CORE=1
// #define CONFIG_ARDUINO_EVENT_RUN_CORE0 is not set
#define CONFIG_ARDUINO_EVENT_RUN_CORE1=y
// #define CONFIG_ARDUINO_EVENT_RUN_NO_AFFINITY is not set
#define CONFIG_ARDUINO_EVENT_RUNNING_CORE=1
// #define CONFIG_ARDUINO_UDP_RUN_CORE0 is not set
#define CONFIG_ARDUINO_UDP_RUN_CORE1=y
// #define CONFIG_ARDUINO_UDP_RUN_NO_AFFINITY is not set
#define CONFIG_ARDUINO_UDP_RUNNING_CORE=1
#define CONFIG_DISABLE_HAL_LOCKS=y
// #define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_NONE is not set
#define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_ERROR=y
// #define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_WARN is not set
// #define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_INFO is not set
// #define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_DEBUG is not set
// #define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_VERBOSE is not set
#define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL=1
// #define CONFIG_ARDUHAL_LOG_COLORS is not set
// #define CONFIG_ARDUHAL_ESP_LOG is not set
#define CONFIG_ARDUHAL_PARTITION_SCHEME_DEFAULT=y
// #define CONFIG_ARDUHAL_PARTITION_SCHEME_MINIMAL is not set
// #define CONFIG_ARDUHAL_PARTITION_SCHEME_NO_OTA is not set
// #define CONFIG_ARDUHAL_PARTITION_SCHEME_HUGE_APP is not set
// #define CONFIG_ARDUHAL_PARTITION_SCHEME_MIN_SPIFFS is not set
#define CONFIG_ARDUHAL_PARTITION_SCHEME="default"
#define CONFIG_AUTOCONNECT_WIFI=y
// #define CONFIG_ARDUINO_SELECTIVE_COMPILATION is not set
#define CONFIG_ARDUINO_SELECTIVE_WiFi=y
#define CONFIG_COMPILER_OPTIMIZATION_LEVEL_DEBUG=y
// #define CONFIG_COMPILER_OPTIMIZATION_LEVEL_RELEASE is not set
#define CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE=y
// #define CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_SILENT is not set
// #define CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_DISABLE is not set
// #define CONFIG_COMPILER_CXX_EXCEPTIONS is not set
#define CONFIG_COMPILER_STACK_CHECK_MODE_NONE=y
// #define CONFIG_COMPILER_STACK_CHECK_MODE_NORM is not set
// #define CONFIG_COMPILER_STACK_CHECK_MODE_STRONG is not set
// #define CONFIG_COMPILER_STACK_CHECK_MODE_ALL is not set
// #define CONFIG_COMPILER_STACK_CHECK is not set
// #define CONFIG_COMPILER_WARN_WRITE_STRINGS is not set
// #define CONFIG_COMPILER_DISABLE_GCC8_WARNINGS is not set
// #define CONFIG_ESP32_APPTRACE_DEST_TRAX is not set
#define CONFIG_ESP32_APPTRACE_DEST_NONE=y
// #define CONFIG_ESP32_APPTRACE_ENABLE is not set
#define CONFIG_ESP32_APPTRACE_LOCK_ENABLE=y
#define CONFIG_BT_ENABLED=y
#define CONFIG_BTDM_CTRL_BR_EDR_SCO_DATA_PATH_EFF=0
// #define CONFIG_BTDM_CTRL_AUTO_LATENCY_EFF is not set
#define CONFIG_BTDM_CTRL_BLE_MAX_CONN_EFF=0
#define CONFIG_BTDM_CTRL_BR_EDR_MAX_ACL_CONN_EFF=0
#define CONFIG_BTDM_CTRL_BR_EDR_MAX_SYNC_CONN_EFF=0
#define CONFIG_BTDM_CTRL_PINNED_TO_CORE=0
#define CONFIG_BTDM_BLE_SLEEP_CLOCK_ACCURACY_INDEX_EFF=1
#define CONFIG_BT_RESERVE_DRAM=0
// #define CONFIG_BLE_MESH is not set
// #define CONFIG_ADC_FORCE_XPD_FSM is not set
#define CONFIG_ADC_DISABLE_DAC=y
// #define CONFIG_SPI_MASTER_IN_IRAM is not set
#define CONFIG_SPI_MASTER_ISR_IN_IRAM=y
// #define CONFIG_SPI_SLAVE_IN_IRAM is not set
#define CONFIG_SPI_SLAVE_ISR_IN_IRAM=y
// #define CONFIG_EFUSE_CUSTOM_TABLE is not set
// #define CONFIG_EFUSE_VIRTUAL is not set
// #define CONFIG_EFUSE_CODE_SCHEME_COMPAT_NONE is not set
#define CONFIG_EFUSE_CODE_SCHEME_COMPAT_3_4=y
// #define CONFIG_EFUSE_CODE_SCHEME_COMPAT_REPEAT is not set
#define CONFIG_EFUSE_MAX_BLK_LEN=192
// #define CONFIG_ESP_TLS_SERVER is not set
#define CONFIG_ESP32_REV_MIN_0=y
// #define CONFIG_ESP32_REV_MIN_1 is not set
// #define CONFIG_ESP32_REV_MIN_2 is not set
// #define CONFIG_ESP32_REV_MIN_3 is not set
#define CONFIG_ESP32_REV_MIN=0
#define CONFIG_ESP32_DPORT_WORKAROUND=y
// #define CONFIG_ESP32_DEFAULT_CPU_FREQ_80 is not set
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_160=y
// #define CONFIG_ESP32_DEFAULT_CPU_FREQ_240 is not set
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ=160
// #define CONFIG_ESP32_SPIRAM_SUPPORT=y
// #define CONFIG_ESP32_MEMMAP_TRACEMEM is not set
// #define CONFIG_ESP32_MEMMAP_TRACEMEM_TWOBANKS is not set
// #define CONFIG_ESP32_TRAX is not set
#define CONFIG_ESP32_TRACEMEM_RESERVE_DRAM=0x0
// #define CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES_TWO is not set
#define CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES_FOUR=y
#define CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES=4
// #define CONFIG_ESP32_ULP_COPROC_ENABLED is not set
#define CONFIG_ESP32_ULP_COPROC_RESERVE_MEM=0
// #define CONFIG_ESP32_PANIC_PRINT_HALT is not set
#define CONFIG_ESP32_PANIC_PRINT_REBOOT=y
// #define CONFIG_ESP32_PANIC_SILENT_REBOOT is not set
// #define CONFIG_ESP32_PANIC_GDBSTUB is not set
#define CONFIG_ESP32_DEBUG_OCDAWARE=y
#define CONFIG_ESP32_DEBUG_STUBS_ENABLE=y
#define CONFIG_ESP32_BROWNOUT_DET=y
#define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_0=y
// #define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_1 is not set
// #define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_2 is not set
// #define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_3 is not set
// #define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_4 is not set
// #define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_5 is not set
// #define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_6 is not set
// #define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_7 is not set
#define CONFIG_ESP32_BROWNOUT_DET_LVL=0
#define CONFIG_ESP32_REDUCE_PHY_TX_POWER=y
#define CONFIG_ESP32_TIME_SYSCALL_USE_RTC_FRC1=y
// #define CONFIG_ESP32_TIME_SYSCALL_USE_RTC is not set
// #define CONFIG_ESP32_TIME_SYSCALL_USE_FRC1 is not set
// #define CONFIG_ESP32_TIME_SYSCALL_USE_NONE is not set
#define CONFIG_ESP32_RTC_CLK_SRC_INT_RC=y
// #define CONFIG_ESP32_RTC_CLK_SRC_EXT_CRYS is not set
// #define CONFIG_ESP32_RTC_CLK_SRC_EXT_OSC is not set
// #define CONFIG_ESP32_RTC_CLK_SRC_INT_8MD256 is not set
#define CONFIG_ESP32_RTC_CLK_CAL_CYCLES=1024
#define CONFIG_ESP32_RTC_XTAL_CAL_RETRY=1
#define CONFIG_ESP32_DEEP_SLEEP_WAKEUP_DELAY=2000
#define CONFIG_ESP32_XTAL_FREQ_40=y
// #define CONFIG_ESP32_XTAL_FREQ_26 is not set
// #define CONFIG_ESP32_XTAL_FREQ_AUTO is not set
#define CONFIG_ESP32_XTAL_FREQ=40
// #define CONFIG_ESP32_DISABLE_BASIC_ROM_CONSOLE is not set
// #define CONFIG_ESP32_NO_BLOBS is not set
// #define CONFIG_ESP32_COMPATIBLE_PRE_V2_1_BOOTLOADERS is not set
// #define CONFIG_ESP32_USE_FIXED_STATIC_RAM_SIZE is not set
#define CONFIG_ESP32_DPORT_DIS_INTERRUPT_LVL=5
// #define CONFIG_PM_ENABLE is not set
#define CONFIG_ADC_CAL_EFUSE_TP_ENABLE=y
#define CONFIG_ADC_CAL_EFUSE_VREF_ENABLE=y
#define CONFIG_ADC_CAL_LUT_ENABLE=y
// #define CONFIG_ESP_TIMER_PROFILING is not set
#define CONFIG_ESP_ERR_TO_NAME_LOOKUP=y
#define CONFIG_ESP_SYSTEM_EVENT_QUEUE_SIZE=32
#define CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE=2304
#define CONFIG_ESP_MAIN_TASK_STACK_SIZE=3584
#define CONFIG_ESP_IPC_TASK_STACK_SIZE=1024
#define CONFIG_ESP_TIMER_TASK_STACK_SIZE=3584
#define CONFIG_ESP_CONSOLE_UART_DEFAULT=y
// #define CONFIG_ESP_CONSOLE_UART_CUSTOM is not set
// #define CONFIG_ESP_CONSOLE_UART_NONE is not set
#define CONFIG_ESP_CONSOLE_UART_NUM=0
#define CONFIG_ESP_CONSOLE_UART_BAUDRATE=115200
#define CONFIG_ESP_INT_WDT=y
#define CONFIG_ESP_INT_WDT_TIMEOUT_MS=300
#define CONFIG_ESP_INT_WDT_CHECK_CPU1=y
#define CONFIG_ESP_TASK_WDT=y
// #define CONFIG_ESP_TASK_WDT_PANIC is not set
#define CONFIG_ESP_TASK_WDT_TIMEOUT_S=5
#define CONFIG_ESP_TASK_WDT_CHECK_IDLE_TASK_CPU0=y
#define CONFIG_ESP_TASK_WDT_CHECK_IDLE_TASK_CPU1=y
#define CONFIG_ETH_USE_ESP32_EMAC=y
#define CONFIG_ETH_PHY_INTERFACE_RMII=y
// #define CONFIG_ETH_PHY_INTERFACE_MII is not set
#define CONFIG_ETH_RMII_CLK_INPUT=y
// #define CONFIG_ETH_RMII_CLK_OUTPUT is not set
#define CONFIG_ETH_RMII_CLK_IN_GPIO=0
#define CONFIG_ETH_DMA_BUFFER_SIZE=512
#define CONFIG_ETH_DMA_RX_BUFFER_NUM=10
#define CONFIG_ETH_DMA_TX_BUFFER_NUM=10
#define CONFIG_ETH_USE_SPI_ETHERNET=y
#define CONFIG_ETH_SPI_ETHERNET_DM9051=y
// #define CONFIG_ESP_EVENT_LOOP_PROFILING is not set
#define CONFIG_ESP_EVENT_POST_FROM_ISR=y
#define CONFIG_ESP_EVENT_POST_FROM_IRAM_ISR=y
#define CONFIG_ESP_HTTP_CLIENT_ENABLE_HTTPS=y
// #define CONFIG_ESP_HTTP_CLIENT_ENABLE_BASIC_AUTH is not set
#define CONFIG_HTTPD_MAX_REQ_HDR_LEN=512
#define CONFIG_HTTPD_MAX_URI_LEN=512
#define CONFIG_HTTPD_ERR_RESP_NO_DELAY=y
#define CONFIG_HTTPD_PURGE_BUF_LEN=32
// #define CONFIG_HTTPD_LOG_PURGE_DATA is not set
// #define CONFIG_OTA_ALLOW_HTTP is not set
// #define CONFIG_ESP_HTTPS_SERVER_ENABLE is not set
#define CONFIG_ESP32_WIFI_STATIC_RX_BUFFER_NUM=10
#define CONFIG_ESP32_WIFI_DYNAMIC_RX_BUFFER_NUM=32
// #define CONFIG_ESP32_WIFI_STATIC_TX_BUFFER is not set
#define CONFIG_ESP32_WIFI_DYNAMIC_TX_BUFFER=y
#define CONFIG_ESP32_WIFI_TX_BUFFER_TYPE=1
#define CONFIG_ESP32_WIFI_DYNAMIC_TX_BUFFER_NUM=32
// #define CONFIG_ESP32_WIFI_CSI_ENABLED is not set
#define CONFIG_ESP32_WIFI_AMPDU_TX_ENABLED=y
#define CONFIG_ESP32_WIFI_TX_BA_WIN=6
#define CONFIG_ESP32_WIFI_AMPDU_RX_ENABLED=y
#define CONFIG_ESP32_WIFI_RX_BA_WIN=6
#define CONFIG_ESP32_WIFI_NVS_ENABLED=y
#define CONFIG_ESP32_WIFI_TASK_PINNED_TO_CORE_0=y
// #define CONFIG_ESP32_WIFI_TASK_PINNED_TO_CORE_1 is not set
#define CONFIG_ESP32_WIFI_SOFTAP_BEACON_MAX_LEN=752
#define CONFIG_ESP32_WIFI_MGMT_SBUF_NUM=32
// #define CONFIG_ESP32_WIFI_DEBUG_LOG_ENABLE is not set
#define CONFIG_ESP32_WIFI_IRAM_OPT=y
#define CONFIG_ESP32_WIFI_RX_IRAM_OPT=y
#define CONFIG_ESP32_WIFI_ENABLE_WPA3_SAE=y
#define CONFIG_ESP32_PHY_CALIBRATION_AND_DATA_STORAGE=y
// #define CONFIG_ESP32_PHY_INIT_DATA_IN_PARTITION is not set
#define CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER=20
#define CONFIG_ESP32_PHY_MAX_TX_POWER=20
// #define CONFIG_ESP32_ENABLE_COREDUMP_TO_FLASH is not set
// #define CONFIG_ESP32_ENABLE_COREDUMP_TO_UART is not set
#define CONFIG_ESP32_ENABLE_COREDUMP_TO_NONE=y
// #define CONFIG_ESP32_ENABLE_COREDUMP is not set
// #define CONFIG_FATFS_CODEPAGE_DYNAMIC is not set
#define CONFIG_FATFS_CODEPAGE_437=y
// #define CONFIG_FATFS_CODEPAGE_720 is not set
// #define CONFIG_FATFS_CODEPAGE_737 is not set
// #define CONFIG_FATFS_CODEPAGE_771 is not set
// #define CONFIG_FATFS_CODEPAGE_775 is not set
// #define CONFIG_FATFS_CODEPAGE_850 is not set
// #define CONFIG_FATFS_CODEPAGE_852 is not set
// #define CONFIG_FATFS_CODEPAGE_855 is not set
// #define CONFIG_FATFS_CODEPAGE_857 is not set
// #define CONFIG_FATFS_CODEPAGE_860 is not set
// #define CONFIG_FATFS_CODEPAGE_861 is not set
// #define CONFIG_FATFS_CODEPAGE_862 is not set
// #define CONFIG_FATFS_CODEPAGE_863 is not set
// #define CONFIG_FATFS_CODEPAGE_864 is not set
// #define CONFIG_FATFS_CODEPAGE_865 is not set
// #define CONFIG_FATFS_CODEPAGE_866 is not set
// #define CONFIG_FATFS_CODEPAGE_869 is not set
// #define CONFIG_FATFS_CODEPAGE_932 is not set
// #define CONFIG_FATFS_CODEPAGE_936 is not set
// #define CONFIG_FATFS_CODEPAGE_949 is not set
// #define CONFIG_FATFS_CODEPAGE_950 is not set
#define CONFIG_FATFS_CODEPAGE=437
#define CONFIG_FATFS_LFN_NONE=y
// #define CONFIG_FATFS_LFN_HEAP is not set
// #define CONFIG_FATFS_LFN_STACK is not set
#define CONFIG_FATFS_FS_LOCK=0
#define CONFIG_FATFS_TIMEOUT_MS=10000
#define CONFIG_FATFS_PER_FILE_CACHE=y
#define CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND=150
#define CONFIG_FMB_MASTER_DELAY_MS_CONVERT=200
#define CONFIG_FMB_QUEUE_LENGTH=20
#define CONFIG_FMB_SERIAL_TASK_STACK_SIZE=2048
#define CONFIG_FMB_SERIAL_BUF_SIZE=256
#define CONFIG_FMB_SERIAL_TASK_PRIO=10
// #define CONFIG_FMB_CONTROLLER_SLAVE_ID_SUPPORT is not set
#define CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT=20
#define CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE=20
#define CONFIG_FMB_CONTROLLER_STACK_SIZE=4096
#define CONFIG_FMB_EVENT_QUEUE_TIMEOUT=20
#define CONFIG_FMB_TIMER_PORT_ENABLED=y
#define CONFIG_FMB_TIMER_GROUP=0
#define CONFIG_FMB_TIMER_INDEX=0
// #define CONFIG_FREERTOS_UNICORE is not set
#define CONFIG_FREERTOS_NO_AFFINITY=0x7FFFFFFF
#define CONFIG_FREERTOS_CORETIMER_0=y
// #define CONFIG_FREERTOS_CORETIMER_1 is not set
#define CONFIG_FREERTOS_HZ=100
#define CONFIG_FREERTOS_ASSERT_ON_UNTESTED_FUNCTION=y
// #define CONFIG_FREERTOS_CHECK_STACKOVERFLOW_NONE is not set
// #define CONFIG_FREERTOS_CHECK_STACKOVERFLOW_PTRVAL is not set
#define CONFIG_FREERTOS_CHECK_STACKOVERFLOW_CANARY=y
// #define CONFIG_FREERTOS_WATCHPOINT_END_OF_STACK is not set
#define CONFIG_FREERTOS_INTERRUPT_BACKTRACE=y
#define CONFIG_FREERTOS_THREAD_LOCAL_STORAGE_POINTERS=1
#define CONFIG_FREERTOS_ASSERT_FAIL_ABORT=y
// #define CONFIG_FREERTOS_ASSERT_FAIL_PRINT_CONTINUE is not set
// #define CONFIG_FREERTOS_ASSERT_DISABLE is not set
#define CONFIG_FREERTOS_IDLE_TASK_STACKSIZE=1536
#define CONFIG_FREERTOS_ISR_STACKSIZE=1536
// #define CONFIG_FREERTOS_LEGACY_HOOKS is not set
#define CONFIG_FREERTOS_MAX_TASK_NAME_LEN=16
// #define CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION is not set
#define CONFIG_FREERTOS_TIMER_TASK_PRIORITY=1
#define CONFIG_FREERTOS_TIMER_TASK_STACK_DEPTH=2048
#define CONFIG_FREERTOS_TIMER_QUEUE_LENGTH=10
#define CONFIG_FREERTOS_QUEUE_REGISTRY_SIZE=0
// #define CONFIG_FREERTOS_USE_TRACE_FACILITY is not set
// #define CONFIG_FREERTOS_GENERATE_RUN_TIME_STATS is not set
// #define CONFIG_FREERTOS_DEBUG_INTERNALS is not set
#define CONFIG_FREERTOS_TASK_FUNCTION_WRAPPER=y
#define CONFIG_FREERTOS_CHECK_MUTEX_GIVEN_BY_OWNER=y
// #define CONFIG_FREERTOS_CHECK_PORT_CRITICAL_COMPLIANCE is not set
#define CONFIG_HEAP_POISONING_DISABLED=y
// #define CONFIG_HEAP_POISONING_LIGHT is not set
// #define CONFIG_HEAP_POISONING_COMPREHENSIVE is not set
#define CONFIG_HEAP_TRACING_OFF=y
// #define CONFIG_HEAP_TRACING_STANDALONE is not set
// #define CONFIG_HEAP_TRACING_TOHOST is not set
// #define CONFIG_HEAP_TRACING is not set
// #define CONFIG_LOG_DEFAULT_LEVEL_NONE is not set
// #define CONFIG_LOG_DEFAULT_LEVEL_ERROR is not set
// #define CONFIG_LOG_DEFAULT_LEVEL_WARN is not set
#define CONFIG_LOG_DEFAULT_LEVEL_INFO=y
// #define CONFIG_LOG_DEFAULT_LEVEL_DEBUG is not set
//#define CONFIG_LOG_DEFAULT_LEVEL_VERBOSE is not set
#define CONFIG_LOG_DEFAULT_LEVEL=3
#define CONFIG_LOG_COLORS=y
#define CONFIG_LWIP_LOCAL_HOSTNAME="espressif"
// #define CONFIG_LWIP_L2_TO_L3_COPY is not set
// #define CONFIG_LWIP_IRAM_OPTIMIZATION is not set
#define CONFIG_LWIP_TIMERS_ONDEMAND=y
#define CONFIG_LWIP_MAX_SOCKETS=10
// #define CONFIG_LWIP_USE_ONLY_LWIP_SELECT is not set
#define CONFIG_LWIP_SO_REUSE=y
#define CONFIG_LWIP_SO_REUSE_RXTOALL=y
#define CONFIG_LWIP_SO_RCVBUF=y
#define CONFIG_LWIP_IP_FRAG=y
// #define CONFIG_LWIP_IP_REASSEMBLY is not set
// #define CONFIG_LWIP_STATS is not set
// #define CONFIG_LWIP_ETHARP_TRUST_IP_MAC is not set
#define CONFIG_LWIP_ESP_GRATUITOUS_ARP=y
#define CONFIG_LWIP_GARP_TMR_INTERVAL=60
#define CONFIG_LWIP_TCPIP_RECVMBOX_SIZE=32
#define CONFIG_LWIP_DHCP_DOES_ARP_CHECK=y
// #define CONFIG_LWIP_DHCP_RESTORE_LAST_IP is not set
#define CONFIG_LWIP_DHCPS_LEASE_UNIT=60
#define CONFIG_LWIP_DHCPS_MAX_STATION_NUM=8
// #define CONFIG_LWIP_AUTOIP is not set
// #define CONFIG_LWIP_IPV6_AUTOCONFIG is not set
#define CONFIG_LWIP_NETIF_LOOPBACK=y
#define CONFIG_LWIP_LOOPBACK_MAX_PBUFS=8
#define CONFIG_LWIP_MAX_ACTIVE_TCP=16
#define CONFIG_LWIP_MAX_LISTENING_TCP=16
#define CONFIG_LWIP_TCP_MAXRTX=12
#define CONFIG_LWIP_TCP_SYNMAXRTX=6
#define CONFIG_LWIP_TCP_MSS=1440
#define CONFIG_LWIP_TCP_MSL=60000
#define CONFIG_LWIP_TCP_SND_BUF_DEFAULT=5744
#define CONFIG_LWIP_TCP_WND_DEFAULT=5744
#define CONFIG_LWIP_TCP_RECVMBOX_SIZE=6
#define CONFIG_LWIP_TCP_QUEUE_OOSEQ=y
// #define CONFIG_LWIP_TCP_KEEP_CONNECTION_WHEN_IP_CHANGES is not set
#define CONFIG_LWIP_TCP_OVERSIZE_MSS=y
// #define CONFIG_LWIP_TCP_OVERSIZE_QUARTER_MSS is not set
// #define CONFIG_LWIP_TCP_OVERSIZE_DISABLE is not set
#define CONFIG_LWIP_MAX_UDP_PCBS=16
#define CONFIG_LWIP_UDP_RECVMBOX_SIZE=6
#define CONFIG_LWIP_TCPIP_TASK_STACK_SIZE=3072
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY_NO_AFFINITY=y
// #define CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU0 is not set
// #define CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU1 is not set
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY=0x7FFFFFFF
// #define CONFIG_LWIP_PPP_SUPPORT is not set
// #define CONFIG_LWIP_MULTICAST_PING is not set
// #define CONFIG_LWIP_BROADCAST_PING is not set
#define CONFIG_LWIP_MAX_RAW_PCBS=16
#define CONFIG_LWIP_DHCP_MAX_NTP_SERVERS=1
#define CONFIG_LWIP_SNTP_UPDATE_DELAY=3600000
#define CONFIG_MBEDTLS_INTERNAL_MEM_ALLOC=y
// #define CONFIG_MBEDTLS_DEFAULT_MEM_ALLOC is not set
// #define CONFIG_MBEDTLS_CUSTOM_MEM_ALLOC is not set
#define CONFIG_MBEDTLS_ASYMMETRIC_CONTENT_LEN=y
#define CONFIG_MBEDTLS_SSL_IN_CONTENT_LEN=16384
#define CONFIG_MBEDTLS_SSL_OUT_CONTENT_LEN=4096
// #define CONFIG_MBEDTLS_DEBUG is not set
// #define CONFIG_MBEDTLS_ECP_RESTARTABLE is not set
// #define CONFIG_MBEDTLS_CMAC_C is not set
#define CONFIG_MBEDTLS_HARDWARE_AES=y
// #define CONFIG_MBEDTLS_HARDWARE_MPI is not set
#define CONFIG_MBEDTLS_HARDWARE_SHA=y
#define CONFIG_MBEDTLS_HAVE_TIME=y
// #define CONFIG_MBEDTLS_HAVE_TIME_DATE is not set
#define CONFIG_MBEDTLS_TLS_SERVER_AND_CLIENT=y
// #define CONFIG_MBEDTLS_TLS_SERVER_ONLY is not set
// #define CONFIG_MBEDTLS_TLS_CLIENT_ONLY is not set
// #define CONFIG_MBEDTLS_TLS_DISABLED is not set
#define CONFIG_MBEDTLS_TLS_SERVER=y
#define CONFIG_MBEDTLS_TLS_CLIENT=y
#define CONFIG_MBEDTLS_TLS_ENABLED=y
#define CONFIG_MBEDTLS_PSK_MODES=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_PSK=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_PSK=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_PSK=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA_PSK=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_RSA=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ELLIPTIC_CURVE=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_RSA=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_ECDSA=y
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_RSA=y
#define CONFIG_MBEDTLS_SSL_RENEGOTIATION=y
// #define CONFIG_MBEDTLS_SSL_PROTO_SSL3 is not set
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1=y
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_1=y
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_2=y
// #define CONFIG_MBEDTLS_SSL_PROTO_DTLS is not set
#define CONFIG_MBEDTLS_SSL_ALPN=y
#define CONFIG_MBEDTLS_CLIENT_SSL_SESSION_TICKETS=y
#define CONFIG_MBEDTLS_SERVER_SSL_SESSION_TICKETS=y
#define CONFIG_MBEDTLS_AES_C=y
// #define CONFIG_MBEDTLS_CAMELLIA_C is not set
// #define CONFIG_MBEDTLS_DES_C is not set
#define CONFIG_MBEDTLS_RC4_DISABLED=y
// #define CONFIG_MBEDTLS_RC4_ENABLED_NO_DEFAULT is not set
// #define CONFIG_MBEDTLS_RC4_ENABLED is not set
// #define CONFIG_MBEDTLS_BLOWFISH_C is not set
// #define CONFIG_MBEDTLS_XTEA_C is not set
#define CONFIG_MBEDTLS_CCM_C=y
#define CONFIG_MBEDTLS_GCM_C=y
// #define CONFIG_MBEDTLS_RIPEMD160_C is not set
#define CONFIG_MBEDTLS_PEM_PARSE_C=y
#define CONFIG_MBEDTLS_PEM_WRITE_C=y
#define CONFIG_MBEDTLS_X509_CRL_PARSE_C=y
#define CONFIG_MBEDTLS_X509_CSR_PARSE_C=y
#define CONFIG_MBEDTLS_ECP_C=y
#define CONFIG_MBEDTLS_ECDH_C=y
#define CONFIG_MBEDTLS_ECDSA_C=y
#define CONFIG_MBEDTLS_ECP_DP_SECP192R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_SECP224R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_SECP256R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_SECP384R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_SECP521R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_SECP192K1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_SECP224K1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_SECP256K1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_BP256R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_BP384R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_BP512R1_ENABLED=y
#define CONFIG_MBEDTLS_ECP_DP_CURVE25519_ENABLED=y
#define CONFIG_MBEDTLS_ECP_NIST_OPTIM=y
#define CONFIG_MDNS_MAX_SERVICES=10
#define CONFIG_MQTT_PROTOCOL_311=y
#define CONFIG_MQTT_TRANSPORT_SSL=y
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET=y
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET_SECURE=y
// #define CONFIG_MQTT_USE_CUSTOM_CONFIG is not set
// #define CONFIG_MQTT_TASK_CORE_SELECTION_ENABLED is not set
// #define CONFIG_MQTT_CUSTOM_OUTBOX is not set
#define CONFIG_NEWLIB_STDOUT_LINE_ENDING_CRLF=y
// #define CONFIG_NEWLIB_STDOUT_LINE_ENDING_LF is not set
// #define CONFIG_NEWLIB_STDOUT_LINE_ENDING_CR is not set
// #define CONFIG_NEWLIB_STDIN_LINE_ENDING_CRLF is not set
// #define CONFIG_NEWLIB_STDIN_LINE_ENDING_LF is not set
#define CONFIG_NEWLIB_STDIN_LINE_ENDING_CR=y
// #define CONFIG_NEWLIB_NANO_FORMAT is not set
// #define CONFIG_OPENSSL_DEBUG is not set
// #define CONFIG_OPENSSL_ASSERT_DO_NOTHING is not set
#define CONFIG_OPENSSL_ASSERT_EXIT=y
#define CONFIG_PTHREAD_TASK_PRIO_DEFAULT=5
#define CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT=3072
#define CONFIG_PTHREAD_STACK_MIN=768
#define CONFIG_PTHREAD_DEFAULT_CORE_NO_AFFINITY=y
// #define CONFIG_PTHREAD_DEFAULT_CORE_0 is not set
// #define CONFIG_PTHREAD_DEFAULT_CORE_1 is not set
#define CONFIG_PTHREAD_TASK_CORE_DEFAULT=-1
#define CONFIG_PTHREAD_TASK_NAME_DEFAULT="pthread"
// #define CONFIG_SPI_FLASH_VERIFY_WRITE is not set
// #define CONFIG_SPI_FLASH_ENABLE_COUNTERS is not set
#define CONFIG_SPI_FLASH_ROM_DRIVER_PATCH=y
#define CONFIG_SPI_FLASH_DANGEROUS_WRITE_ABORTS=y
// #define CONFIG_SPI_FLASH_DANGEROUS_WRITE_FAILS is not set
// #define CONFIG_SPI_FLASH_DANGEROUS_WRITE_ALLOWED is not set
// #define CONFIG_SPI_FLASH_USE_LEGACY_IMPL is not set
#define CONFIG_SPI_FLASH_SUPPORT_ISSI_CHIP=y
#define CONFIG_SPI_FLASH_SUPPORT_GD_CHIP=y
#define CONFIG_SPIFFS_MAX_PARTITIONS=3
#define CONFIG_SPIFFS_CACHE=y
#define CONFIG_SPIFFS_CACHE_WR=y
// #define CONFIG_SPIFFS_CACHE_STATS is not set
#define CONFIG_SPIFFS_PAGE_CHECK=y
#define CONFIG_SPIFFS_GC_MAX_RUNS=10
// #define CONFIG_SPIFFS_GC_STATS is not set
#define CONFIG_SPIFFS_PAGE_SIZE=256
#define CONFIG_SPIFFS_OBJ_NAME_LEN=32
#define CONFIG_SPIFFS_USE_MAGIC=y
#define CONFIG_SPIFFS_USE_MAGIC_LENGTH=y
#define CONFIG_SPIFFS_META_LENGTH=4
#define CONFIG_SPIFFS_USE_MTIME=y
// #define CONFIG_SPIFFS_DBG is not set
// #define CONFIG_SPIFFS_API_DBG is not set
// #define CONFIG_SPIFFS_GC_DBG is not set
// #define CONFIG_SPIFFS_CACHE_DBG is not set
// #define CONFIG_SPIFFS_CHECK_DBG is not set
// #define CONFIG_SPIFFS_TEST_VISUALISATION is not set
#define CONFIG_NETIF_IP_LOST_TIMER_INTERVAL=120
#define CONFIG_TCPIP_LWIP=y
#define CONFIG_UNITY_ENABLE_FLOAT=y
#define CONFIG_UNITY_ENABLE_DOUBLE=y
// #define CONFIG_UNITY_ENABLE_COLOR is not set
#define CONFIG_UNITY_ENABLE_IDF_TEST_RUNNER=y
// #define CONFIG_UNITY_ENABLE_FIXTURE is not set
// #define CONFIG_UNITY_ENABLE_BACKTRACE_ON_FAIL is not set
#define CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT=y
#define CONFIG_VFS_SUPPORT_TERMIOS=y
#define CONFIG_SEMIHOSTFS_MAX_MOUNT_POINTS=1
#define CONFIG_SEMIHOSTFS_HOST_PATH_MAX_LEN=128
// #define CONFIG_WL_SECTOR_SIZE_512 is not set
#define CONFIG_WL_SECTOR_SIZE_4096=y
#define CONFIG_WL_SECTOR_SIZE=4096
#define CONFIG_WIFI_PROV_SCAN_MAX_ENTRIES=16
#define CONFIG_WIFI_PROV_AUTOSTOP_TIMEOUT=30
#define CONFIG_WPA_MBEDTLS_CRYPTO=y
// #define CONFIG_WPA_TLS_V12 is not set
// #define CONFIG_LEGACY_INCLUDE_COMMON_HEADERS is not set
#define CONFIG_SW_COEXIST_ENABLE=y