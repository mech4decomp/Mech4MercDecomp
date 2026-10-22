/* func_0070e1d0 - FUN_0070e1d0 - 54 bytes: app-init hook (string/byte emit loop) */

extern void __cdecl FUN_0070e1a0(void);
extern void __cdecl FUN_0070e1b0(void);

__declspec(naked) void func_0070e1d0(void)
{
    __asm {
        push edi
        mov edi, dword ptr [esp + 0xc]
        push 0x9
        push 0x10
        push edi
        call FUN_0070e1b0
        push 0x4
        push 0x9
        call FUN_0070e1a0
        test edi, edi
        jbe done
        push esi
        mov esi, dword ptr [esp + 0xc]
        xor eax, eax
    loop_start:
        mov al, byte ptr [esi]
        push 0x8
        inc esi
        push eax
        call FUN_0070e1a0
        dec edi
        __emit 0x75 /* __emit: backward jnz rel-offset miscomputed by MSVC6 (off-by-2) when a call-reloc sits between branch and target; ref needs 75 F0 */
        __emit 0xF0
        pop esi
    done:
        pop edi
        ret 0x8
    }
}
