/* func_0069273C.c -- in-.text data block 0x69273C (1257 B)
 * Disassembled from reference\MW4Mercs.exe.  Switch dispatcher over a
 * per-case float field (ebx+0x634..0x648) with a strcmp-style name check
 * and a jump table at 0x692C28 (outside this slice).
 */

extern char g_76b768[];                 /* string constant */
extern float g_76c5b0;                  /* float constant */
extern char g_799270[];                 /* format string */
extern char g_797e00[];                 /* format string */
extern char g_799240[];                 /* format string */
extern char g_799210[];                 /* format string */
extern char g_7991e0[];                 /* format string */
extern char g_7991b0[];                 /* format string */
extern char g_79917c[];                 /* format string */
extern char g_799148[];                 /* format string */
extern float g_799144;                  /* float constant */
extern void (__cdecl *g_76b424)(void);  /* IAT function pointer */
extern char g_77a388[];                 /* string constant */
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00674890(void);

__declspec(naked) void func_0069273C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x18]
        push esi
        push edi
        mov byte ptr [esp+0x13], 1
        mov esi, offset g_76b768
        mov eax, ebp
loop_692755:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne loc_69277d
        test cl, cl
        je loc_692779
        mov dl, byte ptr [eax+1]
        mov bl, byte ptr [esi+1]
        mov cl, dl
        cmp dl, bl
        jne loc_69277d
        add eax, 2
        add esi, 2
        test cl, cl
        jne loop_692755
loc_692779:
        xor eax, eax
        jmp loc_692782
loc_69277d:
        sbb eax, eax
        sbb eax, -1
loc_692782:
        test eax, eax
        jne loc_69278a
        mov byte ptr [esp+0x13], al
loc_69278a:
        mov esi, dword ptr [esp+0x28]
        mov edi, dword ptr [esp+0x24]
        mov ebx, dword ptr [esp+0x18]
        push esi
        push edi
        push ebp
        mov ebp, dword ptr [esp+0x28]
        push ebp
        push ebx
        call FUN_00674890
        mov byte ptr [esp+0x34], al
        mov eax, dword ptr [ebp+0x10]
        add eax, -0xb
        add esp, 0x14
        cmp eax, 0xb
        ja loc_692c1b
        /* __emit: FF 24 85 [eax*4+imm32] jump-table dispatch; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x28
        __emit 0x2C
        __emit 0x69
        __emit 0x00

        /* case 0 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_6927e4
        mov eax, dword ptr [ebp]
        lea ecx, [esp+0x20]
        push ecx
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x28], 0x42a00000
        call dword ptr [eax+4]
        mov byte ptr [esp+0x20], 1
loc_6927e4:
        fld dword ptr [ebx+0x634]
        fcomp dword ptr [g_76c5b0]
        /* __emit: fnstsw ax no-WAIT DF E0 (MSVC6 inserts 9B WAIT) */
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_692811
        fld dword ptr [ebx+0x634]
        mov edx, dword ptr [edi]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_799270
        push esi
        push edx
        jmp loc_692c0d
loc_692811:
        fld dword ptr [g_799144]
        mov al, byte ptr [esp+0x20]
        fmul dword ptr [ebx+0x634]
        pop edi
        pop esi
        pop ebp
        fstp dword ptr [ebx+0x634]
        pop ebx
        pop ecx
        ret

        /* case 1 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692850
        mov eax, dword ptr [ebp]
        lea ecx, [esp+0x20]
        push ecx
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x28], 0x42a00000
        call dword ptr [eax+4]
        mov byte ptr [esp+0x20], 1
loc_692850:
        fld dword ptr [ebx+0x638]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_69287d
        fld dword ptr [ebx+0x638]
        mov edx, dword ptr [edi]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_797e00
        push esi
        push edx
        jmp loc_692c0d
loc_69287d:
        fld dword ptr [g_799144]
        mov al, byte ptr [esp+0x20]
        fmul dword ptr [ebx+0x638]
        pop edi
        pop esi
        pop ebp
        fstp dword ptr [ebx+0x638]
        pop ebx
        pop ecx
        ret

        /* case 2 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_6928bc
        mov eax, dword ptr [ebp]
        lea ecx, [esp+0x20]
        push ecx
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x28], 0x42c80000
        call dword ptr [eax+4]
        mov byte ptr [esp+0x20], 1
loc_6928bc:
        fld dword ptr [ebx+0x63c]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_6928e9
        fld dword ptr [ebx+0x63c]
        mov edx, dword ptr [edi]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_799240
        push esi
        push edx
        jmp loc_692c0d
loc_6928e9:
        fld dword ptr [g_799144]
        mov al, byte ptr [esp+0x20]
        fmul dword ptr [ebx+0x63c]
        pop edi
        pop esi
        pop ebp
        fstp dword ptr [ebx+0x63c]
        pop ebx
        pop ecx
        ret

        /* case 3 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692928
        mov eax, dword ptr [ebp]
        lea ecx, [esp+0x20]
        push ecx
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x28], 0x42a00000
        call dword ptr [eax+4]
        mov byte ptr [esp+0x20], 1
loc_692928:
        fld dword ptr [ebx+0x640]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_692955
        fld dword ptr [ebx+0x640]
        mov edx, dword ptr [edi]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_799210
        push esi
        push edx
        jmp loc_692c0d
loc_692955:
        fld dword ptr [g_799144]
        mov al, byte ptr [esp+0x20]
        fmul dword ptr [ebx+0x640]
        pop edi
        pop esi
        pop ebp
        fstp dword ptr [ebx+0x640]
        pop ebx
        pop ecx
        ret

        /* case 4 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692c1b
        mov eax, dword ptr [edi]
        push offset g_7991e0
        push esi
        push eax
        call dword ptr [g_76b424]
        mov al, byte ptr [esp+0x2c]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret

        /* case 5 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692c1b
        mov ecx, dword ptr [edi]
        push offset g_7991b0
        push esi
        push ecx
        call dword ptr [g_76b424]
        mov al, byte ptr [esp+0x2c]
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret

        /* case 6 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692c1b
        push 0x100
        call FUN_004084d0
        or ecx, 0xffffffff
        mov edx, eax
        xor eax, eax
        add esp, 4
        mov edi, offset g_77a388
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [ebp]
        and ecx, 3
        push edx
        rep movsb
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x30], edx
        call dword ptr [eax+4]
        mov ecx, dword ptr [esp+0x28]
        push ecx
        mov byte ptr [esp+0x24], 1
        call FUN_004084e0
        mov al, byte ptr [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret

        /* case 7 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692c1b
        push 0x100
        call FUN_004084d0
        or ecx, 0xffffffff
        mov edx, eax
        xor eax, eax
        add esp, 4
        mov edi, offset g_77a388
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [ebp]
        and ecx, 3
        push edx
        rep movsb
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x30], edx
        call dword ptr [eax+4]
        mov ecx, dword ptr [esp+0x28]
        push ecx
        mov byte ptr [esp+0x24], 1
        call FUN_004084e0
        mov al, byte ptr [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret

        /* case 8 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692c1b
        push 0x100
        call FUN_004084d0
        or ecx, 0xffffffff
        mov edx, eax
        xor eax, eax
        add esp, 4
        mov edi, offset g_77a388
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [ebp]
        and ecx, 3
        push edx
        rep movsb
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x30], edx
        call dword ptr [eax+4]
        mov ecx, dword ptr [esp+0x28]
        push ecx
        mov byte ptr [esp+0x24], 1
        call FUN_004084e0
        mov al, byte ptr [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret

        /* case 9 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692c1b
        push 0x100
        call FUN_004084d0
        or ecx, 0xffffffff
        mov edx, eax
        xor eax, eax
        add esp, 4
        mov edi, offset g_77a388
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [ebp]
        and ecx, 3
        push edx
        rep movsb
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x30], edx
        call dword ptr [eax+4]
        mov ecx, dword ptr [esp+0x28]
        push ecx
        mov byte ptr [esp+0x24], 1
        call FUN_004084e0
        mov al, byte ptr [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret

        /* case 10 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692b80
        mov edx, dword ptr [ebp]
        lea eax, [esp+0x20]
        push eax
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x28], 0x41a00000
        call dword ptr [edx+4]
        mov byte ptr [esp+0x20], 1
loc_692b80:
        fld dword ptr [ebx+0x644]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_692ba6
        fld dword ptr [ebx+0x644]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_79917c
        jmp loc_692c09
loc_692ba6:
        fld dword ptr [g_799144]
        mov al, byte ptr [esp+0x20]
        fmul dword ptr [ebx+0x644]
        pop edi
        pop esi
        pop ebp
        fstp dword ptr [ebx+0x644]
        pop ebx
        pop ecx
        ret

        /* case 11 */
        mov al, byte ptr [esp+0x13]
        test al, al
        jne loc_692be5
        mov edx, dword ptr [ebp]
        lea eax, [esp+0x20]
        push eax
        push ebx
        mov ecx, ebp
        mov dword ptr [esp+0x28], 0x3f800000
        call dword ptr [edx+4]
        mov byte ptr [esp+0x20], 1
loc_692be5:
        fld dword ptr [ebx+0x648]
        fcomp dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        test ah, 1
        je loc_692c1b
        fld dword ptr [ebx+0x648]
        sub esp, 8
        fstp qword ptr [esp]
        push offset g_799148
loc_692c09:
        mov ecx, dword ptr [edi]
        push esi
        push ecx
loc_692c0d:
        call dword ptr [g_76b424]
        add esp, 0x14
        mov byte ptr [esp+0x20], 0
loc_692c1b:
        mov al, byte ptr [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
