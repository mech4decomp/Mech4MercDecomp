/*
 * FUN_0065e54c (extent 0x65e54c-0x65e5e7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dd234;
extern int    g_0080da70;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0065e630(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0065e54c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [eax + 0x170]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    ecx, edi
        call    FUN_0064e100
        mov    esi, dword ptr [eax + 4]
        mov    ecx, edi
        call    FUN_0064e100
        mov    ecx, dword ptr [eax]
        xor    eax, eax
        cmp    ecx, esi
        je    L_e589
        mov    ebx, dword ptr [ebx + 0x30]
L_e57d:
        cmp    dword ptr [ecx], ebx
        je    L_e589
        add    ecx, 4
        inc    eax
        cmp    ecx, esi
        jne    L_e57d
L_e589:
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        nop    
        mov    eax, dword ptr [g_0080da70]
        test    eax, eax
        jne    L_e5e4
        mov    eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_e5d0
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        mov    ecx, eax
        call    FUN_0065e630
        mov    dword ptr [g_0080da70], eax
        call    FUN_006f49a0
        mov    eax, dword ptr [g_0080da70]
        inc    dword ptr [eax]
        ret    
L_e5d0:
        mov    dword ptr [g_0080da70], 0
        call    FUN_006f49a0
        mov    eax, dword ptr [g_0080da70]
L_e5e4:
        inc    dword ptr [eax]
        ret    
    }
}
