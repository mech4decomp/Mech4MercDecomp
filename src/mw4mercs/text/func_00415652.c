/*
 * FUN_00415652 (extent 0x415652-0x4156ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415720(void);
extern void __cdecl FUN_00415920(void);
extern void __cdecl FUN_00415980(void);
extern void __cdecl FUN_00415a50(void);
extern void __cdecl FUN_00415be0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00415652(void)
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
        sub    esp, 0x14
        push    esi
        push    ecx
        lea    ecx, [esp + 8]
        call    FUN_00415920
        lea    ecx, [esp + 4]
        xor    esi, esi
        call    FUN_00415a50
        test    eax, eax
        je    L_568b
L_567d:
        lea    ecx, [esp + 4]
        inc    esi
        call    FUN_00415a50
        test    eax, eax
        jne    L_567d
L_568b:
        lea    ecx, [esp + 4]
        call    FUN_00415980
        mov    eax, esi
        pop    esi
        add    esp, 0x14
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_56b2
        int 3    
L_56b2:
        xor    eax, eax
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
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edi, eax
        push    edi
        mov    ecx, esi
        call    FUN_00415720
        push    edi
        push    0
        mov    ecx, esi
        call    FUN_00415be0
        pop    edi
        pop    esi
        ret    8
    }
}
