/*
 * FUN_00742770 (138 B) — __stdcall, RET 0xc (three stack params).
 *
 * Allocates a node (malloc), copies a string into it, and appends the
 * node to a singly-linked list rooted at *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b294;        /* malloc IAT */

__declspec(naked) void __stdcall FUN_00742770(void *param1, void *param2, void *param3)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        add     ecx, 0x17
        push    ecx
        call    dword ptr [g_76b294]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x1c]
        or      ecx, 0xffffffff
        mov     dword ptr [edx + 0x4], eax
        mov     edi, esi
        add     esp, 0x4
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     ebp, [edx + 0x14]
        mov     dword ptr [edx + 0xc], 0x0
        mov     edi, ebp
        mov     dword ptr [edx + 0x10], 0x0
        mov     dword ptr [edx + 0x8], 0x0
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x10]
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        pop     edi
        pop     esi
        mov     dword ptr [edx], 0x0
        pop     ebp
        jz      L_f5
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_f0
L_e8:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jnz     L_e8
L_f0:
        mov     dword ptr [ecx], edx
        ret     0xc
L_f5:
        mov     dword ptr [eax], edx
        ret     0xc
    }
}
