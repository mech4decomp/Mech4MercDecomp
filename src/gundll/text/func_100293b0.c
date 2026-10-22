/*
 * FUN_100293b0 (30 B) — __thiscall, RET 0x4. Dtor.
 * Calls FUN_10029450(this); if (param_1 & 1) FUN_10001d60(this).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10029450(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_100293b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10029450
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
