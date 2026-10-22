/*
 * FUN_0073B100 (83 B) — .text data block containing 2 sub-functions:
 *   [0x73B100] copies g_8AAEB4 to g_85B610, sets g_87B688=0xC, g_87C5B4=0.
 *   [0x73B120] sets g_87B688=0xA, copies g_8AAEB4 to g_85B610, sets
 *             g_8AAEB4=1, g_87C5BC=0, g_87C5C4=0xF423F.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8aaeb4;
extern int g_85b610;
extern int g_87b688;
extern int g_87c5b4;
extern int g_87c5bc;
extern int g_87c5c4;

__declspec(naked) void FUN_0073B100(void)
{
    __asm {
        mov     eax, dword ptr [g_8aaeb4]
        mov     dword ptr [g_85b610], eax
        mov     dword ptr [g_87b688], 0xc
        mov     dword ptr [g_87c5b4], 0
        ret
        nop
        mov     eax, dword ptr [g_8aaeb4]
        mov     dword ptr [g_87b688], 0xa
        mov     dword ptr [g_85b610], eax
        mov     dword ptr [g_8aaeb4], 1
        mov     dword ptr [g_87c5bc], 0
        mov     dword ptr [g_87c5c4], 0xf423f
        ret
    }
}
