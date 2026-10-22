/*
 * FUN_10037449 (155 B) - __stdcall, RET 0xC (3 args: ebx=arg1, esi=arg2,
 * edi=arg3). Dispatches on arg2 (0/1/2/3): for 0 checks g_10075498; for
 * 1/2 calls a function pointer g_10076bb8 then FUN_10037370; otherwise
 * calls FUN_10001000 and conditionally FUN_10037370 / g_10076bb8.
 * Returns the resulting value (0 on failure).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075498;   /* module data */
extern void *g_10076bb8;          /* module data: function pointer (call eax) */
extern void __cdecl FUN_10037370(void);   /* rel32 call, __stdcall RET 0xc */
extern void __cdecl FUN_10001000(void);   /* rel32 call, __stdcall RET 0xc */

__declspec(naked) void __stdcall FUN_10037449(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp+8]
        push    esi
        mov     esi, dword ptr [ebp+0xc]
        push    edi
        mov     edi, dword ptr [ebp+0x10]
        test    esi, esi
        jne     L_cmp12
        cmp     dword ptr [g_10075498], 0
        jmp     L_test
L_cmp12:
        cmp     esi, 1
        je      L_case12
        cmp     esi, 2
        jne     L_call1000
L_case12:
        mov     eax, dword ptr [g_10076bb8]
        test    eax, eax
        je      L_call37370
        push    edi
        push    esi
        push    ebx
        call    eax
        test    eax, eax
        je      L_fail
L_call37370:
        push    edi
        push    esi
        push    ebx
        call    FUN_10037370
        test    eax, eax
L_test:
        jne     L_call1000
L_fail:
        xor     eax, eax
        jmp     L_ret
L_call1000:
        push    edi
        push    esi
        push    ebx
        call    FUN_10001000
        cmp     esi, 1
        mov     dword ptr [ebp+0xc], eax
        jne     L_after1
        test    eax, eax
        jne     L_retval
        push    edi
        push    eax
        push    ebx
        call    FUN_10037370
L_after1:
        test    esi, esi
        je      L_case3
        cmp     esi, 3
        jne     L_retval
L_case3:
        push    edi
        push    esi
        push    ebx
        call    FUN_10037370
        test    eax, eax
        jne     L_after3
        and     dword ptr [ebp+0xc], eax
L_after3:
        cmp     dword ptr [ebp+0xc], 0
        je      L_retval
        mov     eax, dword ptr [g_10076bb8]
        test    eax, eax
        je      L_retval
        push    edi
        push    esi
        push    ebx
        call    eax
        mov     dword ptr [ebp+0xc], eax
L_retval:
        mov     eax, dword ptr [ebp+0xc]
L_ret:
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
