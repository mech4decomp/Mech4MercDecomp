/*
 * FUN_004f1073 (extent 0x4f1073-0x4f10fc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc840;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004f0e50(void);
extern void __cdecl FUN_004f0f90(void);

__declspec(naked) void FUN_004f1073(void)
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
        sub    esp, 8
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        call    FUN_004f0e50
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        or    edi, 0xffffffff
        mov    ecx, esi
        mov    word ptr [esp + 0x10], di
        mov    word ptr [esp + 0x12], 0
        call    dword ptr [eax + 0x20]
        cmp    dword ptr [esp + 0xc], edi
        je    L_10c6
L_10b2:
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        cmp    dword ptr [esp + 0xc], edi
        jne    L_10b2
L_10c6:
        pop    edi
        pop    esi
        add    esp, 8
        ret    4
        nop    
        nop    
        push    0x28
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_10f9
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007dc840]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004f0f90
        ret    
L_10f9:
        xor    eax, eax
        ret    
    }
}
