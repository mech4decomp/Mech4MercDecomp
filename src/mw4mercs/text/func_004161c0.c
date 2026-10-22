/*
 * FUN_004161c0 (34 B) — database list-callee helper. __fastcall (this in ECX).
 * Saves [this+0x14], stores [this+0x18] into [this+0x2c], calls FUN_00415e80,
 * and if [this+0x14] changed, updates [this+0x2c]; returns [this+0x2c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415e80(void);

__declspec(naked) void FUN_004161c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x18]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        mov     dword ptr [esi + 0x2c], eax
        call    FUN_00415e80
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, edi
        jz      L161DC
        mov     dword ptr [esi + 0x2c], eax
L161DC:
        mov     eax, dword ptr [esi + 0x2c]
        pop     edi
        pop     esi
        ret
    }
}
