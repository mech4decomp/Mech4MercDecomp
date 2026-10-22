/* MW4Stats.dll — gap region 0x1001A6B8..0x1001A8B0 (504 B)
 * One large function 0x1001A6C0 (ret 8) plus 8 leading + 10 trailing NOPs.
 */

extern unsigned short g_100266f4;
extern unsigned short g_100267b0;
extern unsigned short g_100267a4;
extern unsigned short g_10026788;
extern unsigned short g_10026768;
extern unsigned short g_10026754;
extern void* g_100210dc;
extern void* g_10021124;
extern double g_100211e0;
extern void __cdecl FUN_1000a0f0(void);

__declspec(naked) void FUN_1001a6b8(void)
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

        /* ---- fn 0x1001A6C0 ---- */
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
        je L1
L2:
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
        jne L2
L1:
        mov eax, dword ptr [ebp+0x38]
        mov eax, dword ptr [eax+4]
        cmp eax, edi
        jne L3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x80040281
        pop ebx
        ret 8
L3:
        shl eax, 5
        push eax
        call FUN_1000a0f0
        mov ecx, dword ptr [ebp+0x38]
        mov dword ptr [ecx+8], eax
        mov edx, dword ptr [ebp+0x38]
        cmp dword ptr [edx+8], edi
        jne L4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x8007000e
        pop ebx
        ret 8
L4:
        cmp esi, edi
        je LEND
        mov dword ptr [esp+0x18], edi
L5:
        mov eax, dword ptr [ebp+0x38]
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov ebx, dword ptr [eax+8]
        mov eax, dword ptr [esp+0x18]
        add ebx, eax
        call dword ptr [edx+8]
        mov edx, dword ptr [eax]
        push 1
        push offset g_100267b0
        mov ecx, eax
        call dword ptr [edx+4]
        mov edi, eax
        test edi, edi
        je L6
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax]
        jmp L7
L6:
        xor eax, eax
L7:
        test edi, edi
        mov dword ptr [ebx+0x18], eax
        je LERR
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
        je L8
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax]
        push eax
        call dword ptr [g_100210dc]
        add esp, 4
        jmp L9
L8:
        xor eax, eax
L9:
        test edi, edi
        mov dword ptr [ebx+4], eax
        je LERR
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
        je L10
        mov eax, dword ptr [edi]
        push 0
        mov ecx, edi
        call dword ptr [eax]
        push eax
        call dword ptr [g_10021124]
        add esp, 8
        jmp L11
L10:
        fld qword ptr [g_100211e0]
L11:
        fstp qword ptr [ebx+8]
        test edi, edi
        je LERR
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
        je L12
        mov eax, dword ptr [edi]
        push 0
        mov ecx, edi
        call dword ptr [eax]
        push eax
        call dword ptr [g_10021124]
        add esp, 8
        jmp L13
L12:
        fld qword ptr [g_100211e0]
L13:
        fstp qword ptr [ebx+0x10]
        test edi, edi
        je LERR
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
        je L14
        mov eax, dword ptr [edi]
        mov ecx, edi
        call dword ptr [eax]
        jmp L15
L14:
        xor eax, eax
L15:
        test edi, edi
        mov dword ptr [ebx+0x1c], eax
        je LERR
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
        jne L5
LEND:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 8
LERR:
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
    }
}
