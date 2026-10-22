/*
 * In-.text data block 0x73A900 (433 B) — a run of 27 tiny setter functions
 * (each 16 B: mov dword ptr [global], imm; ret; 5x nop pad) plus a trailing
 * bare `ret`. They write a state/flag value into a set of globals
 * (0x8aaf44, 0x8aae2c/30/34/44).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8AAF44;
extern int g_8AAE2C;
extern int g_8AAE30;
extern int g_8AAE34;
extern int g_8AAE44;

__declspec(naked) void FUN_0073B3C0(void)
{
    __asm {
        mov     dword ptr [g_8AAF44], 0
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 2
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 9
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 1
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 3
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0xc
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAE2C], 2
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAE30], 2
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAE34], 2
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAE44], 2
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 8
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0xd
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 4
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0xa
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0xb
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0xe
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 5
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 6
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 7
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0xf
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0x10
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0x11
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0x12
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0x13
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0x14
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0x15
        ret
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [g_8AAF44], 0x16
        ret
        nop
        nop
        nop
        nop
        nop
        ret
    }
}
