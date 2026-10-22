/*
 * FUN_00458590 (34 B) — Destructor.
 *
 * Sets vtable to 0x76EC24, frees field at +0x5C if non-null via
 * FUN_004084E0, then calls FUN_0047FEF0 (destructor body).
 *
 * __thiscall (no stack params, plain ret).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void FUN_0047FEF0(void);

__declspec(naked) void __fastcall FUN_00458590(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x0076EC24
        mov     eax, dword ptr [esi + 0x5C]
        test    eax, eax
        jz      l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     ecx, esi
        call    FUN_0047FEF0
        pop     esi
        ret
    }
}
