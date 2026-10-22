/* func_0070e230 - FUN_0070e230 - 32 bytes: app-init hook (byte-fill loop) */

extern void __cdecl FUN_0070e210(void);

__declspec(naked) void func_0070e230(void)
{
    __asm {
        push edi
        mov edi, dword ptr [esp + 0xc]
        test edi, edi
        jbe done
        push esi
        mov esi, dword ptr [esp + 0xc]
    loop_start:
        push 0x8
        call FUN_0070e210
        mov byte ptr [esi], al
        inc esi
        dec edi
        jnz loop_start
        pop esi
    done:
        pop edi
        ret 0x8
    }
}
