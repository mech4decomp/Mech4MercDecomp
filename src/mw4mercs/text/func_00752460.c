/*
 * FUN_00752460 (128 B) — __stdcall RET 0x4 (1 param). Copies one of two
 * literal strings (0x7ad5b8 / 0x7ad5b0) into buffer 0x8b92d0 depending
 * on the arg (bit 0 / zero), using repne scasb + rep movsd/movsb.
 * Returns the buffer pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_008b92d0;

__declspec(naked) void FUN_00752460(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    dl, 1
        push    esi
        push    edi
        mov     byte ptr [g_008b92d0], 0
        je      L7524a1
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad5b8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        push    ebx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     edi, 0x8b92d0
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
        pop     ebx
    L7524a1:
        test    edx, edx
        jne     L7524d2
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad5b0
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b92d0
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
    L7524d2:
        pop     edi
        mov     eax, 0x8b92d0
        pop     esi
        ret     4
        nop
        nop
        nop
        nop
    }
}
