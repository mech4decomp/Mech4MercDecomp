/*
 * FUN_005f008b (extent 0x5f008b-0x5f0171) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_005ac340(void);
extern void __cdecl FUN_005f0180(void);
extern void __cdecl FUN_005f01e0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_005f008b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x78]
        push    ebx
        push    esi
        add    ecx, 0x78
        push    edi
        call    dword ptr [eax + 4]
        mov    edi, dword ptr [esp + 0x10]
        test    edi, edi
        je    L_00e6
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x17fc]
        test    dl, dl
        je    L_00e6
        mov    esi, dword ptr [eax + 0x34]
        test    esi, esi
        jle    L_00e6
        fld    dword ptr [eax + 0x40]
        fchs    
        fstp    dword ptr [esp + 0x10]
        mov    ebx, dword ptr [esp + 0x10]
L_00d9:
        push    1
        push    ebx
        mov    ecx, edi
        call    FUN_005ac340
        dec    esi
        jne    L_00d9
L_00e6:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        lea    ecx, [eax + 0x78]
        mov    dword ptr [esi + 0x190], eax
        mov    eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        mov    edi, eax
        call    dword ptr [edx + 4]
        fld    dword ptr [edi + 0x2bc]
        fst    dword ptr [esi + 0x180]
        fld    dword ptr [edi + 0x2c8]
        fst    dword ptr [esi + 0x17c]
        fxch    st(1)
        fsub st(0), st(1)
        fdiv    dword ptr [eax + 0x3c]
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, esi
        mov    dword ptr [esi + 0x188], eax
        call    FUN_005f0180
        mov    eax, dword ptr [esi + 0x184]
        cmp    eax, 1
        mov    dword ptr [esi + 0x184], 0
        jl    L_0165
        mov    edi, eax
L_015b:
        mov    ecx, esi
        call    FUN_005f01e0
        dec    edi
        jne    L_015b
L_0165:
        mov    ecx, esi
        call    FUN_005f0180
        pop    edi
        pop    esi
        ret    4
    }
}
