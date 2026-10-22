/*
 * FUN_10039985 (79 B) - __stdcall. SEH setup: installs an SEH frame,
 * conditionally calls a function pointer at 0x10051980, then tears the
 * frame down. Ends with a placeholder CALL (rel32 = 0).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10051980;   /* dword at 0x10051980 */
extern void __cdecl FUN_100399d6(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10039985(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1004b6a8
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        and     dword ptr [ebp - 4], 0
        mov     eax, dword ptr [g_10051980]
        test    eax, eax
        jz      L_99cd
        mov     dword ptr [ebp - 4], 1
        call    eax
        jmp     L_99c9
L_99c2:
        push    1
        pop     eax
        ret
L_99c6:
        mov     esp, dword ptr [ebp - 0x18]
L_99c9:
        and     dword ptr [ebp - 4], 0
L_99cd:
        or      dword ptr [ebp - 4], -1
        call    FUN_100399d6
    }
}
