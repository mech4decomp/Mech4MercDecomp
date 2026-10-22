/*
 * FUN_0059cfc3 (extent 0x59cfc3-0x59d309) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076ed00;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_0059ced0(void);
extern void __cdecl FUN_0059cef0(void);
extern void __cdecl FUN_0059cf10(void);
extern void __cdecl FUN_0059cf30(void);
extern void __cdecl FUN_0059cf50(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0059cfc3(void)
{
    __asm {
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
        mov    eax, dword ptr [ecx + 0x28]
        mov    edx, dword ptr [esp + 4]
        cmp    edx, eax
        jne    L_cfe3
        call    FUN_0059ced0
        ret    4
L_cfe3:
        jg    L_cff2
        test    edx, edx
        jl    L_cff2
        mov    eax, dword ptr [ecx + 0x54]
        mov    eax, dword ptr [eax + edx*4]
        ret    4
L_cff2:
        or    eax, 0xffffffff
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x28]
        mov    edx, dword ptr [esp + 4]
        cmp    edx, eax
        jne    L_d013
        call    FUN_0059cef0
        ret    4
L_d013:
        jg    L_d022
        test    edx, edx
        jl    L_d022
        mov    eax, dword ptr [ecx + 0x60]
        mov    eax, dword ptr [eax + edx*4]
        ret    4
L_d022:
        or    eax, 0xffffffff
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x28]
        mov    edx, dword ptr [esp + 4]
        cmp    edx, eax
        jne    L_d043
        call    FUN_0059cf10
        ret    4
L_d043:
        jg    L_d052
        test    edx, edx
        jl    L_d052
        mov    eax, dword ptr [ecx + 0x6c]
        mov    eax, dword ptr [eax + edx*4]
        ret    4
L_d052:
        or    eax, 0xffffffff
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x28]
        mov    edx, dword ptr [esp + 4]
        cmp    edx, eax
        jne    L_d073
        call    FUN_0059cf30
        ret    4
L_d073:
        jg    L_d082
        test    edx, edx
        jl    L_d082
        mov    eax, dword ptr [ecx + 0x78]
        mov    eax, dword ptr [eax + edx*4]
        ret    4
L_d082:
        or    eax, 0xffffffff
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x28]
        mov    edx, dword ptr [esp + 4]
        cmp    edx, eax
        jne    L_d0a3
        call    FUN_0059cf50
        ret    4
L_d0a3:
        jg    L_d0b5
        test    edx, edx
        jl    L_d0b5
        mov    eax, dword ptr [ecx + 0x84]
        mov    eax, dword ptr [eax + edx*4]
        ret    4
L_d0b5:
        or    eax, 0xffffffff
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xf0
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        push    ebx
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        push    ebp
        push    esi
        xor    edx, 0x85739531
        push    edi
        add    edx, 0x54
        xor    ebx, ebx
        xor    edi, edi
        push    edx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x14], ebx
        mov    dword ptr [esp + 0x1c], edi
        call    FUN_00416bc0
        lea    ecx, [esp + 0xbc]
        mov    dword ptr [esp + 0x20], 0x779f0c
        call    FUN_004d1f10
        lea    ecx, [esp + 0x20]
        call    FUN_00416cc0
        test    eax, eax
        je    L_d28c
        mov    ebp, dword ptr [esp + 0x104]
L_d127:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        je    L_d154
        mov    ecx, dword ptr [ecx + 0x44]
        xor    ecx, 0x85739531
        je    L_d154
        mov    ecx, dword ptr [eax + 0x20]
        test    ecx, ecx
        je    L_d183
L_d154:
        mov    ecx, 1
        cmp    ebp, ecx
        jl    L_d167
        cmp    dword ptr [eax + 0x20], ecx
        jne    L_d167
        cmp    dword ptr [eax + 0x2c], ecx
        je    L_d183
L_d167:
        cmp    ebp, 2
        jne    L_d277
        cmp    dword ptr [eax + 0x20], 3
        jne    L_d277
        cmp    dword ptr [eax + 0x2c], ecx
        jne    L_d277
L_d183:
        add    eax, 0x14
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_0040f060
        mov    edx, dword ptr [esp + 0x1c]
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        lea    ecx, [esp + 0x1c]
        call    FUN_0040d9b0
        mov    edx, dword ptr [esp + 0x14]
        xor    esi, esi
L_d1ad:
        test    edx, edx
        je    L_d1d7
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        cmp    esi, ecx
        jae    L_d1d7
        mov    al, byte ptr [esi + edx]
        cmp    al, 0x30
        jl    L_d1cc
        cmp    al, 0x39
        jle    L_d1cf
L_d1cc:
        inc    esi
        jmp    L_d1ad
L_d1cf:
        mov    byte ptr [esi + edx], 0
        mov    edx, dword ptr [esp + 0x14]
L_d1d7:
        push    ecx
        mov    eax, esp
        mov    dword ptr [eax], edx
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_d1e7
        inc    byte ptr [eax - 1]
L_d1e7:
        call    FUN_005178d0
        mov    ecx, dword ptr [eax + 0x84]
        call    FUN_006140c0
        mov    cx, word ptr [eax + 0x10]
        mov    dx, word ptr [eax + 0x12]
        push    1
        lea    eax, [esp + 0x14]
        mov    word ptr [esp + 0x14], cx
        push    eax
        lea    ecx, [esp + 0x80]
        mov    word ptr [esp + 0x1a], dx
        call    FUN_004d1f80
        mov    esi, dword ptr [esp + 0x8c]
        lea    ecx, [esp + 0x34]
        call    FUN_004d1f10
        add    esi, 0x54
        lea    ecx, [esp + 0x34]
        push    esi
        push    ecx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x50]
        mov    esi, dword ptr [edx + 0x78]
        add    esp, 8
        lea    ecx, [esp + 0x34]
        add    ebx, esi
        call    FUN_004d21c0
        lea    ecx, [esp + 0x78]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_d273
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d273
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d273:
        mov    edi, dword ptr [esp + 0x18]
L_d277:
        lea    ecx, [esp + 0x20]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_d127
        mov    dword ptr [esp + 0x10], ebx
L_d28c:
        fild    dword ptr [esp + 0x10]
        fmul    dword ptr [g_0076ed00]
        call    FUN_0075db4a
        mov    ebp, dword ptr [g_007dab40]
        mov    esi, eax
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, ebp
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x38]
        mov    ecx, dword ptr [eax + 0x10]
        add    eax, 0x10
L_d2be:
        test    ecx, ecx
        je    L_d2e4
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        je    L_d2e4
        mov    dl, byte ptr [eax + 0x24]
        test    dl, dl
        je    L_d2be
        mov    edx, dword ptr [eax + 0x6c]
        cmp    edx, 1
        je    L_d2df
        cmp    edx, 2
        jne    L_d2be
L_d2df:
        add    edi, dword ptr [eax + 0x68]
        jmp    L_d2be
L_d2e4:
        lea    ecx, [esp + 0xbc]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x20]
        call    FUN_00416c60
        lea    eax, [edi + esi]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xf0
        ret    4
    }
}
