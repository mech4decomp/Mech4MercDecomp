/*
 * FUN_0041f160 (161 B) — __thiscall bit-buffer flush/format helper.
 * Writes the buffered strings (name at +0x14, value at +0x18) to the
 * output object via vtable[0x24], separated by '=' and terminated by
 * "\r\n" (0x76d1b8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041f160(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi+0x14]
        test    edx, edx
        push    edi
        jz      L192
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        jz      L192
        mov     ebp, dword ptr [ebx]
        or      ecx, 0xffffffff
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        mov     ecx, ebx
        call    dword ptr [ebp+0x24]
L192:
        mov     esi, dword ptr [esi+0x18]
        test    esi, esi
        jz      L1cf
        mov     eax, dword ptr [ebx]
        push    0x1
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, ebx
        mov     byte ptr [esp+0x1c], 0x3d
        call    dword ptr [eax+0x24]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        jz      L1cf
        mov     ebp, dword ptr [edx]
        or      ecx, 0xffffffff
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        push    ecx
        push    esi
        mov     ecx, edx
        call    dword ptr [ebp+0x24]
L1cf:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76d1b8
        repne scasb
        not     ecx
        dec     ecx
        jz      L1fa
        mov     edx, dword ptr [ebx]
        or      ecx, 0xffffffff
        mov     edi, 0x76d1b8
        repne scasb
        not     ecx
        dec     ecx
        push    ecx
        push    0x76d1b8
        mov     ecx, ebx
        call    dword ptr [edx+0x24]
L1fa:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
