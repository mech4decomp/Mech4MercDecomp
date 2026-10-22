/* func_005a88b0.c - inline-asm transcription of FUN_005a88b0 (890 bytes) */

extern int g_7f2090;
extern int g_7f259c;
extern int g_7f2094;
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_00501a20(int, const char *, int, int, int, void *, void *, int, void *, int, void *, void *, void *);
extern void *__cdecl FUN_00501500(int, const char *, int, int);
extern void __cdecl FUN_005016b0(void *);
extern void __cdecl FUN_005008e0(int, const char *, int, int);
extern void __cdecl FUN_00500ec0(void *);

__declspec(naked) void func_005a88b0(void)
{
    __asm {
        push esi
        push 0xa8
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_A0
        mov eax, dword ptr [g_7f2090]
        mov ecx, dword ptr [g_7f259c]
        push 0x502c60
        push 0x5028b0
        push 0x677ae0
        push 0x0
        push 0x677ac0
        push eax
        push 0x674b00
        push 0x5a8c60
        push 0x0
        push 0x0
        push ecx
        push 0x7850f8
        push 0x4a6
        mov ecx, esi
        call FUN_00501a20
        mov dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [g_7f2094], esi
        jmp L_A1
L_A0:
        mov dword ptr [g_7f2094], 0x0
L_A1:
        push 0x20
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz  L_B0
        push 0xe0
        push 0x4a5
        push 0x773250
        push 0x1
        mov ecx, eax
        call FUN_00501500
        jmp L_B1
L_B0:
        xor eax, eax
L_B1:
        mov edx, dword ptr [g_7f2094]
        push eax
        lea ecx, [edx + 0x44]
        call FUN_005016b0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_C0
        push 0x7c
        push 0x2
        push 0x7850e8
        push 0x1d
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x775948
        jmp L_C1
L_C0:
        xor esi, esi
L_C1:
        mov eax, dword ptr [g_7f2094]
        push esi
        lea ecx, [eax + 0x74]
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_D0
        push 0x80
        push 0x2
        push 0x7850d4
        push 0x1e
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x775948
        jmp L_D1
L_D0:
        xor esi, esi
L_D1:
        mov ecx, dword ptr [g_7f2094]
        push esi
        add ecx, 0x74
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_E0
        push 0x84
        push 0x231
        push 0x7850bc
        push 0x1f
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_E1
L_E0:
        xor esi, esi
L_E1:
        mov edx, dword ptr [g_7f2094]
        push esi
        lea ecx, [edx + 0x74]
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_F0
        push 0x88
        push 0x231
        push 0x7850a0
        push 0x20
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_F1
L_F0:
        xor esi, esi
L_F1:
        mov eax, dword ptr [g_7f2094]
        push esi
        lea ecx, [eax + 0x74]
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_G0
        push 0x8c
        push 0x231
        push 0x785088
        push 0x21
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_G1
L_G0:
        xor esi, esi
L_G1:
        mov ecx, dword ptr [g_7f2094]
        push esi
        add ecx, 0x74
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_H0
        push 0x90
        push 0x231
        push 0x785068
        push 0x22
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_H1
L_H0:
        xor esi, esi
L_H1:
        mov edx, dword ptr [g_7f2094]
        push esi
        lea ecx, [edx + 0x74]
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_I0
        push 0x94
        push 0x231
        push 0x785050
        push 0x23
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_I1
L_I0:
        xor esi, esi
L_I1:
        mov eax, dword ptr [g_7f2094]
        push esi
        lea ecx, [eax + 0x74]
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_J0
        push 0x98
        push 0x231
        push 0x785034
        push 0x24
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_J1
L_J0:
        xor esi, esi
L_J1:
        mov ecx, dword ptr [g_7f2094]
        push esi
        add ecx, 0x74
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_K0
        push 0x9c
        push 0x231
        push 0x78501c
        push 0x25
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_K1
L_K0:
        xor esi, esi
L_K1:
        mov edx, dword ptr [g_7f2094]
        push esi
        lea ecx, [edx + 0x74]
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_L0
        push 0xa0
        push 0x231
        push 0x784ffc
        push 0x26
        mov ecx, esi
        call FUN_005008e0
        mov dword ptr [esi], 0x773cd0
        jmp L_L1
L_L0:
        xor esi, esi
L_L1:
        mov eax, dword ptr [g_7f2094]
        push esi
        lea ecx, [eax + 0x74]
        call FUN_00500ec0
        push 0x20
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz  L_M0
        push 0xa4
        push 0x231
        push 0x784fe4
        push 0x27
        mov ecx, esi
        call FUN_005008e0
        mov ecx, dword ptr [g_7f2094]
        push esi
        add ecx, 0x74
        mov dword ptr [esi], 0x773cd0
        call FUN_00500ec0
        pop esi
        ret
L_M0:
        mov ecx, dword ptr [g_7f2094]
        xor esi, esi
        push esi
        add ecx, 0x74
        call FUN_00500ec0
        pop esi
        ret
    }
}
