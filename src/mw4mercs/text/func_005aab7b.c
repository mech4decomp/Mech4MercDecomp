/*
 * FUN_005aab7b (extent 0x5aab7b-0x5aac1f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005f07c0(void);

__declspec(naked) void FUN_005aab7b(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17fc]
        test    al, al
        je    L_ac1b
        cmp    dword ptr [esi + 0x17c], -1
        je    L_ac1b
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        je    L_abfd
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 0x30]
        sub    eax, 0x84
        je    L_abe9
        dec    eax
        jne    L_abfd
        push    0x13
        jmp    L_abeb
L_abe9:
        push    0x12
L_abeb:
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
L_abfd:
        mov    eax, dword ptr [esi + 0x17c]
        mov    ecx, dword ptr [esp + 8]
        sub    eax, ecx
        mov    dword ptr [esi + 0x17c], eax
        jns    L_ac1b
        mov    dword ptr [esi + 0x17c], 0
L_ac1b:
        pop    esi
        ret    4
    }
}
