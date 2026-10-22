/*
 * FUN_0040457d (extent 0x40457d-0x404614) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004cefd0(void);
extern void __cdecl FUN_004cefe0(void);
extern void __cdecl FUN_004ceff0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006fcd60(void);

__declspec(naked) void FUN_0040457d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 8
        lea    eax, [esp + 4]
        push    eax
        lea    ecx, [esp + 4]
        push    ecx
        call    FUN_006fcd60
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        lea    ecx, [esp + 8]
        push    ecx
        call    FUN_006fcd60
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 0xc]
        cmp    eax, 1
        je    L_45e4
        push    eax
        push    0x76babc
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_45de
        int 3    
L_45de:
        xor    eax, eax
        pop    ebp
        ret    0xc
L_45e4:
        mov    eax, dword ptr [ebp + 0x10]
        mov    eax, dword ptr [eax]
        dec    eax
        je    L_460b
        dec    eax
        je    L_4602
        dec    eax
        je    L_45f9
        or    eax, 0xffffffff
        pop    ebp
        ret    0xc
L_45f9:
        call    FUN_004ceff0
        pop    ebp
        ret    0xc
L_4602:
        call    FUN_004cefe0
        pop    ebp
        ret    0xc
L_460b:
        call    FUN_004cefd0
        pop    ebp
        ret    0xc
    }
}
