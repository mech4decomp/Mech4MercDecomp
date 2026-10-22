/*
 * FUN_0042ab60 (30 B) — __thiscall MLR object destructor wrapper:
 * calls FUN_0042adf0 (base dtor), and if the flag arg bit 0 is set,
 * frees the object via FUN_004084e0. Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0042adf0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_0042ab60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0042adf0
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
