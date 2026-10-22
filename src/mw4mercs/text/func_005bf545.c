/*
 * FUN_005bf545 (extent 0x5bf545-0x5bf617) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007f22b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_005bf545(void)
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
        mov    edx, dword ptr [esp + 4]
        mov    al, byte ptr [edx + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    cl, byte ptr [esi + 0x18]
        cmp    cl, al
        jne    L_f581
        push    edi
        mov    di, word ptr [edx + 0x1a]
        cmp    di, word ptr [esi + 0x1a]
        pop    edi
        jne    L_f575
        xor    eax, eax
        pop    esi
        ret    8
L_f575:
        cmp    cl, al
        jne    L_f581
        mov    ax, word ptr [edx + 0x1a]
        cmp    word ptr [esi + 0x1a], ax
L_f581:
        sbb    eax, eax
        neg    eax
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        mov    cl, byte ptr [edx + 0x18]
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    al, byte ptr [esi]
        cmp    cl, al
        jne    L_f5d0
        push    edi
        mov    di, word ptr [esi + 2]
        cmp    di, word ptr [edx + 0x1a]
        pop    edi
        jne    L_f5c4
        xor    eax, eax
        pop    esi
        ret    8
L_f5c4:
        cmp    cl, al
        jne    L_f5d0
        mov    ax, word ptr [esi + 2]
        cmp    word ptr [edx + 0x1a], ax
L_f5d0:
        sbb    eax, eax
        neg    eax
        neg    al
        pop    esi
        sbb    eax, eax
        and    eax, 2
        dec    eax
        ret    8
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f60c
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x787204
        push    0x47f
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007f22b0], eax
        ret    
L_f60c:
        mov    dword ptr [g_007f22b0], 0
        ret    
    }
}
