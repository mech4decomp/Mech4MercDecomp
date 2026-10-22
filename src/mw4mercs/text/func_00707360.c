/*
 * FUN_00707360 (282 B per CSV; real body 364 B) — Removes an entry from a
 * fixed-size array of 0x40-byte records (search key in [EBX+0x184c..]),
 * shifts the trailing records down, and optionally re-registers the removed
 * record with a global object (DAT_008aaae4) via virtual calls.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_008aaae4;                       /* global object pointer */
extern int __stdcall FUN_006f3c80(void *, int);
extern void __stdcall FUN_006f4230(void *);
extern void FUN_00706f20(void);

__declspec(naked) void FUN_00707360(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ebx + 0x1808]
        push    esi
        xor     edx, edx
        test    eax, eax
        push    edi
        jle     L_found
        mov     esi, dword ptr [esp + 0x14]
        lea     ecx, [ebx + 0x184c]
L_search:
        cmp     dword ptr [ecx], esi
        jz      L_found
        inc     edx
        add     ecx, 0x4
        cmp     edx, eax
        jl      L_search
L_found:
        cmp     edx, eax
        jge     L_skip
        dec     eax
        mov     dword ptr [ebx + 0x1808], eax
        shl     eax, 0x6
        lea     edi, [eax + ebx + 0xbc8]
        xor     eax, eax
        mov     ecx, edx
        shl     ecx, 0x6
        push    ebp
        lea     ebp, [ecx + ebx]
        or      ecx, 0xffffffff
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [ebp + 0xbc8]
        mov     dword ptr [esp + 0x14], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x14]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebx + 0x1808]
        shl     ecx, 0x6
        lea     edi, [ecx + ebx + 0x11c8]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     ebp, 0x11c8
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, ebp
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebx + 0x1808]
        mov     eax, dword ptr [ebx + ecx*4 + 0x184c]
        mov     dword ptr [ebx + edx*4 + 0x184c], eax
        mov     al, byte ptr [esp + 0x20]
        test    al, al
        pop     ebp
        jz      L_skip
        mov     eax, dword ptr [g_008aaae4]
        test    eax, eax
        jz      L_skip
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        push    edx
        push    0x0
        push    eax
        call    dword ptr [ecx + 0x58]
        mov     eax, dword ptr [esp + 0x1c]
        push    0x0
        push    eax
        call    FUN_006f3c80
        lea     edx, [esp + 0x1c]
        mov     esi, eax
        mov     eax, dword ptr [g_008aaae4]
        mov     ecx, dword ptr [eax]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x58]
        test    eax, eax
        jl      L_cleanup
        mov     ecx, dword ptr [esi + 0x44]
        mov     eax, ecx
        shr     eax, 0x8
        and     eax, 0xf
        jnz     L_else
        shr     ecx, 0xc
        and     ecx, 0xf
        dec     ecx
        jmp     L_merge
L_else:
        dec     eax
        mov     ecx, 0xf
L_merge:
        shl     eax, 0x8
        shl     ecx, 0xc
        and     eax, 0xf00
        and     ecx, 0xf000
        or      eax, ecx
        mov     ecx, dword ptr [esi + 0x44]
        and     ecx, 0xffff00ff
        or      eax, ecx
        mov     dword ptr [esi + 0x44], eax
        mov     eax, dword ptr [esi + 0x28]
        inc     eax
        push    0x0
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [g_008aaae4]
        mov     edx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [edx + 0x7c]
L_cleanup:
        push    esi
        call    FUN_006f4230
L_skip:
        mov     ecx, ebx
        call    FUN_00706f20
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret     0x10
    }
}
