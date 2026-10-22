/*
 * FUN_0042C280 (56 B) — __thiscall (RET 0x4). Calls FUN_00435ED0(arg),
 * saves its bool result, and if [this+0x60] is nonzero frees [this+0x5c]
 * via FUN_004084E0 and zeroes both fields. Returns the saved bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00435ed0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0042C280(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00435ed0
        mov     bl, al
        mov     eax, dword ptr [esi + 0x60]
        test    eax, eax
        je      L_42c2b1
        mov     ecx, dword ptr [esi + 0x5c]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x5c], 0
        mov     dword ptr [esi + 0x60], 0
L_42c2b1:
        pop     esi
        mov     al, bl
        pop     ebx
        ret     4
    }
}
