/*
 * FUN_0070b670 (67 B) — __cdecl. gosScript init: calls FUN_00743af0,
 * creates a surface via FUN_00734e70, attaches it to the window via
 * FUN_00735280, caches it in DAT_0085a230, and sets a ready flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0085a22c;             /* DAT_0085a22c */
extern int  g_00858bf8;             /* DAT_00858bf8 (hwnd) */
extern int  g_0085a230;             /* DAT_0085a230 */
extern int  g_007b6fc0;             /* DAT_007b6fc0 */

extern void __cdecl FUN_00743af0(void);
extern void __cdecl FUN_00734e70(void);
extern void __cdecl FUN_00735280(void);

__declspec(naked) void FUN_0070b670(void)
{
    __asm {
        call    FUN_00743af0
        push    0x0
        push    0x7a2d10
        push    0x85a22c
        push    0x0
        call    FUN_00734e70
        mov     eax, dword ptr [g_00858bf8]
        mov     ecx, dword ptr [g_0085a22c]
        push    0x8
        push    eax
        push    ecx
        call    FUN_00735280
        mov     edx, dword ptr [g_0085a22c]
        mov     dword ptr [g_0085a230], edx
        mov     dword ptr [g_007b6fc0], 0x1
        ret
    }
}
