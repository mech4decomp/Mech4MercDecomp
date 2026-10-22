/* MW4Stats.dll — gap region 0x10009D08..0x1000A0D0 (968 B)
 * Contains 4 functions plus NOP padding:
 *   fnA 0x10009D10 (SEH COM method, ret 0x10)
 *   fnB 0x10009E40 (SEH COM method, ret 0x10)
 *   fnC 0x10009F50 (ret 8)
 *   fnD 0x10009FF0 (SEH COM method, ret 0x10)
 * Transcribed as a single naked body covering the whole declared range.
 */

extern void* g_10021060;
extern void* g_10021064;
extern void* g_100210dc;
extern unsigned short g_10025fb4;
extern void __cdecl FUN_1000b7b0(void);
extern void __cdecl FUN_1000a120(void);
extern void __cdecl FUN_1000bf00(void);
extern void __cdecl FUN_1000c370(void);
extern void __cdecl FUN_1000dce0(void);
extern void __cdecl FUN_1000b450(void);
extern void __cdecl FUN_1000ddd0(void);
extern void __cdecl FUN_1000b210(void);
extern void __cdecl FUN_1000e030(void);
extern void __cdecl FUN_1000e150(void);
extern void __cdecl FUN_1001f8fb(void);
extern void __cdecl FUN_1001f91b(void);
extern void __cdecl FUN_1001f93b(void);

__declspec(naked) void FUN_10009d08(void)
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

        /* ---- fnA 0x10009D10 ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001f8fb
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp+0x20]
        xor esi, esi
        cmp dword ptr [edi+8], esi
        jne A1
        mov eax, dword ptr [edi+0x1c]
        push 3
        push eax
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x80040290
        jmp AEND
A1:
        cmp dword ptr [esp+0x2c], esi
        je A2
        mov ecx, dword ptr [edi+0x1c]
        push 3
        push ecx
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x80040110
        jmp AEND
A2:
        mov ebx, dword ptr [esp+0x24]
        push 0x30
        push ebx
        call dword ptr [g_10021060]
        test eax, eax
        jne AERR
        mov ebp, dword ptr [esp+0x28]
        push 4
        push ebp
        call dword ptr [g_10021064]
        test eax, eax
        jne AERR
        push 0x474
        call FUN_1000a120
        add esp, 4
        mov dword ptr [esp+0x20], eax
        cmp eax, esi
        mov dword ptr [esp+0x18], esi
        je A3
        mov ecx, eax
        call FUN_1000bf00
        mov esi, eax
A3:
        test esi, esi
        mov dword ptr [esp+0x18], 0xffffffff
        jne A4
        mov edx, dword ptr [edi+0x1c]
        push 3
        push edx
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x8007000e
        jmp AEND
A4:
        mov eax, dword ptr [esi]
        push esi
        call dword ptr [eax+4]
        mov ecx, dword ptr [edi+8]
        lea edx, [edi+0xc]
        push ecx
        push ebx
        push edx
        push esi
        call FUN_1000c370
        mov ebx, eax
        test ebx, ebx
        jl A5
        mov dword ptr [ebp], esi
        jmp AEND
A5:
        mov eax, dword ptr [edi+0x1c]
        push 3
        push eax
        call FUN_1000b7b0
        mov ecx, dword ptr [esi]
        add esp, 8
        push esi
        call dword ptr [ecx+8]
        mov eax, ebx
        jmp AEND
AERR:
        mov edx, dword ptr [edi+0x1c]
        push 3
        push edx
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x80070057
AEND:
        mov ecx, dword ptr [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x10

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

        /* ---- fnB 0x10009E40 ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001f91b
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp+0x20]
        xor esi, esi
        cmp dword ptr [edi+8], esi
        jne B1
        mov eax, 0x80040290
        jmp BEND
B1:
        cmp dword ptr [esp+0x2c], esi
        je B2
        mov eax, 0x80040110
        jmp BEND
B2:
        mov ebx, dword ptr [esp+0x24]
        push 0x10
        push ebx
        call dword ptr [g_10021060]
        test eax, eax
        jne BERR
        mov ebp, dword ptr [esp+0x28]
        push 4
        push ebp
        call dword ptr [g_10021064]
        test eax, eax
        jne BERR
        push 0x2c
        call FUN_1000a120
        add esp, 4
        mov dword ptr [esp+0x20], eax
        cmp eax, esi
        mov dword ptr [esp+0x18], esi
        je B3
        mov ecx, eax
        call FUN_1000dce0
        mov esi, eax
B3:
        test esi, esi
        mov dword ptr [esp+0x18], 0xffffffff
        jne B4
        mov eax, dword ptr [edi+0x1c]
        push 2
        push offset g_10025fb4
        push eax
        call FUN_1000b450
        add esp, 0xc
        mov eax, 0x8007000e
        jmp BEND
B4:
        mov ecx, dword ptr [esi]
        push esi
        call dword ptr [ecx+4]
        mov edx, dword ptr [edi+8]
        push edi
        push edx
        lea eax, [edi+0xc]
        push ebx
        push eax
        push esi
        call FUN_1000ddd0
        mov ebx, eax
        test ebx, ebx
        jl B5
        mov dword ptr [ebp], esi
        jmp BEND
B5:
        mov ecx, dword ptr [edi+0x1c]
        push 3
        push ecx
        call FUN_1000b7b0
        mov edx, dword ptr [esi]
        add esp, 8
        push esi
        call dword ptr [edx+8]
        mov eax, ebx
        jmp BEND
BERR:
        mov eax, dword ptr [edi+0x1c]
        push 3
        push eax
        call FUN_1000b7b0
        add esp, 8
        mov eax, 0x80070057
BEND:
        mov ecx, dword ptr [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x10

        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fnC 0x10009F50 ---- */
        sub esp, 0x200
        push esi
        push edi
        mov edi, dword ptr [esp+0x20c]
        mov eax, dword ptr [edi+8]
        test eax, eax
        jne C1
        pop edi
        mov eax, 0x80040290
        pop esi
        add esp, 0x200
        ret 8
C1:
        mov esi, dword ptr [esp+0x210]
        push 4
        push esi
        call dword ptr [g_10021064]
        test eax, eax
        je C2
        pop edi
        mov eax, 0x80070057
        pop esi
        add esp, 0x200
        ret 8
C2:
        mov ecx, dword ptr [edi+0x1c]
        lea eax, [esp+8]
        push 0x100
        push eax
        push offset g_10025fb4
        push ecx
        call FUN_1000b210
        add esp, 0x10
        test eax, eax
        jne C3
        lea edx, [esp+8]
        push edx
        call dword ptr [g_100210dc]
        add esp, 4
        mov dword ptr [esi], eax
        xor eax, eax
        pop edi
        pop esi
        add esp, 0x200
        ret 8
C3:
        mov eax, 1
        pop edi
        mov dword ptr [esi], eax
        xor eax, eax
        pop esi
        add esp, 0x200
        ret 8

        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fnD 0x10009FF0 ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001f93b
        push eax
        mov dword ptr fs:[0], esp
        push ebx
        mov ebx, dword ptr [esp+0x14]
        push ebp
        push esi
        xor esi, esi
        mov eax, dword ptr [ebx+8]
        push edi
        cmp eax, esi
        jne D1
        mov eax, 0x80040290
        jmp DEND
D1:
        cmp dword ptr [esp+0x2c], esi
        je D2
        mov eax, 0x80040110
        jmp DEND
D2:
        mov edi, dword ptr [esp+0x24]
        push 0x10
        push edi
        call dword ptr [g_10021060]
        test eax, eax
        jne DERR
        mov ebp, dword ptr [esp+0x28]
        push 4
        push ebp
        call dword ptr [g_10021064]
        test eax, eax
        jne DERR
        push 0x58
        call FUN_1000a120
        add esp, 4
        mov dword ptr [esp+0x20], eax
        cmp eax, esi
        mov dword ptr [esp+0x18], esi
        je D3
        mov ecx, eax
        call FUN_1000e030
        mov esi, eax
D3:
        test esi, esi
        mov dword ptr [esp+0x18], 0xffffffff
        jne D4
        mov eax, 0x8007000e
        jmp DEND
D4:
        mov eax, dword ptr [esi]
        push esi
        call dword ptr [eax+4]
        add ebx, 0xc
        push edi
        push ebx
        push esi
        call FUN_1000e150
        mov edi, eax
        test edi, edi
        jl D5
        mov dword ptr [ebp], esi
        jmp DEND
D5:
        mov ecx, dword ptr [esi]
        push esi
        call dword ptr [ecx+8]
        mov eax, edi
        jmp DEND
DERR:
        mov eax, 0x80070057
DEND:
        mov ecx, dword ptr [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs:[0], ecx
        pop ebx
        add esp, 0xc
        ret 0x10

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
    }
}
