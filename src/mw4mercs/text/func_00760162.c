/*
 * FUN_00760162 (638 B) — a run of 106 import-address-table (IAT) thunks in
 * one in-.text data block (block 0x760162). Each thunk is `jmp dword ptr
 * [IAT_slot]` (FF 25 reloc32), followed by two int3 padding bytes. These are
 * the classic MSVC6 import thunks that jump through the IAT.
 *
 * __cdecl (thunk), no return.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b0fc;   /* IAT 0x0076b0fc */
extern void *g_76b100;   /* IAT 0x0076b100 */
extern void *g_76b110;   /* IAT 0x0076b110 */
extern void *g_76b108;   /* IAT 0x0076b108 */
extern void *g_76b10c;   /* IAT 0x0076b10c */
extern void *g_76b11c;   /* IAT 0x0076b11c */
extern void *g_76b114;   /* IAT 0x0076b114 */
extern void *g_76b118;   /* IAT 0x0076b118 */
extern void *g_76b128;   /* IAT 0x0076b128 */
extern void *g_76b120;   /* IAT 0x0076b120 */
extern void *g_76b124;   /* IAT 0x0076b124 */
extern void *g_76b134;   /* IAT 0x0076b134 */
extern void *g_76b12c;   /* IAT 0x0076b12c */
extern void *g_76b130;   /* IAT 0x0076b130 */
extern void *g_76b140;   /* IAT 0x0076b140 */
extern void *g_76b138;   /* IAT 0x0076b138 */
extern void *g_76b13c;   /* IAT 0x0076b13c */
extern void *g_76b14c;   /* IAT 0x0076b14c */
extern void *g_76b144;   /* IAT 0x0076b144 */
extern void *g_76b148;   /* IAT 0x0076b148 */
extern void *g_76b158;   /* IAT 0x0076b158 */
extern void *g_76b150;   /* IAT 0x0076b150 */
extern void *g_76b154;   /* IAT 0x0076b154 */
extern void *g_76b164;   /* IAT 0x0076b164 */
extern void *g_76b15c;   /* IAT 0x0076b15c */
extern void *g_76b160;   /* IAT 0x0076b160 */
extern void *g_76b170;   /* IAT 0x0076b170 */
extern void *g_76b168;   /* IAT 0x0076b168 */
extern void *g_76b16c;   /* IAT 0x0076b16c */
extern void *g_76b17c;   /* IAT 0x0076b17c */
extern void *g_76b174;   /* IAT 0x0076b174 */
extern void *g_76b178;   /* IAT 0x0076b178 */
extern void *g_76b188;   /* IAT 0x0076b188 */
extern void *g_76b180;   /* IAT 0x0076b180 */
extern void *g_76b184;   /* IAT 0x0076b184 */
extern void *g_76b258;   /* IAT 0x0076b258 */
extern void *g_76b194;   /* IAT 0x0076b194 */
extern void *g_76b18c;   /* IAT 0x0076b18c */
extern void *g_76b190;   /* IAT 0x0076b190 */
extern void *g_76b1a0;   /* IAT 0x0076b1a0 */
extern void *g_76b198;   /* IAT 0x0076b198 */
extern void *g_76b19c;   /* IAT 0x0076b19c */
extern void *g_76b1ac;   /* IAT 0x0076b1ac */
extern void *g_76b1a4;   /* IAT 0x0076b1a4 */
extern void *g_76b1a8;   /* IAT 0x0076b1a8 */
extern void *g_76b250;   /* IAT 0x0076b250 */
extern void *g_76b1b0;   /* IAT 0x0076b1b0 */
extern void *g_76b1b4;   /* IAT 0x0076b1b4 */
extern void *g_76b1f4;   /* IAT 0x0076b1f4 */
extern void *g_76b1f8;   /* IAT 0x0076b1f8 */
extern void *g_76b1fc;   /* IAT 0x0076b1fc */
extern void *g_76b200;   /* IAT 0x0076b200 */
extern void *g_76b204;   /* IAT 0x0076b204 */
extern void *g_76b210;   /* IAT 0x0076b210 */
extern void *g_76b214;   /* IAT 0x0076b214 */
extern void *g_76b218;   /* IAT 0x0076b218 */
extern void *g_76b21c;   /* IAT 0x0076b21c */
extern void *g_76b220;   /* IAT 0x0076b220 */
extern void *g_76b224;   /* IAT 0x0076b224 */
extern void *g_76b228;   /* IAT 0x0076b228 */
extern void *g_76b22c;   /* IAT 0x0076b22c */
extern void *g_76b230;   /* IAT 0x0076b230 */
extern void *g_76b234;   /* IAT 0x0076b234 */
extern void *g_76b1f0;   /* IAT 0x0076b1f0 */
extern void *g_76b23c;   /* IAT 0x0076b23c */
extern void *g_76b240;   /* IAT 0x0076b240 */
extern void *g_76b244;   /* IAT 0x0076b244 */
extern void *g_76b248;   /* IAT 0x0076b248 */
extern void *g_76b08c;   /* IAT 0x0076b08c */
extern void *g_76b088;   /* IAT 0x0076b088 */
extern void *g_76b20c;   /* IAT 0x0076b20c */
extern void *g_76b084;   /* IAT 0x0076b084 */
extern void *g_76b208;   /* IAT 0x0076b208 */
extern void *g_76b0bc;   /* IAT 0x0076b0bc */
extern void *g_76b0ac;   /* IAT 0x0076b0ac */
extern void *g_76b0a8;   /* IAT 0x0076b0a8 */
extern void *g_76b0b0;   /* IAT 0x0076b0b0 */
extern void *g_76b0a0;   /* IAT 0x0076b0a0 */
extern void *g_76b098;   /* IAT 0x0076b098 */
extern void *g_76b090;   /* IAT 0x0076b090 */
extern void *g_76b094;   /* IAT 0x0076b094 */
extern void *g_76b0a4;   /* IAT 0x0076b0a4 */
extern void *g_76b09c;   /* IAT 0x0076b09c */
extern void *g_76b24c;   /* IAT 0x0076b24c */
extern void *g_76b254;   /* IAT 0x0076b254 */
extern void *g_76b25c;   /* IAT 0x0076b25c */
extern void *g_76b238;   /* IAT 0x0076b238 */
extern void *g_76b260;   /* IAT 0x0076b260 */
extern void *g_76b264;   /* IAT 0x0076b264 */
extern void *g_76b1ec;   /* IAT 0x0076b1ec */
extern void *g_76b1e8;   /* IAT 0x0076b1e8 */
extern void *g_76b1e4;   /* IAT 0x0076b1e4 */
extern void *g_76b1e0;   /* IAT 0x0076b1e0 */
extern void *g_76b1dc;   /* IAT 0x0076b1dc */
extern void *g_76b1d8;   /* IAT 0x0076b1d8 */
extern void *g_76b1d4;   /* IAT 0x0076b1d4 */
extern void *g_76b1d0;   /* IAT 0x0076b1d0 */
extern void *g_76b1cc;   /* IAT 0x0076b1cc */
extern void *g_76b1c8;   /* IAT 0x0076b1c8 */
extern void *g_76b1c4;   /* IAT 0x0076b1c4 */
extern void *g_76b1c0;   /* IAT 0x0076b1c0 */
extern void *g_76b1bc;   /* IAT 0x0076b1bc */
extern void *g_76b1b8;   /* IAT 0x0076b1b8 */
extern void *g_76b048;   /* IAT 0x0076b048 */
extern void *g_76b044;   /* IAT 0x0076b044 */
extern void *g_76b040;   /* IAT 0x0076b040 */

__declspec(naked) void FUN_00760162(void)
{
    __asm {
        jmp     dword ptr [g_76b0fc]
        jmp     dword ptr [g_76b100]
        jmp     dword ptr [g_76b110]
        jmp     dword ptr [g_76b108]
        jmp     dword ptr [g_76b10c]
        jmp     dword ptr [g_76b11c]
        jmp     dword ptr [g_76b114]
        jmp     dword ptr [g_76b118]
        jmp     dword ptr [g_76b128]
        jmp     dword ptr [g_76b120]
        jmp     dword ptr [g_76b124]
        jmp     dword ptr [g_76b134]
        jmp     dword ptr [g_76b12c]
        jmp     dword ptr [g_76b130]
        jmp     dword ptr [g_76b140]
        jmp     dword ptr [g_76b138]
        jmp     dword ptr [g_76b13c]
        jmp     dword ptr [g_76b14c]
        jmp     dword ptr [g_76b144]
        jmp     dword ptr [g_76b148]
        jmp     dword ptr [g_76b158]
        jmp     dword ptr [g_76b150]
        jmp     dword ptr [g_76b154]
        jmp     dword ptr [g_76b164]
        jmp     dword ptr [g_76b15c]
        jmp     dword ptr [g_76b160]
        jmp     dword ptr [g_76b170]
        jmp     dword ptr [g_76b168]
        jmp     dword ptr [g_76b16c]
        jmp     dword ptr [g_76b17c]
        jmp     dword ptr [g_76b174]
        jmp     dword ptr [g_76b178]
        jmp     dword ptr [g_76b188]
        jmp     dword ptr [g_76b180]
        jmp     dword ptr [g_76b184]
        jmp     dword ptr [g_76b258]
        jmp     dword ptr [g_76b194]
        jmp     dword ptr [g_76b18c]
        jmp     dword ptr [g_76b190]
        jmp     dword ptr [g_76b1a0]
        jmp     dword ptr [g_76b198]
        jmp     dword ptr [g_76b19c]
        jmp     dword ptr [g_76b1ac]
        jmp     dword ptr [g_76b1a4]
        jmp     dword ptr [g_76b1a8]
        jmp     dword ptr [g_76b250]
        jmp     dword ptr [g_76b1b0]
        jmp     dword ptr [g_76b1b4]
        jmp     dword ptr [g_76b1f4]
        jmp     dword ptr [g_76b1f8]
        jmp     dword ptr [g_76b1fc]
        jmp     dword ptr [g_76b200]
        jmp     dword ptr [g_76b204]
        jmp     dword ptr [g_76b210]
        jmp     dword ptr [g_76b214]
        jmp     dword ptr [g_76b218]
        jmp     dword ptr [g_76b21c]
        jmp     dword ptr [g_76b220]
        jmp     dword ptr [g_76b224]
        jmp     dword ptr [g_76b228]
        jmp     dword ptr [g_76b22c]
        jmp     dword ptr [g_76b230]
        jmp     dword ptr [g_76b234]
        jmp     dword ptr [g_76b1f0]
        jmp     dword ptr [g_76b23c]
        jmp     dword ptr [g_76b240]
        jmp     dword ptr [g_76b244]
        jmp     dword ptr [g_76b248]
        jmp     dword ptr [g_76b08c]
        jmp     dword ptr [g_76b088]
        jmp     dword ptr [g_76b20c]
        jmp     dword ptr [g_76b084]
        jmp     dword ptr [g_76b208]
        jmp     dword ptr [g_76b0bc]
        jmp     dword ptr [g_76b0ac]
        jmp     dword ptr [g_76b0a8]
        jmp     dword ptr [g_76b0b0]
        jmp     dword ptr [g_76b0a0]
        jmp     dword ptr [g_76b098]
        jmp     dword ptr [g_76b090]
        jmp     dword ptr [g_76b094]
        jmp     dword ptr [g_76b0a4]
        jmp     dword ptr [g_76b09c]
        jmp     dword ptr [g_76b24c]
        jmp     dword ptr [g_76b254]
        jmp     dword ptr [g_76b25c]
        jmp     dword ptr [g_76b238]
        jmp     dword ptr [g_76b260]
        jmp     dword ptr [g_76b264]
        jmp     dword ptr [g_76b1ec]
        jmp     dword ptr [g_76b1e8]
        jmp     dword ptr [g_76b1e4]
        jmp     dword ptr [g_76b1e0]
        jmp     dword ptr [g_76b1dc]
        jmp     dword ptr [g_76b1d8]
        jmp     dword ptr [g_76b1d4]
        jmp     dword ptr [g_76b1d0]
        jmp     dword ptr [g_76b1cc]
        jmp     dword ptr [g_76b1c8]
        jmp     dword ptr [g_76b1c4]
        jmp     dword ptr [g_76b1c0]
        jmp     dword ptr [g_76b1bc]
        jmp     dword ptr [g_76b1b8]
        jmp     dword ptr [g_76b048]
        jmp     dword ptr [g_76b044]
        jmp     dword ptr [g_76b040]
        int     3
        int     3
    }
}
