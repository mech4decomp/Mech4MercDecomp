/*
 * FUN_004eb46b (extent 0x4eb46b-0x4eb4e2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc7c4;
extern int    g_007dc7c8;
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004eb4f0(void);

__declspec(naked) void FUN_004eb46b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        mov    ecx, dword ptr [g_007dc7c8]
        call    FUN_00416110
        test    eax, eax
        je    L_b4df
        mov    ecx, dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    edx
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    edx
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    edx
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    edx
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    edx
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    edx
        mov    edx, dword ptr [g_007dc7c4]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004eb4f0
        ret    
L_b4df:
        xor    eax, eax
        ret    
    }
}
