/*
 * FUN_0060ffe0 (40 B) — __thiscall (ECX=this). Animation-blend state
 * initializer: zeroes several dword fields, sets a flag byte, calls a
 * helper, then stores the FPU result into [this+0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0060ffe0(void)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x10], eax
        mov     dword ptr [esi+0x18], eax
        push    eax
        mov     byte ptr [esi+0x2c], 1
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x14], eax
        mov     dword ptr [esi+0x1c], eax
        call    FUN_00707e70
        __emit 0xDD /* __emit: fstp [mem] -> MSVC6 emits fst (D9) dropping pop; ref needs DD 1E */
        __emit 0x1E
        pop     esi
        ret
    }
}
