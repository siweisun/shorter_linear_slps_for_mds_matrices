#define DIM 32
#define SBOX_SIZE 8
#define NUM_SBOXES (DIM/SBOX_SIZE)

uint64_t mds[] = {
    0x80402060,
    0x40201030,
    0x20100818,
    0x1008040c,
    0x08040206,
    0x04020103,
    0x0201d8d9,
    0x01d86cb4,
    0x40806020,
    0x20403010,
    0x10201808,
    0x08100c04,
    0x04080602,
    0x02040301,
    0x0102d9d8,
    0xd801b46c,
    0x20608040,
    0x10304020,
    0x08182010,
    0x040c1008,
    0x02060804,
    0x01030402,
    0xd8d90201,
    0x6cb401d8,
    0x60204080,
    0x30102040,
    0x18081020,
    0x0c040810,
    0x06020408,
    0x03010204,
    0xd9d80102,
    0xb46cd801
};