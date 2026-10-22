/*
 * FUN_007536a0 (extent 0x7536a0-0x7537ef) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0085a254;
extern int    g_008b2880;
extern int    g_008b2884;
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_007357d0(void);
extern void __cdecl FUN_007358e0(void);
extern void __cdecl FUN_00735b60(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00748750(void);
extern void __cdecl FUN_0075b9c0(void);

__declspec(naked) void FUN_007536a0(void)
{
    __asm {
        mov    eax, dword ptr [g_008b2880]
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi + 0x24], eax
        mov    eax, dword ptr [g_008b2884]
        mov    dword ptr [esi + 0x28], eax
        inc    eax
        mov    dword ptr [g_008b2884], eax
        mov    eax, dword ptr [g_0085a254]
        test    eax, eax
        jne    L_36d8
        call    FUN_00735b60
        test    al, al
        je    L_36d8
        push    0
        push    1
        mov    ecx, esi
        call    FUN_007358e0
        pop    esi
        ret    
L_36d8:
        push    0
        push    1
        mov    ecx, esi
        call    FUN_00748750
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x90
        mov    al, byte ptr [esp + 0x98]
        neg    al
        push    ebp
        push    esi
        mov    esi, ecx
        sbb    eax, eax
        xor    ecx, ecx
        mov    dword ptr [esp + 0xc], ecx
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], ecx
        and    eax, 0xffffffe0
        push    ecx
        add    eax, 0x20
        or    eax, 0x80
        or    word ptr [esi + 4], ax
        mov    dword ptr [esp + 0x1c], ecx
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], 0x401008
        call    FUN_0075b9c0
        mov    ebp, dword ptr [esp + 0x9c]
        test    ebp, ebp
        mov    dword ptr [esp + 8], eax
        mov    word ptr [esi + 0x18], 0
        je    L_3788
        push    ebx
        push    edi
        xor    edi, edi
        mov    di, word ptr [esi]
L_3753:
        mov    bx, word ptr [esi + 0x18]
        mov    edx, edi
        mov    cl, bl
        shr    edx, cl
        cmp    edx, ebp
        je    L_3786
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_007357d0
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00740db0
        mov    eax, dword ptr [esp + 0x10]
        inc    ebx
        mov    word ptr [esi + 0x18], bx
        jmp    L_3753
L_3786:
        pop    edi
        pop    ebx
L_3788:
        push    0
        push    0x801
        lea    ecx, [esp + 0x24]
        push    ecx
        push    0
        push    eax
        mov    dword ptr [esp + 0x30], 0x7c
        call    FUN_007353f0
        mov    edx, dword ptr [esp + 8]
        push    0
        push    edx
        call    FUN_00735440
        mov    eax, dword ptr [esp + 0xa4]
        mov    ecx, dword ptr [esp + 0x40]
        mov    edx, dword ptr [esp + 0x28]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0x24]
        mov    dword ptr [eax + 8], ecx
        xor    ecx, ecx
        mov    cx, word ptr [esi + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 0x2c]
        sar    edx, 2
        pop    esi
        mov    dword ptr [eax + 0xc], edx
        pop    ebp
        shr    ecx, 0xa
        and    ecx, 7
        mov    dword ptr [eax + 0x10], ecx
        add    esp, 0x90
        ret    0xc
    }
}
