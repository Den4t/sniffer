#ifndef VOIPMONITOR_DEFINE_H
#define VOIPMONITOR_DEFINE_H


#define RTPSENSOR_VERSION "29.1"
#define NAT

#define FORMAT_WAV	1
#define FORMAT_OGG	2
#define REGISTER_CLEAN_PERIOD 60	// clean register table for expired items every 60 seconds

#define STORE_PROC_ID_CDR 10
#define STORE_PROC_ID_CDR_REDIRECT 11
#define STORE_PROC_ID_MESSAGE 20
#define STORE_PROC_ID_CLEANSPOOL 40
#define STORE_PROC_ID_REGISTER 50
#define STORE_PROC_ID_SAVE_PACKET_SQL 60
#define STORE_PROC_ID_HTTP 70
#define STORE_PROC_ID_WEBRTC 80
#define STORE_PROC_ID_CACHE_NUMBERS_LOCATIONS 91
#define STORE_PROC_ID_FRAUD_ALERT_INFO 92
#define STORE_PROC_ID_LOG_SENSOR 93
#define STORE_PROC_ID_SS7 94
#define STORE_PROC_ID_OTHER 99
#define STORE_PROC_ID_IPACC 100
#define STORE_PROC_ID_IPACC_AGR_INTERVAL 110
#define STORE_PROC_ID_IPACC_AGR_HOUR 112
#define STORE_PROC_ID_IPACC_AGR_DAY 113
#define STORE_PROC_ID_IPACC_AGR2_HOUR 120
#define STORE_PROC_ID_CHARTS_CACHE 1010
#define STORE_PROC_ID_CHARTS_CACHE_REMOTE 1020

#define GRAPH_DELIMITER 4294967295
#define GRAPH_VERSION 4294967292
#define GRAPH_MARK 4294967293 
#define GRAPH_MOS 4294967292
#define GRAPH_SILENCE 4294967291
#define GRAPH_EVENT 4294967290

#define SNIFFER_INLINE_FUNCTIONS true

#define DEBUG_SYNC_PCAP_BLOCK_STORE false
#define DEBUG_SYNC_PCAP_BLOCK_STORE_FLAGS_LENGTH 30
#define DEBUG_SYNC_PCAP_BLOCK_STORE_ABORT_IF_ERROR false

#define DEBUG_QUEUE_RTP_THREAD false

#define DEBUG_ASYNC_TAR_WRITE false

#define HEAPSAFE true

#define RQUEUE_SAFE true

#define TAR_PROF false

#define MAX_PRE_PROCESS_PACKET_NEXT_THREADS 4
#define MAX_PROCESS_RTP_PACKET_HASH_NEXT_THREADS 8
#define MAX_PROCESS_RTP_PACKET_THREADS 8

#define USE_PACKET_NUMBER false

#define CALL_RTP_DYNAMIC_ARRAY true

#define PCAP_QUEUE_PCAP_HEADER_FORCE_STD false
#define PCAP_QUEUE_PROCESS_PACKET_NOT_INLINE false

#define CAST_OBJ_TO_VOID(obj) ((void*)(obj))


#endif //VOIPMONITOR_DEFINE_H
