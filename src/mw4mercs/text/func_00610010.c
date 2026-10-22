/*
 * FUN_00610010 (26 B) — __thiscall (ECX=this). Animation-blend update:
 * if the flag byte at [this+0x2c] is set, call a helper, store the FPU
 * result into [this+0x20], and clear the flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00610010(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x2c]
        test    al, al
        jz      done
        push    0
        call    FUN_00707e70
        __emit 0xDD /* __emit: fstp [mem] -> MSVC6 emits fst (D9) dropping pop; ref needs DD 5E 20 */
        __emit 0x5E
        __emit 0x20
        mov     byte ptr [esi+0x2c], 0
    done:
        pop     esi
        ret
    }
}
