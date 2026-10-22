/*
 * MW4Stats.dll - FUN_10003b90 (0x10003B90, 98 B, __thiscall)
 * If param_2[0x280] is null returns 0x80070057; else copies strings via
 * FUN_10001660/FUN_10002fa0 and calls FUN_100039e0. RET 0x8.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_100039e0(void);

__declspec(naked) void FUN_10003b90(void)
{
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp+0x10]
        mov eax, dword ptr [edi+0x280]
        test eax, eax
        mov esi, ecx
        jnz short L_bac
        pop edi
        mov eax, 0x80070057
        pop esi
        ret 0x8
L_bac:
        push eax
        mov ecx, esi
        call FUN_10001660
        lea ecx, [edi+0x1e8]
        call FUN_10002fa0
        push eax
        lea ecx, [esi+0x98]
        call FUN_10001660
        lea ecx, [edi+0x150]
        call FUN_10002fa0
        push eax
        lea ecx, [esi+0x130]
        call FUN_10001660
        mov ecx, dword ptr [esp+0xc]
        push edi
        push esi
        call FUN_100039e0
        pop edi
        pop esi
        ret 0x8
    }
}
