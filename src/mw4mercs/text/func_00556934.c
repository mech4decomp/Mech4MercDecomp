/*
 * FUN_00556934 (extent 0x556934-0x556e99) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6b4;
extern void __cdecl FUN_004de980(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void FUN_00556934(void)
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
        nop    
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        push    ebx
        push    esi
        je    L_6970
        mov    edx, dword ptr [esp + 0xc]
        cmp    dword ptr [edx + 0x10], eax
        jg    L_695d
        dec    dword ptr [ecx + 0x3d4]
L_695d:
        cmp    dword ptr [ecx + 0x3d4], eax
        jge    L_69c4
        pop    esi
        mov    dword ptr [ecx + 0x3d4], eax
        pop    ebx
        ret    4
L_6970:
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    edx, 1
        jle    L_699f
        mov    esi, dword ptr [ecx + 0x384]
        mov    ebx, dword ptr [esi + 0x10]
        shr    ebx, 0x13
        test    bl, dl
        je    L_6996
        cmp    byte ptr [ecx + 0x5ac], al
        je    L_69c4
L_6996:
        mov    esi, dword ptr [ecx + 0x3d4]
        inc    esi
        jmp    L_69a6
L_699f:
        mov    esi, dword ptr [ecx + 0x3d4]
        dec    esi
L_69a6:
        cmp    esi, eax
        mov    dword ptr [ecx + 0x3d4], esi
        jge    L_69b6
        mov    dword ptr [ecx + 0x3d4], eax
L_69b6:
        cmp    dword ptr [ecx + 0x3d4], edx
        jle    L_69c4
        mov    dword ptr [ecx + 0x3d4], edx
L_69c4:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        push    ebx
        push    esi
        je    L_6a00
        mov    edx, dword ptr [esp + 0xc]
        cmp    dword ptr [edx + 0x10], eax
        jg    L_69ed
        dec    dword ptr [ecx + 0x3d8]
L_69ed:
        cmp    dword ptr [ecx + 0x3d8], eax
        jge    L_6a54
        pop    esi
        mov    dword ptr [ecx + 0x3d8], eax
        pop    ebx
        ret    4
L_6a00:
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    edx, 1
        jle    L_6a2f
        mov    esi, dword ptr [ecx + 0x384]
        mov    ebx, dword ptr [esi + 0x10]
        shr    ebx, 0x13
        test    bl, dl
        je    L_6a26
        cmp    byte ptr [ecx + 0x5ac], al
        je    L_6a54
L_6a26:
        mov    esi, dword ptr [ecx + 0x3d8]
        inc    esi
        jmp    L_6a36
L_6a2f:
        mov    esi, dword ptr [ecx + 0x3d8]
        dec    esi
L_6a36:
        cmp    esi, eax
        mov    dword ptr [ecx + 0x3d8], esi
        jge    L_6a46
        mov    dword ptr [ecx + 0x3d8], eax
L_6a46:
        cmp    dword ptr [ecx + 0x3d8], edx
        jle    L_6a54
        mov    dword ptr [ecx + 0x3d8], edx
L_6a54:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        push    ebx
        push    esi
        je    L_6a90
        mov    edx, dword ptr [esp + 0xc]
        cmp    dword ptr [edx + 0x10], eax
        jg    L_6a7d
        dec    dword ptr [ecx + 0x3e4]
L_6a7d:
        cmp    dword ptr [ecx + 0x3e4], eax
        jge    L_6ae4
        pop    esi
        mov    dword ptr [ecx + 0x3e4], eax
        pop    ebx
        ret    4
L_6a90:
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    edx, 1
        jle    L_6abf
        mov    esi, dword ptr [ecx + 0x384]
        mov    ebx, dword ptr [esi + 0x10]
        shr    ebx, 0x13
        test    bl, dl
        je    L_6ab6
        cmp    byte ptr [ecx + 0x5ac], al
        je    L_6ae4
L_6ab6:
        mov    esi, dword ptr [ecx + 0x3e4]
        inc    esi
        jmp    L_6ac6
L_6abf:
        mov    esi, dword ptr [ecx + 0x3e4]
        dec    esi
L_6ac6:
        cmp    esi, eax
        mov    dword ptr [ecx + 0x3e4], esi
        jge    L_6ad6
        mov    dword ptr [ecx + 0x3e4], eax
L_6ad6:
        cmp    dword ptr [ecx + 0x3e4], edx
        jle    L_6ae4
        mov    dword ptr [ecx + 0x3e4], edx
L_6ae4:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        push    ebx
        push    esi
        je    L_6b20
        mov    edx, dword ptr [esp + 0xc]
        cmp    dword ptr [edx + 0x10], eax
        jg    L_6b0d
        dec    dword ptr [ecx + 0x460]
L_6b0d:
        cmp    dword ptr [ecx + 0x460], eax
        jge    L_6b74
        pop    esi
        mov    dword ptr [ecx + 0x460], eax
        pop    ebx
        ret    4
L_6b20:
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    edx, 1
        jle    L_6b4f
        mov    esi, dword ptr [ecx + 0x384]
        mov    ebx, dword ptr [esi + 0x10]
        shr    ebx, 0x13
        test    bl, dl
        je    L_6b46
        cmp    byte ptr [ecx + 0x5ac], al
        je    L_6b74
L_6b46:
        mov    esi, dword ptr [ecx + 0x460]
        inc    esi
        jmp    L_6b56
L_6b4f:
        mov    esi, dword ptr [ecx + 0x460]
        dec    esi
L_6b56:
        cmp    esi, eax
        mov    dword ptr [ecx + 0x460], esi
        jge    L_6b66
        mov    dword ptr [ecx + 0x460], eax
L_6b66:
        cmp    dword ptr [ecx + 0x460], edx
        jle    L_6b74
        mov    dword ptr [ecx + 0x460], edx
L_6b74:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        push    ebx
        push    esi
        je    L_6bb0
        mov    edx, dword ptr [esp + 0xc]
        cmp    dword ptr [edx + 0x10], eax
        jg    L_6b9d
        dec    dword ptr [ecx + 0x45c]
L_6b9d:
        cmp    dword ptr [ecx + 0x45c], eax
        jge    L_6c04
        pop    esi
        mov    dword ptr [ecx + 0x45c], eax
        pop    ebx
        ret    4
L_6bb0:
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    edx, 1
        jle    L_6bdf
        mov    esi, dword ptr [ecx + 0x384]
        mov    ebx, dword ptr [esi + 0x10]
        shr    ebx, 0x13
        test    bl, dl
        je    L_6bd6
        cmp    byte ptr [ecx + 0x5ac], al
        je    L_6c04
L_6bd6:
        mov    esi, dword ptr [ecx + 0x45c]
        inc    esi
        jmp    L_6be6
L_6bdf:
        mov    esi, dword ptr [ecx + 0x45c]
        dec    esi
L_6be6:
        cmp    esi, eax
        mov    dword ptr [ecx + 0x45c], esi
        jge    L_6bf6
        mov    dword ptr [ecx + 0x45c], eax
L_6bf6:
        cmp    dword ptr [ecx + 0x45c], edx
        jle    L_6c04
        mov    dword ptr [ecx + 0x45c], edx
L_6c04:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        push    ebx
        push    esi
        je    L_6c40
        mov    edx, dword ptr [esp + 0xc]
        cmp    dword ptr [edx + 0x10], eax
        jg    L_6c2d
        dec    dword ptr [ecx + 0x468]
L_6c2d:
        cmp    dword ptr [ecx + 0x468], eax
        jge    L_6c94
        pop    esi
        mov    dword ptr [ecx + 0x468], eax
        pop    ebx
        ret    4
L_6c40:
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    edx, 1
        jle    L_6c6f
        mov    esi, dword ptr [ecx + 0x384]
        mov    ebx, dword ptr [esi + 0x10]
        shr    ebx, 0x13
        test    bl, dl
        je    L_6c66
        cmp    byte ptr [ecx + 0x5ac], al
        je    L_6c94
L_6c66:
        mov    esi, dword ptr [ecx + 0x468]
        inc    esi
        jmp    L_6c76
L_6c6f:
        mov    esi, dword ptr [ecx + 0x468]
        dec    esi
L_6c76:
        cmp    esi, eax
        mov    dword ptr [ecx + 0x468], esi
        jge    L_6c86
        mov    dword ptr [ecx + 0x468], eax
L_6c86:
        cmp    dword ptr [ecx + 0x468], edx
        jle    L_6c94
        mov    dword ptr [ecx + 0x468], edx
L_6c94:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        push    ebx
        push    esi
        je    L_6cd0
        mov    edx, dword ptr [esp + 0xc]
        cmp    dword ptr [edx + 0x10], eax
        jg    L_6cbd
        dec    dword ptr [ecx + 0x464]
L_6cbd:
        cmp    dword ptr [ecx + 0x464], eax
        jge    L_6d24
        pop    esi
        mov    dword ptr [ecx + 0x464], eax
        pop    ebx
        ret    4
L_6cd0:
        mov    esi, dword ptr [esp + 0xc]
        cmp    dword ptr [esi + 0x10], eax
        mov    edx, 1
        jle    L_6cff
        mov    esi, dword ptr [ecx + 0x384]
        mov    ebx, dword ptr [esi + 0x10]
        shr    ebx, 0x13
        test    bl, dl
        je    L_6cf6
        cmp    byte ptr [ecx + 0x5ac], al
        je    L_6d24
L_6cf6:
        mov    esi, dword ptr [ecx + 0x464]
        inc    esi
        jmp    L_6d06
L_6cff:
        mov    esi, dword ptr [ecx + 0x464]
        dec    esi
L_6d06:
        cmp    esi, eax
        mov    dword ptr [ecx + 0x464], esi
        jge    L_6d16
        mov    dword ptr [ecx + 0x464], eax
L_6d16:
        cmp    dword ptr [ecx + 0x464], edx
        jle    L_6d24
        mov    dword ptr [ecx + 0x464], edx
L_6d24:
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_6d4b
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_6d71
L_6d4b:
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_6d71
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_6d71
        mov    al, byte ptr [ecx + 0x428]
        test    al, al
        sete    dl
        mov    byte ptr [ecx + 0x428], dl
L_6d71:
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
        nop    
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        je    L_6db6
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jg    L_6d9e
        dec    dword ptr [esi + 0x46c]
L_6d9e:
        mov    eax, dword ptr [esi + 0x46c]
        test    eax, eax
        jge    L_6df1
        mov    dword ptr [esi + 0x46c], 0
        pop    esi
        ret    4
L_6db6:
        push    8
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_6df1
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        mov    eax, dword ptr [esi + 0x46c]
        jle    L_6ddc
        inc    eax
        jmp    L_6ddd
L_6ddc:
        dec    eax
L_6ddd:
        test    eax, eax
        mov    dword ptr [esi + 0x46c], eax
        jge    L_6df1
        mov    dword ptr [esi + 0x46c], 0
L_6df1:
        pop    esi
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
    }
}
