/*
 * FUN_00411a4e (extent 0x411a4e-0x411af7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2b0;
extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00417aa0(void);

__declspec(naked) void FUN_00411a4e(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 0xc
        lea    eax, [ecx + 0x18]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 4], eax
        mov    eax, dword ptr [eax]
        push    ecx
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 4], 0x76cc9c
        call    FUN_00417aa0
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_007b8810]
        push    ebx
        mov    ebx, dword ptr [ecx + 0x18]
        push    ebp
        push    esi
        push    edi
        push    eax
        push    8
        call    FUN_004084c0
        xor    ecx, ecx
        add    esp, 8
        cmp    eax, ecx
        je    L_1aa9
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax], ecx
        mov    dword ptr [esp + 0x10], eax
        jmp    L_1aad
L_1aa9:
        mov    dword ptr [esp + 0x10], ecx
L_1aad:
        mov    ebp, dword ptr [esp + 0x18]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        dec    ecx
        mov    edi, ecx
L_1abf:
        test    ebx, ebx
        je    L_1aeb
        mov    esi, dword ptr [ebx]
        test    esi, esi
        mov    ebx, dword ptr [ebx + 4]
        je    L_1aeb
        mov    ecx, dword ptr [esi + 0x14]
        push    edi
        push    ebp
        push    ecx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        test    eax, eax
        jne    L_1abf
        mov    ecx, dword ptr [esp + 0x10]
        push    esi
        call    FUN_004179b0
        jmp    L_1abf
L_1aeb:
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
    }
}
