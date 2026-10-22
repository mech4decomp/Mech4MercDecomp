/*
 * FUN_007314f0 (extent 0x7314f0-0x731571) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b104;
extern int    g_0076b130;
extern int    g_0076b134;
extern int    g_0076b294;

__declspec(naked) void FUN_007314f0(void)
{
    __asm {
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    esi
        call    dword ptr [g_0076b134]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    eax
        push    esi
        push    1
        call    dword ptr [g_0076b104]
        push    eax
        call    dword ptr [g_0076b130]
        inc    eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    bl, byte ptr [esi]
        test    bl, bl
        mov    edx, esi
        mov    ecx, 1
        je    L_1543
        mov    al, bl
L_1535:
        cmp    al, 0xa
        jne    L_153a
        inc    ecx
L_153a:
        mov    al, byte ptr [edx + 1]
        inc    ecx
        inc    edx
        test    al, al
        jne    L_1535
L_1543:
        push    ecx
        call    dword ptr [g_0076b294]
        add    esp, 4
        test    bl, bl
        mov    ecx, eax
        je    L_1569
        mov    dl, bl
L_1555:
        cmp    dl, 0xa
        jne    L_155e
        mov    byte ptr [ecx], 0xd
        inc    ecx
L_155e:
        mov    byte ptr [ecx], dl
        mov    dl, byte ptr [esi + 1]
        inc    ecx
        inc    esi
        test    dl, dl
        jne    L_1555
L_1569:
        pop    esi
        mov    byte ptr [ecx], 0
        pop    ebx
        ret    4
    }
}
