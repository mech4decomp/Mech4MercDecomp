/*
 * FUN_100148a0 (30 B) — __thiscall, RET 0x4.
 * Object destructor: calls base dtor FUN_100149e0(this); if param_1 & 1,
 * calls operator delete FUN_10001d60(this). Returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100149e0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_100148a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100149e0
        test    byte ptr [esp + 0x8], 1
        jz      done
        push    esi
        call    FUN_10001d60
        add     esp, 4
    done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
