/*
 * FUN_00603030 (99 B) — __cdecl, 5 params.
 *
 * Bitfield set/clear loop over param_4 bits, driven by param_5 flags.
 * If param_4 == 0, just copies param_2/param_3 into param_1[0..1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00603030(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jbe     L_081
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, eax
    L_049:
        mov     bl, byte ptr [esi]
        mov     eax, 0x1
        shl     eax, cl
        test    bl, bl
        jz      L_05c
        mov     ebx, dword ptr [edx]
        or      ebx, eax
        jmp     L_062
    L_05c:
        mov     ebx, dword ptr [edx]
        not     eax
        and     ebx, eax
    L_062:
        mov     eax, ecx
        inc     ecx
        cmp     eax, 0x1f
        mov     dword ptr [edx], ebx
        jnz     L_071
        xor     ecx, ecx
        add     edx, 0x4
    L_071:
        dec     edi
        jnz     L_049
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        mov     dword ptr [eax], edx
        pop     ebx
        mov     dword ptr [eax + 0x4], ecx
        ret
    L_081:
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        ret
    }
}
