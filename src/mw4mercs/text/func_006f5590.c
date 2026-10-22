/*
 * FUN_006f5590 (477 B) — __thiscall (ECX = this), RET 0xc (3 params).
 *
 * Hash-table / string-list insertion. Hashes param_1 via a virtual
 * (this+0x10), walks a bucket chain, and on match calls a virtual
 * (this+0xc) and optional callback (this+0x14). Allocates/links a new
 * node, copying param_1/param_3 strings with rep movsd/movsb, and
 * stores an atoi() of the value via DAT_0076b318.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *DAT_0076b2d0;
extern void *DAT_0076b294;
extern void *DAT_0076b318;

extern void __cdecl FUN_006f5d90(void);
extern void __cdecl FUN_006f53c0(void);
extern void __cdecl FUN_006f7790(void);

__declspec(naked) int __fastcall func_006f5590(int thisptr, void *p1, void *p2)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    eax
        mov     dword ptr [esp + 0x18], ebp
        call    dword ptr [ebp + 0x10]
        xor     ecx, ecx
        mov     cx, word ptr [ebp + 0x6]
        mov     edi, eax
        and     edi, 0xffff
        and     edi, ecx
        mov     ecx, dword ptr [ebp + 0x8]
        shl     edi, 0x4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      L_601
L_5c4:
        test    dword ptr [esi + 0xc], 0x80000000
        jnz     L_5e1
        mov     edx, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esi + 0x8]
        push    edx
        push    ebx
        mov     dword ptr [esp + 0x18], ebx
        call    dword ptr [ebp + 0xc]
        test    al, al
        jnz     L_5f3
L_5e1:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     L_5c4
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x8
        ret     0xc
L_5f3:
        mov     ebp, dword ptr [ebp + 0x14]
        test    ebp, ebp
        jz      L_5fd
        push    ebx
        call    ebp
L_5fd:
        test    ebx, ebx
        jnz     L_60d
L_601:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x8
        ret     0xc
L_60d:
        mov     esi, dword ptr [esp + 0x20]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        mov     edi, dword ptr [esp + 0x24]
        not     ecx
        dec     ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        dec     ecx
        lea     eax, [ebx + 0x4]
        push    esi
        mov     edi, ecx
        push    eax
        mov     dword ptr [esp + 0x24], edi
        call    FUN_006f5d90
        mov     ebx, eax
        test    ebx, ebx
        jz      L_6a3
        mov     edx, dword ptr [ebx + 0x4]
        test    edx, edx
        jz      L_65a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     edi, dword ptr [esp + 0x1c]
        not     ecx
        dec     ecx
        jmp     L_65c
L_65a:
        xor     ecx, ecx
L_65c:
        cmp     ecx, edi
        jg      L_67c
        test    edx, edx
        jz      L_66e
        push    edx
        call    dword ptr [DAT_0076b2d0]
        add     esp, 0x4
L_66e:
        inc     edi
        push    edi
        call    dword ptr [DAT_0076b294]
        add     esp, 0x4
        mov     dword ptr [ebx + 0x4], eax
L_67c:
        mov     edi, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx + 0x4]
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        jmp     L_73b
L_6a3:
        push    0xc
        call    FUN_006f53c0
        inc     ebp
        push    ebp
        mov     ebp, dword ptr [DAT_0076b294]
        mov     ebx, eax
        call    ebp
        inc     edi
        push    edi
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [ebx], eax
        call    ebp
        or      ecx, 0xffffffff
        mov     dword ptr [ebx + 0x4], eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x24]
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [esp + 0x2c]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [ebx + 0x4]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        push    0xc
        rep     movsb
        call    ebp
        xor     esi, esi
        add     esp, 0xc
        cmp     eax, esi
        jz      L_719
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], esi
        jmp     L_71b
L_719:
        xor     eax, eax
L_71b:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [ecx + 0x4]
        mov     edx, dword ptr [ecx + 0x8]
        add     ecx, 0x4
        cmp     edi, esi
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x8], edx
        jnz     L_735
        mov     dword ptr [ecx], eax
        jmp     L_738
L_735:
        mov     dword ptr [edx + 0x4], eax
L_738:
        mov     dword ptr [ecx + 0x4], eax
L_73b:
        mov     edx, dword ptr [ebx + 0x4]
        push    edx
        call    dword ptr [DAT_0076b318]
        mov     dword ptr [ebx + 0x8], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x3c]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_761
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    edx
        call    FUN_006f7790
L_761:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
