/* MW4Stats.dll — gap region 0x1001801C..0x10018710 (1780 B)
 * Contains 4 functions plus NOP padding:
 *   fn1 0x10018020 (ret 8)
 *   fn2 0x10018380 (ret 8)
 *   fn3 0x100185F0 (ret 8)
 *   fn4 0x10018610 (ret 8)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern unsigned short g_100262d8;
extern unsigned short g_100266d0;
extern unsigned short g_100262d0;
extern unsigned short g_100262cc;
extern unsigned short g_100266c8;
extern unsigned short g_1002684c;
extern unsigned short g_10026844;
extern unsigned short g_1002672c;
extern unsigned short g_10026698;
extern unsigned short g_100266b0;
extern unsigned short g_100266a8;
extern unsigned short g_100266a0;
extern unsigned short g_10026690;
extern unsigned short g_10026804;
extern unsigned short g_100266f4;
extern unsigned short g_100268cc;
extern unsigned short g_100268b8;
extern unsigned short g_1002681c;
extern unsigned short g_1002689c;
extern unsigned short g_10026888;
extern unsigned short g_100274ec;
extern void* g_100210b8;
extern void* g_10021138;
extern void* g_10021064;
extern void __cdecl FUN_10001680(void);
extern void __cdecl FUN_10011e20(void);
extern void __cdecl FUN_100143f0(void);
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_1000bee0(void);
extern void __cdecl FUN_1001e340(void);
extern void __cdecl FUN_1001e380(void);
extern void __cdecl FUN_100067c0(void);
extern void __cdecl FUN_1000a0e0(void);

__declspec(naked) void FUN_1001801c(void)
{
    __asm {
        nop
        nop
        nop
        nop

        /* ---- fn1 0x10018020 ---- */
        sub esp, 0x204
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp+0x218]
        push edi
        mov edi, dword ptr [esp+0x218]
        push offset g_100262d8
        mov ecx, esi
        mov eax, dword ptr [edi+0x34]
        mov ebx, dword ptr [eax+0xc]
        call FUN_10001680
        push offset g_100266d0
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        push ebx
        mov ecx, esi
        call FUN_10011e20
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
        mov ecx, dword ptr [edi+0x34]
        push offset g_100262d8
        mov ebx, dword ptr [ecx+0x10]
        mov ecx, esi
        call FUN_10001680
        push offset g_100266c8
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        push ebx
        mov ecx, esi
        call FUN_10011e20
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
        mov eax, dword ptr [edi+0x34]
        mov ebx, dword ptr [g_100210b8]
        mov ebp, dword ptr [g_10021138]
        add eax, 8
        cmp dword ptr [eax], 0
        je F1_L1
        push eax
        call ebx
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [eax+4]
        add esp, 4
        push edx
        mov edx, dword ptr [eax+8]
        push ecx
        mov ecx, dword ptr [eax+0xc]
        push edx
        mov edx, dword ptr [eax+0x10]
        mov eax, dword ptr [eax+0x14]
        inc edx
        push ecx
        add eax, 0x76c
        push edx
        push eax
        lea ecx, [esp+0x2c]
        push offset g_1002684c
        push ecx
        call ebp
        lea edx, [esp+0x34]
        add esp, 0x20
        test edx, edx
        je F1_L1
        cmp word ptr [esp+0x14], 0
        je F1_L1
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_10026844
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        lea eax, [esp+0x14]
        mov ecx, esi
        push eax
        call FUN_10001680
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
F1_L1:
        mov eax, dword ptr [edi+0x34]
        add eax, 4
        cmp dword ptr [eax], 0
        je F1_L2
        push eax
        call ebx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax+4]
        add esp, 4
        push ecx
        mov ecx, dword ptr [eax+8]
        push edx
        mov edx, dword ptr [eax+0xc]
        push ecx
        mov ecx, dword ptr [eax+0x10]
        push edx
        mov edx, dword ptr [eax+0x14]
        inc ecx
        add edx, 0x76c
        push ecx
        push edx
        lea eax, [esp+0x2c]
        push offset g_1002684c
        push eax
        call ebp
        lea ecx, [esp+0x34]
        add esp, 0x20
        test ecx, ecx
        je F1_L2
        cmp word ptr [esp+0x14], 0
        je F1_L2
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_1002672c
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        lea edx, [esp+0x14]
        mov ecx, esi
        push edx
        call FUN_10001680
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
F1_L2:
        mov eax, dword ptr [edi+0x2a8]
        mov ebp, offset g_100274ec
        test eax, eax
        je F1_L3
        jbe F1_L3a
        mov ebx, dword ptr [edi+0x29c]
        jmp F1_L3b
F1_L3a:
        mov ebx, ebp
F1_L3b:
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_10026698
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        push ebx
        mov ecx, esi
        call FUN_10001680
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
F1_L3:
        mov eax, dword ptr [edi+0xe0]
        test eax, eax
        je F1_L4
        jbe F1_L4a
        mov ebx, dword ptr [edi+0xd4]
        jmp F1_L4b
F1_L4a:
        mov ebx, ebp
F1_L4b:
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_100266b0
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        push ebx
        mov ecx, esi
        call FUN_10001680
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
F1_L4:
        mov eax, dword ptr [edi+0x178]
        test eax, eax
        je F1_L5
        jbe F1_L5a
        mov ebx, dword ptr [edi+0x16c]
        jmp F1_L5b
F1_L5a:
        mov ebx, ebp
F1_L5b:
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_100266a8
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        push ebx
        mov ecx, esi
        call FUN_10001680
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
F1_L5:
        mov eax, dword ptr [edi+0x210]
        test eax, eax
        je F1_L6
        jbe F1_L6a
        mov eax, dword ptr [edi+0x204]
        mov dword ptr [esp+0x10], eax
        jmp F1_L6b
F1_L6a:
        mov dword ptr [esp+0x10], ebp
F1_L6b:
        lea ecx, [esp+0x10]
        push ecx
        push offset g_100266a0
        push esi
        call FUN_100143f0
        add esp, 0xc
F1_L6:
        mov eax, dword ptr [edi+0x340]
        test eax, eax
        je F1_L7
        jbe F1_L7a
        mov edx, dword ptr [edi+0x334]
        mov dword ptr [esp+0x10], edx
        jmp F1_L7b
F1_L7a:
        mov dword ptr [esp+0x10], ebp
F1_L7b:
        lea eax, [esp+0x10]
        push eax
        push offset g_10026690
        push esi
        call FUN_100143f0
        add esp, 0xc
F1_L7:
        mov eax, dword ptr [edi+0x3d8]
        test eax, eax
        je F1_L8
        jbe F1_L8a
        mov edi, dword ptr [edi+0x3cc]
        jmp F1_L8b
F1_L8a:
        mov edi, ebp
F1_L8b:
        push offset g_100262d8
        mov ecx, esi
        call FUN_10001680
        push offset g_10026804
        mov ecx, esi
        call FUN_10001680
        push offset g_100262d0
        mov ecx, esi
        call FUN_10001680
        push edi
        mov ecx, esi
        call FUN_10001680
        push offset g_100262cc
        mov ecx, esi
        call FUN_10001680
F1_L8:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x204
        ret 8

        nop
        nop
        nop

        /* ---- fn2 0x10018380 ---- */
        mov ecx, dword ptr [esp+8]
        push ebx
        push ebp
        push esi
        mov eax, dword ptr [ecx]
        push edi
        push 1
        push offset g_100266f4
        call dword ptr [eax+0x1c]
        mov esi, eax
        xor edi, edi
        mov ebp, dword ptr [esp+0x14]
        cmp esi, edi
        mov ecx, dword ptr [ebp+0x38]
        mov dword ptr [ecx], 0x10
        mov edx, dword ptr [ebp+0x38]
        mov dword ptr [edx+4], edi
        je F2_1
F2_loop:
        mov ecx, dword ptr [ebp+0x38]
        push 1
        push offset g_100266f4
        mov edx, dword ptr [ecx+4]
        inc edx
        mov dword ptr [ecx+4], edx
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx+0x2c]
        cmp eax, edi
        jne F2_loop
F2_1:
        mov eax, dword ptr [ebp+0x38]
        mov ecx, dword ptr [eax+4]
        cmp ecx, edi
        jne F2_2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040281
        pop ebx
        ret 8
F2_2:
        mov dword ptr [eax+8], ecx
        mov eax, dword ptr [ebp+0x38]
        mov eax, dword ptr [eax+4]
        /* __emit: no-base SIB lea reg,[reg*8+0] (8D 0C C5 00000000) not encodable in MSVC6 */
        __emit 0x8D
        __emit 0x0C
        __emit 0xC5
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        sub ecx, eax
        shl ecx, 2
        push ecx
        call FUN_1000a0f0
        mov edx, dword ptr [ebp+0x38]
        mov dword ptr [edx+0xc], eax
        mov eax, dword ptr [ebp+0x38]
        cmp dword ptr [eax+0xc], edi
        jne F2_3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x8007000e
        pop ebx
        ret 8
F2_3:
        mov eax, dword ptr [eax+4]
        shl eax, 2
        push eax
        call FUN_1000a0f0
        cmp eax, edi
        mov dword ptr [ebp+0x464], eax
        jne F2_4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x8007000e
        pop ebx
        ret 8
F2_4:
        cmp esi, edi
        je F2_END
        mov dword ptr [esp+0x14], edi
        mov dword ptr [esp+0x18], edi
F2_outer:
        mov ecx, dword ptr [ebp+0x38]
        mov eax, dword ptr [esp+0x18]
        mov edx, dword ptr [esi]
        mov edi, dword ptr [ecx+0xc]
        mov ecx, esi
        add edi, eax
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_100268cc
        mov ecx, eax
        call dword ptr [edx+4]
        mov ebx, eax
        test ebx, ebx
        je F2_5
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax]
        jmp F2_6
F2_5:
        xor eax, eax
F2_6:
        test ebx, ebx
        mov dword ptr [edi+0xc], eax
        je F2_ERR
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_100268b8
        mov ecx, eax
        call dword ptr [edx+4]
        mov ebx, eax
        test ebx, ebx
        je F2_7
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax]
        jmp F2_8
F2_7:
        xor eax, eax
F2_8:
        test ebx, ebx
        mov dword ptr [edi+4], eax
        je F2_ERR
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_1002681c
        mov ecx, eax
        call dword ptr [edx+4]
        xor ebx, ebx
        cmp eax, ebx
        je F2_9
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        jmp F2_10
F2_9:
        xor eax, eax
F2_10:
        mov dword ptr [edi+8], eax
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_1002689c
        mov ecx, eax
        call dword ptr [edx+4]
        cmp eax, ebx
        je F2_11
        mov edx, dword ptr [eax]
        mov ecx, eax
        call dword ptr [edx]
        jmp F2_12
F2_11:
        xor eax, eax
F2_12:
        mov dword ptr [edi+0x14], eax
        mov eax, dword ptr [ebp+0x34]
        mov eax, dword ptr [eax+0x24]
        cmp eax, ebx
        je F2_13
        mov dword ptr [edi+0x10], eax
        jmp F2_14
F2_13:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_10026888
        mov ecx, eax
        call dword ptr [edx+4]
        mov ebx, eax
        test ebx, ebx
        je F2_15
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        call dword ptr [eax]
        jmp F2_16
F2_15:
        xor eax, eax
F2_16:
        test ebx, ebx
        mov dword ptr [edi+0x10], eax
        je F2_ERR
        xor ebx, ebx
F2_14:
        push 0x98
        call FUN_1000a120
        add esp, 4
        cmp eax, ebx
        je F2_17
        mov dword ptr [eax], ebx
        mov dword ptr [eax+4], ebx
        mov dword ptr [eax+8], ebx
        mov dword ptr [eax+0xc], ebx
        mov dword ptr [eax+0x10], ebx
        mov dword ptr [eax+0x14], 0x400
        jmp F2_18
F2_17:
        xor eax, eax
F2_18:
        mov ecx, dword ptr [ebp+0x464]
        mov ebx, dword ptr [esp+0x14]
        mov dword ptr [ebx+ecx], eax
        mov edx, dword ptr [ebp+0x464]
        mov eax, dword ptr [ebx+edx]
        push eax
        push esi
        call FUN_1000bee0
        mov ecx, dword ptr [ebp+0x464]
        add esp, 8
        mov eax, dword ptr [ebx+ecx]
        mov ecx, dword ptr [esp+0x18]
        add ecx, 0x1c
        add ebx, 4
        mov dword ptr [esp+0x18], ecx
        mov ecx, dword ptr [eax+0xc]
        test ecx, ecx
        mov dword ptr [esp+0x14], ebx
        jbe F2_19
        mov eax, dword ptr [eax]
        jmp F2_20
F2_19:
        mov eax, offset g_100274ec
F2_20:
        mov dword ptr [edi+0x18], eax
        mov edx, dword ptr [esi]
        push 1
        push offset g_100266f4
        mov ecx, esi
        call dword ptr [edx+0x2c]
        mov esi, eax
        test esi, esi
        jne F2_outer
F2_END:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
F2_ERR:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040282
        pop ebx
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn3 0x100185F0 ---- */
        mov eax, dword ptr [esp+8]
        mov ecx, dword ptr [esp+4]
        push eax
        push ecx
        call FUN_1001e340
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

        /* ---- fn4 0x10018610 ---- */
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x10]
        push esi
        push edi
        push 0x10
        push ebp
        call dword ptr [g_10021064]
        test eax, eax
        je F4_1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F4_1:
        mov edi, dword ptr [esp+0x14]
        mov eax, dword ptr [edi+0x1c]
        test eax, eax
        jne F4_2
        lea eax, [esp+0x18]
        lea ebx, [edi-0x1c]
        push eax
        push ebx
        call FUN_1001e380
        test eax, eax
        jl F4_3
        lea esi, [edi+4]
        push 7
        mov ecx, esi
        call FUN_100067c0
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov eax, dword ptr [esp+0x18]
        push eax
        call dword ptr [edx+8]
        test eax, eax
        jl F4_3
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx]
        mov ecx, dword ptr [edi+0x14]
        mov edx, dword ptr [eax]
        push 1
        push ecx
        mov ecx, eax
        call dword ptr [edx+0x1c]
        mov esi, eax
        test esi, esi
        jne F4_4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040285
        pop ebx
        ret 8
F4_4:
        push 0x10
        call FUN_1000a0f0
        test eax, eax
        mov dword ptr [edi+0x1c], eax
        jne F4_5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040259
        pop ebx
        ret 8
F4_5:
        xor edx, edx
        push esi
        mov dword ptr [eax], edx
        push ebx
        mov dword ptr [eax+4], edx
        mov dword ptr [eax+8], edx
        mov dword ptr [eax+0xc], edx
        mov eax, dword ptr [ebx]
        call dword ptr [eax+0x38]
        mov esi, eax
        test esi, esi
        jge F4_2
        mov ecx, dword ptr [edi+0x1c]
        push ecx
        call FUN_1000a0e0
        mov dword ptr [edi+0x1c], 0
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
F4_2:
        mov edx, dword ptr [edi+0x1c]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp], eax
        mov ecx, dword ptr [edx+4]
        mov dword ptr [ebp+4], ecx
        mov eax, dword ptr [edx+8]
        mov dword ptr [ebp+8], eax
        xor eax, eax
        mov ecx, dword ptr [edx+0xc]
        mov dword ptr [ebp+0xc], ecx
F4_3:
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8

        nop
        nop
        nop
        nop
        nop
    }
}
