/*
 * FUN_0070560e (extent 0x70560e-0x705877) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0f4;
extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b1fc;
extern int    g_0076b210;
extern int    g_0076b214;
extern int    g_0076b2d0;
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f6410(void);
extern void __cdecl FUN_006f7970(void);
extern void __cdecl FUN_006f8430(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_007055a0(void);
extern void __cdecl FUN_00705650(void);

__declspec(naked) void FUN_0070560e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    eax
        mov    eax, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ecx
        call    FUN_007055a0
        ret    0x14
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
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        call    FUN_00705650
        xor    eax, eax
        ret    4
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x10
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    -2
        mov    dword ptr [ebp - 0x10], esi
        call    dword ptr [g_0076b214]
        push    eax
        call    dword ptr [g_0076b1fc]
L_566d:
        mov    eax, dword ptr [esi + 0x28]
        push    -1
        push    eax
        call    dword ptr [g_0076b0f4]
        mov    al, byte ptr [esi + 0x25]
        test    al, al
        jne    L_5870
        lea    eax, [esi + 4]
        push    eax
        xor    ebx, ebx
        xor    edi, edi
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi]
        cmp    eax, ebx
        je    L_56d8
L_5698:
        mov    edi, eax
        mov    ecx, dword ptr [edi + 0x11c]
        mov    al, byte ptr [edi + 0x120]
        test    al, al
        mov    dword ptr [esi], ecx
        mov    dword ptr [edi + 0x11c], ebx
        jne    L_56d8
        mov    eax, dword ptr [edi + 0x104]
        cmp    eax, ebx
        je    L_56c8
        mov    edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov    dword ptr [edi + 0x104], ebx
L_56c8:
        push    edi
        call    dword ptr [g_0076b2d0]
        mov    eax, dword ptr [esi]
        add    esp, 4
        cmp    eax, ebx
        jne    L_5698
L_56d8:
        lea    eax, [esi + 4]
        push    eax
        call    dword ptr [g_0076b100]
        cmp    edi, ebx
        je    L_566d
        call    FUN_006f5ed0
        mov    ecx, dword ptr [edi]
        lea    eax, [edi + 4]
        push    eax
        call    FUN_006f6410
        mov    ebx, eax
        test    ebx, ebx
        je    L_57bf
        mov    ecx, dword ptr [ebx + 0x3c]
        xor    esi, esi
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 8], esi
        call    FUN_006f8430
        test    eax, eax
        jle    L_57bc
L_5718:
        mov    ecx, dword ptr [ebp - 0xc]
        lea    eax, [ebp - 4]
        push    eax
        push    esi
        call    FUN_006f7970
        test    al, al
        jne    L_573e
        push    esi
        push    0x76b9e0
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_57a8
        int 3    
        jmp    L_57a8
L_573e:
        mov    ecx, dword ptr [ebp - 4]
        push    0x79fb7c
        push    ecx
        mov    ecx, ebx
        call    FUN_006f5b80
        mov    esi, 0x799ea4
L_5753:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_5777
        test    cl, cl
        je    L_5773
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_5777
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_5753
L_5773:
        xor    eax, eax
        jmp    L_577c
L_5777:
        sbb    eax, eax
        sbb    eax, -1
L_577c:
        test    eax, eax
        jne    L_5790
        mov    ecx, dword ptr [ebp - 4]
        mov    eax, dword ptr [ebx]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 0x10]
        dec    dword ptr [ebp - 8]
        jmp    L_57a5
L_5790:
        mov    eax, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebx]
        push    0x799ea4
        push    0x79fb7c
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 8]
L_57a5:
        mov    esi, dword ptr [ebp - 8]
L_57a8:
        mov    ecx, dword ptr [ebp - 0xc]
        inc    esi
        mov    dword ptr [ebp - 8], esi
        call    FUN_006f8430
        cmp    esi, eax
        jl    L_5718
L_57bc:
        mov    esi, dword ptr [ebp - 0x10]
L_57bf:
        call    FUN_006f5ee0
        mov    ecx, dword ptr [esi + 0x2c]
        mov    edx, dword ptr [ecx + 0x6c]
        push    -1
        push    edx
        call    dword ptr [g_0076b0f4]
        test    eax, eax
        jne    L_5847
        mov    eax, dword ptr [edi + 0x104]
        mov    ecx, dword ptr [eax]
        push    0x80
        push    edi
        push    0x705610
        lea    edx, [edi + 0x108]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
        test    eax, eax
        jge    L_581b
        call    FUN_006f5ed0
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [ecx]
        push    0x794cc8
        push    0x79fae8
        lea    eax, [edi + 4]
        push    eax
        call    dword ptr [edx + 8]
        call    FUN_006f5ee0
        nop    
        jmp    L_583a
L_581b:
        call    FUN_006f5ed0
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [ecx]
        push    0x771d60
        push    0x79fae8
        lea    eax, [edi + 4]
        push    eax
        call    dword ptr [edx + 8]
        call    FUN_006f5ee0
L_583a:
        mov    eax, dword ptr [esi + 0x2c]
        mov    ecx, dword ptr [eax + 0x6c]
        push    ecx
        call    dword ptr [g_0076b210]
L_5847:
        mov    eax, dword ptr [edi + 0x104]
        test    eax, eax
        je    L_5861
        mov    edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov    dword ptr [edi + 0x104], 0
L_5861:
        push    edi
        call    dword ptr [g_0076b2d0]
        add    esp, 4
        jmp    L_566d
L_5870:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
