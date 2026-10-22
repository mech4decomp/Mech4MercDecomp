/*
 * FUN_006E2950 (32 B) — Checks fields at negative offsets from *param_1.
 * If *param_1[-8] != 0, checks *param_1[-12]; if >= 0, calls FUN_006E28E0();
 * else calls FUN_006E2BC0(&DAT_00840854).
 *
 * __fastcall (ECX = param_1).
 *
 * Disassembly:
 *   8B 01             mov     eax, [ecx]
 *   8B 50 F8          mov     edx, [eax - 8]
 *   85 D2             test    edx, edx
 *   74 16             jz      skip
 *   8B 50 F4          mov     edx, [eax - 0xc]
 *   85 D2             test    edx, edx
 *   7C 05             jl      call_dbg
 *   E9 7B FF FF FF    jmp     FUN_006E28E0
 *   68 54 08 84 00    push    0x840854
 *   E8 51 02 00 00    call    FUN_006E2BC0
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006E28E0(void);
void __fastcall FUN_006E2BC0(int);

__declspec(naked) void __fastcall FUN_006e2950(int *param_1)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [eax - 8]
        test    edx, edx
        jz      skip
        mov     edx, dword ptr [eax - 0xc]
        test    edx, edx
        jl      call_dbg
        jmp     FUN_006E28E0
call_dbg:
        push    0x840854
        call    FUN_006E2BC0
skip:
        ret
    }
}
