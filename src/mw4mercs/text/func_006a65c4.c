/*
 * FUN_006a65c4 (extent 0x6a65c4-0x6a664f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_0082db28;
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006a65c4(void)
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
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x795458
        je    L_65e9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_65e9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [g_0082db28], al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x799e44
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x795450
        je    L_6649
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6649:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
