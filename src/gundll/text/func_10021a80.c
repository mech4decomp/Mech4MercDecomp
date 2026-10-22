/*
 * FUN_10021a80 (30 B) — __thiscall, RET 0x4. Dtor: calls FUN_10021b20,
 * then if flag param_1 & 1, frees this via FUN_10001d60.
 */

extern void __cdecl FUN_10021b20(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10021a80(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10021b20
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
    done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
