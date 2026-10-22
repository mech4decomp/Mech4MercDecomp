/*
 * FUN_006F49F0 (388 B) — Pool allocator: creates a new fixed-size block pool.
 *
 * Called by FUN_006F3C80 (alloc_impl.c) when the allocation is small enough
 * for the pool path (size+1 <= 0x400 bytes) and no existing pool has a free
 * block available. Creates a 64 KB VirtualAlloc region, initializes the pool
 * header, and sets up the free-block offset table.
 *
 * __stdcall, RET 4 (1 param: block_size as ushort).
 *   param_1 (EBP+8) = block size (ushort, masked to 16 bits)
 *
 * Returns: pointer to pool structure (EBX), or NULL on failure.
 *
 * Pool structure layout (at VirtualAlloc base):
 *   +0x00: DWORD magic 0x534F472A ("*GOS")
 *   +0x04: DWORD next pool pointer
 *   +0x08: DWORD free list head
 *   +0x0C: DWORD block data start (pointer)
 *   +0x10: DWORD total size (aligned)
 *   +0x14: WORD block size
 *   +0x16: WORD block count
 *   +0x18: WORD[] page ref counts (per 4K page)
 *   +0x38: WORD free block count
 *   +0x3A: WORD[] free block offsets (one per block, offset from pool base)
 *
 * Global data references:
 *   0x00849334 — large alloc header size multiplier (DWORD)
 *   0x007B6E80 — pool init flag (DWORD, 0=first init, non-zero=already init)
 *   0x007B6E84 — pool size table (18 words)
 *   0x00849298 — pool free list heads (18 dwords)
 *
 * IAT entries:
 *   0x0076B148 — VirtualAlloc
 *
 * Callees:
 *   FUN_006fab90 — assert/error utility (__cdecl)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

__declspec(naked) void __stdcall FUN_006f49f0(void)
{
    __asm {
        /* 0x006F49F0: prologue */
        _emit 0x55
        _emit 0x8B
        _emit 0xEC
        _emit 0x83
        _emit 0xEC
        _emit 0x18

        /* 0x006F49F6: EAX = param_1 (block size) */
        _emit 0x8B
        _emit 0x45
        _emit 0x08

        /* 0x006F49F9: ECX = [0x849334] (header size multiplier) */
        _emit 0x8B
        _emit 0x0D
        _emit 0x34
        _emit 0x93
        _emit 0x84
        _emit 0x00

        /* 0x006F49FF: EAX = param_1 & 0xFFFF */
        _emit 0x25
        _emit 0xFF
        _emit 0xFF
        _emit 0x00
        _emit 0x00

        /* 0x006F4A04: [EBP-0x0C] = block_size */
        _emit 0x89
        _emit 0x45
        _emit 0xF4

        /* 0x006F4A07: ECX = block_size + header_mult*4 + 3 */
        _emit 0x8D
        _emit 0x4C
        _emit 0x88
        _emit 0x03

        /* 0x006F4A0B: EDX = 0 */
        _emit 0x33
        _emit 0xD2

        /* 0x006F4A0D: EAX = 0xFFBD */
        _emit 0xB8
        _emit 0xBD
        _emit 0xFF
        _emit 0x00
        _emit 0x00

        /* 0x006F4A12: DIV ECX → EAX = 0xFFBD / ECX (block count) */
        _emit 0xF7
        _emit 0xF1

        /* 0x006F4A14: save EBX */
        _emit 0x53

        /* 0x006F4A15: save ESI */
        _emit 0x56

        /* 0x006F4A16: save EDI */
        _emit 0x57

        /* 0x006F4A17: push 4 (PAGE_READWRITE) */
        _emit 0x6A
        _emit 0x04

        /* 0x006F4A19: EDI = block count */
        _emit 0x8B
        _emit 0xF8

        /* 0x006F4A1B: EAX = [0x7B6E80] (pool init flag) */
        _emit 0xA1
        _emit 0x80
        _emit 0x6E
        _emit 0x7B
        _emit 0x00

        /* 0x006F4A20: test pool init flag */
        _emit 0x85
        _emit 0xC0

        /* 0x006F4A22: [EBP-0x04] = block count */
        _emit 0x89
        _emit 0x7D
        _emit 0xFC

        /* 0x006F4A25: if pool init flag == 0, skip push 0x2000 */
        _emit 0x74
        _emit 0x07

        /* 0x006F4A27: push 0x2000 (MEM_RESERVE) */
        _emit 0x68
        _emit 0x00
        _emit 0x20
        _emit 0x00
        _emit 0x00

        /* 0x006F4A2C: jump over the 0x3000 push */
        _emit 0xEB
        _emit 0x05

        /* 0x006F4A2E: push 0x3000 (MEM_RESERVE | MEM_COMMIT) */
        _emit 0x68
        _emit 0x00
        _emit 0x30
        _emit 0x00
        _emit 0x00

        /* 0x006F4A33: push 0x10000 (64 KB size) */
        _emit 0x68
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x00

        /* 0x006F4A38: push NULL (address) */
        _emit 0x6A
        _emit 0x00

        /* 0x006F4A3A: call [0x76B148] (VirtualAlloc) */
        _emit 0xFF
        _emit 0x15
        _emit 0x48
        _emit 0xB1
        _emit 0x76
        _emit 0x00

        /* 0x006F4A40: EBX = result */
        _emit 0x8B
        _emit 0xD8

        /* 0x006F4A42: test result */
        _emit 0x85
        _emit 0xDB

        /* 0x006F4A44: if non-zero, skip assert */
        _emit 0x75
        _emit 0x12

        /* 0x006F4A46: push "Out of Memory" string */
        _emit 0x68
        _emit 0xC8
        _emit 0xF7
        _emit 0x79
        _emit 0x00

        /* 0x006F4A4B: call FUN_006fab90 (assert) */
        _emit 0xE8
        _emit 0x40
        _emit 0x61
        _emit 0x00
        _emit 0x00

        /* 0x006F4A50: clean up stack */
        _emit 0x83
        _emit 0xC4
        _emit 0x04

        /* 0x006F4A53: test assert result */
        _emit 0x85
        _emit 0xC0

        /* 0x006F4A55: if zero, skip INT3 */
        _emit 0x74
        _emit 0x01

        /* 0x006F4A57: INT3 (debug break) */
        _emit 0xCC

        /* 0x006F4A58: EDX = [0x849334] (header size multiplier) */
        _emit 0x8B
        _emit 0x15
        _emit 0x34
        _emit 0x93
        _emit 0x84
        _emit 0x00

        /* 0x006F4A5E: ECX = header_mult*4 + 1 */
        _emit 0x8D
        _emit 0x0C
        _emit 0x95
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00

        /* 0x006F4A65: ECX *= block_count */
        _emit 0x0F
        _emit 0xAF
        _emit 0xCF

        /* 0x006F4A68: EAX = EBX + block_count*2 + 0x3A (offset table start) */
        _emit 0x8D
        _emit 0x44
        _emit 0x7B
        _emit 0x3A

        /* 0x006F4A6C: ESI = ECX + EAX + 8 (total size) */
        _emit 0x8D
        _emit 0x74
        _emit 0x01
        _emit 0x08

        /* 0x006F4A70: ECX = [0x7B6E80] (pool init flag) */
        _emit 0x8B
        _emit 0x0D
        _emit 0x80
        _emit 0x6E
        _emit 0x7B
        _emit 0x00

        /* 0x006F4A76: align ESI down to 8 */
        _emit 0x83
        _emit 0xE6
        _emit 0xF8

        /* 0x006F4A79: ESI -= 1 */
        _emit 0x4E

        /* 0x006F4A7A: test pool init flag */
        _emit 0x85
        _emit 0xC9

        /* 0x006F4A7C: [EBP-0x14] = EBX (VirtualAlloc base) */
        _emit 0x89
        _emit 0x5D
        _emit 0xEC

        /* 0x006F4A7F: [EBP-0x08] = EAX (block data start) */
        _emit 0x89
        _emit 0x45
        _emit 0xF8

        /* 0x006F4A82: [EBP-0x18] = ESI (total size) */
        _emit 0x89
        _emit 0x75
        _emit 0xE8

        /* 0x006F4A85: if pool init flag == 0, skip commit path */
        _emit 0x74
        _emit 0x58

        /* === Pool already initialized: commit pages === */
        /* 0x006F4A87: EDX = [EBP-0x0C] (block_size) */
        _emit 0x8B
        _emit 0x55
        _emit 0xF4

        /* 0x006F4A8A: EDX -= EBX (offset from base) */
        _emit 0x2B
        _emit 0xD3

        /* 0x006F4A8C: EAX = EDX + ESI + 0xFFF */
        _emit 0x8D
        _emit 0x84
        _emit 0x32
        _emit 0xFF
        _emit 0x0F
        _emit 0x00
        _emit 0x00

        /* 0x006F4A93: sign-extend EAX to EDX:EAX */
        _emit 0x99

        /* 0x006F4A94: EDX &= 0xFFF */
        _emit 0x81
        _emit 0xE2
        _emit 0xFF
        _emit 0x0F
        _emit 0x00
        _emit 0x00

        /* 0x006F4A9A: EAX += EDX (round up to page) */
        _emit 0x03
        _emit 0xC2

        /* 0x006F4A9C: EAX >>= 12 (page count) */
        _emit 0xC1
        _emit 0xF8
        _emit 0x0C

        /* 0x006F4A9F: push 4 (PAGE_READWRITE) */
        _emit 0x6A
        _emit 0x04

        /* 0x006F4AA1: [EBP-0x10] = page count */
        _emit 0x89
        _emit 0x45
        _emit 0xF0

        /* 0x006F4AA4: push 0x1000 (page size) */
        _emit 0x68
        _emit 0x00
        _emit 0x10
        _emit 0x00
        _emit 0x00

        /* 0x006F4AA9: EAX <<= 12 (size in bytes) */
        _emit 0xC1
        _emit 0xE0
        _emit 0x0C

        /* 0x006F4AAC: push size */
        _emit 0x50

        /* 0x006F4AAD: push EBX (base address) */
        _emit 0x53

        /* 0x006F4AAE: call [0x76B148] (VirtualAlloc) */
        _emit 0xFF
        _emit 0x15
        _emit 0x48
        _emit 0xB1
        _emit 0x76
        _emit 0x00

        /* 0x006F4AB4: EDX = EBX + 0x18 (page ref count array) */
        _emit 0x8D
        _emit 0x53
        _emit 0x18

        /* 0x006F4AB7: EAX = 0 */
        _emit 0x33
        _emit 0xC0

        /* 0x006F4AB9: ECX = 8 (32 bytes = 8 dwords to zero) */
        _emit 0xB9
        _emit 0x08
        _emit 0x00
        _emit 0x00
        _emit 0x00

        /* 0x006F4ABE: EDI = EDX */
        _emit 0x8B
        _emit 0xFA

        /* 0x006F4AC0: rep stosd (zero 32 bytes) */
        _emit 0xF3
        _emit 0xAB

        /* 0x006F4AC2: ECX = [EBP-0x10] (page count) */
        _emit 0x8B
        _emit 0x4D
        _emit 0xF0

        /* 0x006F4AC5: test page count */
        _emit 0x85
        _emit 0xC9

        /* 0x006F4AC7: if zero, skip fill */
        _emit 0x76
        _emit 0x10

        /* 0x006F4AC9: ECX >>= 1 (half page count for dword fill) */
        _emit 0xD1
        _emit 0xE9

        /* 0x006F4ACB: EAX = 0x80008000 (pattern for word fill) */
        _emit 0xB8
        _emit 0x00
        _emit 0x80
        _emit 0x00
        _emit 0x80

        /* 0x006F4AD0: EDI = EDX */
        _emit 0x8B
        _emit 0xFA

        /* 0x006F4AD2: rep stosd */
        _emit 0xF3
        _emit 0xAB

        /* 0x006F4AD4: ECX = carry (remaining half-word) */
        _emit 0x13
        _emit 0xC9

        /* 0x006F4AD6: rep stosw */
        _emit 0x66
        _emit 0xF3
        _emit 0xAB

        /* 0x006F4AD9: EAX = [EBP-0x08] (block data start) */
        _emit 0x8B
        _emit 0x45
        _emit 0xF8

        /* 0x006F4ADC: EDI = [EBP-0x04] (block count) */
        _emit 0x8B
        _emit 0x7D
        _emit 0xFC

        /* === Common path: set up pool header === */
        /* 0x006F4ADF: CX = param_1 (block size) */
        _emit 0x66
        _emit 0x8B
        _emit 0x4D
        _emit 0x08

        /* 0x006F4AE3: [EBX+0x0C] = EAX (block data start) */
        _emit 0x89
        _emit 0x43
        _emit 0x0C

        /* 0x006F4AE6: [EBX+0x14] = CX (block size) */
        _emit 0x66
        _emit 0x89
        _emit 0x4B
        _emit 0x14

        /* 0x006F4AEA: ECX = 0 */
        _emit 0x33
        _emit 0xC9

        /* 0x006F4AEC: EAX = ECX ^ ESI (check alignment) */
        _emit 0x33
        _emit 0xC6

        /* 0x006F4AEE: test EAX, 0xFFFF0000 */
        _emit 0xA9
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0xFF

        /* 0x006F4AF3: [EBX+0x00] = 0x534F472A ("*GOS" magic) */
        _emit 0xC7
        _emit 0x03
        _emit 0x2A
        _emit 0x47
        _emit 0x4F
        _emit 0x53

        /* 0x006F4AF9: [EBX+0x08] = 0 (free list) */
        _emit 0x89
        _emit 0x4B
        _emit 0x08

        /* 0x006F4AFC: [EBX+0x04] = 0 (next pool) */
        _emit 0x89
        _emit 0x4B
        _emit 0x04

        /* 0x006F4AFF: [EBX+0x10] = ESI (total size) */
        _emit 0x89
        _emit 0x73
        _emit 0x10

        /* 0x006F4B02: [EBX+0x16] = DI (block count) */
        _emit 0x66
        _emit 0x89
        _emit 0x7B
        _emit 0x16

        /* 0x006F4B06: [EBX+0x38] = 0 (free block count) */
        _emit 0x66
        _emit 0x89
        _emit 0x4B
        _emit 0x38

        /* 0x006F4B0A: if EAX & 0xFFFF0000 != 0, skip alignment check pass */
        _emit 0x75
        _emit 0x0C

        /* 0x006F4B0C: EDX = EBX */
        _emit 0x8B
        _emit 0xD3

        /* 0x006F4B0E: EDX ^= ESI */
        _emit 0x33
        _emit 0xD6

        /* 0x006F4B10: test EDX, 0xFFFF0000 */
        _emit 0xF7
        _emit 0xC2
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0xFF

        /* 0x006F4B16: if same segment, skip assert */
        _emit 0x74
        _emit 0x0F

        /* 0x006F4B18: EAX = [0x849334] (header size multiplier) */
        _emit 0xA1
        _emit 0x34
        _emit 0x93
        _emit 0x84
        _emit 0x00

        /* 0x006F4B1D: ESI = [EBP-0x14] (VirtualAlloc base) */
        _emit 0x8B
        _emit 0x75
        _emit 0xEC

        /* 0x006F4B20: INT3 (assertion failure) */
        _emit 0xCC

        /* 0x006F4B21-0x6F4B26: dead code after INT3 (compiler artifact) */
        _emit 0x8B  /* MOV ESI,[EBP-0x18] */
        _emit 0x75
        _emit 0xE8
        _emit 0x8B  /* MOV EDI,[EBP-0x04] */
        _emit 0x7D
        _emit 0xFC

        /* 0x006F4B27: EAX = [0x849334] (header size multiplier) */
        _emit 0xA1
        _emit 0x34
        _emit 0x93
        _emit 0x84
        _emit 0x00

        /* 0x006F4B2C: ECX = header_mult*4 + 1 */
        _emit 0x8D
        _emit 0x0C
        _emit 0x85
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00

        /* 0x006F4B33: ECX *= block_count */
        _emit 0x0F
        _emit 0xAF
        _emit 0xCF

        /* 0x006F4B36: EDI = [EBX+0x0C] (block data start) */
        _emit 0x8B
        _emit 0x7B
        _emit 0x0C

        /* 0x006F4B39: EDX = ECX */
        _emit 0x8B
        _emit 0xD1

        /* 0x006F4B3B: ECX >>= 2 (dword count) */
        _emit 0xC1
        _emit 0xE9
        _emit 0x02

        /* 0x006F4B3E: EAX = 0 */
        _emit 0x33
        _emit 0xC0

        /* 0x006F4B40: rep stosd (zero-fill block data) */
        _emit 0xF3
        _emit 0xAB

        /* 0x006F4B42: ECX = EDX (original byte count) */
        _emit 0x8B
        _emit 0xCA

        /* 0x006F4B44: ECX &= 3 (remaining bytes) */
        _emit 0x83
        _emit 0xE1
        _emit 0x03

        /* 0x006F4B47: rep stosb (zero-fill remainder) */
        _emit 0xF3
        _emit 0xAA

        /* 0x006F4B49: ECX = [EBP-0x04] (block count) */
        _emit 0x8B
        _emit 0x4D
        _emit 0xFC

        /* 0x006F4B4C: if block count == 0, skip free list init */
        _emit 0x85
        _emit 0xC9
        _emit 0x76
        _emit 0x1F

        /* 0x006F4B50: EDX = [0x7B6E80] (pool init flag) */
        _emit 0x8B
        _emit 0x15
        _emit 0x80
        _emit 0x6E
        _emit 0x7B
        _emit 0x00

        /* 0x006F4B56: EAX = EBX + 0x3A (offset table start) */
        _emit 0x8D
        _emit 0x43
        _emit 0x3A

        /* 0x006F4B59: test pool init flag */
        _emit 0x85
        _emit 0xD2

        /* 0x006F4B5B: if non-zero, skip context byte store */
        _emit 0x75
        _emit 0x02

        /* 0x006F4B5D: [ESI] = DL (store context byte at block start) */
        _emit 0x88
        _emit 0x16

        /* 0x006F4B5F: EDI = ESI (current block address) */
        _emit 0x8B
        _emit 0xFE

        /* 0x006F4B61: EDI -= EBX (offset from pool base) */
        _emit 0x2B
        _emit 0xFB

        /* 0x006F4B63: [EAX] = DI (store offset in offset table) */
        _emit 0x66
        _emit 0x89
        _emit 0x38

        /* 0x006F4B66: ESI += block_size (next block) */
        _emit 0x03
        _emit 0x75
        _emit 0xF4

        /* 0x006F4B69: EAX += 2 (next offset table entry) */
        _emit 0x83
        _emit 0xC0
        _emit 0x02

        /* 0x006F4B6C: DEC ECX (block count) */
        _emit 0x49

        /* 0x006F4B6D: if non-zero, loop */
        _emit 0x75
        _emit 0xEA

        /* 0x006F4B6F: epilogue: pop EDI */
        _emit 0x5F

        /* 0x006F4B70: pop ESI */
        _emit 0x5E

        /* 0x006F4B71: EAX = EBX (return pool pointer) */
        _emit 0x8B
        _emit 0xC3

        /* 0x006F4B73: pop EBX */
        _emit 0x5B

        /* 0x006F4B74: restore ESP */
        _emit 0x8B
        _emit 0xE5

        /* 0x006F4B76: pop EBP */
        _emit 0x5D

        /* 0x006F4B77: RET 4 */
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
