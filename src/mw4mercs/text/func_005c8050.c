/*
 * FUN_005c8050 (extent 0x5c8050-0x5c80d5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_007878e8;
extern int    g_007f2460;
extern void __cdecl FUN_005c7f70(void);
extern void __cdecl FUN_005eb070(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c8050(void)
{
    __asm {
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    ecx, esi
        call    FUN_005c7f70
        mov    eax, dword ptr [esi + 0x170]
        mov    esi, dword ptr [eax + 0x40c]
        mov    ecx, dword ptr [eax + 0x410]
        sub    ecx, esi
        sar    ecx, 2
        pop    esi
        je    L_8090
        mov    edx, dword ptr [eax + 0x40c]
        mov    ecx, dword ptr [edx]
        test    ecx, ecx
        je    L_8090
        call    FUN_005eb070
L_8090:
        jmp    FUN_006f49a0
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
        fld    dword ptr [ecx + 0x1bc]
        fld    dword ptr [g_007878e8]
        fadd    dword ptr [g_0076d064]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_80be
        mov    al, 1
        ret    
L_80be:
        movsx    eax, byte ptr [ecx + 0x54a]
        movsx    ecx, byte ptr [ecx + 0x549]
        add    eax, ecx
        cmp    eax, 1
        setg    al
        ret    
    }
}
