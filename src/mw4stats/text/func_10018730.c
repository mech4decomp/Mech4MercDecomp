/*
 * FUN_10018730 (30 B) - __thiscall destructor. Calls FUN_10018750, then
 * operator delete if flag bit 0 set.
 *
 * __thiscall (ECX = this, 1 arg, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10018750(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void __cdecl FUN_10018730(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10018750
        test    byte ptr [esp + 8], 1
        jz      L1
        push    esi
        call    FUN_1001ee22
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
