/*
 * Vtable 0x77260C slot 2 — FUN_004D3110 (30 B).
 *
 * Destructor wrapper: calls FUN_00416E50(), then conditionally frees
 * this via FUN_004084E0 if (param & 1) != 0. Returns this.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: flags byte).
 * CFLAGS: /O1
 */

extern void __stdcall FUN_00416e50(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall vtable_dtor_2(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416e50
        test    byte ptr [esp + 0x8], 1
        jz      l_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
