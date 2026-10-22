/*
 * FUN_005006d5 (extent 0x5006d5-0x500843) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b29c;
extern int    g_0076b420;
extern void __cdecl FUN_005005f0(void);
extern void __cdecl FUN_00500670(void);
extern void __cdecl FUN_00500810(void);
extern void __cdecl FUN_00500850(void);
extern void __cdecl FUN_0050de10(void);

__declspec(naked) void FUN_005006d5(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        sub    esp, 0x20
        push    eax
        push    ecx
        lea    edx, [esp + 8]
        push    0x776270
        push    edx
        call    dword ptr [g_0076b420]
        mov    eax, dword ptr [esp + 0x40]
        mov    edx, dword ptr [esp + 0x34]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        push    edx
        call    FUN_005005f0
        add    esp, 0x3c
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        sub    esp, 0x20
        push    eax
        push    ecx
        lea    edx, [esp + 8]
        push    0x776270
        push    edx
        call    dword ptr [g_0076b420]
        mov    eax, dword ptr [esp + 0x44]
        mov    ecx, dword ptr [esp + 0x40]
        push    eax
        mov    eax, dword ptr [esp + 0x38]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_00500670
        add    esp, 0x40
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [esp + 0xc]
        push    edx
        mov    dword ptr [esp + 8], ecx
        mov    ecx, dword ptr [eax + 0x18]
        push    0x500790
        push    ecx
        call    FUN_0050de10
        add    esp, 0x14
        ret    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 4]
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx]
        push    edx
        push    ecx
        call    dword ptr [eax]
        add    esp, 0xc
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [eax]
        push    ebp
        push    esi
        push    edi
        or    ecx, 0xffffffff
        xor    eax, eax
        xor    ebp, ebp
        xor    esi, esi
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        je    L_07f8
L_07cc:
        xor    ecx, ecx
        mov    cl, byte ptr [esi + ebx]
        push    ecx
        call    FUN_00500810
        imul    ebp, ebp, 0x63306ce7
        movsx    edx, al
        sub    edx, ebp
        add    esp, 4
        or    ecx, 0xffffffff
        xor    eax, eax
        inc    esi
        mov    edi, ebx
        repne scasb
        not    ecx
        dec    ecx
        cmp    esi, ecx
        mov    ebp, edx
        jb    L_07cc
L_07f8:
        mov    eax, ebp
        xor    edx, edx
        div    dword ptr [esp + 0x18]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        mov    eax, edx
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
        mov    al, byte ptr [esp + 4]
        cmp    al, 0x7f
        movsx    eax, al
        jg    L_0825
        push    eax
        call    dword ptr [g_0076b29c]
        add    esp, 4
L_0825:
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_00500850
        add    esp, 8
        ret    
    }
}
