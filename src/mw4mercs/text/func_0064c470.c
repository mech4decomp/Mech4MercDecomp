/*
 * FUN_0064c470 (137 B) — __cdecl (2 stack params), RET.
 * Recursively walks a tree (param_1). For each node with type 8 and room
 * in param_2's table (<0x400 entries), copies the node's string at +0x10
 * into param_2+0x194 + idx*0x84, records +0x38, and increments the count
 * at param_2+0x190.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064c470(void);

__declspec(naked) void __cdecl FUN_0064c470(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x8]
        test    ebp, ebp
        jz      l_c4f7
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    esi
        push    edi
l_c480:
        mov     eax, dword ptr [ebp]
        push    ebx
        push    eax
        call    FUN_0064c470
        mov     eax, dword ptr [ebp + 0x18]
        add     esp, 0x8
        cmp     eax, 0x8
        jnz     l_c4ed
        mov     eax, dword ptr [ebx + 0x190]
        cmp     eax, 0x400
        jge     l_c4ed
        mov     edi, dword ptr [ebp + 0x10]
        mov     ecx, eax
        shl     ecx, 0x5
        add     ecx, eax
        lea     edx, [ebx + ecx*0x4 + 0x194]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        mov     edx, dword ptr [ebp + 0x38]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     eax, dword ptr [ebx + 0x190]
        mov     ecx, eax
        shl     ecx, 0x5
        add     ecx, eax
        mov     dword ptr [ebx + ecx*0x4 + 0x214], edx
        inc     dword ptr [ebx + 0x190]
l_c4ed:
        mov     ebp, dword ptr [ebp + 0x8]
        test    ebp, ebp
        jnz     l_c480
        pop     edi
        pop     esi
        pop     ebx
l_c4f7:
        pop     ebp
        ret
    }
}
