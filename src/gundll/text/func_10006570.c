/*
 * FUN_10006570 (379 B) - __stdcall, RET 0xc.
 * SEH-guarded list operation: allocates a node (FUN_10001d50), walks a
 * doubly-linked list via vtable methods on param_3, frees/relinks nodes
 * (FUN_1000c4c0), and inserts a fresh node (FUN_1000c410).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int  g_10055050;                       /* DAT_10055050 */
extern void __cdecl FUN_10001d50(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_1001b160(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_1000c4c0(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_100066f0(void);       /* rel32 call, 4 args */
extern void __cdecl FUN_10001d60(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_1000c410(void);       /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_10006570(void)
{
    __asm {
        push    -0x1
        push    0x100470ab
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x8
        push    0x184
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x4], eax
        xor     ecx, ecx
        cmp     eax, ecx
        mov     dword ptr [esp + 0x10], ecx
        jz      L_65b5
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_1001b160
        /* __emit: MOV [ESP],EAX; MSVC6 collapses zero-disp [esp] to 89 04 24 */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jmp     L_65b9
    L_65b5:
        /* __emit: MOV [ESP],ECX; MSVC6 collapses zero-disp [esp] to 89 0C 24 */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
    L_65b9:
        mov     edx, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x30]
        push    edx
        mov     dword ptr [esp + 0x24], 0xffffffff
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 0x2]
        mov     ecx, dword ptr [edi + 0x4]
        xor     ebp, ebp
        mov     bp, ax
        shl     ebp, 0x4
        mov     esi, dword ptr [ebp + ecx]
        add     ebp, ecx
        cmp     esi, ebp
        mov     dword ptr [esp + 0x30], ebp
        jz      L_668f
    L_65f2:
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     ebx, dword ptr [esi]
        jns     L_6622
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [eax], ebx
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [ebx + 0x4], ecx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     edx, dword ptr [g_10055050]
        push    esi
        push    edx
        call    FUN_1000c4c0
        jmp     L_663a
    L_6622:
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esi + 0x8]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x1c], eax
        call    dword ptr [edi + 0x8]
        test    al, al
        jnz     L_6642
        mov     ebp, dword ptr [esp + 0x30]
    L_663a:
        cmp     ebx, ebp
        mov     esi, ebx
        jnz     L_65f2
        jmp     L_668f
    L_6642:
        mov     eax, dword ptr [edi + 0x28]
        test    eax, eax
        jnz     L_6673
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [edx], ebx
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        dec     dword ptr [edi + 0x24]
        jmp     L_667e
    L_6673:
        push    0x0
        push    0x0
        push    esi
        push    edi
        call    FUN_100066f0
    L_667e:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_668f
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_668f:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    dword ptr [edi + 0xc]
        and     ax, word ptr [edi + 0x2]
        mov     ebp, dword ptr [edi + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        mov     eax, dword ptr [g_10055050]
        push    eax
        mov     esi, ebx
        shl     esi, 0x4
        add     esi, ebp
        call    FUN_1000c410
        test    eax, eax
        jz      L_66d4
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], esi
        mov     edx, dword ptr [esi]
        mov     dword ptr [eax], edx
        mov     dword ptr [esi], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x4], eax
        inc     dword ptr [edi + 0x24]
    L_66d4:
        mov     ecx, dword ptr [esp + 0x18]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     0xc
    }
}
