/*
 * FUN_006fe8f0 (412 B) — Player-list row writer. Under a critical section
 * (g_8aaa20) it iterates param_3 rows, formats each row id, looks it up in
 * the player list (FUN_006f5b80), and updates game-list entries via the
 * object vtable (FUN_006f5ae0 / dispatch at +4/+8).
 *
 * __cdecl, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8567b0;
extern int g_856834;

extern int *g_76b110;   /* IAT: EnterCriticalSection */
extern int *g_76b100;   /* IAT: LeaveCriticalSection */
extern int *g_76b420;   /* IAT: sprintf */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f5110(void);
extern void __cdecl FUN_0075dbbe(void);
extern void __cdecl FUN_00700300(void);
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f5ae0(void);
extern void __cdecl FUN_006f6410(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void __stdcall FUN_006fe8f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        mov     eax, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [eax + 0x1c]
        push    esi
        mov     esi, dword ptr [eax + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        add     ecx, edi
        test    esi, esi
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [ebp - 0x4], esi
        jz      L6FEA98
        push    0x8aaa20
        call    dword ptr [g_76b110]
        call    FUN_006f89f0
        test    eax, eax
        jnz     L6FE93B
        push    0x8aaa20
        call    dword ptr [g_76b100]
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x10
    L6FE93B:
        mov     cl, byte ptr [g_8567b0]
        mov     al, 0x1
        __emit 0x84   /* test al,cl: MSVC6 swaps operand order (84 C1 vs ref 84 C8) */
        __emit 0xC8
        jnz     L6FE968
        mov     dl, cl
        or      dl, al
        mov     ecx, 0x856770
        mov     byte ptr [g_8567b0], dl
        call    FUN_006f5110
        push    0x6feaa0
        call    FUN_0075dbbe
        add     esp, 0x4
    L6FE968:
        push    ebx
        xor     ebx, ebx
        test    edi, edi
        jbe     L6FEA8C_2
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x8], eax
        jmp     L6FE97E
    L6FE97B:
        mov     esi, dword ptr [ebp - 0x4]
    L6FE97E:
        mov     ecx, dword ptr [ebp + 0x14]
        lea     edx, [ebx + ecx]
        push    edx
        lea     eax, [ebp - 0x18]
        push    0x76b9a8
        push    eax
        call    dword ptr [g_76b420]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ecx]
        add     esp, 0xc
        push    edi
        push    esi
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x856770
        call    FUN_00700300
        push    0x79fb64
        lea     eax, [ebp - 0x18]
        push    eax
        mov     ecx, 0x856770
        call    FUN_006f5b80
        mov     esi, eax
        test    esi, esi
        jz      L6FEA76
        push    esi
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5ae0
        test    al, al
        jnz     L6FEA0A
        call    FUN_006f89f0
        mov     edx, dword ptr [eax]
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x4]
        test    al, al
        jz      L6FEA4F
        call    FUN_006f89f0
        mov     ecx, dword ptr [g_856834]
        mov     edx, dword ptr [eax]
        add     ecx, 0x14
        push    ecx
        push    0x79fab8
        lea     ecx, [ebp - 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x8]
    L6FEA0A:
        push    esi
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f6410
        mov     edx, dword ptr [ebp - 0x4]
        push    edi
        push    edx
        lea     ecx, [ebp - 0x18]
        push    ecx
        push    eax
        call    FUN_00700300
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x10]
        inc     ebx
        add     ecx, 0x4
        cmp     ebx, eax
        mov     dword ptr [ebp + 0x8], ecx
        jc      L6FE97B
        push    0x8aaa20
        call    dword ptr [g_76b100]
        pop     ebx
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x10
    L6FEA4F:
        push    esi
        push    0x7a0d38
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L6FEA8C_2
        int     3
    L6FEA8C_1:
        push    0x8aaa20
        call    dword ptr [g_76b100]
        pop     ebx
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x10
    L6FEA76:
        lea     edx, [ebp - 0x18]
        push    edx
        push    0x7a0d00
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L6FEA8C_2
        int     3
    L6FEA8C_2:
        push    0x8aaa20
        call    dword ptr [g_76b100]
        pop     ebx
    L6FEA98:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
