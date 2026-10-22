/*
 * FUN_005a362b (extent 0x5a362b-0x5a3739) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004e68e0(void);
extern void __cdecl FUN_004e68f0(void);
extern void __cdecl FUN_004e8060(void);
extern void __cdecl FUN_005a3670(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_005f0820(void);

__declspec(naked) void FUN_005a362b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, ecx
        call    FUN_005a3670
        mov    eax, dword ptr [esi + 0x1b0]
        mov    ecx, esi
        mov    dword ptr [esp + 4], eax
        call    FUN_005f07c0
        fld    dword ptr [esp + 4]
        fadd    dword ptr [eax + 0x3b8]
        mov    ecx, esi
        fstp    dword ptr [eax + 0x3b8]
        call    FUN_005f0820
        pop    esi
        pop    ecx
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
        sub    esp, 0x2c
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        call    FUN_005f07c0
        mov    esi, eax
        lea    ebx, [esi + 0x370]
        push    ebx
        lea    ecx, [esp + 0x28]
        call    FUN_00416bc0
        add    esi, 0x384
        push    esi
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x28], 0x783ec4
        call    FUN_00416bc0
        mov    dword ptr [esp + 0x10], 0x783f04
        mov    dword ptr [esp + 0xc], 0
L_36b7:
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, ebx
        call    FUN_00416b60
        mov    esi, eax
        test    esi, esi
        je    L_36ea
        mov    ecx, dword ptr [edi + 0x1a4]
        push    ecx
        mov    ecx, esi
        call    FUN_004e68e0
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi + edx*4 + 0x180]
        push    eax
        mov    ecx, esi
        call    FUN_004e68f0
L_36ea:
        mov    eax, dword ptr [esp + 0xc]
        inc    eax
        cmp    eax, 8
        mov    dword ptr [esp + 0xc], eax
        jle    L_36b7
        lea    ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        je    L_3720
        mov    edi, dword ptr [edi + 0x1a8]
L_370b:
        push    edi
        mov    ecx, eax
        call    FUN_004e8060
        lea    ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_370b
L_3720:
        lea    ecx, [esp + 0x10]
        call    FUN_00416c60
        lea    ecx, [esp + 0x24]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x2c
        ret    
    }
}
