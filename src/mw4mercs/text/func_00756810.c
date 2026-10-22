/*
 * FUN_00756810 (extent 0x756810-0x7568c2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern void __cdecl FUN_00758160(void);
extern void __cdecl FUN_00758240(void);

__declspec(naked) void FUN_00756810(void)
{
    __asm {
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x20], eax
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        mov    dword ptr [esi + 0x24], ecx
        mov    dword ptr [esi + 0x28], edx
        je    L_684f
        push    1
        mov    ecx, edx
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        call    FUN_00758160
L_684f:
        push    0x858ac8
        mov    byte ptr [esi + 0x75], 1
        call    dword ptr [g_0076b100]
        pop    esi
        ret    0xc
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
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x2c], eax
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        mov    dword ptr [esi + 0x30], ecx
        mov    dword ptr [esi + 0x34], edx
        je    L_68af
        push    1
        mov    ecx, edx
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        call    FUN_00758240
L_68af:
        push    0x858ac8
        mov    byte ptr [esi + 0x75], 1
        call    dword ptr [g_0076b100]
        pop    esi
        ret    0xc
    }
}
