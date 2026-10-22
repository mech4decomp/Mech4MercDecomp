/*
 * FUN_1001ab50 (30 B) - __thiscall (ECX = this, RET 0x4). Scalar-deleting
 * destructor: calls FUN_1001ab70 (dtor), then operator delete if the
 * flag bit is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001ab70(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void __cdecl FUN_1001ab50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_1001ab70
        test    byte ptr [esp + 8], 1
        jz      L_done
        push    esi
        call    FUN_1001ee22
        add     esp, 4
L_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
