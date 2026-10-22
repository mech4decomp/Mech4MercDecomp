/*
 * FUN_00701226 (extent 0x701226-0x7012aa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00701270(void);
extern void __cdecl FUN_007012b0(void);
extern void __cdecl FUN_007012e0(void);
extern void __cdecl FUN_00701330(void);

__declspec(naked) void FUN_00701226(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [ecx + 8]
        and    eax, 0xf00
        cmp    eax, 0x200
        je    L_125d
        cmp    eax, 0x300
        jne    L_1268
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_00701270
        xor    eax, eax
        ret    8
L_125d:
        mov    edx, dword ptr [esp + 4]
        push    ecx
        push    edx
        call    FUN_007012b0
L_1268:
        xor    eax, eax
        ret    8
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx + 8]
        and    eax, 0xff000
        cmp    eax, 0x1000
        je    L_129a
        cmp    eax, 0x2000
        jne    L_12a5
        mov    eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_00701330
        xor    eax, eax
        ret    8
L_129a:
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_007012e0
L_12a5:
        xor    eax, eax
        ret    8
    }
}
