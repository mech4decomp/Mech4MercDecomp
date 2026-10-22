/* MW4Stats.dll — gap region 0x100152C8..0x100155B0 (744 B)
 * Contains 2 functions plus NOP padding:
 *   fn1 0x100152D0 (ret 8)
 *   fn2 0x100154B0 (ret 8)
 */

extern unsigned short g_100266f4;
extern unsigned short g_100267b0;
extern unsigned short g_100267a4;
extern unsigned short g_10026788;
extern unsigned short g_10026768;
extern unsigned short g_10026754;
extern void* g_10021064;
extern void* g_100210dc;
extern void* g_10021124;
extern double g_100211e0;
extern void __cdecl FUN_1000a0f0(void);
extern void __cdecl FUN_1001e380(void);
extern void __cdecl FUN_100067c0(void);
extern void __cdecl FUN_1000a0e0(void);

__declspec(naked) void FUN_100152c8(void)
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

        /* ---- fn1 0x100152D0 ---- */
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
        mov dword ptr [ecx], 0xc
        mov edx, dword ptr [ebp+0x38]
        mov dword ptr [edx+4], edi
        je F1_1
F1_2:
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
        jne F1_2
F1_1:
        mov eax, dword ptr [ebp+0x38]
        mov eax, dword ptr [eax+4]
        cmp eax, edi
        jne F1_3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040281
        pop ebx
        ret 8
F1_3:
        shl eax, 5
        push eax
        call FUN_1000a0f0
        mov ecx, dword ptr [ebp+0x38]
        cmp esi, edi
        mov dword ptr [ecx+8], eax
        je F1_4
        mov dword ptr [esp+0x18], edi
F1_5:
        mov edx, dword ptr [ebp+0x38]
        mov eax, dword ptr [esp+0x18]
        mov ecx, esi
        mov ebx, dword ptr [edx+8]
        add ebx, eax
        mov eax, dword ptr [esi]
        call dword ptr [eax+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_100267b0
        mov ecx, eax
        call dword ptr [edx+4]
        mov edi, eax
        test edi, edi
        je F1_6
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax]
        jmp F1_7
F1_6:
        xor eax, eax
F1_7:
        test edi, edi
        mov dword ptr [ebx+0x18], eax
        je F1_ERR
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_100267a4
        mov ecx, eax
        call dword ptr [edx+4]
        mov edi, eax
        test edi, edi
        je F1_8
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax]
        push eax
        call dword ptr [g_100210dc]
        add esp, 4
        jmp F1_9
F1_8:
        xor eax, eax
F1_9:
        test edi, edi
        mov dword ptr [ebx+4], eax
        je F1_ERR
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_10026788
        mov ecx, eax
        call dword ptr [edx+4]
        mov edi, eax
        test edi, edi
        je F1_10
        mov eax, dword ptr [edi]
        push 0
        mov ecx, edi
        call dword ptr [eax]
        push eax
        call dword ptr [g_10021124]
        add esp, 8
        jmp F1_11
F1_10:
        fld qword ptr [g_100211e0]
F1_11:
        fstp qword ptr [ebx+8]
        test edi, edi
        je F1_ERR
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_10026768
        mov ecx, eax
        call dword ptr [edx+4]
        mov edi, eax
        test edi, edi
        je F1_12
        mov eax, dword ptr [edi]
        push 0
        mov ecx, edi
        call dword ptr [eax]
        push eax
        call dword ptr [g_10021124]
        add esp, 8
        jmp F1_13
F1_12:
        fld qword ptr [g_100211e0]
F1_13:
        fstp qword ptr [ebx+0x10]
        test edi, edi
        je F1_ERR
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_10026754
        mov ecx, eax
        call dword ptr [edx+4]
        mov edi, eax
        test edi, edi
        je F1_14
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax]
        jmp F1_15
F1_14:
        xor eax, eax
F1_15:
        test edi, edi
        mov dword ptr [ebx+0x1c], eax
        je F1_ERR
        mov ebx, dword ptr [esp+0x18]
        mov edx, dword ptr [esi]
        add ebx, 0x20
        push 1
        push offset g_100266f4
        mov ecx, esi
        mov dword ptr [esp+0x20], ebx
        call dword ptr [edx+0x2c]
        mov esi, eax
        test esi, esi
        jne F1_5
F1_4:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
F1_ERR:
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
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn2 0x100154B0 ---- */
        push ebx
        push ebp
        mov ebp, dword ptr [esp+0x10]
        push esi
        push edi
        push 0xc
        push ebp
        call dword ptr [g_10021064]
        test eax, eax
        je F2_1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80070057
        pop ebx
        ret 8
F2_1:
        mov edi, dword ptr [esp+0x14]
        mov eax, dword ptr [edi+0x1c]
        test eax, eax
        jne F2_2
        lea eax, [esp+0x18]
        lea ebx, [edi-0x1c]
        push eax
        push ebx
        call FUN_1001e380
        test eax, eax
        jl F2_3
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
        jl F2_3
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
        jne F2_4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040285
        pop ebx
        ret 8
F2_4:
        push 0xc
        call FUN_1000a0f0
        test eax, eax
        mov dword ptr [edi+0x1c], eax
        jne F2_5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040259
        pop ebx
        ret 8
F2_5:
        xor edx, edx
        push esi
        mov dword ptr [eax], edx
        push ebx
        mov dword ptr [eax+4], edx
        mov dword ptr [eax+8], edx
        mov eax, dword ptr [ebx]
        call dword ptr [eax+0x38]
        mov esi, eax
        test esi, esi
        jge F2_2
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
F2_2:
        mov edx, dword ptr [edi+0x1c]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp], eax
        xor eax, eax
        mov ecx, dword ptr [edx+4]
        mov dword ptr [ebp+4], ecx
        mov edx, dword ptr [edx+8]
        mov dword ptr [ebp+8], edx
F2_3:
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
