/*
 * FUN_006a1f9b (extent 0x6a1f9b-0x6a205d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f23b0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005cbc50(void);
extern void __cdecl FUN_006a20a0(void);

__declspec(naked) void FUN_006a1f9b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x2fc]
        test    edi, edi
        mov    ebx, ecx
        je    L_2047
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_2047
        lea    esi, [edi + 0x5f4]
        lea    ecx, [esp + 0x14]
        cmp    ecx, esi
        mov    dword ptr [esp + 0x14], 1
        je    L_1ff3
        mov    ecx, esi
        call    FUN_005cbc50
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esi], eax
        and    eax, 0xfffffffe
        mov    dword ptr [esp + 0x14], eax
L_1ff3:
        lea    ecx, [esp + 0x14]
        call    FUN_005cbc50
        mov    ecx, dword ptr [ebx + 0xc8]
        mov    eax, dword ptr [ebx + 0xc4]
        cmp    eax, ecx
        je    L_2047
L_200c:
        cmp    dword ptr [eax], edi
        je    L_2017
        add    eax, 4
        cmp    eax, ecx
        jne    L_200c
L_2017:
        cmp    eax, ecx
        je    L_2047
        mov    esi, dword ptr [ebx + 0xc8]
        lea    edx, [eax + 4]
        cmp    edx, esi
        je    L_203e
        mov    ecx, esi
        sub    ecx, edx
        sar    ecx, 2
        test    ecx, ecx
        jle    L_203e
L_2033:
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [eax], edx
        add    eax, 4
        dec    ecx
        jne    L_2033
L_203e:
        add    esi, -4
        mov    dword ptr [ebx + 0xc8], esi
L_2047:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006a20a0
        ret    4
    }
}
