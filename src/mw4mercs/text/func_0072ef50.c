/*
 * FUN_0072ef50 (extent 0x72ef50-0x72efc9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00849308;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_0072f0c0(void);
extern void __cdecl FUN_0072f4c0(void);

__declspec(naked) void FUN_0072ef50(void)
{
    __asm {
        mov    eax, dword ptr [g_00849308]
        push    eax
        push    0x24
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_ef7e
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_0072f0c0
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [ecx], eax
        ret    0xc
L_ef7e:
        mov    edx, dword ptr [esp + 4]
        xor    eax, eax
        mov    dword ptr [edx], eax
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00849308]
        push    eax
        push    0x24
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_efbe
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_0072f4c0
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [ecx], eax
        ret    0xc
L_efbe:
        mov    edx, dword ptr [esp + 4]
        xor    eax, eax
        mov    dword ptr [edx], eax
        ret    0xc
    }
}
