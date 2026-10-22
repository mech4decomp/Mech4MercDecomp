/*
 * FUN_00556df5 (extent 0x556df5-0x556f33) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6b4;
extern void __cdecl FUN_004de980(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void FUN_00556df5(void)
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
        mov    eax, dword ptr [ecx + 0x384]
        mov    eax, dword ptr [eax + 0x10]
        shr    eax, 0x13
        mov    dl, 1
        test    al, dl
        push    ebx
        jne    L_6e4c
        mov    bl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    bl, al
        jne    L_6e4c
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    dword ptr [ecx + 0x548], eax
        mov    dword ptr [ecx + 0x54c], eax
        mov    byte ptr [ecx + 0x550], dl
        pop    esi
        jle    L_6e46
        mov    byte ptr [ecx + 0x4a8], al
        pop    ebx
        ret    4
L_6e46:
        mov    byte ptr [ecx + 0x4a8], dl
L_6e4c:
        pop    ebx
        ret    4
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_6e96
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_6e96
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_6e96
        mov    dl, byte ptr [ecx + 0x4a9]
        test    dl, dl
        sete    al
        test    al, al
        mov    byte ptr [ecx + 0x4a9], al
        jne    L_6e96
        mov    ecx, dword ptr [g_007dc6b4]
        call    FUN_004de980
L_6e96:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_6f2f
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        je    L_6ee7
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        jg    L_6ecf
        dec    dword ptr [esi + 0x408]
L_6ecf:
        mov    eax, dword ptr [esi + 0x408]
        test    eax, eax
        jge    L_6f2f
        mov    dword ptr [esi + 0x408], 0
        pop    esi
        ret    4
L_6ee7:
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_6f2f
        push    0x8000
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_6f2f
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        mov    eax, dword ptr [esi + 0x408]
        jle    L_6f1a
        inc    eax
        jmp    L_6f1b
L_6f1a:
        dec    eax
L_6f1b:
        test    eax, eax
        mov    dword ptr [esi + 0x408], eax
        jge    L_6f2f
        mov    dword ptr [esi + 0x408], 0
L_6f2f:
        pop    esi
        ret    4
    }
}
