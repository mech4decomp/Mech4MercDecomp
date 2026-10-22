/*
 * FUN_005982eb (extent 0x5982eb-0x598375) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1fcc;
extern int    g_007f1fd0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416bf0(void);

__declspec(naked) void FUN_005982eb(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8317
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x7830dc
        mov    eax, esi
        pop    esi
        ret    
L_8317:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_836f
        mov    ecx, dword ptr [g_007f1fd0]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007f1fcc]
        jne    L_836f
        push    edi
        mov    edi, dword ptr [g_007f1fd0]
        test    edi, edi
        je    L_835e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_835e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007f1fd0], 0
        pop    esi
        ret    4
L_836f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
