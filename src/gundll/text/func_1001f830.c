/*
 * FUN_1001f830 (30 B) — __fastcall, RET 0x4. Ctor/dtor pair.
 */

extern void __cdecl FUN_1001fa40(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __fastcall FUN_1001f830(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1001fa40
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
