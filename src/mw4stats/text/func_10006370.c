/*
 * MW4Stats.dll - FUN_10006370 (0x10006370, 63 B, __cdecl)
 * If param_2: *param_1 = wcstod((*param_2)(), &param_2); else *param_1 = 0.0.
 * Returns (param_2 != 0).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_10021124; /* IAT: wcstod */

__declspec(naked) void FUN_10006370(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        jnz L1
        mov eax, dword ptr [esp+0x8]
        mov dword ptr [eax], esi
        mov dword ptr [eax+0x4], esi
        xor eax, eax
        test esi, esi
        setnz al
        pop esi
        ret
L1:
        mov edx, dword ptr [esi]
        lea eax, [esp+0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx]
        push eax
        call dword ptr [g_10021124]
        mov eax, dword ptr [esp+0x10]
        fstp qword ptr [eax]
        add esp, 0x8
        xor eax, eax
        test esi, esi
        setnz al
        pop esi
        ret
    }
}
