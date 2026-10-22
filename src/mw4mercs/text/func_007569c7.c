/*
 * FUN_007569c7 (extent 0x7569c7-0x756a51) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern void __cdecl FUN_00757d30(void);
extern void __cdecl FUN_00757f60(void);

__declspec(naked) void FUN_007569c7(void)
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
        sub    esp, 8
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi]
        test    eax, eax
        pop    esi
        je    L_6a0b
        lea    ecx, [esp + 4]
        push    ecx
        lea    edx, [esp + 4]
        push    edx
        push    eax
        call    FUN_00757d30
        push    0x858ac8
        call    dword ptr [g_0076b100]
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    
L_6a0b:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        xor    eax, eax
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_6a44
        lea    eax, [esi + 8]
        push    eax
        push    ecx
        mov    dword ptr [eax], 0x14
        call    FUN_00757f60
L_6a44:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        ret    
    }
}
