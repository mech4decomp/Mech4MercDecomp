/*
 * FUN_004166d0 (23 B) — DB item helper. Calls virtual method [vtbl+0x18]
 * on this, then FUN_00416650 (the "Not implemented" guard), returning
 * the virtual call's result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416650(void);

__declspec(naked) void FUN_004166d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x18]
        mov     ecx, esi
        mov     edi, eax
        call    FUN_00416650
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
