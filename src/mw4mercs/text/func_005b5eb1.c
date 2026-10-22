/*
 * FUN_005b5eb1 (extent 0x5b5eb1-0x5b5f83) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00770168;
extern float  g_0077dff8;
extern float  g_0080da9c;
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_005fa300(void);

__declspec(naked) void FUN_005b5eb1(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [esp + 4], 3
        push    esi
        mov    esi, ecx
        jne    L_5f22
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_5f22
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 0x12
        je    L_5f22
        mov    edx, dword ptr [ecx]
        push    0
        push    0x12
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        je    L_5efb
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x12c]
L_5efb:
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        push    1
        push    esi
        add    eax, 0x68
        push    eax
        mov    ecx, esi
        call    FUN_005fa300
        test    eax, eax
        je    L_5f22
        push    eax
        lea    ecx, [esi + 0x54c]
        call    FUN_0041fcd0
L_5f22:
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
        fld    dword ptr [ecx + 0x540]
        fcomp    dword ptr [g_0080da9c]
        fnstsw  ax
        test    ah, 1
        je    L_5f65
        fld    dword ptr [g_0080da9c]
        fadd    dword ptr [g_00770168]
        fstp    dword ptr [ecx + 0x540]
L_5f65:
        fld    dword ptr [ecx + 0x540]
        fcomp    dword ptr [g_0077dff8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5f82
        mov    dword ptr [ecx + 0x540], 0x44480000
L_5f82:
        ret    
    }
}
