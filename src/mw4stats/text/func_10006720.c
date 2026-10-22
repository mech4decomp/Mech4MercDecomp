/*
 * FUN_10006720 (30 B) - __thiscall (ECX = this, param_1 at [esp+8]).
 * Calls FUN_100067d0(this), then operator_delete(this) if param_1&1.
 * Returns this in EAX. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100067d0(void);
extern void __cdecl FUN_1001ee22(void); /* operator delete */

__declspec(naked) void * __cdecl FUN_10006720(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_100067d0
        test    byte ptr [esp + 8], 1
        jz      L_38
        push    esi
        call    FUN_1001ee22
        add     esp, 0x4
    L_38:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
