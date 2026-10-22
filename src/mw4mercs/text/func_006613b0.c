/*
 * FUN_006613b0 (30 B) — __thiscall deleting destructor: calls
 * FUN_006a22e0(), and if the flag arg (bit 0) is set, calls
 * FUN_004084e0(this) to free; returns this. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22e0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_006613b0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22e0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
