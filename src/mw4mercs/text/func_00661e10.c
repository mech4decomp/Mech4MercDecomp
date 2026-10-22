/*
 * FUN_00661e10 (30 B) — __thiscall dtor (RET 0x4). Calls base dtor
 * FUN_00661e50, then if the flag arg (bit 0) is set, frees this via
 * FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00661e50(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00661e10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00661e50
        test    byte ptr [esp + 0x8], 0x1
        jz      L_661e28
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_661e28:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
