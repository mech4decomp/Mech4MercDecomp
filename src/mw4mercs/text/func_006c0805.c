/*
 * FUN_006c0805 (extent 0x6c0805-0x6c0932) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0082f328;
extern void __cdecl FUN_006bfa50(void);

__declspec(naked) void FUN_006c0805(void)
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    bl, byte ptr [esi]
        mov    byte ptr [esp + 0xc], bl
        mov    eax, dword ptr [esp + 0xc]
        and    eax, 0xff
        mov    cl, byte ptr [eax + 0x82ecf8]
        test    cl, cl
        jne    L_083d
        push    eax
        push    0x79cba0
        call    FUN_006bfa50
        add    esp, 8
L_083d:
        xor    edx, edx
        mov    dl, byte ptr [esi + 1]
        mov    ecx, 1
        mov    eax, ecx
        cmp    byte ptr [edx + 0x82ebf8], cl
        jne    L_085f
L_0851:
        inc    eax
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        cmp    byte ptr [edx + 0x82ebf8], cl
        je    L_0851
L_085f:
        cmp    bl, 0x40
        jne    L_086a
        cmp    byte ptr [eax + esi], bl
        jne    L_086a
        inc    eax
L_086a:
        pop    esi
        pop    ebx
        ret    4
        nop    
        push    ebx
        push    esi
        mov    esi, 0x839af0
        mov    bl, 0x5c
L_0879:
        mov    eax, dword ptr [g_0082f328]
L_087e:
        cmp    byte ptr [eax], 0x20
        jne    L_0891
L_0883:
        mov    cl, byte ptr [eax + 1]
        inc    eax
        cmp    cl, 0x20
        je    L_0883
        mov    dword ptr [g_0082f328], eax
L_0891:
        mov    cl, byte ptr [eax]
        cmp    cl, 0x29
        je    L_0912
        cmp    cl, 0x2c
        je    L_0912
        test    cl, cl
        je    L_0912
        cmp    cl, 0x22
        jne    L_08fc
L_08a6:
        inc    eax
        cmp    esi, 0x839eef
        mov    dword ptr [g_0082f328], eax
        jb    L_08c6
        push    0x79cbf4
        call    FUN_006bfa50
        mov    eax, dword ptr [g_0082f328]
        add    esp, 4
L_08c6:
        mov    cl, byte ptr [eax]
        cmp    cl, 0x22
        je    L_08f4
        test    cl, cl
        jne    L_08e3
        push    0x79cbe4
        call    FUN_006bfa50
        mov    eax, dword ptr [g_0082f328]
        add    esp, 4
L_08e3:
        cmp    byte ptr [eax], bl
        jne    L_08ed
        cmp    byte ptr [eax + 1], bl
        jne    L_08ed
        inc    eax
L_08ed:
        mov    cl, byte ptr [eax]
        mov    byte ptr [esi], cl
        inc    esi
        jmp    L_08a6
L_08f4:
        inc    eax
        mov    dword ptr [g_0082f328], eax
        jmp    L_087e
L_08fc:
        movsx    edx, cl
        push    edx
        push    0x79cbc0
        call    FUN_006bfa50
        add    esp, 8
        jmp    L_0879
L_0912:
        cmp    esi, 0x839eef
        jb    L_0927
        push    0x79cbf4
        call    FUN_006bfa50
        add    esp, 4
L_0927:
        mov    byte ptr [esi], 0
        pop    esi
        mov    eax, 0x839af0
        pop    ebx
        ret    
    }
}
