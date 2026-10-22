/*
 * FUN_00726DD0 (25 B) — __thiscall method: if [this+0x20] is non-zero,
 * calls FUN_006F4230 on it and clears [this+0x20].
 *
 * Match: target 100%
 */

extern void __cdecl FUN_006F4230(void *node);

__declspec(naked) void FUN_00726DD0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        jz      L_de7
        push    eax
        call    FUN_006F4230
        mov     dword ptr [esi + 0x20], 0
    L_de7:
        pop     esi
        ret
    }
}
