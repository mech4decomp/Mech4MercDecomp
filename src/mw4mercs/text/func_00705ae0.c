/*
 * FUN_00705AE0 (48 B) — __stdcall (RET 4) wrapper, returns 1.
 *
 * Calls virtual method (vtable[0x4])(param), then FUN_006f89c0(param).
 * If param->m68 != NULL, calls FUN_004084e0(param->m68). Finally calls
 * FUN_004084e0(param) and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f89c0(void *a);
extern void __cdecl FUN_004084e0(void *a);

__declspec(naked) int __stdcall FUN_00705ae0(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        push    esi
        call    FUN_006f89c0
        mov     eax, dword ptr [esi + 0x68]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     al, 1
        pop     esi
        ret     4
    }
}
