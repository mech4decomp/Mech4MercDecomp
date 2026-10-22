/*
 * FUN_006CC400 (163 B) — __stdcall, RET 4 (1 stack param).
 * Concatenates a string from the param object (+0x44) and a static string
 * (0x79e2e8) into a shared buffer at 0x83e2e0, following a linked chain via
 * [edx+0x30]. Returns the buffer address.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006CC400(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        or      ecx, 0xffffffff
        push    esi
        push    edi
        xor     eax, eax
        lea     edi, [edx + 0x44]
        repne scasb
        mov     edx, dword ptr [edx + 0x30]
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x83e2e0
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep movsb
        je      L_6cc499
        push    ebx
L_6cc431:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e2e8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x83e2e0
        repne scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 2
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        lea     edi, [edx + 0x44]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, dword ptr [edx + 0x30]
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x83e2e0
        repne scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        test    edx, edx
        rep movsb
        jne     L_6cc431
        pop     ebx
        pop     edi
        mov     eax, 0x83e2e0
        pop     esi
        ret     4
L_6cc499:
        pop     edi
        mov     eax, 0x83e2e0
        pop     esi
        ret     4
    }
}
