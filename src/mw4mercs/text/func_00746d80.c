/*
 * FUN_00746d80 (extent 0x746d80-0x746f29) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_0076b0f4;
extern int    g_0076b21c;
extern int    g_0076b2d0;
extern int    g_008b27d8;
extern int    g_008b27e0;
extern int    g_008b27e4;
extern int    g_008b27e8;
extern int    g_008bd2d4;
extern int    g_008bd2d8;
extern int    g_008bd2e0;
extern void __cdecl FUN_00746ce0(void);
extern void __cdecl FUN_00746f30(void);
extern void __cdecl FUN_0074bb40(void);
extern void __cdecl FUN_0075d780(void);

__declspec(naked) void FUN_00746d80(void)
{
    __asm {
        call    FUN_00746ce0
        mov    eax, dword ptr [g_008b27d8]
        test    eax, eax
        je    L_6d96
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
L_6d96:
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
        mov    eax, dword ptr [g_008bd2e0]
        test    eax, eax
        push    esi
        mov    esi, ecx
        push    edi
        mov    dword ptr [esi], 0
        jne    L_6db8
        call    FUN_0075d780
L_6db8:
        mov    edx, dword ptr [g_008bd2d8]
        mov    ecx, dword ptr [g_008bd2d4]
        mov    edi, dword ptr [esp + 0x10]
        lea    eax, [edx + edx*4]
        lea    eax, [ecx + eax*4]
        dec    dword ptr [g_008bd2e0]
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax], ecx
        mov    dword ptr [eax + 4], edi
        mov    edi, dword ptr [esp + 0x14]
        shl    ecx, 0x14
        or    ecx, edx
        mov    dword ptr [eax + 8], edi
        mov    edi, dword ptr [esp + 0x18]
        inc    edx
        mov    dword ptr [eax + 0xc], edi
        mov    dword ptr [g_008bd2d8], edx
        mov    edx, ecx
        mov    dword ptr [eax + 0x10], ecx
        pop    edi
        mov    dword ptr [esi + 4], edx
        mov    eax, esi
        pop    esi
        ret    0x10
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
        mov    ebp, esp
        push    ebx
        push    esi
        push    edi
        cmp    dword ptr [g_008b27e0], 0
        je    L_6e27
        or    eax, 0xffffffff
        jmp    L_6f24
L_6e27:
        push    0x7aa2c0
        push    0
        push    0
        call    dword ptr [g_0076b21c]
        mov    dword ptr [g_008b27e0], eax
        cmp    dword ptr [g_008b27e0], 0
        jne    L_6e4e
        mov    eax, 0xfffffffd
        jmp    L_6f24
L_6e4e:
        push    0
        mov    eax, dword ptr [g_008b27e0]
        push    eax
        call    dword ptr [g_0076b0f4]
        cmp    eax, 0x102
        jne    L_6e84
        mov    ecx, dword ptr [g_008b27e0]
        push    ecx
        call    dword ptr [g_0076b0ec]
        mov    dword ptr [g_008b27e0], 0
        mov    eax, 0xfffffffe
        jmp    L_6f24
L_6e84:
        pushfd    
        pop    eax
        mov    ebx, eax
        xor    eax, 0x200000
        push    eax
        popfd    
        pushfd    
        pop    eax
        cmp    eax, ebx
        je    L_6f1a
        mov    eax, 0
        cpuid    
        cmp    ebx, 0x756e6547
        jne    L_6f1a
        cmp    edx, 0x49656e69
        jne    L_6f1a
        cmp    ecx, 0x6c65746e
        jne    L_6f1a
        cmp    eax, 1
        jl    L_6f1a
        mov    eax, 1
        cpuid    
        lea    ebx, [g_008b27e8]
        and    eax, 0xf00
        cmp    eax, 0x600
        je    L_6eea
        cmp    eax, 0x500
        jne    L_6f1a
        and    edx, 0x800000
        je    L_6f1a
        mov    byte ptr [ebx], 1
        jmp    L_6eed
L_6eea:
        mov    byte ptr [ebx], 2
L_6eed:
        call    FUN_0074bb40
        mov    dword ptr [g_008b27e4], eax
        cmp    dword ptr [g_008b27e4], -1
        jne    L_6f16
        mov    dword ptr [g_008b27e4], 0
        call    FUN_00746f30
        mov    eax, 0xfffffffa
        jmp    L_6f24
L_6f16:
        xor    eax, eax
        jmp    L_6f24
L_6f1a:
        call    FUN_00746f30
        mov    eax, 0xfffffffb
L_6f24:
        pop    edi
        pop    esi
        pop    ebx
        pop    ebp
        ret    
    }
}
