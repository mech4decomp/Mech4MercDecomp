/*
 * FUN_00708B00 (58 B) — __stdcall, 4 params, returns 0.
 *
 * Saves ESP/EBP into globals, calls FUN_00708C20(param_1, param_3), then
 * spins calling FUN_00709C20 until g_00858ac0 becomes non-zero, then calls
 * FUN_0070C960 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00747650(void);
extern void __cdecl FUN_00708c20(void);
extern void __cdecl FUN_00709c20(void);
extern void __cdecl FUN_0070c960(void);
extern int g_00859b94;
extern int g_00859b98;
extern int g_00858ac0;

__declspec(naked) int __stdcall FUN_00708b00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        call    FUN_00747650
        mov     dword ptr [g_00859b94], esp
        mov     dword ptr [g_00859b98], ebp
        mov     eax, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        call    FUN_00708c20
lbl_loop:
        call    FUN_00709c20
        mov     eax, dword ptr [g_00858ac0]
        test    eax, eax
        jz      lbl_loop
        call    FUN_0070c960
        xor     eax, eax
        pop     ebp
        ret     0x10
    }
}
