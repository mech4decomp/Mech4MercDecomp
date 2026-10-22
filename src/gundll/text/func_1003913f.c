/*
 * FUN_1003913f (435 B) __cdecl.
 * C++ SEH exception filter/handler for MSVC exception code 0xe06d7363.
 * Walks a table of exception ranges and dispatches to handlers.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10039985(void);   /* rel32 call */
extern void __cdecl FUN_10038512(void);   /* rel32 call */
extern void __cdecl FUN_1003eabb(void);   /* rel32 call */
extern void __cdecl FUN_100377ae(void);   /* rel32 call */
extern void __cdecl FUN_1003939c(void);   /* rel32 call */
extern void __cdecl FUN_100394ad(void);   /* rel32 call */
extern void __cdecl FUN_10039831(void);   /* rel32 call */
extern void __cdecl FUN_100392f2(void);   /* rel32 call */
extern void __cdecl FUN_1003990c(void);   /* rel32 call */

__declspec(naked) void __cdecl FUN_1003913f(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        mov     eax, dword ptr [ebp + 0xc]
        and     byte ptr [ebp - 0x14], 0
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, -0x1
        mov     dword ptr [ebp - 0x10], eax
        jl      L_1003915f
        mov     ecx, dword ptr [ebp + 0x18]
        cmp     eax, dword ptr [ecx + 0x4]
        jl      L_10039164
    L_1003915f:
        call    FUN_10039985
    L_10039164:
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, 0xe06d7363
        push    edi
        mov     edi, 0x19930520
        cmp     dword ptr [esi], ebx
        jnz     L_100392c7
        cmp     dword ptr [esi + 0x10], 0x3
        jnz     L_100391e4
        cmp     dword ptr [esi + 0x14], edi
        jnz     L_100391e4
        cmp     dword ptr [esi + 0x1c], 0
        jnz     L_100391e4
        call    FUN_10038512
        cmp     dword ptr [eax + 0x6c], 0
        jz      L_100392c2
        call    FUN_10038512
        mov     esi, dword ptr [eax + 0x6c]
        call    FUN_10038512
        mov     eax, dword ptr [eax + 0x70]
        push    0x1
        push    esi
        mov     dword ptr [ebp + 0x10], eax
        mov     byte ptr [ebp - 0x14], 0x1
        call    FUN_1003eabb
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_100391c6
        call    FUN_10039985
    L_100391c6:
        cmp     dword ptr [esi], ebx
        jnz     L_100392c7
        cmp     dword ptr [esi + 0x10], 0x3
        jnz     L_100391e4
        cmp     dword ptr [esi + 0x14], edi
        jnz     L_100391e4
        cmp     dword ptr [esi + 0x1c], 0
        jnz     L_100391e4
        call    FUN_10039985
    L_100391e4:
        cmp     dword ptr [esi], ebx
        jnz     L_100392c7
        cmp     dword ptr [esi + 0x10], 0x3
        jnz     L_100392c7
        cmp     dword ptr [esi + 0x14], edi
        jnz     L_100392c7
        mov     edi, dword ptr [ebp - 0x10]
        lea     eax, [ebp - 0x18]
        push    eax
        lea     eax, [ebp - 0x4]
        push    eax
        push    edi
        push    dword ptr [ebp + 0x20]
        push    dword ptr [ebp + 0x18]
        call    FUN_100377ae
        add     esp, 0x14
        mov     ebx, eax
    L_1003921b:
        mov     eax, dword ptr [ebp - 0x4]
        cmp     eax, dword ptr [ebp - 0x18]
        jnc     L_100392b2
    L_10039227:
        cmp     dword ptr [ebx], edi
        jg      L_100392a7
        cmp     edi, dword ptr [ebx + 0x4]
        jg      L_100392a7
        mov     eax, dword ptr [ebx + 0x10]
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        mov     dword ptr [ebp - 0xc], eax
        jle     L_100392a4
    L_10039240:
        mov     eax, dword ptr [esi + 0x1c]
        mov     eax, dword ptr [eax + 0xc]
        lea     edi, [eax + 0x4]
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     dword ptr [ebp - 0x8], eax
        jle     L_10039271
    L_10039252:
        push    dword ptr [esi + 0x1c]
        push    dword ptr [edi]
        push    dword ptr [ebp + 0x8]
        call    FUN_1003939c
        add     esp, 0xc
        test    eax, eax
        jnz     L_10039280
        dec     dword ptr [ebp - 0x8]
        add     edi, 0x4
        cmp     dword ptr [ebp - 0x8], eax
        jg      L_10039252
    L_10039271:
        dec     dword ptr [ebp - 0xc]
        add     dword ptr [ebp + 0x8], 0x10
        cmp     dword ptr [ebp - 0xc], 0
        jg      L_10039240
        jmp     L_100392a4
    L_10039280:
        push    dword ptr [ebp - 0x14]
        push    dword ptr [ebp + 0x24]
        push    dword ptr [ebp + 0x20]
        push    ebx
        push    dword ptr [edi]
        push    dword ptr [ebp + 0x8]
        push    dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    esi
        call    FUN_100394ad
        add     esp, 0x2c
    L_100392a4:
        mov     edi, dword ptr [ebp - 0x10]
    L_100392a7:
        inc     dword ptr [ebp - 0x4]
        add     ebx, 0x14
        jmp     L_1003921b
    L_100392b2:
        cmp     byte ptr [ebp + 0x1c], 0
        jz      L_100392c2
        push    0x1
        push    esi
        call    FUN_10039831
        pop     ecx
        pop     ecx
    L_100392c2:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L_100392c7:
        cmp     byte ptr [ebp + 0x1c], 0
        jnz     L_100392ed
        push    dword ptr [ebp + 0x24]
        push    dword ptr [ebp + 0x20]
        push    dword ptr [ebp - 0x10]
        push    dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    esi
        call    FUN_100392f2
        add     esp, 0x20
        jmp     L_100392c2
    L_100392ed:
        jmp     FUN_1003990c
    }
}
