/*
 * MW4Stats.dll - FUN_10006470 (0x10006470, 58 B, __cdecl)
 * If param_2: FUN_10001660(param_1, (*param_2)()); else
 * FUN_10001660(param_1, &DAT_100274ec). Returns (param_2 != 0).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10001660(void);

__declspec(naked) void FUN_10006470(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0xc]
        test esi, esi
        jz L2
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax]
        mov ecx, dword ptr [esp+0x8]
        push eax
        call FUN_10001660
        xor eax, eax
        test esi, esi
        setnz al
        pop esi
        ret
L2:
        mov ecx, dword ptr [esp+0x8]
        mov eax, 0x100274ec
        push eax
        call FUN_10001660
        xor eax, eax
        test esi, esi
        setnz al
        pop esi
        ret
    }
}
