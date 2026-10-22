/*
 * FUN_006a244e (extent 0x6a244e-0x6a24d9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00799d40;
extern void __cdecl FUN_00662ee0(void);
extern void __cdecl FUN_00665670(void);
extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a4d50(void);

__declspec(naked) void FUN_006a244e(void)
{
    __asm {
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        mov    dword ptr [esp + 8], 0
        call    dword ptr [eax + 0xd4]
        cmp    al, 1
        jne    L_24a2
        mov    ecx, dword ptr [edi + 0xc]
        push    ecx
        push    1
        push    0
        push    esi
        call    FUN_006a4d50
        fcomp    dword ptr [g_00799d40]
        add    esp, 0x10
        fnstsw  ax
        test    ah, 1
        jne    L_24a2
        mov    edx, dword ptr [edi + 8]
        push    edx
        push    esi
        call    FUN_00662ee0
        add    esp, 8
        mov    dword ptr [esp + 8], 0x3f800000
L_24a2:
        push    0
        push    1
        push    1
        push    0
        push    esi
        call    FUN_00665670
        fld    dword ptr [esp + 0x1c]
        add    esp, 0x14
        pop    edi
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_006a22a0
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi], 0x799d68
        mov    eax, esi
        pop    esi
        ret    
    }
}
