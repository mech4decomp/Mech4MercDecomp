/*
 * FUN_0064c500 (285 B) — __thiscall (ECX=this), RET 4. Copies a string
 * from [this+4] into param_1, then a second string from a table entry
 * (indexed by this->[0x20] * 0x28 into g_80d970) into param_1+0x80,
 * then calls FUN_0064c470 and does a min-scan over a table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_80d970;    /* 0x0080d970 */

extern void __cdecl FUN_0064c470(int a, void *b);

__declspec(naked) void FUN_0064c500(void)
{
    __asm {
        mov     edx, ecx
        or      ecx, 0xFFFFFFFF
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xC]
        push    esi
        push    edi
        xor     eax, eax
        lea     edi, [edx + 0x4]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     edx, dword ptr [edx + 0x20]
        mov     esi, edi
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        or      ecx, 0xFFFFFFFF
        lea     ebx, [edx + edx * 4]
        mov     edx, dword ptr [g_80d970]
        shl     ebx, 3
        mov     edi, dword ptr [ebx + edx]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [ebp + 0x80]
        mov     dword ptr [esp + 0x14], esi
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebx + edx + 0x4]
        mov     edx, dword ptr [ecx + 0x30]
        push    ebp
        xor     edi, edi
        push    edx
        mov     dword ptr [ebp + 0x190], edi
        call    FUN_0064c470
        mov     eax, dword ptr [ebp + 0x190]
        add     esp, 0x8
        cmp     eax, edi
        jle     L5A7
        lea     ecx, [ebp + 0x214]
L58E:
        mov     edx, dword ptr [ecx]
        mov     esi, dword ptr [ebp + 0x18C]
        add     esi, edx
        add     ecx, 0x84
        dec     eax
        mov     dword ptr [ebp + 0x18C], esi
        jnz     L58E
L5A7:
        mov     eax, dword ptr [g_80d970]
        mov     esi, dword ptr [ebx + eax + 0x18]
        mov     ecx, dword ptr [ebx + eax + 0x20]
        mov     ebx, dword ptr [ebx + eax + 0x1C]
        cmp     ebx, edi
        mov     dword ptr [ebp + 0x100], esi
        mov     dword ptr [ebp + 0x104], ecx
        jz      L609
        xor     eax, eax
        cmp     esi, edi
        mov     dword ptr [esp + 0x14], edi
        jle     L5EE
        xor     edx, edx
L5D4:
        lea     ecx, [eax * 4]
        mov     edi, dword ptr [ecx + ebx]
        cmp     edi, dword ptr [edx + ebx]
        jle     L5E9
        mov     dword ptr [esp + 0x14], eax
        mov     edx, ecx
L5E9:
        inc     eax
        cmp     eax, esi
        jl      L5D4
L5EE:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebx + edx * 4]
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x188], eax
        mov     byte ptr [ebp + 0x108], 0x0
        pop     ebp
        pop     ebx
        ret     4
L609:
        mov     dword ptr [ebp + 0x188], edi
        pop     edi
        pop     esi
        mov     byte ptr [ebp + 0x108], 0x0
        pop     ebp
        pop     ebx
        ret     4
    }
}
