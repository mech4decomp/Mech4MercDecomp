/*
 * FUN_00681f38 (extent 0x681f38-0x681ff6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2070;
extern int    g_007f268c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00682d20(void);
extern void __cdecl FUN_006832a0(void);

__declspec(naked) void FUN_00681f38(void)
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
        mov    eax, dword ptr [g_007f2070]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        je    L_1f89
        mov    eax, dword ptr [esi + 0x78]
        add    esi, 0x78
        mov    ecx, esi
        call    dword ptr [eax + 4]
        test    eax, eax
        je    L_1f89
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        fld    dword ptr [eax + 0x5c]
        mov    ecx, dword ptr [edi + 4]
        mov    edx, dword ptr [ecx]
        fcomp    dword ptr [edx + 0x30]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1f89
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
L_1f89:
        pop    edi
        xor    al, al
        pop    esi
        ret    8
        mov    eax, dword ptr [g_007f268c]
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 4]
        push    edi
        mov    edi, dword ptr [esi]
        mov    ebx, dword ptr [edi + 0x40]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_1fd5
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ebx
        push    ecx
        call    FUN_00682d20
        __emit 0xD9  // fstp dword ptr [esp] — reference uses NO-disp form D9 1C 24
__emit 0x1C
__emit 0x24
        add    edi, 0x18
        push    edi
        call    FUN_006832a0
        add    esp, 0x10
        cmp    al, 1
        jne    L_1fd5
        pop    edi
        pop    esi
        pop    ebx
        ret    8
L_1fd5:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [ecx]
        test    eax, eax
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        je    L_1ff4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_1ff4:
        pop    ecx
        ret    
        nop
        nop
        nop
        nop
        nop
        nop
        nop
    }
}
