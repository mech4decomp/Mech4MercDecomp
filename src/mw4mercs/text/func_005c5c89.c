/*
 * FUN_005c5c89 (extent 0x5c5c89-0x5c5d1f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005c5c89(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x530]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esi + 0x534], ecx
        mov    dword ptr [esi + 0x538], edx
        mov    dword ptr [esi + 0x53c], eax
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
        nop    
        push    esi
        mov    esi, ecx
        fld    dword ptr [esi + 0x568]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_5cff
        push    0
        call    FUN_00707e70
        fsub    dword ptr [esi + 0x568]
        fadd    dword ptr [esi + 0x56c]
        fstp    dword ptr [esi + 0x56c]
L_5cff:
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x568]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x60]
        mov    dword ptr [esi + 0x570], eax
        pop    esi
        ret    4
    }
}
