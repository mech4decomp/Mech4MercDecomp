/*
 * FUN_004f0ba5 (extent 0x4f0ba5-0x4f0cab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc83c;
extern int    g_007dc860;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f0ba5(void)
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
        mov    eax, dword ptr [esp + 4]
        mov    cx, word ptr [eax + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    dx, word ptr [esi + 0x18]
        cmp    cx, dx
        jne    L_0bf5
        push    edi
        mov    di, word ptr [eax + 0x1a]
        cmp    di, word ptr [esi + 0x1a]
        pop    edi
        jne    L_0bd8
        xor    eax, eax
        pop    esi
        ret    8
L_0bd8:
        cmp    cx, dx
        jne    L_0bf5
        mov    ax, word ptr [eax + 0x1a]
        cmp    word ptr [esi + 0x1a], ax
        pop    esi
        sbb    eax, eax
        neg    eax
        neg    al
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_0bf5:
        xor    eax, eax
        cmp    cx, dx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    dx, word ptr [eax + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    cx, word ptr [esi]
        cmp    cx, dx
        jne    L_0c54
        push    edi
        mov    di, word ptr [esi + 2]
        cmp    di, word ptr [eax + 0x1a]
        pop    edi
        jne    L_0c37
        xor    eax, eax
        pop    esi
        ret    8
L_0c37:
        cmp    cx, dx
        jne    L_0c54
        mov    cx, word ptr [esi + 2]
        cmp    word ptr [eax + 0x1a], cx
        pop    esi
        sbb    eax, eax
        neg    eax
        neg    al
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
L_0c54:
        xor    eax, eax
        cmp    cx, dx
        setg    al
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0ca0
        mov    ecx, dword ptr [g_007dc860]
        push    0
        push    0
        push    ecx
        push    0x774db0
        push    0x219
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc83c], eax
        ret    
L_0ca0:
        mov    dword ptr [g_007dc83c], 0
        ret    
    }
}
