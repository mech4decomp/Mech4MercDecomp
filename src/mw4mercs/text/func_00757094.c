/*
 * FUN_00757094 (extent 0x757094-0x757109) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aadc8;
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_00740db0(void);

__declspec(naked) void FUN_00757094(void)
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_70b7
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi + 8], 0
L_70b7:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_70c9
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi], 0
L_70c9:
        push    edi
        mov    edi, dword ptr [esi + 4]
        test    edi, edi
        je    L_70f2
        mov    eax, dword ptr [esi + 0x78]
        mov    ecx, dword ptr [g_008aadc8]
        push    1
        neg    eax
        push    eax
        push    ecx
        call    FUN_006f4940
        push    edi
        call    FUN_00740db0
        mov    dword ptr [esi + 4], 0
L_70f2:
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        pop    edi
        je    L_7107
        push    eax
        call    FUN_00740db0
        mov    dword ptr [esi + 0xc], 0
L_7107:
        pop    esi
        ret    
    }
}
