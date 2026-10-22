/*
 * FUN_00683c40 (74 B) — HUD 3D aim-check. Walks nested object pointers
 * (this->[0x198]->[0x40]->[0x150]->[0x28]) and returns whether the
 * element's type field (+0x3c) matches the requested mode (2 or 3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_00683c40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x198]
        test    eax, eax
        jz      L_683c87
        mov     eax, dword ptr [eax + 0x40]
        test    eax, eax
        jz      L_683c87
        mov     ecx, dword ptr [eax + 0x150]
        test    ecx, ecx
        jz      L_683c87
        mov     edx, dword ptr [ecx + 0x28]
        test    edx, edx
        jz      L_683c87
        mov     edx, ecx
        mov     cl, byte ptr [esp + 0x8]
        mov     eax, dword ptr [edx + 0x28]
        cmp     cl, 0x1
        mov     ecx, dword ptr [eax + 0x3c]
        jnz     L_683c7f
        cmp     ecx, 0x2
        jnz     L_683c87
        mov     al, 0x1
        ret
L_683c7f:
        cmp     ecx, 0x3
        jnz     L_683c87
        mov     al, 0x1
        ret
L_683c87:
        xor     al, al
        ret
    }
}
