/* FUN_005986e0 - 1139 bytes */
/* __stdcall, this in ecx - hash table / BST node insertion */

__declspec(naked) void FUN_005986e0(void)
{
    

extern void __cdecl FUN_005994e7(void);
extern void __cdecl FUN_005994c3(void);
extern void __cdecl FUN_100411575(void);
extern void __cdecl FUN_10059837f(void);
extern void __cdecl FUN_00598ada(void);
extern void __cdecl FUN_0059876f(void);
extern void __cdecl FUN_1004112e6(void);
extern void __cdecl FUN_00598a65(void);
extern void __cdecl FUN_005993d6(void);
extern void __cdecl FUN_005993ec(void);
extern void __cdecl FUN_00599297(void);
extern void __cdecl FUN_00599276(void);
extern void __cdecl FUN_100411326(void);
extern void __cdecl FUN_005987c5(void);
extern void __cdecl FUN_10041112f(void);
extern void __cdecl FUN_0059887c(void);
extern void __cdecl FUN_0059885a(void);
extern void __cdecl FUN_005989c9(void);
__asm {
sub     esp, 0x34
        mov     edx, [ecx]
        mov     eax, [edx + 8]
        push    ebx
        mov     ebx, [esp + 0x40]
        cmp     ebx, eax
        push    ebp
        push    esi
        push    edi
        mov     [esp + 0x14], ecx
        jne     loc_598952

        /* === case: ebx == eax (root match) === */
        mov     eax, [ecx + 4]
        test    eax, eax
        jbe     loc_5987ff

        mov     eax, [esp + 0x50]
        mov     edi, [eax]
        mov     esi, [ebx + 0x10]

        /* strcmp-like inline: compare [edi] vs [esi] */
        mov     eax, edi
strcmp_1_start:
        mov     bl, [eax]
        mov     cl, bl
        cmp     bl, [esi]
        jne     strcmp_1_diff
        test    cl, cl
        je      strcmp_1_eq
        mov     bl, [eax + 1]
        mov     cl, bl
        cmp     bl, [esi + 1]
        jne     strcmp_1_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_1_start
strcmp_1_eq:
        xor     eax, eax
        jmp     strcmp_1_done
strcmp_1_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_1_done:

        xor     ebx, ebx
        cmp     eax, ebx
        jge     loc_5987ff

        mov     ebp, [esp + 0x4c]
        cmp     ebp, edx
        je      loc_5987a7
        cmp     ebp, ebx
        jne     loc_5987a7

        /* ebp == NULL (0) */
        mov     esi, [ebp + 0x10]

        /* strcmp-like inline: compare [edi] vs [esi] */
        mov     eax, edi
strcmp_2_start:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jne     strcmp_2_diff
        test    cl, cl
        je      strcmp_2_eq
        mov     dl, [eax + 1]
        mov     cl, dl
        cmp     dl, [esi + 1]
        jne     strcmp_2_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_2_start
strcmp_2_eq:
        xor     eax, eax
        jmp     strcmp_2_done
strcmp_2_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_2_done:

        cmp     eax, ebx
        jl      loc_5987a7

        /* eax >= 0 */
        mov     eax, [esp + 0x50]
        mov     edi, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call FUN_005994e7
        mov     esi, eax
        mov     eax, [edi]
        cmp     [eax + 0xc], ebx
        __emit 0x89  /* __emit: MSVC6 rejects mov dword ptr [0xC],esi (absolute mem to low addr); encode 89 35 0C 00 00 00 */
        __emit 0x35
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jne     loc_5987d2
        mov     [eax + 0xc], esi
        jmp     loc_5987d2

loc_5987a7:
        mov     ecx, [esp + 0x50]
        mov     edi, [esp + 0x14]
        push    ecx
        mov     ecx, edi
        call FUN_005994c3
        mov     esi, eax
        mov     eax, [edi]
        cmp     ebp, eax
        mov     [ebp + 8], esi
        jne     loc_5987ca
        mov     [eax + 4], esi
        mov     [eax + 0xc], esi
        jmp     loc_5987d2

loc_5987ca:
        cmp     ebp, [eax + 8]
        jne     loc_5987d2
        mov     [eax + 8], esi

loc_5987d2:
        add     eax, 4
        push    eax
        push    esi
        mov     [esi + 4], ebp
        mov     [esi + 8], ebx
        mov     [esi + 0xc], ebx
        call FUN_100411575
        mov     eax, [edi + 4]
        add     esp, 8
        inc     eax
        mov     [edi + 4], eax
        mov     eax, [esp + 0x48]
        pop     edi
        mov     [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc

loc_5987ff:
        /* === case: ebx != eax (no root match) === */
        mov     edi, [edx + 4]
        test    edi, edi
        mov     esi, edx
        mov     [esp + 0x1c], esi
        mov     al, 1
        je      loc_598863

loc_59880e:
        mov     edx, [esp + 0x50]
        mov     ebp, [edx]
loc_598814:
        mov     esi, [edi + 0x10]
        mov     [esp + 0x1c], edi

        /* strcmp-like inline: compare [ebp] vs [esi] */
        mov     eax, ebp
strcmp_3_start:
        mov     dl, [eax]
        mov     bl, [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     strcmp_3_diff
        test    cl, cl
        je      strcmp_3_eq
        mov     dl, [eax + 1]
        mov     bl, [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     strcmp_3_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_3_start
strcmp_3_eq:
        xor     eax, eax
        jmp     strcmp_3_done
strcmp_3_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_3_done:

        test    eax, eax
        setl    al
        test    al, al
        je      loc_598858
        mov     edi, [edi + 8]
        jmp     loc_59885b

loc_598858:
        mov     edi, [edi + 0xc]

loc_59885b:
        test    edi, edi
        jne     loc_598814

        mov     esi, [esp + 0x1c]

loc_598863:
        test    al, al
        mov     [esp + 0x18], esi
        je      loc_5988b9

        /* al != 0 */
        mov     ebx, [esp + 0x14]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, ebx
        call FUN_10059837f
        mov     ecx, [esp + 0x18]
        cmp     ecx, [eax]
        jne     loc_5988aa

        mov     eax, [esp + 0x50]
        lea     edx, [esp + 0x4c]
        push    edx
        push    eax
        push    esi
        push    edi
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, ebx
        mov     byte ptr [esp + 0x60], 1
        call FUN_00598ada
        push    eax
        lea     ecx, [esp + 0x34]
        jmp FUN_0059876f

loc_5988aa:
        lea     edx, [esp + 0x18]
        push    edx
        call FUN_1004112e6
        add     esp, 4
        jmp     loc_5988bd

loc_5988b9:
        mov     ebx, [esp + 0x14]

loc_5988bd:
        mov     ebp, [esp + 0x50]
        mov     eax, [esp + 0x18]
        mov     esi, [ebp]
        mov     eax, [eax + 0x10]

        /* strcmp-like inline: compare [eax] vs [esi] */
strcmp_4_start:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jne     strcmp_4_diff
        test    cl, cl
        je      strcmp_4_eq
        mov     dl, [eax + 1]
        mov     cl, dl
        cmp     dl, [esi + 1]
        jne     strcmp_4_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_4_start
strcmp_4_eq:
        xor     eax, eax
        jmp     strcmp_4_done
strcmp_4_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_4_done:

        test    eax, eax
        jge     loc_59891c

        mov     ecx, [esp + 0x1c]
        lea     eax, [esp + 0x50]
        push    eax
        push    ebp
        push    ecx
        push    edi
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, ebx
        mov     byte ptr [esp + 0x64], 1
        call FUN_00598a65
        push    eax
        lea     ecx, [esp + 0x3c]
        jmp     loc_59892f

loc_59891c:
        lea     eax, [esp + 0x13]
        lea     ecx, [esp + 0x18]
        push    eax
        push    ecx
        mov     byte ptr [esp + 0x1b], 0
        lea     ecx, [esp + 0x44]

loc_59892f:
        call FUN_005993d6
        push    eax
        lea     ecx, [esp + 0x28]
        call FUN_005993ec
        mov     eax, [esp + 0x48]
        mov     edx, [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc

loc_598952:
        /* === case: ebx != edx (different node) === */
        cmp     ebx, edx
        jne     loc_598a5d

        mov     eax, [esp + 0x50]
        mov     ebp, [eax]
        mov     edi, [edx + 0xc]
        mov     eax, [edi + 0x10]
        mov     esi, ebp

        /* strcmp-like inline: compare [eax] vs [esi] */
strcmp_5_start:
        mov     bl, [eax]
        mov     cl, bl
        cmp     bl, [esi]
        jne     strcmp_5_diff
        test    cl, cl
        je      strcmp_5_eq
        mov     bl, [eax + 1]
        mov     cl, bl
        cmp     bl, [esi + 1]
        jne     strcmp_5_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_5_start
strcmp_5_eq:
        xor     eax, eax
        jmp     strcmp_5_done
strcmp_5_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_5_done:

        test    eax, eax
        jge     loc_598a4e

        cmp     edi, edx
        je      loc_5989f4

        mov     esi, [edi + 0x10]
        mov     eax, ebp

        /* strcmp-like inline: compare [eax] vs [esi] */
strcmp_6_start:
        mov     dl, [eax]
        mov     bl, [esi]
        mov     cl, dl
        cmp     dl, bl
        jne     strcmp_6_diff
        test    cl, cl
        je      strcmp_6_eq
        mov     dl, [eax + 1]
        mov     bl, [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jne     strcmp_6_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_6_start
strcmp_6_eq:
        xor     eax, eax
        jmp     strcmp_6_done
strcmp_6_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_6_done:

        test    eax, eax
        jl      loc_5989f4

        mov     eax, [esp + 0x50]
        mov     ebx, [esp + 0x14]
        push    eax
        mov     ecx, ebx
        call FUN_00599297
        mov     esi, eax
        mov     eax, [ebx]
        cmp     edi, [eax + 0xc]
        mov     [edi + 0xc], esi
        jne     loc_598a1f
        mov     [eax + 0xc], esi
        jmp     loc_598a1f

loc_5989f4:
        mov     ecx, [esp + 0x50]
        mov     ebx, [esp + 0x14]
        push    ecx
        mov     ecx, ebx
        call FUN_00599276
        mov     esi, eax
        mov     eax, [ebx]
        cmp     edi, eax
        mov     [edi + 8], esi
        jne     loc_598a17
        mov     [eax + 4], esi
        mov     [eax + 0xc], esi
        jmp     loc_598a1f

loc_598a17:
        cmp     edi, [eax + 8]
        jne     loc_598a1f
        mov     [eax + 8], esi

loc_598a1f:
        add     eax, 4
        xor     ecx, ecx
        push    eax
        push    esi
        mov     [esi + 4], edi
        mov     [esi + 8], ecx
        mov     [esi + 0xc], ecx
        call FUN_100411326
        mov     eax, [ebx + 4]
        add     esp, 8
        inc     eax
        mov     [ebx + 4], eax
        mov     eax, [esp + 0x48]
        pop     edi
        mov     [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc

loc_598a4e:
        mov     edx, [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        jmp FUN_005987c5

loc_598a5d:
        lea     edx, [esp + 0x4c]
        push    edx
        mov     [esp + 0x50], ebx
        call FUN_10041112f
        mov     ebp, [esp + 0x54]
        mov     edi, [ebp]
        mov     eax, [esp + 0x50]
        mov     eax, [eax + 0x10]
        add     esp, 4
        mov     esi, edi

        /* strcmp-like inline: compare [eax] vs [esi] */
strcmp_7_start:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jne     strcmp_7_diff
        test    cl, cl
        je      strcmp_7_eq
        mov     dl, [eax + 1]
        mov     cl, dl
        cmp     dl, [esi + 1]
        jne     strcmp_7_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_7_start
strcmp_7_eq:
        xor     eax, eax
        jmp     strcmp_7_done
strcmp_7_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_7_done:

        test    eax, eax
        jge     loc_598b32

        mov     esi, [ebx + 0x10]
        mov     eax, edi

        /* strcmp-like inline: compare [eax] vs [esi] */
strcmp_8_start:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jne     strcmp_8_diff
        test    cl, cl
        je      strcmp_8_eq
        mov     dl, [eax + 1]
        mov     cl, dl
        cmp     dl, [esi + 1]
        jne     strcmp_8_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     strcmp_8_start
strcmp_8_eq:
        xor     eax, eax
        jmp     strcmp_8_done
strcmp_8_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_8_done:

        test    eax, eax
        jge     loc_598b32

        mov     eax, [esp + 0x4c]
        mov     ecx, [eax + 0xc]
        test    ecx, ecx
        push    ebp
        jne     loc_598b10

        mov     ecx, [esp + 0x18]
        push    eax
        push    0
        lea     eax, [esp + 0x5c]
        push    eax
        call FUN_0059887c
        mov     ecx, [eax]
        mov     eax, [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc

loc_598b10:
        mov     ecx, [esp + 0x18]
        push    ebx
        push    ebx
        lea     edx, [esp + 0x5c]
        push    edx
        call FUN_0059885a
        mov     ecx, [eax]
        mov     eax, [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc

loc_598b32:
        push    ebp
        lea     edx, [esp + 0x40]
        push    edx

loc_598b38:
        mov     ecx, [esp + 0x1c]
        call FUN_005989c9
        mov     ecx, [eax]
        mov     eax, [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }


}
