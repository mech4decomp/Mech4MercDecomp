/*
 * FUN_10016ea0 (30 B) - __thiscall scalar-deleting destructor wrapper.
 * Calls sub-destructor FUN_10016ec0 on this (ECX), then if the flag
 * param (bit 0) is set, operator_delete(this).
 *
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10016ec0(void);
extern void __cdecl FUN_1001ee22(void *p);

__declspec(naked) void __cdecl FUN_10016ea0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10016ec0
        test    byte ptr [esp + 8], 1
        jz      done
        push    esi
        call    FUN_1001ee22
        add     esp, 4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
