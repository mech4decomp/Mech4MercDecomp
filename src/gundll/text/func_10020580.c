/*
 * FUN_10020580 (30 B) — __thiscall, RET 0x4. Ctor/dtor pair.
 */

extern void __cdecl FUN_100206b0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_10020580(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100206b0
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
