/*
 * FUN_1002d200 (778 B) -- __stdcall, RET 0x10.
 * SEH-guarded teardown: queries several properties through a vtable
 * (param_1->[0x30]), builds a CRect, then walks and frees two hash-list
 * tables (freeing each node's payload via FUN_10006020/FUN_10001d60 and
 * returning nodes to the pool via FUN_1000c4c0).
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10055050;
extern void __cdecl FUN_1002c970(void);
extern void __cdecl FUN_1002b4f0(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_1001b7a0(void);
extern void __cdecl FUN_10006020(void);
extern void __cdecl FUN_1000c4c0(void);
extern void __cdecl FUN_10006480(void);

__declspec(naked) void __stdcall FUN_1002d200(void)
{
    __asm {
        push    -1
        push    0x1004882b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        mov     edx, dword ptr [esp + 0x30]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x38]
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [esp + 0x40]
        push    ecx
        push    0x10049e10
        push    edx
        xor     ebp, ebp
        xor     ebx, ebx
        push    esi
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x28], ebp
        call    dword ptr [eax + 0x30]
        cmp     eax, ebp
        jl      L_4f5
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0x10049e1c
        push    edx
        push    esi
        call    dword ptr [eax + 0x30]
        cmp     eax, ebp
        jl      L_4f5
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        push    esi
        call    FUN_1002c970
        cmp     eax, ebp
        mov     dword ptr [esp + 0x3c], eax
        jl      L_37d
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x20]
        push    eax
        push    0x10049e20
        push    ecx
        push    esi
        call    dword ptr [edx + 0x30]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x3c], eax
        jl      L_37d
        mov     eax, dword ptr [esp + 0x20]
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        push    esi
        call    FUN_1002c970
        cmp     eax, ebp
        mov     dword ptr [esp + 0x3c], eax
        jl      L_379
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esi]
        lea     edx, [esp + 0x24]
        push    edx
        push    0x10049e24
        push    eax
        push    esi
        call    dword ptr [ecx + 0x30]
        cmp     eax, ebp
        mov     dword ptr [esp + 0x3c], eax
        jl      L_379
        mov     eax, dword ptr [esp + 0x24]
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        push    0x10049e28
        push    eax
        push    esi
        call    FUN_1002b4f0
        mov     ebx, eax
        cmp     ebx, ebp
        mov     dword ptr [esp + 0x3c], ebx
        jl      L_379
        mov     esi, dword ptr [esp + 0x28]
        cmp     esi, ebp
        jnz     L_321
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esp + 0x18], ebp
    L_321:
        push    0x10
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x3c], eax
        cmp     eax, ebp
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x34], ebp
        jz      L_350
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        push    edx
        push    ecx
        push    edi
        mov     ecx, eax
        call    FUN_1001b7a0
        jmp     L_352
    L_350:
        xor     eax, eax
    L_352:
        cmp     eax, ebp
        mov     dword ptr [esp + 0x34], 0xffffffff
        jnz     L_36c
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x3c], 0x8007000e
        jmp     L_381
    L_36c:
        mov     edx, dword ptr [esp + 0x48]
        mov     dword ptr [edx], eax
        mov     eax, ebx
        jmp     L_4f5
    L_379:
        mov     ebx, dword ptr [esp + 0x10]
    L_37d:
        mov     edi, dword ptr [esp + 0x14]
    L_381:
        cmp     edi, ebp
        jz      L_42f
        mov     dword ptr [esp + 0x28], edi
        xor     eax, eax
        cmp     word ptr [edi], bp
        mov     dword ptr [esp + 0x34], 0x1
        mov     dword ptr [esp + 0x48], eax
        jbe     L_414
    L_3a0:
        mov     edx, dword ptr [edi + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_406
    L_3b4:
        mov     eax, 0x10006150
        test    eax, eax
        jz      L_3d7
        mov     edi, dword ptr [esi + 0x8]
        cmp     edi, ebp
        jz      L_3d7
        mov     ecx, edi
        call    FUN_10006020
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], ebp
    L_3d7:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], eax
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi], ebp
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_3b4
        mov     eax, dword ptr [esp + 0x48]
        mov     edi, dword ptr [esp + 0x14]
    L_406:
        inc     eax
        cmp     ax, word ptr [edi]
        mov     dword ptr [esp + 0x48], eax
        jc      L_3a0
        mov     ebx, dword ptr [esp + 0x10]
    L_414:
        mov     ecx, edi
        mov     dword ptr [edi + 0x24], ebp
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_10006480
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
    L_42f:
        cmp     ebx, ebp
        jz      L_4e0
        mov     dword ptr [esp + 0x28], ebx
        xor     eax, eax
        cmp     word ptr [ebx], bp
        mov     dword ptr [esp + 0x34], 0x2
        mov     dword ptr [esp + 0x48], eax
        jbe     L_4c5
        mov     edi, edi
    L_450:
        mov     edx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [edx + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        add     ebx, esi
        mov     esi, dword ptr [ebx]
        cmp     esi, ebx
        jz      L_4b5
    L_467:
        mov     eax, 0x10006150
        test    eax, eax
        jz      L_48a
        mov     edi, dword ptr [esi + 0x8]
        cmp     edi, ebp
        jz      L_48a
        mov     ecx, edi
        call    FUN_10006020
        push    edi
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], ebp
    L_48a:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [ecx], edi
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], eax
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi], ebp
        mov     ecx, dword ptr [g_10055050]
        push    esi
        push    ecx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_467
        mov     eax, dword ptr [esp + 0x48]
    L_4b5:
        mov     edx, dword ptr [esp + 0x10]
        inc     eax
        cmp     ax, word ptr [edx]
        mov     dword ptr [esp + 0x48], eax
        jc      L_450
        mov     ebx, edx
    L_4c5:
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x24], ebp
        mov     dword ptr [esp + 0x34], 0xffffffff
        call    FUN_10006480
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_4e0:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_4f1
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_4f1:
        mov     eax, dword ptr [esp + 0x3c]
    L_4f5:
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x28
        ret     0x10
    }
}
