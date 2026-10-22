/*
 * FUN_004ebaa7 (extent 0x4ebaa7-0x4ebb61) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004ebb70(void);
extern void __cdecl FUN_004ec2e0(void);
extern void __cdecl FUN_004ec350(void);
extern void __cdecl FUN_007242d0(void);
extern void __cdecl FUN_00724350(void);
extern void __cdecl FUN_00725080(void);

__declspec(naked) void FUN_004ebaa7(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi + 0x48]
        mov    edx, dword ptr [edi + 0x50]
        mov    esi, ecx
        mov    ecx, dword ptr [edi + 0x4c]
        mov    dword ptr [esi + 0x38], eax
        fld    dword ptr [esi + 0x38]
        mov    eax, edx
        fchs    
        push    eax
        push    ecx
        push    ecx
        __emit 0xD9  // fstp dword ptr [esp] — reference uses NO-disp form D9 1C 24
__emit 0x1C
__emit 0x24
        mov    dword ptr [esi + 0x40], edx
        mov    edx, dword ptr [esi + 0x18]
        push    0x20
        push    edx
        mov    dword ptr [esi + 0x3c], ecx
        call    FUN_00724350
        mov    ecx, esi
        call    FUN_004ebb70
        push    edi
        mov    ecx, esi
        call    FUN_004ec350
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
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 0x18]
        push    edi
        call    FUN_007242d0
        sub    eax, 2
        je    L_bb5c
        sub    eax, 2
        jne    L_bb25
        cmp    dword ptr [esi + 0x24], 1
        jne    L_bb55
        push    1
        push    edi
        call    FUN_00725080
L_bb25:
        mov    ecx, esi
        call    FUN_004ebb70
        fld    dword ptr [esi + 0x58]
        mov    ecx, dword ptr [esi + 0x14]
        fcomp    dword ptr [ecx + 0x38]
        fnstsw  ax
        test    ah, 1
        jne    L_bb49
        fld    dword ptr [esi + 0x58]
        fcomp    dword ptr [ecx + 0x44]
        fnstsw  ax
        test    ah, 0x41
        jne    L_bb5c
L_bb49:
        mov    ecx, esi
        call    FUN_004ec2e0
        pop    edi
        pop    esi
        ret    8
L_bb55:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
L_bb5c:
        pop    edi
        pop    esi
        ret    8
        nop
    }
}
