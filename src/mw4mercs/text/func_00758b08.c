/*
 * FUN_00758b08 (extent 0x758b08-0x758b90) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008bc00c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00717c10(void);
extern void __cdecl FUN_0075d8f0(void);

__declspec(naked) void FUN_00758b08(void)
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
        push    ebx
        mov    ebx, ecx
        push    esi
        mov    esi, dword ptr [ebx + 0x18]
        test    esi, esi
        je    L_8b2d
L_8b1b:
        mov    eax, esi
        mov    esi, dword ptr [esi + 0x80]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_8b1b
L_8b2d:
        mov    esi, dword ptr [ebx + 0x20]
        test    esi, esi
        je    L_8b4d
        push    edi
L_8b35:
        mov    edi, esi
        mov    eax, dword ptr [edi + 4]
        mov    esi, dword ptr [esi]
        push    eax
        call    FUN_00717c10
        push    edi
        call    FUN_006f4230
        test    esi, esi
        jne    L_8b35
        pop    edi
L_8b4d:
        mov    esi, dword ptr [ebx + 0x1c]
        test    esi, esi
        je    L_8b6b
        mov    ecx, esi
        call    FUN_0075d8f0
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx + 0x1c], 0
L_8b6b:
        cmp    ebx, dword ptr [g_008bc00c]
        mov    eax, dword ptr [ebx + 0x24]
        jne    L_8b7d
        mov    dword ptr [g_008bc00c], eax
        jmp    L_8b83
L_8b7d:
        mov    ecx, dword ptr [ebx + 0x28]
        mov    dword ptr [ecx + 0x24], eax
L_8b83:
        test    eax, eax
        je    L_8b8d
        mov    edx, dword ptr [ebx + 0x28]
        mov    dword ptr [eax + 0x28], edx
L_8b8d:
        pop    esi
        pop    ebx
        ret    
    }
}
