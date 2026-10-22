/*
 * FUN_004E00F0 (34 B) — Destructor body (__thiscall, RET 0).
 *
 * Sets vtable to 0x7739E8, frees field_18 if non-null via FUN_004084E0,
 * then calls FUN_00415380 (base dtor).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_004e00f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, [esi + 0x18]
        test    eax, eax
        mov     dword ptr [esi], 0x7739e8
        jz      l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
