/*
 * FUN_10038319 (54 B) - __cdecl. Wide-char string helper: sets up a local
 * struct, calls FUN_1003791a, shifts result, calls FUN_1003b4b5.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1003791a(void);   /* rel32 call */
extern void __cdecl FUN_1003b4b5(void);   /* rel32 call */

__declspec(naked) void FUN_10038319(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [ebp - 0x14], 0x49
        push    eax
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x20], eax
        call    FUN_1003791a
        shl     eax, 1
        mov     dword ptr [ebp - 0x1c], eax
        lea     eax, [ebp + 0x10]
        push    eax
        lea     eax, [ebp - 0x20]
        push    dword ptr [ebp + 0xc]
        push    eax
        call    FUN_1003b4b5
        add     esp, 0x10
        leave
        ret
    }
}
