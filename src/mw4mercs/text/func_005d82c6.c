/*
 * FUN_005d82c6 (extent 0x5d82c6-0x5d83ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2464;
extern void __cdecl FUN_005d6bf0(void);
extern void __cdecl FUN_005da060(void);
extern void __cdecl FUN_005da270(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d82c6(void)
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
        mov    eax, dword ptr [g_007f2464]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [edi + 0x20]
        mov    edx, dword ptr [edi + 0x1c]
        lea    ecx, [edi + 0x1c]
        sub    eax, edx
        sar    eax, 2
        xor    esi, esi
        test    eax, eax
        jle    L_8300
L_82f3:
        cmp    dword ptr [edx], 0
        je    L_8300
        inc    esi
        add    edx, 4
        cmp    esi, eax
        jl    L_82f3
L_8300:
        cmp    esi, eax
        jne    L_832d
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 8]
        je    L_831e
        test    eax, eax
        je    L_8316
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax], edx
L_8316:
        add    eax, 4
        mov    dword ptr [ecx + 4], eax
        jmp    L_8336
L_831e:
        push    1
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_005da270
        jmp    L_8336
L_832d:
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + esi*4], ecx
L_8336:
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [edx], esi
        mov    byte ptr [edi + 0x34], 1
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2464]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, dword ptr [edi + 0x10]
        lea    ecx, [edi + 0x10]
        sub    eax, edx
        sar    eax, 2
        xor    esi, esi
        test    eax, eax
        jle    L_8380
L_8373:
        cmp    dword ptr [edx], 0
        je    L_8380
        inc    esi
        add    edx, 4
        cmp    esi, eax
        jl    L_8373
L_8380:
        cmp    esi, eax
        jne    L_83ad
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 8]
        je    L_839e
        test    eax, eax
        je    L_8396
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax], edx
L_8396:
        add    eax, 4
        mov    dword ptr [ecx + 4], eax
        jmp    L_83b6
L_839e:
        push    1
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_005da060
        jmp    L_83b6
L_83ad:
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + esi*4], ecx
L_83b6:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_83cb
        push    eax
        call    FUN_005d6bf0
        mov    eax, dword ptr [esp + 0xc]
L_83cb:
        mov    ecx, dword ptr [eax + 8]
        test    ecx, ecx
        je    L_83dc
        push    eax
        call    FUN_005d6bf0
        mov    eax, dword ptr [esp + 0xc]
L_83dc:
        mov    dword ptr [eax], esi
        mov    byte ptr [edi + 0x34], 1
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    4
    }
}
