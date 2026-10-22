/*
 * FUN_0041fcd0 (47 B) — __thiscall, RET 0x4 (1 param). Calls FUN_00416110 on
 * the global at 0x007b9458; if non-null, constructs a child via FUN_0041fc20
 * and stores it at +0x4, else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9458;                 /* 0x007b9458 */
extern void __cdecl FUN_00416110(void); /* thiscall on g_007b9458 */
extern void __cdecl FUN_0041fc20(void); /* thiscall, RET 0x8 */

__declspec(naked) void FUN_0041fcd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b9458]
        call    FUN_00416110
        test    eax, eax
        jz      LFCF6
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_0041fc20
        mov     dword ptr [esi + 0x4], eax
        pop     esi
        ret     0x4
LFCF6:
        xor     eax, eax
        mov     dword ptr [esi + 0x4], eax
        pop     esi
        ret     0x4
    }
}
