/*
 * FUN_0064F750 (529 B) — __cdecl. Bytecode interpreter continuation:
 * reads opcodes from DAT_00805918, dispatches via FUN_0064d3d0/0064db40,
 * and fills a range (ascending or descending) into DAT_0080592c.
 * Uses FUN_0064ea80/00563060.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805918;
extern int g_805908;
extern int g_80592c;
extern int g_80d9bc;
extern char g_80d969;
extern int g_7b5a28;
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064ea80(void);
extern void __cdecl FUN_00563060(void);

__declspec(naked) void __cdecl FUN_0064f750(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        push    ebx
        push    ebp
        push    esi
        inc     eax
        cmp     ecx, 0x49
        push    edi
        mov     dword ptr [esp + 0x1c], 0x0
        mov     ebp, 0x4
        jnz     L_f77e
        mov     ecx, dword ptr [eax]
        lea     edx, [ecx + eax*0x1 + -0x1]
        mov     dword ptr [esp + 0x1c], edx
        add     eax, ebp
L_f77e:
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     ecx, dword ptr [eax]
        add     eax, ebp
        push    0x1
        push    ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064d3d0
        mov     edi, eax
        mov     eax, dword ptr [g_80592c]
        mov     edx, dword ptr [eax]
        sub     eax, ebp
        mov     dword ptr [g_80592c], eax
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
        cmp     edi, dword ptr [g_80d9bc]
        jnz     L_f7df
        mov     edx, dword ptr [g_80592c]
        mov     ebx, dword ptr [edx]
        jmp     L_f7e8
L_f7df:
        mov     eax, dword ptr [g_80592c]
        xor     ebx, ebx
        mov     bl, byte ptr [eax]
L_f7e8:
        mov     esi, dword ptr [g_80592c]
        mov     edx, dword ptr [g_805908]
        mov     eax, dword ptr [g_805918]
        xor     ecx, ecx
        sub     esi, ebp
        cmp     edx, 0x36
        movsx   edx, byte ptr [eax]
        setnz   cl
        mov     dword ptr [g_80592c], esi
        mov     dword ptr [g_805908], edx
        dec     ecx
        and     ecx, 0x2
        dec     ecx
        inc     eax
        mov     esi, ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
        cmp     edi, dword ptr [g_80d9bc]
        jnz     L_f839
        mov     eax, dword ptr [g_80592c]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_f846
L_f839:
        mov     eax, dword ptr [g_80592c]
        xor     edx, edx
        mov     dl, byte ptr [eax]
        mov     dword ptr [esp + 0x10], edx
L_f846:
        mov     edx, dword ptr [g_80592c]
        mov     eax, dword ptr [g_805918]
        mov     ecx, dword ptr [esp + 0x10]
        sub     edx, ebp
        xor     ebp, ebp
        cmp     esi, 0x1
        mov     dword ptr [g_80592c], edx
        mov     edi, eax
        jnz     L_f8db
        cmp     ebx, ecx
        jg      L_f946
        mov     esi, 0x26
L_f873:
        mov     ecx, dword ptr [g_80d9bc]
        cmp     dword ptr [esp + 0x18], ecx
        jnz     L_f887
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edx], ebx
        jmp     L_f88d
L_f887:
        mov     ecx, dword ptr [esp + 0x14]
        mov     byte ptr [ecx], bl
L_f88d:
        movsx   ecx, byte ptr [eax]
        inc     eax
        cmp     ecx, esi
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        jz      L_f8ba
L_f8a0:
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jnz     L_f959
        cmp     dword ptr [g_805908], esi
        jnz     L_f8a0
L_f8ba:
        mov     eax, dword ptr [g_7b5a28]
        inc     ebp
        cmp     ebp, eax
        jnz     L_f8ce
        push    0x1
        call    FUN_00563060
        add     esp, 0x4
L_f8ce:
        mov     ecx, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, ecx
        mov     eax, edi
        jle     L_f873
        jmp     L_f946
L_f8db:
        cmp     ebx, ecx
        jl      L_f946
        mov     esi, 0x26
L_f8e4:
        mov     edx, dword ptr [g_80d9bc]
        cmp     dword ptr [esp + 0x18], edx
        jnz     L_f8f8
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ecx], ebx
        jmp     L_f8fe
L_f8f8:
        mov     edx, dword ptr [esp + 0x14]
        mov     byte ptr [edx], bl
L_f8fe:
        movsx   ecx, byte ptr [eax]
        inc     eax
        cmp     ecx, esi
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        jz      L_f927
L_f911:
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jnz     L_f959
        cmp     dword ptr [g_805908], esi
        jnz     L_f911
L_f927:
        mov     eax, dword ptr [g_7b5a28]
        inc     ebp
        cmp     ebp, eax
        jnz     L_f93b
        push    0x1
        call    FUN_00563060
        add     esp, 0x4
L_f93b:
        mov     ecx, dword ptr [esp + 0x10]
        dec     ebx
        cmp     ebx, ecx
        mov     eax, edi
        jge     L_f8e4
L_f946:
        mov     eax, dword ptr [esp + 0x1c]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
L_f959:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
