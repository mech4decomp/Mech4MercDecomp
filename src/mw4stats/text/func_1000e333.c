/* MW4Stats.dll — gap region 0x1000E333..0x1000E630 (765 B)
 * Contains 11 functions plus NOP padding:
 *   fn1  0x1000E340 thunk -> 0x1000E630
 *   fn2  0x1000E370 SEH COM method (ret 0x10)
 *   fn3  0x1000E4A0 thunk -> 0x1000E770
 *   fn4  0x1000E4D0 thunk -> 0x1000E8B0
 *   fn5  0x1000E500 thunk -> 0x1000E9F0
 *   fn6  0x1000E530 thunk -> 0x1000EB30
 *   fn7  0x1000E560 thunk -> 0x1000EC70
 *   fn8  0x1000E590 thunk -> 0x1000EDB0
 *   fn9  0x1000E5C0 stub (E_NOTIMPL)
 *   fn10 0x1000E5D0 thunk -> 0x1000EEF0
 *   fn11 0x1000E600 thunk -> 0x1000F030
 */

extern void* g_10021060;
extern void* g_10021064;
extern void __cdecl FUN_1000e630(void);
extern void __cdecl FUN_1000e770(void);
extern void __cdecl FUN_1000e8b0(void);
extern void __cdecl FUN_1000e9f0(void);
extern void __cdecl FUN_1000eb30(void);
extern void __cdecl FUN_1000ec70(void);
extern void __cdecl FUN_1000edb0(void);
extern void __cdecl FUN_1000eef0(void);
extern void __cdecl FUN_1000f030(void);
extern void __cdecl FUN_1001ee16(void);
extern void __cdecl FUN_10012e40(void);
extern void __cdecl FUN_1001fadb(void);

__declspec(naked) void FUN_1000e333(void)
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
        nop

        /* ---- fn1 0x1000E340 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000e630
        add esp, 0x14
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

        /* ---- fn2 0x1000E370 ---- */
        mov eax, dword ptr fs:[0]
        push -1
        push offset FUN_1001fadb
        push eax
        mov eax, dword ptr [esp+0x1c]
        mov dword ptr fs:[0], esp
        push ebx
        push esi
        test eax, eax
        push edi
        je E2_1
        mov eax, 0x80040110
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x10
E2_1:
        mov edi, dword ptr [esp+0x20]
        push 0x38
        push edi
        call dword ptr [g_10021060]
        test eax, eax
        jne E2_ERR
        mov ebx, dword ptr [esp+0x24]
        push 4
        push ebx
        call dword ptr [g_10021064]
        test eax, eax
        jne E2_ERR
        push 0x634
        call FUN_1001ee16
        add esp, 4
        mov dword ptr [esp+0x28], eax
        test eax, eax
        mov dword ptr [esp+0x14], 0
        je E2_2
        mov ecx, eax
        call FUN_10012e40
        mov esi, eax
        jmp E2_3
E2_2:
        xor esi, esi
E2_3:
        test esi, esi
        mov dword ptr [esp+0x14], 0xffffffff
        jne E2_4
        mov eax, 0x8007000e
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x10
E2_4:
        mov eax, dword ptr [esi]
        push esi
        call dword ptr [eax+4]
        push 0
        mov eax, dword ptr [esp+0x20]
        mov ecx, dword ptr [eax+4]
        push ecx
        push edi
        lea edx, [ecx+1]
        push eax
        mov dword ptr [eax+4], edx
        mov edx, dword ptr [esi]
        push esi
        call dword ptr [edx+0x44]
        mov edi, eax
        test edi, edi
        jge E2_5
        mov eax, dword ptr [esi]
        push esi
        call dword ptr [eax+8]
        mov eax, edi
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x10
E2_5:
        add esi, 0x1c
        mov eax, edi
        mov dword ptr [ebx], esi
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr fs:[0], ecx
        pop edi
        pop esi
        pop ebx
        add esp, 0xc
        ret 0x10
E2_ERR:
        mov ecx, dword ptr [esp+0xc]
        pop edi
        pop esi
        mov eax, 0x80070057
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

        /* ---- fn3 0x1000E4A0 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000e770
        add esp, 0x14
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

        /* ---- fn4 0x1000E4D0 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000e8b0
        add esp, 0x14
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

        /* ---- fn5 0x1000E500 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000e9f0
        add esp, 0x14
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

        /* ---- fn6 0x1000E530 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000eb30
        add esp, 0x14
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

        /* ---- fn7 0x1000E560 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000ec70
        add esp, 0x14
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

        /* ---- fn8 0x1000E590 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000edb0
        add esp, 0x14
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

        /* ---- fn9 0x1000E5C0 ---- */
        mov eax, 0x80004001
        ret 0x10

        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn10 0x1000E5D0 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000eef0
        add esp, 0x14
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

        /* ---- fn11 0x1000E600 ---- */
        mov eax, dword ptr [esp+4]
        mov edx, dword ptr [esp+0x10]
        lea ecx, [eax+4]
        push ecx
        mov ecx, dword ptr [esp+0xc]
        push eax
        mov eax, dword ptr [esp+0x14]
        push edx
        push eax
        push ecx
        call FUN_1000f030
        add esp, 0x14
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
    }
}
