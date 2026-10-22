/*
 * FUN_006cc6f9 (extent 0x6cc6f9-0x6cc7d8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0082f308;
extern int    g_0082f320;
extern int    g_0082f328;
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006cc730(void);
extern void __cdecl FUN_006cc7e0(void);
extern void __cdecl FUN_006ccb40(void);
extern void __cdecl FUN_006ccd90(void);

__declspec(naked) void FUN_006cc6f9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [g_0082f320]
        push    edi
        mov    edi, dword ptr [g_0082f308]
        call    FUN_006cc730
        mov    dword ptr [g_0082f308], edi
        pop    edi
        mov    dword ptr [g_0082f320], esi
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
        sub    esp, 0x104
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor    edi, edi
L_c73c:
        call    FUN_006ccd90
        fstp    dword ptr [esp + 0x10]
        call    FUN_006ccb40
        mov    ebp, eax
        mov    eax, dword ptr [g_0082f328]
        cmp    byte ptr [eax], 0x20
        jne    L_c75c
        inc    eax
        mov    dword ptr [g_0082f328], eax
L_c75c:
        test    edi, edi
        je    L_c79e
        mov    ebx, ebp
        and    ebx, 0xff
        lea    esi, [edi*4 - 4]
L_c76f:
        mov    eax, dword ptr [esp + esi + 0x94]
        mov    ecx, eax
        and    ecx, 0xff
        cmp    ebx, ecx
        jg    L_c79e
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        mov    eax, dword ptr [esp + esi + 0x18]
        push    edx
        push    eax
        call    FUN_006cc7e0
        fstp    dword ptr [esp + 0x10]
        dec    edi
        sub    esi, 4
        test    edi, edi
        jne    L_c76f
L_c79e:
        test    ebp, ebp
        je    L_c7c9
        cmp    edi, 0x20
        jne    L_c7b4
        push    0x79e2ec
        call    FUN_006bfa50
        add    esp, 4
L_c7b4:
        fld    dword ptr [esp + 0x10]
        mov    dword ptr [esp + edi*4 + 0x94], ebp
        fstp    dword ptr [esp + edi*4 + 0x14]
        inc    edi
        jmp    L_c73c
L_c7c9:
        fld    dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x104
        ret    
    }
}
