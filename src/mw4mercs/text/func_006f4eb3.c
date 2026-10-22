/*
 * FUN_006f4eb3 (extent 0x6f4eb3-0x6f50f2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b6e80;
extern int    g_0084932c;
extern int    g_00849334;
extern void __cdecl FUN_006f4c00(void);
extern void __cdecl FUN_006f4ec0(void);
extern void __cdecl FUN_006f4f10(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_006f4eb3(void)
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
        ret    8
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
        push    ebp
        mov    ebp, dword ptr [esp + 8]
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        je    L_4efe
        push    esi
L_4ee2:
        test    eax, eax
        mov    esi, dword ptr [eax + 4]
        je    L_4ef7
        push    edi
        push    eax
        mov    dword ptr [eax + 0x10], 1
        call    FUN_006f4ec0
L_4ef7:
        test    esi, esi
        mov    eax, esi
        jne    L_4ee2
        pop    esi
L_4efe:
        push    edi
        push    ebp
        call    FUN_006f4f10
        pop    edi
        pop    ebp
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0xc
        push    ebx
        mov    ebx, dword ptr [ebp + 0xc]
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_4f2c
        push    ebx
        push    eax
        call    FUN_006f4f10
L_4f2c:
        cmp    dword ptr [esi], 0
        jne    L_4f3f
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_4f3f
        push    ebx
        push    eax
        call    FUN_006f4f10
L_4f3f:
        test    bl, bl
        je    L_50be
        mov    eax, 0x849298
        push    edi
        mov    dword ptr [ebp - 0xc], eax
L_4f50:
        mov    esi, dword ptr [eax]
        test    esi, esi
        mov    dword ptr [ebp - 4], 0
        je    L_50ac
L_4f61:
        cmp    word ptr [esi + 0x38], 0
        je    L_509e
        mov    cx, word ptr [esi + 0x14]
        cmp    cx, 0x100
        mov    eax, dword ptr [esi + 8]
        mov    ebx, dword ptr [esi + 0xc]
        mov    edi, dword ptr [esi + 0x10]
        mov    dword ptr [ebp - 4], eax
        jae    L_5017
        xor    eax, eax
        mov    ax, word ptr [esi + 0x16]
        test    eax, eax
        jle    L_509e
        and    ecx, 0xffff
        mov    dword ptr [ebp + 0xc], ecx
        mov    dword ptr [ebp - 8], eax
L_4fa1:
        mov    eax, dword ptr [g_007b6e80]
        test    eax, eax
        je    L_4fdc
        mov    eax, edi
        sub    eax, esi
        cdq    
        and    edx, 0xfff
        add    eax, edx
        sar    eax, 0xc
        cmp    word ptr [esi + eax*2 + 0x18], 0
        je    L_4ffd
        mov    eax, ecx
        sub    eax, esi
        add    eax, edi
        cdq    
        and    edx, 0xfff
        add    eax, edx
        sar    eax, 0xc
        cmp    word ptr [esi + eax*2 + 0x18], 0
        je    L_4ffd
L_4fdc:
        mov    eax, dword ptr [ebp + 8]
        xor    edx, edx
        mov    dl, byte ptr [edi]
        cmp    dword ptr [edx*4 + 0x848e90], eax
        jne    L_4ffd
        lea    ecx, [edi + 1]
        push    ecx
        push    ebx
        push    0
        push    0
        call    FUN_006f4c00
        mov    ecx, dword ptr [ebp + 0xc]
L_4ffd:
        mov    eax, dword ptr [ebp - 8]
        mov    edx, dword ptr [g_00849334]
        add    edi, ecx
        dec    eax
        lea    ebx, [ebx + edx*4 + 1]
        mov    dword ptr [ebp - 8], eax
        jne    L_4fa1
        jmp    L_509e
L_5017:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x16]
        test    eax, eax
        jle    L_509e
        and    ecx, 0xffff
        mov    dword ptr [ebp + 0xc], ecx
        mov    dword ptr [ebp - 8], eax
L_502d:
        mov    eax, dword ptr [g_007b6e80]
        test    eax, eax
        je    L_5068
        mov    eax, edi
        sub    eax, esi
        cdq    
        and    edx, 0xfff
        add    eax, edx
        sar    eax, 0xc
        cmp    word ptr [esi + eax*2 + 0x18], 0
        je    L_5089
        mov    eax, ecx
        sub    eax, esi
        add    eax, edi
        cdq    
        and    edx, 0xfff
        add    eax, edx
        sar    eax, 0xc
        cmp    word ptr [esi + eax*2 + 0x18], 0
        je    L_5089
L_5068:
        mov    eax, dword ptr [ebp + 8]
        xor    edx, edx
        mov    dl, byte ptr [edi]
        cmp    dword ptr [edx*4 + 0x848e90], eax
        jne    L_5089
        lea    ecx, [edi + 1]
        push    ecx
        push    0
        push    ebx
        push    0
        call    FUN_006f4c00
        mov    ecx, dword ptr [ebp + 0xc]
L_5089:
        mov    eax, dword ptr [ebp - 8]
        mov    edx, dword ptr [g_00849334]
        add    edi, ecx
        dec    eax
        lea    ebx, [ebx + edx*4 + 1]
        mov    dword ptr [ebp - 8], eax
        jne    L_502d
L_509e:
        mov    esi, dword ptr [ebp - 4]
        test    esi, esi
        jne    L_4f61
        mov    eax, dword ptr [ebp - 0xc]
L_50ac:
        add    eax, 4
        cmp    eax, 0x8492e0
        mov    dword ptr [ebp - 0xc], eax
        jl    L_4f50
        pop    edi
L_50be:
        mov    esi, dword ptr [g_0084932c]
        test    esi, esi
        je    L_50ea
        mov    bl, 0xfd
L_50ca:
        cmp    byte ptr [esi + 4], bl
        je    L_50e1
        push    0x79f9d8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_50e1
        int 3    
L_50e1:
        mov    eax, dword ptr [esi]
        mov    esi, dword ptr [eax + 8]
        test    esi, esi
        jne    L_50ca
L_50ea:
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
