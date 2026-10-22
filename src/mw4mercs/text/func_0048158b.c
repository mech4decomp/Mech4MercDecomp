/*
 * FUN_0048158b (extent 0x48158b-0x48170d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076f960;
extern int    g_007da848;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_00482160(void);
extern void __cdecl FUN_004821a0(void);
extern void __cdecl FUN_004912b0(void);

__declspec(naked) void FUN_0048158b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        mov    esi, dword ptr [esp + 0x20]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_00482160
        mov    eax, dword ptr [edi + 0x8c]
        test    eax, eax
        je    L_1600
        add    eax, 0xc
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_004912b0
        mov    eax, dword ptr [esp + 8]
        and    eax, 0x3fff
        jg    L_15c7
        xor    eax, eax
        jmp    L_15d1
L_15c7:
        mov    ecx, dword ptr [g_007da848]
        mov    eax, dword ptr [ecx + eax*4 + 0x24]
L_15d1:
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        lea    ecx, [esp + 0x28]
        call    FUN_00412570
        lea    eax, [esp + 0x24]
        push    eax
        push    esi
        call    FUN_00412a50
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 8
        test    eax, eax
        je    L_1633
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1633
        jmp    L_162a
L_1600:
        push    0x76b768
        lea    ecx, [esp + 0x28]
        call    FUN_00412570
        push    eax
        push    esi
        call    FUN_00412a50
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 8
        test    eax, eax
        je    L_1633
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1633
L_162a:
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_1633:
        mov    edx, dword ptr [esi]
        push    4
        add    edi, 0x90
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    esi, ecx
        push    edi
        call    FUN_004821a0
        mov    eax, dword ptr [esi + 0x8c]
        test    eax, eax
        je    L_16a1
        add    eax, 0xc
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_004912b0
        mov    eax, dword ptr [esp + 8]
        and    eax, 0x3fff
        jg    L_1687
        xor    eax, eax
        jmp    L_1691
L_1687:
        mov    ecx, dword ptr [g_007da848]
        mov    eax, dword ptr [ecx + eax*4 + 0x24]
L_1691:
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        push    0x76e100
        mov    ecx, edi
        call    FUN_00411c40
L_16a1:
        fld    dword ptr [esi + 0x90]
        push    ecx
        fmul    dword ptr [g_0076f960]
        mov    ecx, edi
        fstp    dword ptr [esp]
        push    0x76e0f8
        call    FUN_00411dc0
        pop    edi
        pop    esi
        add    esp, 0x18
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx + 0x90], edx
        fld    dword ptr [ecx + 0x90]
        fptan    
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fstp    dword ptr [ecx + 0x94]
        fld    dword ptr [ecx + 0x90]
        fcos    
        fstp    dword ptr [ecx + 0x98]
        ret    4
    }
}
