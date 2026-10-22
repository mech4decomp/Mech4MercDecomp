/*
 * FUN_005fcd20 (49 B) — __thiscall. If bit 0x13 of the dword at +0x10 is
 * set, toggles the flag at +0x158 (0 then 1) around two calls to
 * FUN_004db210 (this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004db210(void);

__declspec(naked) void FUN_005fcd20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x10]
        shr     eax, 0x13
        test    al, 0x1
        jz      L1
        mov     dword ptr [esi+0x158], 0x0
        call    FUN_004db210
        mov     ecx, esi
        mov     dword ptr [esi+0x158], 0x1
        call    FUN_004db210
L1:
        pop     esi
        ret     0x4
    }
}
