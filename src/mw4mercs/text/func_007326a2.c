/*
 * FUN_007326a2 (extent 0x7326a2-0x732867) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076dd60;
extern float  g_008816b0;
extern float  g_008816b8;
extern float  g_008816bc;
extern float  g_008816d8;
extern char   g_008816dd;
extern void __cdecl FUN_00731a50(void);
extern void __cdecl FUN_00731c20(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_007326a2(void)
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
        nop    
        sub    esp, 0x30
        fld    dword ptr [g_008816b0]
        push    ebx
        fsub    dword ptr [g_008816b8]
        push    ebp
        push    esi
        xor    esi, esi
        push    edi
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x1c], esi
        mov    byte ptr [esp + 0x13], 0
        call    FUN_0075db4a
        fild    dword ptr [g_008816bc]
        mov    ebx, dword ptr [esp + 0x44]
        mov    edi, eax
        lea    eax, [esp + 0x13]
        fstp    dword ptr [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        push    ebx
        mov    dword ptr [esp + 0x28], edi
        call    FUN_00731a50
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov    dword ptr [esp + 0x44], esi
        je    L_283d
L_2712:
        cmp    ebp, edi
        mov    dword ptr [esp + 0x30], 0
        jle    L_278c
L_271e:
        xor    eax, eax
        mov    al, byte ptr [ebx]
        mov    cl, byte ptr [eax + 0x896b88]
        test    cl, cl
        lea    edi, [eax + 0x896b88]
        je    L_273e
        xor    ecx, ecx
        mov    cl, byte ptr [ebx + 1]
        shl    eax, 8
        mov    edx, ecx
        add    eax, edx
L_273e:
        push    eax
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        call    FUN_00731c20
        mov    edx, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x18]
        lea    eax, [edx + esi]
        cmp    eax, ecx
        jae    L_2784
        mov    esi, eax
        cmp    byte ptr [edi], 0
        je    L_2770
        mov    eax, dword ptr [esp + 0x14]
        add    ebx, 2
        sub    eax, 2
        jmp    L_2776
L_2770:
        mov    eax, dword ptr [esp + 0x14]
        inc    ebx
        dec    eax
L_2776:
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        jne    L_271e
        mov    edi, dword ptr [esp + 0x18]
        jmp    L_27ec
L_2784:
        mov    eax, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x18]
L_278c:
        test    eax, eax
        je    L_27ec
L_2790:
        mov    cl, byte ptr [g_008816dd]
        test    cl, cl
        je    L_27a1
        lea    ecx, [esi + ebp]
        cmp    ecx, edi
        jg    L_27ec
L_27a1:
        mov    cl, byte ptr [esp + 0x13]
        test    cl, cl
        jne    L_27ec
        mov    ecx, dword ptr [esp + 0x30]
        add    ecx, ebp
        add    esi, ebp
        cmp    esi, edi
        mov    dword ptr [esp + 0x30], ecx
        jle    L_27bb
        mov    esi, edi
L_27bb:
        cmp    esi, dword ptr [esp + 0x44]
        jle    L_27c5
        mov    dword ptr [esp + 0x44], esi
L_27c5:
        mov    edx, dword ptr [esp + 0x1c]
        add    edx, eax
        lea    eax, [esp + 0x13]
        push    eax
        add    ebx, edx
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        push    ebx
        call    FUN_00731a50
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        jne    L_2790
L_27ec:
        add    esi, ebp
        cmp    esi, edi
        jle    L_27f4
        mov    esi, edi
L_27f4:
        cmp    esi, dword ptr [esp + 0x44]
        jle    L_27fe
        mov    dword ptr [esp + 0x44], esi
L_27fe:
        fld    dword ptr [g_008816d8]
        xor    esi, esi
        fadd    dword ptr [g_0076dd60]
        mov    byte ptr [esp + 0x13], 0
        fstp    dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x28]
        and    ecx, 0x7fffff
        sub    ecx, 0x400000
        test    eax, eax
        mov    dword ptr [esp + 0x28], ecx
        fild    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        jne    L_2712
L_283d:
        fild    dword ptr [g_008816bc]
        fsubr    dword ptr [esp + 0x20]
        call    FUN_0075db4a
        mov    edx, dword ptr [esp + 0x4c]
        mov    ecx, dword ptr [esp + 0x44]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [esp + 0x40]
        pop    ebp
        mov    dword ptr [eax], ecx
        pop    ebx
        add    esp, 0x30
        ret    0xc
    }
}
