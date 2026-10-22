/*
 * FUN_004bcfd0 (113 B) — MLR object method (__thiscall). Iterates a small
 * array of sub-objects (indexed via [edi+0x144], count [edi+0x148]) and
 * calls a virtual method (vtable+0x1c) on up to three selected entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004bcfd0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebx, dword ptr [edi + 0x148]
        xor     eax, eax
        mov     ax, word ptr [edi + 0x150]
        mov     esi, eax
        and     esi, 0xffff
        cmp     esi, ebx
        jnc     L_bd004
        mov     eax, dword ptr [edi + 0x144]
        mov     ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        jz      L_bd03d
        call    dword ptr [ecx + 0x1c]
        pop     edi
        pop     esi
        pop     ebx
        ret
L_bd004:
        test    al, 0xf0
        jz      L_bd03d
        mov     eax, esi
        and     eax, 0xf
        cmp     eax, ebx
        jnc     L_bd023
        mov     ecx, dword ptr [edi + 0x144]
        mov     eax, dword ptr [ecx + eax*4]
        test    eax, eax
        jz      L_bd023
        mov     ecx, eax
        call    dword ptr [eax + 0x1c]
L_bd023:
        shr     esi, 4
        and     esi, 0xf
        cmp     esi, ebx
        jnc     L_bd03d
        mov     edx, dword ptr [edi + 0x144]
        mov     ecx, dword ptr [edx + esi*4]
        test    ecx, ecx
        jz      L_bd03d
        call    dword ptr [ecx + 0x1c]
L_bd03d:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
