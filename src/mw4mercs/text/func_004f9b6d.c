/*
 * FUN_004f9b6d (extent 0x4f9b6d-0x4f9c3e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00775c18;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004f9b40(void);

__declspec(naked) void FUN_004f9b6d(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x175], al
        ret    4
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        fmul    dword ptr [g_00775c18]
        fstp    dword ptr [ecx + 0x178]
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
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [ecx + 0x17c], al
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x180], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x184], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x188], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x18c], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x190], eax
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x194], eax
        ret    4
        nop    
        nop    
        nop    
        mov    al, 1
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
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004f9b40
        test    byte ptr [esp + 8], 1
        je    L_9c38
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9c38:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
