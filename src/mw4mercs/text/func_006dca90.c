/*
 * FUN_006dca90 (253 B) — Color-blend / palette interpolation loop
 * (reverse iteration variant). Byte-identical structure to
 * FUN_006dc990. __cdecl, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006dca90(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [eax + 4]
        mov     ecx, dword ptr [ecx + 0x24]
        mov     edx, dword ptr [eax + 0x24]
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x20]
        sar     esi, cl
        mov     ecx, dword ptr [eax + 0x20]
        push    edi
        mov     edi, dword ptr [eax + 0x1C]
        mov     eax, dword ptr [esp + 0x20]
        sub     eax, ebx
        test    eax, eax
        mov     dword ptr [esp + 0xC], esi
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x24], edi
        jle     L_dcb88
        mov     dword ptr [esp + 0x1C], eax
        mov     eax, dword ptr [esp + 0x18]
        push    ebp
        xor     ecx, ecx
        mov     dword ptr [esp + 0x24], edx
L_dcadd:
        xor     ebx, ebx
        mov     bl, byte ptr [edx]
        mov     ebp, ebx
        test    ebp, ebp
        jle     L_dcb51
        xor     esi, esi
        mov     si, word ptr [ecx + edi*1]
        xor     ebx, ebx
        mov     bl, byte ptr [eax]
        mov     edi, 0xFF
        sub     edi, ebp
        mov     edx, esi
        and     edx, 0x1F
        shl     edx, 3
        imul    ebx, edi
        imul    edx, ebp
        add     edx, ebx
        sar     edx, 8
        mov     byte ptr [eax], dl
        xor     ebx, ebx
        mov     bl, byte ptr [eax + 1]
        mov     edx, esi
        shr     edx, 2
        and     edx, 0xF8
        imul    edx, ebp
        imul    ebx, edi
        add     edx, ebx
        sar     edx, 8
        mov     byte ptr [eax + 1], dl
        xor     ebx, ebx
        mov     bl, byte ptr [eax + 2]
        mov     edx, esi
        mov     esi, dword ptr [esp + 0x10]
        shr     edx, 7
        and     edx, 0xF8
        imul    edx, ebp
        imul    ebx, edi
        mov     edi, dword ptr [esp + 0x28]
        add     edx, ebx
        sar     edx, 8
        mov     byte ptr [eax + 2], dl
L_dcb51:
        mov     edx, dword ptr [esp + 0x18]
        dec     edx
        test    edx, edx
        mov     dword ptr [esp + 0x18], edx
        jg      L_dcb69
        lea     edi, [edi + esi*2]
        mov     dword ptr [esp + 0x28], edi
        mov     dword ptr [esp + 0x18], esi
L_dcb69:
        mov     edx, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0x20]
        add     eax, 4
        dec     edx
        sub     ecx, 2
        dec     ebx
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x20], ebx
        jnz     L_dcadd
        pop     ebp
L_dcb88:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
