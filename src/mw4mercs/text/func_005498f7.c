/*
 * FUN_005498f7 (extent 0x5498f7-0x5499ab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007ddd74;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00549a70(void);
extern void __cdecl FUN_00630920(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005498f7(void)
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
        push    0x970
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_9942
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007ddd74]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00549a70
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_9942:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx + 0x320]
        fcomp    dword ptr [esp + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_99a8
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        xor    edx, dword ptr [g_007dab40]
        lea    eax, [edx + 0x40]
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        je    L_99a8
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x320], edx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x50]
        test    edx, edx
        je    L_99a8
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [esp + 4]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x50]
        push    edx
        call    FUN_00630920
L_99a8:
        ret    4
    }
}
