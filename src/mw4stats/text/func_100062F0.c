/*
 * MW4Stats.dll - FUN_100062f0 (0x100062F0, 55 B, __cdecl)
 * If param_2: *param_1 = _wtoi((*param_2)()); else *param_1 = 0.
 * Returns (param_2 != 0).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_100210dc; /* IAT: _wtoi */

__declspec(naked) void FUN_100062f0(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        jz L2
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax]
        push eax
        call dword ptr [g_100210dc]
        mov ecx, dword ptr [esp+0xc]
        mov dword ptr [ecx], eax
        add esp, 0x4
        xor eax, eax
        test esi, esi
        setnz al
        pop esi
        ret
L2:
        mov ecx, dword ptr [esp+0x8]
        xor eax, eax
        test esi, esi
        mov dword ptr [ecx], eax
        setnz al
        pop esi
        ret
    }
}
