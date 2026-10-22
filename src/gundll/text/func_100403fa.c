/*
 * FUN_100403fa (26 B) - __stdcall. ORs 0x104 into word at 0x10075710,
 * calls GetUserDefaultLCID (IAT 0x10049178), stores result at 0x10075714
 * and 0x100756f8.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_10075710;   /* OR word ptr [imm32],imm16 */
extern void *g_10049178;            /* IAT call dword ptr [imm32] */
extern unsigned long g_10075714;    /* A3 mov [imm32],eax */
extern unsigned long g_100756f8;    /* A3 mov [imm32],eax */

__declspec(naked) void __stdcall FUN_100403fa(void)
{
    __asm {
        or      word ptr [g_10075710], 0x104
        call    dword ptr [g_10049178]
        mov     dword ptr [g_10075714], eax
        mov     dword ptr [g_100756f8], eax
        ret
    }
}
