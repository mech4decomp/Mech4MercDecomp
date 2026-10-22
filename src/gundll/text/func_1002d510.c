/*
 * FUN_1002d510 (601 B) — __stdcall, RET 0x8.
 * SEH-guarded registry/string-table cleanup: walks two hash lists
 * (0x10055050 free-list) and frees entries.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10055050;
extern void __stdcall FUN_1002ce10(void);   /* __stdcall name matches the def; naked body bytes unchanged */
extern void FUN_1002b670(void);
extern void FUN_10001d50(void);
extern void FUN_1001b7a0(void);
extern void FUN_10005d70(void);
extern void FUN_1000c4c0(void);
extern void FUN_10006480(void);
extern void FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002d510(void)
{
    __asm {
        push    -1
        push    0x1004885b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esi]
        push    edi
        push    eax
        lea     eax, [esp + 0x18]
        xor     ebp, ebp
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x20], ebp
        call    FUN_1002ce10
        cmp     eax, ebp
        mov     dword ptr [esp + 0x34], eax
        jl      L_d5eb
        mov     eax, dword ptr [esi + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_1002ce10
        cmp     eax, ebp
        mov     dword ptr [esp + 0x34], eax
        jl      L_d5e7
        mov     edi, dword ptr [esi + 0xc]
        mov     esi, dword ptr [esi + 8]
        push    edi
        push    esi
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_1002b670
        mov     esi, eax
        cmp     esi, ebp
        mov     dword ptr [esp + 0x34], esi
        jl      L_d5e7
        push    0x10
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x34], eax
        cmp     eax, ebp
        mov     dword ptr [esp + 0x28], ebp
        jz      L_d5ba
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        push    edi
        mov     ecx, eax
        call    FUN_1001b7a0
        jmp     L_d5c0
    L_d5ba:
        mov     edi, dword ptr [esp + 0x14]
        xor     eax, eax
    L_d5c0:
        cmp     eax, ebp
        mov     dword ptr [esp + 0x28], 0xffffffff
        jnz     L_d5da
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x34], 0x8007000e
        jmp     L_d5ef
    L_d5da:
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [ecx], eax
        mov     eax, esi
        jmp     L_d754
    L_d5e7:
        mov     ebx, dword ptr [esp + 0x10]
    L_d5eb:
        mov     edi, dword ptr [esp + 0x14]
    L_d5ef:
        cmp     edi, ebp
        jz      L_d695
        mov     dword ptr [esp + 0x1c], edi
        xor     eax, eax
        cmp     word ptr [edi], bp
        mov     dword ptr [esp + 0x28], 1
        mov     dword ptr [esp + 0x30], eax
        jbe     L_d67a
        mov     edi, edi
    L_d610:
        mov     edx, dword ptr [edi + 4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_d66c
    L_d624:
        mov     edx, 0x10006150
        test    edx, edx
        jz      L_d63e
        mov     ecx, dword ptr [esi + 8]
        cmp     ecx, ebp
        jz      L_d63e
        push    1
        call    FUN_10005d70
        mov     dword ptr [esi + 8], ebp
    L_d63e:
        mov     eax, dword ptr [esi + 4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [ecx + 4], edx
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi], ebp
        mov     eax, dword ptr [g_10055050]
        push    esi
        push    eax
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_d624
        mov     eax, dword ptr [esp + 0x30]
        mov     edi, dword ptr [esp + 0x14]
    L_d66c:
        inc     eax
        cmp     ax, word ptr [edi]
        mov     dword ptr [esp + 0x30], eax
        jc      L_d610
        mov     ebx, dword ptr [esp + 0x10]
    L_d67a:
        mov     ecx, edi
        mov     dword ptr [edi + 0x24], ebp
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    FUN_10006480
        push    edi
        call    FUN_10001d60
        add     esp, 4
    L_d695:
        cmp     ebx, ebp
        jz      L_d73f
        mov     dword ptr [esp + 0x1c], ebx
        xor     eax, eax
        cmp     word ptr [ebx], bp
        mov     dword ptr [esp + 0x28], 2
        mov     dword ptr [esp + 0x30], eax
        jbe     L_d724
    L_d6b4:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_d714
        __emit 0x8D   /* __emit: MSVC6 drops the 00 disp byte for lea esp,[esp] (8D 24 24); ref needs 8D 64 24 00 */
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_d6d0:
        mov     edx, 0x10006150
        test    edx, edx
        jz      L_d6ea
        mov     ecx, dword ptr [esi + 8]
        cmp     ecx, ebp
        jz      L_d6ea
        push    1
        call    FUN_10005d70
        mov     dword ptr [esi + 8], ebp
    L_d6ea:
        mov     eax, dword ptr [esi + 4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [ecx + 4], edx
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [esi], ebp
        mov     eax, dword ptr [g_10055050]
        push    esi
        push    eax
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_d6d0
        mov     eax, dword ptr [esp + 0x30]
    L_d714:
        mov     ecx, dword ptr [esp + 0x10]
        inc     eax
        cmp     ax, word ptr [ecx]
        mov     dword ptr [esp + 0x30], eax
        jc      L_d6b4
        mov     ebx, ecx
    L_d724:
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x24], ebp
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    FUN_10006480
        push    ebx
        call    FUN_10001d60
        add     esp, 4
    L_d73f:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_d750
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_d750:
        mov     eax, dword ptr [esp + 0x34]
    L_d754:
        mov     ecx, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x1c
        ret     0x8
    }
}
