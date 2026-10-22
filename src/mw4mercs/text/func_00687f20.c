/*
 * FUN_00687f20 (88 B) — __cdecl. Copies (arg2-arg1)/0x18 elements of
 * 0x18 bytes each from arg1 to arg3. Returns arg3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00687f20(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        sub     edx, ecx
        mov     eax, 0x2AAAAAAB
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1F
        add     edx, eax
        test    edx, edx
        jle     L_73
        mov     eax, dword ptr [esp + 0xC]
        push    esi
        mov     esi, edx
L_46:
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xC]
        mov     dword ptr [eax + 0xC], edx
        mov     dl, byte ptr [ecx + 0x10]
        mov     byte ptr [eax + 0x10], dl
        mov     edx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x14], edx
        add     ecx, 0x18
        add     eax, 0x18
        dec     esi
        jnz     L_46
        pop     esi
        ret
L_73:
        mov     eax, dword ptr [esp + 0xC]
        ret
    }
}
