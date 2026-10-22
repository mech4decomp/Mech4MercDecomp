/*
 * FUN_004d8ea6 (extent 0x4d8ea6-0x4d8f5a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004f3340(void);

__declspec(naked) void FUN_004d8ea6(void)
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
        sub    esp, 0x14
        add    ecx, 0x10
        push    ecx
        lea    ecx, [esp + 4]
        call    FUN_00416bc0
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        __emit 0xC7  // mov dword ptr [esp], 0x7730ec (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0xEC
__emit 0x30
__emit 0x77
__emit 0x00
        call    FUN_00416cc0
        test    eax, eax
        je    L_8ef0
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
L_8eda:
        mov    edx, dword ptr [eax]
        push    esi
        mov    ecx, eax
        call    dword ptr [edx + 0x1c]
        lea    ecx, [esp + 4]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_8eda
        pop    esi
L_8ef0:
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        call    FUN_00416c60
        add    esp, 0x14
        ret    4
        nop    
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x18
        push    esi
        add    ecx, 0x10
        push    edi
        push    ecx
        lea    ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x7730ec
        call    FUN_00416cc0
        test    eax, eax
        je    L_8f49
        mov    esi, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [ebp + 8]
L_8f33:
        push    esi
        push    edi
        mov    ecx, eax
        call    FUN_004f3340
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_8f33
L_8f49:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
