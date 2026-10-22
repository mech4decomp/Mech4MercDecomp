/*
 * FUN_00746f30 (extent 0x746f30-0x7471cb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_0076b1c0;
extern int    g_0076b210;
extern float  g_0076d970;
extern int    g_008b27e0;
extern int    g_008b27e4;
extern int    g_008b27e8;
extern int    g_008b27ec;
extern void __cdecl FUN_0074bcc0(void);

__declspec(naked) void FUN_00746f30(void)
{
    __asm {
        mov    eax, dword ptr [g_008b27e0]
        test    eax, eax
        push    esi
        push    edi
        mov    edi, dword ptr [g_0076b0ec]
        je    L_6f5e
        push    eax
        call    dword ptr [g_0076b210]
        mov    eax, dword ptr [g_008b27e0]
        push    eax
        call    edi
        mov    dword ptr [g_008b27e0], 0
        xor    esi, esi
        jmp    L_6f63
L_6f5e:
        mov    esi, 0xfffffffc
L_6f63:
        mov    eax, dword ptr [g_008b27e4]
        test    eax, eax
        mov    dword ptr [g_008b27e8], 0
        je    L_6f8e
        call    FUN_0074bcc0
        mov    ecx, dword ptr [g_008b27e4]
        push    ecx
        call    edi
        mov    dword ptr [g_008b27e4], 0
L_6f8e:
        pop    edi
        mov    eax, esi
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
        nop    
        nop    
        mov    eax, dword ptr [g_008b27e0]
        test    eax, eax
        jne    L_6fb1
        mov    eax, 0xfffffffc
        ret    4
L_6fb1:
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        xor    edi, edi
        mov    esi, 0x7b7444
L_6fbf:
        mov    eax, dword ptr [esi + 4]
        cmp    eax, dword ptr [g_008b27e8]
        jne    L_6fd8
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esi - 4]
        push    edi
        push    ecx
        push    edx
        call    ebx
        test    eax, eax
        jl    L_6fe4
L_6fd8:
        add    esi, 0x24
        inc    edi
        cmp    esi, 0x7b76a8
        jb    L_6fbf
L_6fe4:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008b27e0]
        sub    esp, 0xc
        push    ebx
        xor    ebx, ebx
        cmp    eax, ebx
        push    esi
        push    edi
        jne    L_700f
        pop    edi
        pop    esi
        mov    eax, 0xfffffffc
        pop    ebx
        add    esp, 0xc
        ret    4
L_700f:
        mov    eax, dword ptr [esp + 0x1c]
        lea    esi, [eax + eax*8]
        mov    eax, dword ptr [g_008b27e8]
        shl    esi, 2
        cmp    eax, dword ptr [esi + 0x7b7448]
        je    L_7034
        pop    edi
        pop    esi
        mov    eax, 0xfffffffb
        pop    ebx
        add    esp, 0xc
        ret    4
L_7034:
        mov    ecx, dword ptr [esi + 0x7b744c]
        mov    edx, dword ptr [esi + 0x7b7450]
        mov    edi, dword ptr [g_0076b1c0]
        push    ebx
        lea    eax, [esp + 0x20]
        push    eax
        mov    eax, dword ptr [g_008b27e4]
        push    0xc
        mov    dword ptr [esp + 0x18], ecx
        lea    ecx, [esp + 0x18]
        push    ecx
        push    0xc
        mov    dword ptr [esp + 0x28], edx
        lea    edx, [esp + 0x20]
        push    edx
        push    1
        push    eax
        mov    dword ptr [esp + 0x30], ebx
        call    edi
        test    eax, eax
        jne    L_7082
        pop    edi
        pop    esi
        mov    eax, 0xfffffff9
        pop    ebx
        add    esp, 0xc
        ret    4
L_7082:
        mov    ecx, dword ptr [esi + 0x7b7454]
        mov    edx, dword ptr [esi + 0x7b7458]
        push    ebx
        lea    eax, [esp + 0x20]
        push    eax
        mov    eax, dword ptr [g_008b27e4]
        push    0xc
        mov    dword ptr [esp + 0x18], ecx
        lea    ecx, [esp + 0x18]
        push    ecx
        push    0xc
        mov    dword ptr [esp + 0x28], edx
        lea    edx, [esp + 0x20]
        push    edx
        push    1
        push    eax
        mov    dword ptr [esp + 0x30], ebx
        call    edi
        test    eax, eax
        jne    L_70ca
        pop    edi
        pop    esi
        mov    eax, 0xfffffff9
        pop    ebx
        add    esp, 0xc
        ret    4
L_70ca:
        mov    ecx, dword ptr [esi + 0x7b745c]
        push    ebx
        lea    edx, [esp + 0x20]
        push    edx
        mov    edx, dword ptr [g_008b27e4]
        push    0xc
        lea    eax, [esp + 0x18]
        push    eax
        push    0xc
        mov    dword ptr [esp + 0x20], ecx
        lea    ecx, [esp + 0x20]
        push    ecx
        push    1
        push    edx
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x34], ebx
        call    edi
        test    eax, eax
        jne    L_710d
        pop    edi
        pop    esi
        mov    eax, 0xfffffff9
        pop    ebx
        add    esp, 0xc
        ret    4
L_710d:
        mov    eax, dword ptr [esi + 0x7b7460]
        push    ebx
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, dword ptr [g_008b27e4]
        push    0xc
        lea    edx, [esp + 0x18]
        push    edx
        push    0xc
        mov    dword ptr [esp + 0x20], eax
        lea    eax, [esp + 0x20]
        push    eax
        push    1
        push    ecx
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x34], ebx
        call    edi
        test    eax, eax
        jne    L_7150
        pop    edi
        pop    esi
        mov    eax, 0xfffffff9
        pop    ebx
        add    esp, 0xc
        ret    4
L_7150:
        mov    edx, dword ptr [esi + 0x7b7444]
        pop    edi
        pop    esi
        mov    dword ptr [g_008b27ec], edx
        xor    eax, eax
        pop    ebx
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008b27ec]
        fld    qword ptr [g_0076d970]
        sub    esp, 8
        dec    eax
        je    L_71a6
        sub    eax, 2
        je    L_7198
        dec    eax
        jne    L_71c5
        mov    eax, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fild    qword ptr [eax + 8]
        add    esp, 8
        ret    4
L_7198:
        mov    ecx, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fild    qword ptr [ecx]
        add    esp, 8
        ret    4
L_71a6:
        mov    eax, dword ptr [esp + 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 8]
        add    edx, ecx
        mov    ecx, dword ptr [eax + 0xc]
        adc    ecx, dword ptr [eax + 4]
        __emit 0x89  // mov dword ptr [esp], edx
__emit 0x54
__emit 0x24
__emit 0x00
        mov    dword ptr [esp + 4], ecx
        fild    qword ptr [esp]
L_71c5:
        add    esp, 8
        ret    4
    }
}
