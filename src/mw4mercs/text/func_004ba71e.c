/*
 * FUN_004ba71e (extent 0x4ba71e-0x4ba9c4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa50;
extern int    g_007daa54;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004ba600(void);
extern void __cdecl FUN_004c1690(void);
extern void __cdecl FUN_004c1730(void);
extern void __cdecl FUN_004c1890(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004ba71e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007daa54]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004c1730
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x184], eax
        mov    dword ptr [esi + 0x18c], eax
        mov    dword ptr [esi + 0x188], eax
        mov    dword ptr [esi + 0x190], eax
        mov    eax, dword ptr [esi + 0x18]
        mov    ecx, eax
        shr    ecx, 2
        and    ecx, 0x3f
        mov    edx, dword ptr [ecx*4 + 0x7b34c8]
        mov    ecx, eax
        shr    ecx, 5
        and    ecx, 0x1f
        lea    ecx, [ecx + ecx*2]
        mov    dword ptr [esi + 0x1c], edx
        shl    ecx, 2
        mov    edx, dword ptr [ecx + 0x7b3b28]
        mov    dword ptr [esi + 0x130], edx
        mov    edx, dword ptr [ecx + 0x7b3b2c]
        mov    ecx, dword ptr [ecx + 0x7b3b30]
        shr    eax, 0xa
        and    eax, 1
        mov    dword ptr [esi + 0x134], edx
        mov    edx, dword ptr [eax*4 + 0x7b35c8]
        mov    eax, 0x3f800000
        mov    dword ptr [esi + 0x178], eax
        mov    dword ptr [esi + 0x17c], eax
        mov    dword ptr [esi + 0x180], eax
        mov    dword ptr [esi + 0x184], eax
        mov    dword ptr [esi + 0x188], eax
        mov    dword ptr [esi + 0x18c], eax
        mov    dword ptr [esi + 0x190], eax
        mov    dword ptr [esi], 0x77107c
        mov    dword ptr [esi + 0x138], ecx
        mov    dword ptr [esi + 0x13c], edx
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_007daa54]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004c1690
        mov    eax, 0xbf800000
        mov    dword ptr [esi + 0x184], eax
        mov    dword ptr [esi + 0x18c], eax
        mov    dword ptr [esi + 0x188], eax
        mov    dword ptr [esi + 0x190], eax
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, eax
        shr    edx, 2
        and    edx, 0x3f
        mov    ecx, dword ptr [edx*4 + 0x7b34c8]
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, eax
        shr    ecx, 5
        and    ecx, 0x1f
        lea    ecx, [ecx + ecx*2]
        shl    ecx, 2
        mov    edx, dword ptr [ecx + 0x7b3b28]
        mov    dword ptr [esi + 0x130], edx
        mov    edx, dword ptr [ecx + 0x7b3b2c]
        mov    ecx, dword ptr [ecx + 0x7b3b30]
        shr    eax, 0xa
        and    eax, 1
        mov    dword ptr [esi + 0x134], edx
        mov    edx, dword ptr [eax*4 + 0x7b35c8]
        mov    eax, 0x3f800000
        mov    dword ptr [esi + 0x178], eax
        mov    dword ptr [esi + 0x17c], eax
        mov    dword ptr [esi + 0x180], eax
        mov    dword ptr [esi + 0x184], eax
        mov    dword ptr [esi + 0x188], eax
        mov    dword ptr [esi + 0x18c], eax
        mov    dword ptr [esi + 0x190], eax
        mov    dword ptr [esi], 0x77107c
        mov    dword ptr [esi + 0x138], ecx
        mov    dword ptr [esi + 0x13c], edx
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [g_007daa50]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x194
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a8f0
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    1
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004ba600
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a8f0:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0xc]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [g_007daa50]
        push    edx
        call    FUN_006f4950
        push    0x194
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_a94f
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_004ba600
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_a94f:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c1890
        mov    eax, dword ptr [edi]
        push    0xc
        lea    ecx, [esi + 0x178]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    0x10
        add    esi, 0x184
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
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
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 2
        and    eax, 0x3f
        mov    edx, dword ptr [eax*4 + 0x7b34c8]
        mov    dword ptr [ecx + 0x1c], edx
        ret    
    }
}
