/*
 * FUN_005eff47 (extent 0x5eff47-0x5f0017) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f25ac;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005effa0(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005eff47(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x198
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_ff92
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f25ac]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005effa0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_ff92:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov    ecx, esi
        call    FUN_005f0740
        mov    eax, dword ptr [edi + 0x6c]
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        mov    dword ptr [esi], 0x789ff0
        mov    dword ptr [esi + 0x184], eax
        call    dword ptr [edx + 4]
        mov    edx, dword ptr [esi + 0x184]
        mov    ecx, 1
        cmp    edx, ecx
        mov    dword ptr [esi + 0x194], 0
        mov    dword ptr [esp + 0x18], ecx
        jl    L_0010
L_fff4:
        fild    dword ptr [esp + 0x18]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [esp + 0x18], ecx
        fmul    dword ptr [eax + 0x38]
        fadd    dword ptr [esi + 0x194]
        fstp    dword ptr [esi + 0x194]
        jle    L_fff4
L_0010:
        pop    edi
        mov    eax, esi
        pop    esi
        ret    0x10
    }
}
