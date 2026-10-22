/*
 * FUN_005a33c7 (extent 0x5a33c7-0x5a35f2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_007f2040;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005a34d0(void);
extern void __cdecl FUN_005f06f0(void);
extern void __cdecl FUN_005f0740(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005a33c7(void)
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
        push    0x1b4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3412
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f2040]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005a34d0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_3412:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    0x98
        mov    ecx, edi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_005f06f0
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x180]
        mov    edx, dword ptr [esi + 0x184]
        mov    dword ptr [eax + 0x6c], ecx
        mov    ecx, dword ptr [esi + 0x188]
        mov    dword ptr [eax + 0x70], edx
        mov    edx, dword ptr [esi + 0x18c]
        mov    dword ptr [eax + 0x74], ecx
        mov    ecx, dword ptr [esi + 0x194]
        mov    dword ptr [eax + 0x78], edx
        mov    edx, dword ptr [esi + 0x190]
        mov    dword ptr [eax + 0x7c], ecx
        mov    ecx, dword ptr [esi + 0x198]
        mov    dword ptr [eax + 0x80], edx
        mov    edx, dword ptr [esi + 0x19c]
        mov    dword ptr [eax + 0x84], ecx
        mov    ecx, dword ptr [esi + 0x1a0]
        mov    dword ptr [eax + 0x88], edx
        mov    edx, dword ptr [esi + 0x1a4]
        mov    dword ptr [eax + 0x8c], ecx
        mov    ecx, dword ptr [esi + 0x1a8]
        pop    edi
        mov    dword ptr [eax], 0x98
        mov    dword ptr [eax + 0x90], edx
        mov    dword ptr [eax + 0x94], ecx
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    esi
        push    edx
        mov    ecx, edi
        call    FUN_005f0740
        fld    dword ptr [esi + 0x6c]
        fadd    dword ptr [esi + 0x70]
        mov    ecx, dword ptr [esi + 0x70]
        mov    eax, dword ptr [esi + 0x6c]
        mov    edx, dword ptr [esi + 0x74]
        fadd    dword ptr [esi + 0x78]
        mov    dword ptr [edi + 0x184], ecx
        mov    ecx, dword ptr [esi + 0x80]
        mov    dword ptr [edi + 0x190], ecx
        fadd    dword ptr [esi + 0x7c]
        mov    ecx, dword ptr [esi + 0x88]
        mov    dword ptr [edi + 0x180], eax
        mov    eax, dword ptr [esi + 0x78]
        fadd    dword ptr [esi + 0x88]
        mov    dword ptr [edi + 0x188], edx
        mov    edx, dword ptr [esi + 0x7c]
        mov    dword ptr [edi + 0x19c], ecx
        fadd    dword ptr [esi + 0x74]
        mov    ecx, dword ptr [esi + 0x94]
        mov    dword ptr [edi + 0x18c], eax
        mov    eax, dword ptr [esi + 0x84]
        fadd    dword ptr [esi + 0x80]
        mov    dword ptr [edi + 0x194], edx
        mov    edx, dword ptr [esi + 0x8c]
        mov    dword ptr [edi + 0x1a8], ecx
        fadd    dword ptr [esi + 0x84]
        mov    dword ptr [edi + 0x198], eax
        mov    eax, dword ptr [esi + 0x90]
        lea    ecx, [edi + 0x78]
        fadd    dword ptr [esi + 0x8c]
        mov    dword ptr [edi + 0x1a0], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [edi], 0x784050
        fstp    dword ptr [edi + 0x1ac]
        mov    dword ptr [edi + 0x1a4], eax
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 0x1a4]
        sub    ecx, 0
        mov    dword ptr [edi + 0x17c], 1
        je    L_35d0
        dec    ecx
        je    L_35c5
        dec    ecx
        jne    L_35d9
        mov    eax, dword ptr [eax + 0x50]
        mov    dword ptr [edi + 0x17c], eax
        jmp    L_35d9
L_35c5:
        mov    ecx, dword ptr [eax + 0x54]
        mov    dword ptr [edi + 0x17c], ecx
        jmp    L_35d9
L_35d0:
        mov    edx, dword ptr [eax + 0x4c]
        mov    dword ptr [edi + 0x17c], edx
L_35d9:
        fild    dword ptr [edi + 0x17c]
        mov    eax, edi
        fdivr    dword ptr [edi + 0x1ac]
        fstp    dword ptr [edi + 0x1b0]
        pop    edi
        pop    esi
        ret    0x10
    }
}
