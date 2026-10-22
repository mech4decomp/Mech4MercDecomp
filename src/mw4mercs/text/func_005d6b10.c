/*
 * FUN_005d6b10 (63 B) — Free three heap buffers owned by this.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005d6b10(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x2c]
        test    eax, eax
        jz      L6B24
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6B24:
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      L6B38
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L6B38:
        mov     esi, dword ptr [esi + 0x14]
        test    esi, esi
        mov     dword ptr [esp + 0x4], esi
        jz      L6B4C
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L6B4C:
        pop     esi
        pop     ecx
        ret
    }
}
