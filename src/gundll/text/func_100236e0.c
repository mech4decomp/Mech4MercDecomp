/*
 * FUN_100236e0 (30 B) -- __thiscall, RET 0x4. Ctor/dtor pair.
 * Calls base ctor FUN_100237d0, then if flag bit 0 set, frees this via FUN_10001d60.
 */

extern void __cdecl FUN_100237d0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_100236e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100237d0
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
