/*
 * FUN_00739FA0 (30 B) — If [0x00856b94] is non-zero and [0x008aadbc] is
 * zero, tail-jumps to FUN_00757110 with ECX=[0x00856b8c]; otherwise
 * returns.
 *
 * Match: target 100%
 */

extern int  g_856b94;   /* 0x00856b94 */
extern char g_8aadbc;   /* 0x008aadbc */
extern int  g_856b8c;   /* 0x00856b8c */
extern void __fastcall FUN_00757110(int a);

__declspec(naked) void FUN_00739FA0(void)
{
    __asm {
        mov     eax, dword ptr [g_856b94]
        test    eax, eax
        jz      L_fbd
        mov     al, byte ptr [g_8aadbc]
        test    al, al
        jnz     L_fbd
        mov     ecx, dword ptr [g_856b8c]
        jmp     FUN_00757110
    L_fbd:
        ret
    }
}
