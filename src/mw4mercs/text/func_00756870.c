/*
 * FUN_00756870 (extent 0x756870-0x756934) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern void __cdecl FUN_00758160(void);
extern void __cdecl FUN_00758240(void);
extern void __cdecl FUN_00758320(void);
extern void __cdecl FUN_00758380(void);

__declspec(naked) void FUN_00756870(void)
{
    __asm {
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
        push    edi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    edi, dword ptr [esi + 4]
        test    edi, edi
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x50], eax
        mov    dword ptr [esi + 0x54], ecx
        je    L_6920
        push    1
        mov    edx, eax
        push    edx
        push    edi
        call    FUN_00758320
        mov    eax, dword ptr [esp + 0x10]
        push    1
        push    eax
        push    edi
        call    FUN_00758380
        mov    ecx, dword ptr [esi + 0x28]
        mov    edx, dword ptr [esi + 0x24]
        mov    eax, dword ptr [esi + 0x20]
        push    1
        push    ecx
        push    edx
        push    eax
        push    edi
        call    FUN_00758160
L_6920:
        push    0x858ac8
        mov    byte ptr [esi + 0x75], 1
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        ret    8
    }
}
