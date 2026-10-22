/*
 * FUN_00686730 (83 B) — __fastcall. Reverses a range of 12-byte records
 * between this[0x44] and this[0x48] by swapping pairs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00686730(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x48]
        mov     ecx, dword ptr [ecx + 0x44]
        sub     esp, 0xc
        cmp     ecx, eax
        jnc     L_77f
        push    ebx
        push    ebp
        push    esi
        push    edi
    L_741:
        mov     edi, ecx
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [edi + 0x4]
        mov     edi, dword ptr [edi + 0x8]
        mov     dword ptr [esp + 0x18], edi
        sub     eax, 0xc
        mov     edi, eax
        mov     ebp, dword ptr [edi]
        mov     ebx, ecx
        mov     dword ptr [ebx], ebp
        mov     ebp, dword ptr [edi + 0x4]
        mov     edi, dword ptr [edi + 0x8]
        mov     dword ptr [ebx + 0x4], ebp
        mov     dword ptr [ebx + 0x8], edi
        mov     edi, eax
        mov     dword ptr [edi], edx
        mov     edx, dword ptr [esp + 0x18]
        add     ecx, 0xc
        cmp     ecx, eax
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0x8], edx
        jc      L_741
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
    L_77f:
        add     esp, 0xc
        ret
    }
}
