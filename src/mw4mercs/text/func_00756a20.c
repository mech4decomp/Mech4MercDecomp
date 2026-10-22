/*
 * FUN_00756a20 (extent 0x756a20-0x756a9c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern void __cdecl FUN_00757f60(void);
extern void __cdecl FUN_00758470(void);

__declspec(naked) void FUN_00756a20(void)
{
    __asm {
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
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        push    1
        push    ecx
        push    eax
        mov    dword ptr [esi + 0x38], eax
        mov    eax, dword ptr [esi + 4]
        push    eax
        mov    dword ptr [esi + 0x3c], ecx
        call    FUN_00758470
        push    0x858ac8
        mov    byte ptr [esi + 0x75], 1
        call    dword ptr [g_0076b100]
        pop    esi
        ret    8
    }
}
