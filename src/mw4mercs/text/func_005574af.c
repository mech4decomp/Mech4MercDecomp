/*
 * FUN_005574af (extent 0x5574af-0x557f5b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2114;
extern int    g_007f268c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0054c4d0(void);
extern void __cdecl FUN_00553510(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005b8110(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void FUN_005574af(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x42c]
        jle    L_74c4
        inc    eax
        jmp    L_74c5
L_74c4:
        dec    eax
L_74c5:
        test    eax, eax
        mov    dword ptr [ecx + 0x42c], eax
        jge    L_74d9
        mov    dword ptr [ecx + 0x42c], 0
L_74d9:
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x430]
        jle    L_74f4
        inc    eax
        jmp    L_74f5
L_74f4:
        dec    eax
L_74f5:
        test    eax, eax
        mov    dword ptr [ecx + 0x430], eax
        jge    L_7509
        mov    dword ptr [ecx + 0x430], 0
L_7509:
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7543
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x434]
        jle    L_752e
        inc    eax
        jmp    L_752f
L_752e:
        dec    eax
L_752f:
        test    eax, eax
        mov    dword ptr [ecx + 0x434], eax
        jge    L_7543
        mov    dword ptr [ecx + 0x434], 0
L_7543:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7583
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x438]
        jle    L_756e
        inc    eax
        jmp    L_756f
L_756e:
        dec    eax
L_756f:
        test    eax, eax
        mov    dword ptr [ecx + 0x438], eax
        jge    L_7583
        mov    dword ptr [ecx + 0x438], 0
L_7583:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_75c3
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x43c]
        jle    L_75ae
        inc    eax
        jmp    L_75af
L_75ae:
        dec    eax
L_75af:
        test    eax, eax
        mov    dword ptr [ecx + 0x43c], eax
        jge    L_75c3
        mov    dword ptr [ecx + 0x43c], 0
L_75c3:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7603
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x440]
        jle    L_75ee
        inc    eax
        jmp    L_75ef
L_75ee:
        dec    eax
L_75ef:
        test    eax, eax
        mov    dword ptr [ecx + 0x440], eax
        jge    L_7603
        mov    dword ptr [ecx + 0x440], 0
L_7603:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7643
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x444]
        jle    L_762e
        inc    eax
        jmp    L_762f
L_762e:
        dec    eax
L_762f:
        test    eax, eax
        mov    dword ptr [ecx + 0x444], eax
        jge    L_7643
        mov    dword ptr [ecx + 0x444], 0
L_7643:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7683
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x448]
        jle    L_766e
        inc    eax
        jmp    L_766f
L_766e:
        dec    eax
L_766f:
        test    eax, eax
        mov    dword ptr [ecx + 0x448], eax
        jge    L_7683
        mov    dword ptr [ecx + 0x448], 0
L_7683:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_76c3
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x44c]
        jle    L_76ae
        inc    eax
        jmp    L_76af
L_76ae:
        dec    eax
L_76af:
        test    eax, eax
        mov    dword ptr [ecx + 0x44c], eax
        jge    L_76c3
        mov    dword ptr [ecx + 0x44c], 0
L_76c3:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7703
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x450]
        jle    L_76ee
        inc    eax
        jmp    L_76ef
L_76ee:
        dec    eax
L_76ef:
        test    eax, eax
        mov    dword ptr [ecx + 0x450], eax
        jge    L_7703
        mov    dword ptr [ecx + 0x450], 0
L_7703:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7743
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x454]
        jle    L_772e
        inc    eax
        jmp    L_772f
L_772e:
        dec    eax
L_772f:
        test    eax, eax
        mov    dword ptr [ecx + 0x454], eax
        jge    L_7743
        mov    dword ptr [ecx + 0x454], 0
L_7743:
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
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        je    L_7783
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        mov    eax, dword ptr [ecx + 0x458]
        jle    L_776e
        inc    eax
        jmp    L_776f
L_776e:
        dec    eax
L_776f:
        test    eax, eax
        mov    dword ptr [ecx + 0x458], eax
        jge    L_7783
        mov    dword ptr [ecx + 0x458], 0
L_7783:
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
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_77ef
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_77d1
        cmp    esi, eax
        jg    L_77bf
        dec    dword ptr [ecx + 0x3a8]
L_77bf:
        cmp    dword ptr [ecx + 0x3a8], eax
        jge    L_77ef
        mov    dword ptr [ecx + 0x3a8], eax
        pop    esi
        ret    4
L_77d1:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3a8]
        jle    L_77de
        inc    edx
        jmp    L_77df
L_77de:
        dec    edx
L_77df:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3a8], edx
        jge    L_77ef
        mov    dword ptr [ecx + 0x3a8], eax
L_77ef:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_785f
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7841
        cmp    esi, eax
        jg    L_782f
        dec    dword ptr [ecx + 0x3ac]
L_782f:
        cmp    dword ptr [ecx + 0x3ac], eax
        jge    L_785f
        mov    dword ptr [ecx + 0x3ac], eax
        pop    esi
        ret    4
L_7841:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3ac]
        jle    L_784e
        inc    edx
        jmp    L_784f
L_784e:
        dec    edx
L_784f:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3ac], edx
        jge    L_785f
        mov    dword ptr [ecx + 0x3ac], eax
L_785f:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_78cf
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_78b1
        cmp    esi, eax
        jg    L_789f
        dec    dword ptr [ecx + 0x3b0]
L_789f:
        cmp    dword ptr [ecx + 0x3b0], eax
        jge    L_78cf
        mov    dword ptr [ecx + 0x3b0], eax
        pop    esi
        ret    4
L_78b1:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3b0]
        jle    L_78be
        inc    edx
        jmp    L_78bf
L_78be:
        dec    edx
L_78bf:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3b0], edx
        jge    L_78cf
        mov    dword ptr [ecx + 0x3b0], eax
L_78cf:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_793f
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7921
        cmp    esi, eax
        jg    L_790f
        dec    dword ptr [ecx + 0x3b4]
L_790f:
        cmp    dword ptr [ecx + 0x3b4], eax
        jge    L_793f
        mov    dword ptr [ecx + 0x3b4], eax
        pop    esi
        ret    4
L_7921:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3b4]
        jle    L_792e
        inc    edx
        jmp    L_792f
L_792e:
        dec    edx
L_792f:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3b4], edx
        jge    L_793f
        mov    dword ptr [ecx + 0x3b4], eax
L_793f:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_79af
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7991
        cmp    esi, eax
        jg    L_797f
        dec    dword ptr [ecx + 0x3b8]
L_797f:
        cmp    dword ptr [ecx + 0x3b8], eax
        jge    L_79af
        mov    dword ptr [ecx + 0x3b8], eax
        pop    esi
        ret    4
L_7991:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3b8]
        jle    L_799e
        inc    edx
        jmp    L_799f
L_799e:
        dec    edx
L_799f:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3b8], edx
        jge    L_79af
        mov    dword ptr [ecx + 0x3b8], eax
L_79af:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7a1f
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7a01
        cmp    esi, eax
        jg    L_79ef
        dec    dword ptr [ecx + 0x3bc]
L_79ef:
        cmp    dword ptr [ecx + 0x3bc], eax
        jge    L_7a1f
        mov    dword ptr [ecx + 0x3bc], eax
        pop    esi
        ret    4
L_7a01:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3bc]
        jle    L_7a0e
        inc    edx
        jmp    L_7a0f
L_7a0e:
        dec    edx
L_7a0f:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3bc], edx
        jge    L_7a1f
        mov    dword ptr [ecx + 0x3bc], eax
L_7a1f:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7a8f
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7a71
        cmp    esi, eax
        jg    L_7a5f
        dec    dword ptr [ecx + 0x3c0]
L_7a5f:
        cmp    dword ptr [ecx + 0x3c0], eax
        jge    L_7a8f
        mov    dword ptr [ecx + 0x3c0], eax
        pop    esi
        ret    4
L_7a71:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3c0]
        jle    L_7a7e
        inc    edx
        jmp    L_7a7f
L_7a7e:
        dec    edx
L_7a7f:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3c0], edx
        jge    L_7a8f
        mov    dword ptr [ecx + 0x3c0], eax
L_7a8f:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7aff
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7ae1
        cmp    esi, eax
        jg    L_7acf
        dec    dword ptr [ecx + 0x3c4]
L_7acf:
        cmp    dword ptr [ecx + 0x3c4], eax
        jge    L_7aff
        mov    dword ptr [ecx + 0x3c4], eax
        pop    esi
        ret    4
L_7ae1:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3c4]
        jle    L_7aee
        inc    edx
        jmp    L_7aef
L_7aee:
        dec    edx
L_7aef:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3c4], edx
        jge    L_7aff
        mov    dword ptr [ecx + 0x3c4], eax
L_7aff:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7b6f
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7b51
        cmp    esi, eax
        jg    L_7b3f
        dec    dword ptr [ecx + 0x3c8]
L_7b3f:
        cmp    dword ptr [ecx + 0x3c8], eax
        jge    L_7b6f
        mov    dword ptr [ecx + 0x3c8], eax
        pop    esi
        ret    4
L_7b51:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3c8]
        jle    L_7b5e
        inc    edx
        jmp    L_7b5f
L_7b5e:
        dec    edx
L_7b5f:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3c8], edx
        jge    L_7b6f
        mov    dword ptr [ecx + 0x3c8], eax
L_7b6f:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7bdf
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7bc1
        cmp    esi, eax
        jg    L_7baf
        dec    dword ptr [ecx + 0x3cc]
L_7baf:
        cmp    dword ptr [ecx + 0x3cc], eax
        jge    L_7bdf
        mov    dword ptr [ecx + 0x3cc], eax
        pop    esi
        ret    4
L_7bc1:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3cc]
        jle    L_7bce
        inc    edx
        jmp    L_7bcf
L_7bce:
        dec    edx
L_7bcf:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3cc], edx
        jge    L_7bdf
        mov    dword ptr [ecx + 0x3cc], eax
L_7bdf:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7c4f
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7c31
        cmp    esi, eax
        jg    L_7c1f
        dec    dword ptr [ecx + 0x3d0]
L_7c1f:
        cmp    dword ptr [ecx + 0x3d0], eax
        jge    L_7c4f
        mov    dword ptr [ecx + 0x3d0], eax
        pop    esi
        ret    4
L_7c31:
        cmp    esi, eax
        mov    edx, dword ptr [ecx + 0x3d0]
        jle    L_7c3e
        inc    edx
        jmp    L_7c3f
L_7c3e:
        dec    edx
L_7c3f:
        cmp    edx, eax
        mov    dword ptr [ecx + 0x3d0], edx
        jge    L_7c4f
        mov    dword ptr [ecx + 0x3d0], eax
L_7c4f:
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
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7cce
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7ca1
        cmp    esi, eax
        jg    L_7c8f
        dec    dword ptr [ecx + 0x4b4]
L_7c8f:
        cmp    dword ptr [ecx + 0x4b4], eax
        jge    L_7cce
        mov    dword ptr [ecx + 0x4b4], eax
        pop    esi
        ret    4
L_7ca1:
        cmp    esi, eax
        jle    L_7cc0
        mov    eax, dword ptr [ecx + 0x4b4]
        inc    eax
        mov    dword ptr [ecx + 0x6c0], 1
        mov    dword ptr [ecx + 0x4b4], eax
        pop    esi
        ret    4
L_7cc0:
        dec    dword ptr [ecx + 0x4b4]
        jns    L_7cce
        mov    dword ptr [ecx + 0x4b4], eax
L_7cce:
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        push    esi
        jne    L_7d4e
        mov    dl, byte ptr [ecx + 0x589]
        xor    eax, eax
        cmp    dl, al
        mov    edx, dword ptr [esp + 8]
        mov    esi, dword ptr [edx + 0x10]
        je    L_7d21
        cmp    esi, eax
        jg    L_7d0f
        dec    dword ptr [ecx + 0x4b4]
L_7d0f:
        cmp    dword ptr [ecx + 0x4b4], eax
        jge    L_7d4e
        mov    dword ptr [ecx + 0x4b4], eax
        pop    esi
        ret    4
L_7d21:
        cmp    esi, eax
        jle    L_7d40
        mov    eax, dword ptr [ecx + 0x4b4]
        inc    eax
        mov    dword ptr [ecx + 0x6c0], 2
        mov    dword ptr [ecx + 0x4b4], eax
        pop    esi
        ret    4
L_7d40:
        dec    dword ptr [ecx + 0x4b4]
        jns    L_7d4e
        mov    dword ptr [ecx + 0x4b4], eax
L_7d4e:
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
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_7d80
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jle    L_7d80
        mov    ecx, dword ptr [g_007f2114]
        call    FUN_005b8110
L_7d80:
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
        nop    
        mov    eax, dword ptr [ecx + 0x384]
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_7dc7
        mov    al, byte ptr [ecx + 0x589]
        test    al, al
        jne    L_7dc7
        mov    al, byte ptr [ecx + 0x5ac]
        test    al, al
        jne    L_7dc7
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        jle    L_7dc7
        push    0x1d
        call    FUN_0054c4d0
L_7dc7:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_7f55
        mov    al, byte ptr [edi + 0x589]
        test    al, al
        jne    L_7f55
        mov    al, byte ptr [edi + 0x5ac]
        test    al, al
        jne    L_7f55
        push    0x40
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_7f55
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x50]
        mov    ecx, dword ptr [edx + 0x58]
        test    ecx, ecx
        je    L_7f55
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        je    L_7e63
        mov    edx, dword ptr [eax + 0x40]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        mov    cl, byte ptr [eax + 0x28]
        test    cl, cl
        jne    L_7f55
L_7e63:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle    L_7f55
        mov    ecx, edi
        call    FUN_00553510
        test    al, al
        je    L_7f55
        mov    esi, dword ptr [edi + 0x384]
        test    esi, esi
        je    L_7eeb
        mov    edx, dword ptr [esi + 0x410]
        mov    ecx, dword ptr [esi + 0x40c]
        sub    edx, ecx
        sar    edx, 2
        je    L_7eeb
        mov    eax, ecx
        cmp    dword ptr [eax], 0
        je    L_7eeb
        mov    ecx, dword ptr [esi + 0x410]
        mov    edx, eax
        sub    ecx, edx
        sar    ecx, 2
        je    L_7eb8
        mov    eax, dword ptr [edx]
        jmp    L_7eba
L_7eb8:
        xor    eax, eax
L_7eba:
        cmp    dword ptr [eax + 0x1e0], 4
        je    L_7f55
        mov    eax, dword ptr [esi + 0x410]
        mov    edx, dword ptr [esi + 0x40c]
        sub    eax, edx
        sar    eax, 2
        je    L_7ee0
        mov    ecx, edx
        mov    eax, dword ptr [ecx]
        jmp    L_7ee2
L_7ee0:
        xor    eax, eax
L_7ee2:
        cmp    dword ptr [eax + 0x1e0], 5
        je    L_7f55
L_7eeb:
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        xor    bl, bl
        call    FUN_00415230
        test    al, al
        je    L_7f0b
        mov    eax, dword ptr [esi + 0x3e4]
        test    eax, eax
        je    L_7f0b
        mov    bl, 1
L_7f0b:
        mov    al, byte ptr [edi + 0x584]
        test    al, al
        mov    byte ptr [edi + 0x585], 1
        jne    L_7f47
        mov    al, byte ptr [edi + 0x586]
        test    al, al
        jne    L_7f47
        test    bl, bl
        je    L_7f31
        mov    byte ptr [edi + 0x587], 1
L_7f31:
        push    0x11
        mov    ecx, edi
        call    FUN_00559be0
        mov    byte ptr [edi + 0x588], 1
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_7f47:
        mov    byte ptr [edi + 0x588], 0
        mov    byte ptr [edi + 0x587], 0
L_7f55:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
    }
}
