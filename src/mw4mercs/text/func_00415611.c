/*
 * FUN_00415611 (extent 0x415611-0x4156b7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415920(void);
extern void __cdecl FUN_00415980(void);
extern void __cdecl FUN_00415a50(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00415bd0(void);

__declspec(naked) void FUN_00415611(void)
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
        jmp    FUN_00415bd0
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
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        je    L_5650
L_563a:
        mov    eax, dword ptr [eax + 0xc]
        test    eax, eax
        je    L_5649
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_5649:
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        jne    L_563a
L_5650:
        pop    esi
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
    }
}
