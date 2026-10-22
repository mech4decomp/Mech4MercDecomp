/*
 * FUN_0047ab90 (34 B) — MLR PMesh base destructor (__thiscall).
 * Sets vtable, frees the 0x58 buffer if present, then calls FUN_0047fef0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0047fef0(void);

__declspec(naked) void FUN_0047ab90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x76f4fc
        mov     eax, dword ptr [esi+0x58]
        test    eax, eax
        jz      L_47aba9
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_47aba9:
        mov     ecx, esi
        call    FUN_0047fef0
        pop     esi
        ret
    }
}
