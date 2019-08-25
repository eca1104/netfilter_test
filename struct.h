#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
struct ethernet_header
{
    u_int8_t ether_dmac[6];
    u_int8_t ether_smac[6];
    u_int16_t ether_type;

};

struct ip_header
{
    u_int8_t val; //version and length
    u_int8_t dsf;
    u_int16_t total_length;
    u_int16_t identifi;
    u_int16_t flags;
    u_int8_t ttl;
    u_int8_t protocol;
    u_int16_t check_sum;
    u_int8_t ip_srcaddr[4];
    u_int8_t ip_destaddr[4];

};

struct tcp_header
{
    u_int16_t sport;
    u_int16_t dport;
    u_int8_t seq_num[4];
    u_int8_t ack_num[4];
    u_int8_t size;
    u_int8_t flags; // header length and flags
    u_int16_t ws; //window size
    u_int16_t cs; //checksum
    u_int16_t urgent;
};
struct payload
{
    u_char http_data[10];
};

u_int16_t my_ntohs(uint16_t n){
   return n>>8 | n<<8;
}
