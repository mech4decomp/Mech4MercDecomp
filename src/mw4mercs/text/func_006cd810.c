/*
 * FUN_006cd810 (458 B) — __thiscall (ECX = this), RET 4.
 *
 * Adds a path entry to a global include-list. Scans for the trailing
 * backslash, checks for recursive #include via FUN_006bfa50, allocates
 * two buffers with FUN_006f3c80, copies path fragments with rep movsd/
 * movsb, and links the new node into the DAT_0082ee84 list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_0082ee84;
extern int  DAT_0082f330;
extern int  DAT_0082f32c;
extern int  DAT_0082f334;
extern int  DAT_0082f324;
extern int  DAT_0082e21c;
extern int  DAT_0082f338;
extern int  DAT_0082e228;

extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall func_006cd810(int thisptr, void *param)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [DAT_0082ee84]
        test    edx, edx
        jz      L_83d
        mov     eax, dword ptr [DAT_0082f330]
        mov     ecx, dword ptr [DAT_0082f32c]
        mov     dword ptr [edx + 0x4], eax
        mov     eax, dword ptr [DAT_0082f334]
        mov     dword ptr [edx + 0x8], ecx
        mov     ecx, dword ptr [DAT_0082f324]
        mov     dword ptr [edx + 0x14], eax
        mov     dword ptr [edx + 0x18], ecx
L_83d:
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        mov     ebp, ecx
        add     ebp, ebx
        cmp     ebp, ebx
        jz      L_867
L_859:
        cmp     byte ptr [ebp], 0x5c
        jz      L_866
        dec     ebp
        cmp     ebp, ebx
        jnz     L_859
        jmp     L_867
L_866:
        inc     ebp
L_867:
        mov     edi, edx
        test    edi, edi
        jz      L_8b3
L_86d:
        mov     esi, dword ptr [edi + 0x4]
        mov     eax, ebp
L_872:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_896
        test    cl, cl
        jz      L_892
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_896
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_872
L_892:
        xor     eax, eax
        jmp     L_89b
L_896:
        sbb     eax, eax
        sbb     eax, -0x1
L_89b:
        test    eax, eax
        jnz     L_8ad
        push    ebp
        push    0x79e5a8
        call    FUN_006bfa50
        add     esp, 0x8
L_8ad:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L_86d
L_8b3:
        mov     eax, dword ptr [DAT_0082e21c]
        or      ecx, 0xffffffff
        push    eax
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        lea     eax, [edx + ecx + 0xe]
        push    eax
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     ebx, eax
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        lea     edx, [ebx + 0x8]
        mov     edi, edx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     esi, dword ptr [esp + 0x18]
        or      ecx, 0xffffffff
        mov     edi, esi
        repne   scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        inc     edx
        mov     edi, ebp
        repne   scasb
        not     ecx
        dec     ecx
        lea     edi, [ecx + ebx + 0xa]
        mov     ecx, edx
        mov     eax, ecx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        mov     eax, dword ptr [DAT_0082f338]
        mov     edx, dword ptr [eax + 0x10]
        not     ecx
        mov     dword ptr [eax + 0x10], ebx
        mov     eax, dword ptr [DAT_0082e21c]
        dec     ecx
        push    eax
        lea     ecx, [ecx + ebx + 0xa]
        push    0x1c
        mov     dword ptr [ebx + 0x4], ecx
        mov     dword ptr [ebx], edx
        call    FUN_006f3c80
        mov     esi, eax
        xor     eax, eax
        mov     ecx, 0x7
        mov     edi, esi
        rep     stosd
        mov     ecx, dword ptr [DAT_0082e228]
        push    ecx
        call    FUN_006f4950
        lea     edx, [esp + 0x10]
        lea     edi, [esi + 0xc]
        push    edx
        push    edi
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    FUN_006faca0
        call    FUN_006f49a0
        mov     edi, dword ptr [edi]
        mov     ecx, dword ptr [esp + 0x10]
        lea     edx, [edi + ecx]
        mov     ecx, dword ptr [DAT_0082ee84]
        lea     eax, [ebx + 0x8]
        mov     dword ptr [DAT_0082f330], eax
        mov     eax, dword ptr [ebx + 0x4]
        mov     dword ptr [DAT_0082f324], edi
        mov     dword ptr [esi], ecx
        mov     dword ptr [DAT_0082f32c], eax
        mov     ecx, 0x1800
        xor     eax, eax
        mov     edi, 0x832af0
        rep     stosd
        pop     edi
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [DAT_0082ee84], esi
        pop     esi
        pop     ebp
        mov     dword ptr [DAT_0082f334], 0x0
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
