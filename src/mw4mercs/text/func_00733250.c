/*
 * FUN_00733250 (164 B) — global state initializer.
 *
 * Zero-fills two global arrays (8 dwords at 0x008A99D4, 0x200 dwords at
 * 0x008A99F4), initializes a set of global scalars, captures a fresh
 * RDTSC timestamp, and calls FUN_00748300.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00748300(void);

extern int g_8aa1f8;   /* 0x008AA1F8 */
extern int g_8aa1f4;   /* 0x008AA1F4 */
extern int g_8a99ac;   /* 0x008A99AC */
extern char g_7b6fa8;  /* 0x007B6FA8 */
extern int g_8a99d0;   /* 0x008A99D0 */
extern int g_858b04;   /* 0x00858B04 */
extern int g_8a99a4;   /* 0x008A99A4 */
extern int g_8a999c;   /* 0x008A999C */
extern int g_8a9998;   /* 0x008A9998 */
extern int g_8a99a0;   /* 0x008A99A0 */
extern int g_8a9990;   /* 0x008A9990 */
extern int g_8a9994;   /* 0x008A9994 */
extern int g_859b38;   /* 0x00859B38 */
extern int g_859b3c;   /* 0x00859B3C */
extern int g_8aa248;   /* 0x008AA248 */
extern int g_8aa260;   /* 0x008AA260 */

__declspec(naked) void func_00733250(void)
{
    __asm {
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 8
        mov     edi, 0x8a99d4
        rep     stosd
        xor     esi, esi
        mov     ecx, 0x200
        mov     edi, 0x8a99f4
        mov     dword ptr [g_8aa1f8], esi
        mov     dword ptr [g_8aa1f4], esi
        mov     dword ptr [g_8a99ac], 0x1ff
        rep     stosd
        mov     byte ptr [g_7b6fa8], 1
        mov     dword ptr [g_8a99d0], esi
        mov     dword ptr [g_858b04], 0x42700000
        mov     dword ptr [g_8a99a4], 0x42c80000
        mov     dword ptr [g_8a999c], 0x41a00000
        mov     dword ptr [g_8a9998], 0x41a00000
        mov     dword ptr [g_8a99a0], 0x42c80000
        push    eax
        push    edx
        rdtsc
        mov     dword ptr [g_8a9990], eax
        mov     dword ptr [g_8a9994], edx
        pop     edx
        pop     eax
        mov     dword ptr [g_859b38], esi
        mov     dword ptr [g_859b3c], esi
        call    FUN_00748300
        pop     edi
        mov     dword ptr [g_8aa248], esi
        mov     dword ptr [g_8aa260], esi
        pop     esi
        ret
    }
}
