/*
 * FUN_006f5460 (293 B) — __thiscall hash-table insert. Hashes the key via a
 * virtual call ([this+0x10]), walks the bucket chain, optionally invokes a
 * compare callback ([this+0xc]) and a free callback ([this+0x14]), allocates
 * a copy of the key string (malloc + strcpy), and links a new node into the
 * bucket list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b294;          /* IAT: malloc */

extern void __cdecl FUN_006f5380(void);
extern void __cdecl FUN_006f52e0(void);
extern void __cdecl FUN_006f7760(void);

__declspec(naked) void __fastcall FUN_006f5460(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     ebx, ecx
        push    ebp
        call    dword ptr [ebx + 0x10]
        mov     ecx, dword ptr [ebx + 8]
        mov     esi, eax
        xor     eax, eax
        mov     ax, word ptr [ebx + 6]
        and     esi, 0xffff
        and     esi, eax
        shl     esi, 4
        mov     edi, dword ptr [esi + ecx]
        add     esi, ecx
        cmp     edi, esi
        jz      L54ac
L548d:
        test    dword ptr [edi + 0xc], 0x80000000
        jnz     L54a6
        mov     eax, dword ptr [edi + 8]
        push    ebp
        push    eax
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [ebx + 0xc]
        test    al, al
        jnz     L54c5
L54a6:
        mov     edi, dword ptr [edi]
        cmp     edi, esi
        jnz     L548d
L54ac:
        push    0x10
        call    FUN_006f5380
        xor     ecx, ecx
        cmp     eax, ecx
        jz      L54e4
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [esp + 0x14], eax
        jmp     L54e8
L54c5:
        mov     eax, dword ptr [ebx + 0x14]
        test    eax, eax
        jz      L54d3
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    eax
L54d3:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L54ac
L54db:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     4
L54e4:
        mov     dword ptr [esp + 0x14], ecx
L54e8:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        push    ecx
        call    dword ptr [g_76b294]
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax], edx
        xor     eax, eax
        add     esp, 4
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x14]
        push    ebp
        mov     dword ptr [ecx + 0xc], 0
        call    dword ptr [ebx + 0x10]
        mov     ebp, dword ptr [ebx + 8]
        mov     esi, eax
        and     si, word ptr [ebx + 6]
        push    0x10
        and     esi, 0xffff
        mov     edi, esi
        shl     edi, 4
        add     edi, ebp
        call    FUN_006f52e0
        test    eax, eax
        jz      L54db
        mov     edx, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], esi
        mov     dword ptr [eax], edx
        mov     dword ptr [edi], eax
        mov     dword ptr [edx + 4], eax
        inc     dword ptr [ebx + 0x28]
        mov     ebx, dword ptr [ebx + 0x3c]
        test    ebx, ebx
        jz      L557c
        push    ecx
        mov     ecx, ebx
        call    FUN_006f7760
L557c:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        ret     4
    }
}
