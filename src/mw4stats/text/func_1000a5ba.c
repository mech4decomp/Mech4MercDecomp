/* MW4Stats.dll — gap region 0x1000A5BA..0x1000B0A0 (2790 B)
 * Contains ~18 small functions plus NOP padding:
 *   fn1 0x1000A5C0 (ret 8)   fn2 0x1000A620 (ret 8)   fn3 0x1000A6E0 (ret 0x14)
 *   fn4 0x1000A730 (ret 0x14) fn5 0x1000A810 (ret 4)   fn6 0x1000A850 (ret 8)
 *   fn7 0x1000A8C0 (ret 4)   fn8 0x1000A8E0 (ret 8)   fn9 0x1000ABB0 (ret 8)
 *   fn10 0x1000AC50 (ret 8)  fn11 0x1000ACA0 (ret 4)  fn12 0x1000ACB0 (ret 8)
 *   fn13 0x1000ACC0 (ret 8)  fn14 0x1000AD00 (ret 0x14) fn15 0x1000ADA0 (ret 0x14)
 *   fn16 0x1000AF20 (ret 4)  fn17 0x1000AFF0 (ret 8)  fn18 0x1000B060 (ret 4)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern void* g_1002106c;
extern void* g_10021078;
extern void* g_1002107c;
extern void* g_10021080;
extern void* g_10021084;
extern void* g_10021088;
extern void* g_1002108c;
extern void* g_1002102c;
extern void* g_100210ec;
extern void* g_100210f8;
extern void* g_100210f4;
extern void* g_1002113c;
extern void* g_1002114c;
extern void* g_100210e4;

extern unsigned short g_100274ec;
extern unsigned short g_10025f0c;

extern void __cdecl FUN_1000b170(void);
extern void __cdecl FUN_1000b0a0(void);
extern void __cdecl FUN_1000b1e0(void);

__declspec(naked) void FUN_1000a5ba(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn1 0x1000A5C0 ---- */
        mov ecx, dword ptr [esp+4]
        sub esp, 0x200
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00 /* __emit: lea eax,[esp+0] MSVC6 drops 00 disp byte */
        push edi
        push 0
        push 0
        push 0x1ff
        push eax
        push -1
        push ecx
        push 0
        push 0
        call dword ptr [g_1002106c]
        lea edi, [esp+4]
        or ecx, 0xffffffff
        xor eax, eax
        lea edx, [esp+4]
        repne scasb
        mov eax, dword ptr [esp+0x20c]
        not ecx
        dec ecx
        push eax
        push edx
        mov dword ptr [eax], ecx
        call dword ptr [g_10021078]
        pop edi
        add esp, 0x200
        ret 8

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

        /* ---- fn2 0x1000A620 ---- */
        mov ecx, dword ptr [esp+4]
        sub esp, 0x200
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00 /* __emit: lea eax,[esp+0] MSVC6 drops 00 disp byte */
        push 0
        push 0
        push 0x1ff
        push eax
        push -1
        push ecx
        push 0
        push 0
        call dword ptr [g_1002106c]
        mov eax, dword ptr [esp+0x208]
        cmp eax, 0x2323
        je L2_3
        cmp eax, 0x40000000
        je L2_2
        cmp eax, 0x80000000
        je L2_1
        or eax, 0xffffffff
        add esp, 0x200
        ret 8
L2_1:
        push 0
        push 0x80
        push 3
        push 0
        push 1
        lea edx, [esp+0x14]
        push 0x80000000
        push edx
        call dword ptr [g_1002107c]
        add esp, 0x200
        ret 8
L2_2:
        push 0
        push 0
        push 2
        push 0
        push 0
        lea eax, [esp+0x14]
        push 0x40000000
        push eax
        call dword ptr [g_1002107c]
        add esp, 0x200
        ret 8
L2_3:
        push 0
        push 0x80
        push 3
        push 0
        push 1
        lea ecx, [esp+0x14]
        push 0
        push ecx
        call dword ptr [g_1002107c]
        add esp, 0x200
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn3 0x1000A6E0 ---- */
        mov eax, dword ptr [esp+0x14]
        push ebx
        mov ebx, dword ptr [esp+0x14]
        mov edx, dword ptr [esp+8]
        push esi
        mov esi, dword ptr [esp+0x10]
        push edi
        mov edi, ecx
        push eax
        mov ecx, dword ptr [esp+0x1c]
        push ebx
        push ecx
        push esi
        push edx
        call dword ptr [g_10021080]
        cmp eax, 1
        jne L3_1
        mov cl, byte ptr [edi+4]
        mov edx, esi
        xor esi, esi
        test cl, cl
        je L3_1
L3_2:
        cmp esi, dword ptr [ebx]
        jae L3_1
        xor byte ptr [edx], cl
        mov cl, byte ptr [edi+4]
        inc esi
        inc edx
        test cl, cl
        jne L3_2
L3_1:
        pop edi
        pop esi
        pop ebx
        ret 0x14

        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn4 0x1000A730 ---- */
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+4], esi
        mov al, byte ptr [esi+4]
        test al, al
        je L4_2
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x1c]
        push edi
        xor ebx, ebx
        xor edi, edi
        test ebp, ebp
        je L4_1
        lea eax, [ebp+2]
        test eax, eax
        jbe L4_3
        add eax, 0x400
        push eax
        call dword ptr [g_100210f8]
        add esp, 4
        test eax, eax
        je L4_1
        mov ebx, eax
L4_3:
        mov esi, dword ptr [esp+0x1c]
        mov ecx, ebp
        mov eax, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov esi, dword ptr [esp+0x10]
        mov byte ptr [ebx+ebp], 0
        mov edi, ebp
        mov byte ptr [ebx+ebp+1], 0
L4_1:
        mov al, byte ptr [esi+4]
        xor edx, edx
        test al, al
        mov ecx, ebx
        je L4_4
L4_5:
        cmp edx, ebp
        jae L4_4
        xor byte ptr [ecx], al
        mov al, byte ptr [esi+4]
        inc edx
        inc ecx
        test al, al
        jne L4_5
L4_4:
        mov ecx, dword ptr [esp+0x28]
        mov edx, dword ptr [esp+0x24]
        mov eax, dword ptr [esp+0x18]
        push ecx
        push edx
        push ebp
        push ebx
        push eax
        call dword ptr [g_10021084]
        test edi, edi
        mov esi, eax
        jbe L4_6
        test ebx, ebx
        je L4_6
        push ebx
        call dword ptr [g_100210ec]
        add esp, 4
L4_6:
        pop edi
        pop ebp
        mov eax, esi
        pop ebx
        pop esi
        pop ecx
        ret 0x14
L4_2:
        mov ecx, dword ptr [esp+0x1c]
        mov edx, dword ptr [esp+0x18]
        mov eax, dword ptr [esp+0x14]
        push ecx
        mov ecx, dword ptr [esp+0x14]
        push edx
        mov edx, dword ptr [esp+0x14]
        push eax
        push ecx
        push edx
        call dword ptr [g_10021084]
        pop esi
        pop ecx
        ret 0x14

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

        /* ---- fn5 0x1000A810 ---- */
        mov ecx, dword ptr [esp+4]
        sub esp, 0x200
        __emit 0x8D
        __emit 0x44
        __emit 0x24
        __emit 0x00 /* __emit: lea eax,[esp+0] MSVC6 drops 00 disp byte */
        push 0
        push 0
        push 0x1ff
        push eax
        push -1
        push ecx
        push 0
        push 0
        call dword ptr [g_1002106c]
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00 /* __emit: lea edx,[esp+0] MSVC6 drops 00 disp byte */
        push edx
        call dword ptr [g_10021088]
        add esp, 0x200
        ret 4

        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn6 0x1000A850 ---- */
        mov ecx, dword ptr [esp+4]
        sub esp, 0x400
        lea eax, [esp+0x200]
        push esi
        mov esi, dword ptr [g_1002106c]
        push 0
        push 0
        push 0x1ff
        push eax
        push -1
        push ecx
        push 0
        push 0
        call esi
        mov eax, dword ptr [esp+0x40c]
        push 0
        push 0
        lea edx, [esp+0xc]
        push 0x1ff
        push edx
        push -1
        push eax
        push 0
        push 0
        call esi
        lea ecx, [esp+4]
        lea edx, [esp+0x204]
        push ecx
        push edx
        call dword ptr [g_1002108c]
        pop esi
        add esp, 0x400
        ret 8

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

        /* ---- fn7 0x1000A8C0 ---- */
        mov eax, dword ptr [esp+4]
        test eax, eax
        jne L7_1
        mov eax, 1
        ret 4
L7_1:
        push eax
        call dword ptr [g_1002102c]
        ret 4

        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn8 0x1000A8E0 ---- */
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x14]
        push esi
        push edi
        xor edi, edi
        mov eax, dword ptr [ebp+0xc]
        mov dword ptr [esp+0x10], ecx
        cmp eax, edi
        jbe L8_1
        mov eax, dword ptr [ebp]
        cmp eax, edi
        je L8_1
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L8_1:
        mov eax, offset g_100274ec
        mov dword ptr [ebp], edi
        test eax, eax
        mov dword ptr [ebp+0x10], edi
        mov dword ptr [ebp+0xc], edi
        je L8_2
        cmp word ptr [g_100274ec], di
        je L8_2
        push eax
        call dword ptr [g_100210f4]
        mov esi, eax
        add esp, 4
        shl esi, 1
        mov dword ptr [esp+0x1c], esi
        je L8_2
        mov ecx, dword ptr [ebp+0xc]
        lea eax, [esi+ecx+2]
        mov ecx, dword ptr [ebp+0x10]
        cmp eax, ecx
        jbe L8_3
        mov edx, dword ptr [ebp+0x14]
        add eax, edx
        push eax
        mov dword ptr [ebp+0x10], eax
        call dword ptr [g_100210f8]
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        jne L8_4
        cmp dword ptr [ebp+0xc], edi
        jbe L8_5
        mov eax, dword ptr [ebp]
        cmp eax, edi
        je L8_5
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L8_5:
        mov dword ptr [ebp], edi
        mov dword ptr [ebp+0x10], edi
        mov dword ptr [ebp+0xc], edi
        jmp L8_2
L8_4:
        mov ecx, dword ptr [ebp+0xc]
        cmp ecx, edi
        jbe L8_6
        mov esi, dword ptr [ebp]
        mov eax, ecx
        mov edi, ebx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        xor eax, eax
        and ecx, 3
        rep movsb
        mov edx, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        sub ecx, edx
        lea edi, [edx+ebx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr [ebp]
        push eax
        call dword ptr [g_100210ec]
        mov esi, dword ptr [esp+0x20]
        add esp, 4
L8_6:
        mov dword ptr [ebp], ebx
L8_3:
        mov edi, dword ptr [ebp]
        mov eax, dword ptr [ebp+0xc]
        mov ecx, esi
        mov esi, offset g_100274ec
        mov edx, ecx
        add edi, eax
        shr ecx, 2
        rep movsd
        mov eax, dword ptr [esp+0x1c]
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [ebp+0xc]
        add ecx, eax
        xor edi, edi
        mov dword ptr [ebp+0xc], ecx
        mov eax, ecx
        mov ecx, dword ptr [ebp]
        mov byte ptr [eax+ecx], 0
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [ebp+0xc]
        mov byte ptr [edx+eax+1], 0
L8_2:
        mov ecx, dword ptr [esp+0x10]
        mov esi, dword ptr [ecx+0x10]
        cmp esi, edi
        je L8_7
        mov edx, dword ptr [esp+0x18]
        mov edi, dword ptr [g_1002113c]
        push offset g_10025f0c
        push edx
        call edi
        mov ebx, eax
        add esp, 8
        test ebx, ebx
        je L8_7
L8_8:
        lea eax, [esi+0x48]
        push ebx
        push eax
        call edi
        add esp, 8
        test eax, eax
        jne L8_9
L8_LOOP:
        mov esi, dword ptr [esi+0x18]
        test esi, esi
        je L8_7
        lea ecx, [esi+0x48]
        push ebx
        push ecx
        call edi
        add esp, 8
        test eax, eax
        je L8_LOOP
L8_9:
        mov eax, dword ptr [ebp+0xc]
        xor edi, edi
        add esi, 0x48
        cmp eax, edi
        mov dword ptr [esp+0x18], esi
        jbe L8_10
        mov eax, dword ptr [ebp]
        cmp eax, edi
        je L8_10
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L8_10:
        cmp esi, edi
        mov dword ptr [ebp], edi
        mov dword ptr [ebp+0x10], edi
        mov dword ptr [ebp+0xc], edi
        je L8_7
        cmp word ptr [esi], di
        je L8_7
        push esi
        call dword ptr [g_100210f4]
        mov edi, eax
        add esp, 4
        shl edi, 1
        mov dword ptr [esp+0x1c], edi
        je L8_7
        mov edx, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        lea eax, [edi+edx+2]
        cmp eax, ecx
        jbe L8_11
        mov ecx, dword ptr [ebp+0x14]
        add eax, ecx
        push eax
        mov dword ptr [ebp+0x10], eax
        call dword ptr [g_100210f8]
        mov ebx, eax
        add esp, 4
        test ebx, ebx
        jne L8_12
        mov eax, dword ptr [ebp+0xc]
        test eax, eax
        jbe L8_13
        mov eax, dword ptr [ebp]
        test eax, eax
        je L8_13
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L8_13:
        xor eax, eax
        pop edi
        mov dword ptr [ebp], eax
        mov dword ptr [ebp+0x10], eax
        mov dword ptr [ebp+0xc], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
L8_12:
        mov ecx, dword ptr [ebp+0xc]
        test ecx, ecx
        jbe L8_14
        mov esi, dword ptr [ebp]
        mov edx, ecx
        mov edi, ebx
        xor eax, eax
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        sub ecx, edx
        lea edi, [edx+ebx]
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        mov eax, dword ptr [ebp]
        push eax
        call dword ptr [g_100210ec]
        mov esi, dword ptr [esp+0x1c]
        mov edi, dword ptr [esp+0x20]
        add esp, 4
L8_14:
        mov dword ptr [ebp], ebx
L8_11:
        mov eax, dword ptr [ebp+0xc]
        mov ecx, edi
        mov edi, dword ptr [ebp]
        mov edx, ecx
        add edi, eax
        mov eax, dword ptr [esp+0x1c]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [ebp+0xc]
        add ecx, eax
        mov dword ptr [ebp+0xc], ecx
        mov eax, ecx
        mov ecx, dword ptr [ebp]
        mov byte ptr [eax+ecx], 0
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [ebp+0xc]
        mov byte ptr [edx+eax+1], 0
L8_7:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8

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

        /* ---- fn9 0x1000ABB0 ---- */
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        xor edi, edi
        mov ebx, dword ptr [ebp+0x10]
        mov dword ptr [ebp+0x14], edi
        cmp ebx, edi
        je L9_1
        mov eax, dword ptr [esp+0x18]
        push offset g_10025f0c
        push eax
        call dword ptr [g_1002113c]
        mov esi, eax
        add esp, 8
        test esi, esi
        mov dword ptr [esp+0x18], esi
        je L9_2
L9_3:
        lea ecx, [ebx+0x48]
        push esi
        push ecx
        call dword ptr [g_1002113c]
        add esp, 8
        test eax, eax
        je L9_4
        mov edx, edi
        inc edi
        test edx, edx
        mov dword ptr [esp+0x10], edi
        jne L9_5
        mov edi, dword ptr [esp+0x1c]
        mov dword ptr [ebp+0x14], ebx
        mov dword ptr [ebx], edx
        mov esi, dword ptr [ebp+0x14]
        add esi, 0x1c
        mov ecx, 0x94
        rep movsd
        mov esi, dword ptr [esp+0x18]
        mov edi, dword ptr [esp+0x10]
        jmp L9_6
L9_5:
        mov dword ptr [ebx], 1
        jmp L9_6
L9_4:
        mov dword ptr [ebx], 0
L9_6:
        mov ebx, dword ptr [ebx+0x18]
        test ebx, ebx
        jne L9_3
L9_1:
        mov ebp, dword ptr [ebp+0x14]
        test ebp, ebp
        je L9_2
        mov eax, dword ptr [ebp+0xc]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
L9_2:
        pop edi
        pop esi
        pop ebp
        or eax, 0xffffffff
        pop ebx
        pop ecx
        ret 8

        nop

        /* ---- fn10 0x1000AC50 ---- */
        mov edx, ecx
        mov eax, dword ptr [edx+0x14]
        test eax, eax
        je L10_1
L10_2:
        cmp dword ptr [eax], 0
        jne L10_3
L10_LOOP:
        mov eax, dword ptr [eax+0x18]
        test eax, eax
        je L10_1
        cmp dword ptr [eax], 0
        je L10_LOOP
L10_3:
        push esi
        push edi
        mov edi, dword ptr [esp+0x10]
        lea esi, [eax+0x1c]
        mov ecx, 0x94
        mov dword ptr [edx+0x14], eax
        rep movsd
        mov eax, dword ptr [edx+0x14]
        pop edi
        pop esi
        mov dword ptr [eax], 0
        mov eax, 1
        ret 8
L10_1:
        xor eax, eax
        ret 8

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

        /* ---- fn11 0x1000ACA0 ---- */
        mov edx, dword ptr [ecx+0x14]
        xor eax, eax
        test edx, edx
        setne al
        ret 4

        nop
        nop
        nop

        /* ---- fn12 0x1000ACB0 ---- */
        mov eax, 1
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn13 0x1000ACC0 ---- */
        mov eax, dword ptr [esp+8]
        cmp eax, 0x2323
        je L13_3
        cmp eax, 0x40000000
        je L13_2
        cmp eax, 0x80000000
        je L13_1
        or eax, 0xffffffff
        ret 8
L13_1:
        mov eax, dword ptr [esp+4]
        push eax
        call FUN_1000b170
        ret 8
L13_2:
        mov edx, dword ptr [esp+4]
        push edx
        call FUN_1000b0a0
        ret 8
L13_3:
        lea eax, [ecx+8]
        ret 8

        nop

        /* ---- fn14 0x1000AD00 ---- */
        push ebx
        mov ebx, ecx
        push edi
        mov eax, dword ptr [ebx+0x10]
        test eax, eax
        je L14_1
        mov ecx, dword ptr [esp+0xc]
        mov edx, dword ptr [eax+0xc]
        cmp edx, ecx
        je L14_2
L14_3:
        mov eax, dword ptr [eax+0x18]
        test eax, eax
        je L14_1
        cmp dword ptr [eax+0xc], ecx
        jne L14_3
L14_2:
        mov ecx, dword ptr [eax+0x3c]
        mov edi, dword ptr [eax+8]
        mov edx, dword ptr [esp+0x14]
        sub ecx, edi
        cmp ecx, edx
        jbe L14_4
        mov ecx, edx
L14_4:
        mov edx, dword ptr [esp+0x18]
        test ecx, ecx
        mov dword ptr [edx], ecx
        je L14_1
        mov edx, dword ptr [eax+8]
        push ebp
        push esi
        mov esi, dword ptr [eax+0x10]
        add esi, edx
        mov edx, dword ptr [esp+0x18]
        mov ebp, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov esi, dword ptr [esp+0x20]
        mov ebp, dword ptr [eax+8]
        mov ecx, dword ptr [esi]
        add ebp, ecx
        mov ecx, edx
        mov dword ptr [eax+8], ebp
        mov al, byte ptr [ebx+4]
        xor edx, edx
        test al, al
        je L14_5
L14_6:
        cmp edx, dword ptr [esi]
        jae L14_5
        xor byte ptr [ecx], al
        mov al, byte ptr [ebx+4]
        inc edx
        inc ecx
        test al, al
        jne L14_6
L14_5:
        pop esi
        pop ebp
        pop edi
        mov eax, 1
        pop ebx
        ret 0x14
L14_1:
        pop edi
        xor eax, eax
        pop ebx
        ret 0x14

        nop
        nop
        nop
        nop
        nop

        /* ---- fn15 0x1000ADA0 ---- */
        sub esp, 0xa0
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp+0x14], edi
        mov ebx, dword ptr [edi+0xc]
        test ebx, ebx
        je L15_1
        mov eax, dword ptr [esp+0xb4]
        mov ecx, dword ptr [ebx+0xc]
        cmp ecx, eax
        je L15_2
L15_3:
        mov ebx, dword ptr [ebx+0x14]
        test ebx, ebx
        je L15_1
        cmp dword ptr [ebx+0xc], eax
        jne L15_3
L15_2:
        mov eax, dword ptr [ebx+0x3c]
        mov ebp, dword ptr [esp+0xbc]
        mov ecx, dword ptr [ebx+0x10]
        mov esi, dword ptr [g_100210f8]
        add eax, ebp
        test ecx, ecx
        mov dword ptr [esp+0x10], eax
        push eax
        je L15_4
        push ecx
        call dword ptr [g_100210e4]
        add esp, 8
        test eax, eax
        jne L15_5
        mov eax, dword ptr [ebx+0x10]
        push eax
        call dword ptr [g_100210ec]
        add esp, 4
L15_1:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xa0
        ret 0x14
L15_4:
        call esi
        add esp, 4
        mov dword ptr [ebx+0x10], eax
        test eax, eax
        je L15_1
L15_5:
        mov al, byte ptr [edi+4]
        test al, al
        je L15_6
        xor edx, edx
        cmp ebp, edx
        mov dword ptr [esp+0x24], edx
        je L15_7
        lea eax, [ebp+2]
        cmp eax, edx
        jbe L15_8
        add eax, 0x400
        push eax
        call esi
        xor edx, edx
        add esp, 4
        cmp eax, edx
        jne L15_9
        mov dword ptr [esp+0x24], edx
        jmp L15_7
L15_9:
        mov edx, eax
L15_8:
        mov esi, dword ptr [esp+0xb8]
        mov ecx, ebp
        mov eax, ecx
        mov edi, edx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov dword ptr [esp+0x24], ebp
        and ecx, 3
        rep movsb
        mov edi, dword ptr [esp+0x14]
        mov byte ptr [edx+ebp], 0
        mov byte ptr [edx+ebp+1], 0
L15_7:
        mov al, byte ptr [edi+4]
        xor esi, esi
        test al, al
        mov ecx, edx
        je L15_10
L15_11:
        cmp esi, ebp
        jae L15_10
        xor byte ptr [ecx], al
        mov al, byte ptr [edi+4]
        inc esi
        inc ecx
        test al, al
        jne L15_11
L15_10:
        mov edi, dword ptr [ebx+0x3c]
        mov eax, dword ptr [ebx+0x10]
        mov ecx, ebp
        add edi, eax
        mov eax, ecx
        mov esi, edx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [esp+0x24]
        and ecx, 3
        test eax, eax
        rep movsb
        jbe L15_12
        test edx, edx
        je L15_12
        push edx
        call dword ptr [g_100210ec]
        add esp, 4
        jmp L15_12
L15_6:
        mov edi, dword ptr [ebx+0x3c]
        mov edx, dword ptr [ebx+0x10]
        mov esi, dword ptr [esp+0xb8]
        mov ecx, ebp
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
L15_12:
        mov eax, dword ptr [esp+0x10]
        mov ecx, dword ptr [esp+0xc0]
        mov dword ptr [ebx+0x3c], eax
        pop edi
        mov dword ptr [ecx], ebp
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0xa0
        ret 0x14

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

        /* ---- fn16 0x1000AF20 ---- */
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp+0x10], ebp
        mov esi, dword ptr [ebp+0x10]
        test esi, esi
        je L16_1
        mov edi, dword ptr [esp+0x18]
        mov ebx, dword ptr [g_1002114c]
        push 0x104
        lea eax, [esi+0x48]
        push edi
        push eax
        call ebx
        add esp, 0xc
        test eax, eax
        je L16_2
L16_3:
        mov ebp, esi
        mov esi, dword ptr [esi+0x18]
        test esi, esi
        je L16_1
        push 0x104
        lea ecx, [esi+0x48]
        push edi
        push ecx
        call ebx
        add esp, 0xc
        test eax, eax
        jne L16_3
        test ebp, ebp
        je L16_4
        mov edx, dword ptr [esi+0x14]
        mov dword ptr [ebp+0x14], edx
L16_4:
        mov ebp, dword ptr [esp+0x10]
L16_2:
        mov eax, dword ptr [esi+0x18]
        test eax, eax
        je L16_5
        mov ecx, dword ptr [esi+0x14]
        mov dword ptr [eax+0x14], ecx
L16_5:
        mov eax, dword ptr [esi+0x14]
        test eax, eax
        je L16_6
        mov edx, dword ptr [esi+0x18]
        mov dword ptr [eax+0x18], edx
L16_6:
        cmp esi, dword ptr [ebp+0x10]
        jne L16_7
        mov eax, dword ptr [esi+0x18]
        mov dword ptr [ebp+0x10], eax
L16_7:
        cmp esi, dword ptr [ebp+0xc]
        jne L16_8
        mov ecx, dword ptr [esi+0x14]
        mov dword ptr [ebp+0xc], ecx
L16_8:
        cmp esi, dword ptr [ebp+0x14]
        jne L16_9
        mov edx, dword ptr [esi+0x18]
        mov dword ptr [ebp+0x14], edx
L16_9:
        mov eax, dword ptr [esi+0x10]
        mov edi, dword ptr [g_100210ec]
        push eax
        call edi
        push esi
        call edi
        add esp, 8
        mov eax, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
L16_1:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 4

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

        /* ---- fn17 0x1000AFF0 ---- */
        push ebx
        push esi
        mov esi, dword ptr [ecx+0xc]
        push edi
        test esi, esi
        je L17_1
        mov edi, dword ptr [esp+0x10]
        mov ebx, dword ptr [g_1002114c]
        push 0x104
        lea eax, [esi+0x48]
        push edi
        push eax
        call ebx
        add esp, 0xc
        test eax, eax
        je L17_2
L17_3:
        mov esi, dword ptr [esi+0x14]
        test esi, esi
        je L17_1
        push 0x104
        lea ecx, [esi+0x48]
        push edi
        push ecx
        call ebx
        add esp, 0xc
        test eax, eax
        jne L17_3
L17_2:
        mov edx, dword ptr [esp+0x14]
        push 0x104
        add esi, 0x48
        push edx
        push esi
        call FUN_1000b1e0
        add esp, 0xc
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        ret 8
L17_1:
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn18 0x1000B060 ---- */
        mov eax, dword ptr [ecx+0xc]
        test eax, eax
        je L18_1
        mov ecx, dword ptr [esp+4]
        mov edx, dword ptr [eax+0xc]
        cmp edx, ecx
        je L18_2
L18_3:
        mov eax, dword ptr [eax+0x14]
        test eax, eax
        je L18_1
        cmp dword ptr [eax+0xc], ecx
        jne L18_3
L18_2:
        mov dword ptr [eax+8], 0
        mov eax, 1
        ret 4
L18_1:
        xor eax, eax
        ret 4

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
    }
}
