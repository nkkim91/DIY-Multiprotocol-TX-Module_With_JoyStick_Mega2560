//#define CONFIG_SYMAX_X5C
#define CONFIG_V2X2


#ifdef CONFIG_SYMAX_X5C
#define SUB_PROTOCOL_TYPE SUB_PROTOCOL_TYPE_SYMAX
//#define SUB_PROTOCOL_TYPE SUB_PROTOCOL_TYPE_SYMAX5C
//#define DEBUG_NK
#endif

#ifdef CONFIG_V2X2
#define SUB_PROTOCOL_TYPE SUB_PROTOCOL_TYPE_V2X2
//#define SUB_PROTOCOL_TYPE SUB_PROTOCOL_TYPE_JXD506
//#define DEBUG_NK
#endif
