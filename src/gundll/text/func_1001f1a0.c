/*
 * FUN_1001f1a0 (30 B) — __thiscall dtor.
 * Calls base dtor FUN_1001f240(this); if (param_1 & 1) frees this.
 */

extern void __cdecl FUN_1001f240(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void FUN_1001f1a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1001f240
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
