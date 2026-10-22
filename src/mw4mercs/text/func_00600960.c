/*
 * FUN_00600960 (452 B) — no args, RET 0.
 *
 * Iterates a switch (jump table at 0x600b24) over 18 categories, building
 * prefixed names and registering them via a set of helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_7dab44;
extern int  g_7dab40;
extern int  g_76b320;
extern int *g_76b420;
extern int *g_76b29c;
extern int *g_80da24;
extern int *g_80d9bc;

extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_00650120(void);
extern void __cdecl FUN_0064fe70(void);

__declspec(naked) void __stdcall FUN_00600960(void)
{
    __asm {
        sub     esp, 0x110
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_7dab40]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_76b320]
        push    esi
        xor     ecx, edx
        push    edi
        mov     edi, dword ptr [ecx + 0x10]
        xor     edi, 0x85739531
        xor     esi, esi
        mov     dword ptr [esp + 0x1c], edi
        mov     byte ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x18], esi
L_loop:
        cmp     esi, 0x3
        jz      L_inc
        cmp     esi, 0xf
        ja      L_case11
        jmp     dword ptr [esi*4 + 0x600b24]
L_case0:
        push    0x4
        push    0x78b3c4
        lea     edx, [esp + 0x18]
        push    edx
        jmp     L_dispatch
L_case1:
        push    0x4
        push    0x78b3bc
        lea     eax, [esp + 0x18]
        push    eax
        jmp     L_dispatch
L_case2:
        push    0x4
        push    0x78b3b4
        jmp     L_a45
L_case3:
        push    0x4
        push    0x78b3ac
        lea     edx, [esp + 0x18]
        push    edx
        jmp     L_dispatch
L_case4:
        push    0x4
        push    0x78b3a4
        lea     eax, [esp + 0x18]
        push    eax
        jmp     L_dispatch
L_case5:
        push    0x4
        push    0x78b39c
        jmp     L_a45
L_case6:
        push    0x4
        push    0x78b394
        lea     edx, [esp + 0x18]
        push    edx
        jmp     L_dispatch
L_case7:
        push    0x4
        push    0x78b38c
        lea     eax, [esp + 0x18]
        push    eax
        jmp     L_dispatch
L_case8:
        push    0x4
        push    0x78b384
        jmp     L_a45
L_case9:
        push    0x4
        push    0x78b37c
        lea     edx, [esp + 0x18]
        push    edx
        jmp     L_dispatch
L_case10:
        push    0x4
        push    0x78b374
        lea     eax, [esp + 0x18]
        push    eax
        jmp     L_dispatch
L_case11:
        push    0x4
        push    0x78b36c
L_a45:
        lea     ecx, [esp + 0x18]
        push    ecx
L_dispatch:
        call    ebp
        mov     eax, dword ptr [edi + esi*8 + 0x14]
        add     esp, 0xc
        test    eax, eax
        jle     L_inc
        mov     edi, dword ptr [edi + esi*8 + 0x10]
        mov     ebx, eax
L_inner:
        mov     edx, dword ptr [edi + 0x10]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x28]
        push    0x78b364
        push    ecx
        call    dword ptr [g_76b420]
        mov     al, byte ptr [esp + 0x30]
        add     esp, 0x10
        test    al, al
        lea     esi, [esp + 0x20]
        jz      L_after
L_tolower:
        movsx   edx, byte ptr [esi]
        push    edx
        call    dword ptr [g_76b29c]
        add     esp, 0x4
        cmp     al, 0x20
        mov     byte ptr [esi], al
        jnz     L_skip
        mov     byte ptr [esi], 0x5f
L_skip:
        mov     al, byte ptr [esi + 0x1]
        inc     esi
        test    al, al
        jnz     L_tolower
L_after:
        mov     eax, dword ptr [g_80da24]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        call    FUN_0064ff50
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jnz     L_have
        lea     edx, [esp + 0x20]
        push    0x80da24
        push    edx
        call    FUN_00650120
        add     esp, 0x8
        mov     esi, eax
L_have:
        mov     eax, dword ptr [g_80d9bc]
        push    eax
        mov     dword ptr [esi + 0x18], 0x1
        mov     dword ptr [esi + 0x40], 0x0
        call    FUN_0064fe70
        mov     ecx, dword ptr [edi + 0x18]
        add     esp, 0x4
        add     edi, 0x1c
        dec     ebx
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x1c], ecx
        jnz     L_inner
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x1c]
L_inc:
        inc     esi
        cmp     esi, 0x12
        mov     dword ptr [esp + 0x18], esi
        jl      L_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x110
        ret
    }
}
