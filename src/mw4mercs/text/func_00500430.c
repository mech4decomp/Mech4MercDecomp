/*
 * FUN_00500430 (142 B) — path component iterator
 * Iterates over path components separated by backslashes, calling a
 * callback function (loaded from global 0x0076B2CC) for each component.
 *
 * CFLAGS: /O1
 */

/* External functions */
extern char *__cdecl FUN_005004c0(char *str, char delim);
extern void __cdecl FUN_0050dd10(void *cb, void *arg);

/* Global callback pointer at 0x0076B2CC */
extern void *g_cb_76b2cc;

__declspec(naked) void func_00500430(void)
{
    __asm {
        mov     eax, [esp+0x08]
        sub     esp, 0x08
        push    esi
        inc     eax
        push    0x5C
        push    eax
        call    FUN_005004c0
        mov     esi, eax
        add     esp, 0x08
        test    esi, esi
        je      end

        push    ebx
        push    ebp
        mov     ebp, [esp+0x18]
        push    edi
        mov     edi, dword ptr [g_cb_76b2cc]

    loop_start:
        push    0x5C
        push    0x00
        call    FUN_005004c0
        add     esp, 0x08
        mov     ebx, eax
        test    ebx, ebx
        push    esi
        je      no_first_slash

        call    edi
        push    ebx
        mov     [esp+0x18], eax
        call    edi
        mov     edx, [ebp+0x18]
        lea     ecx, [esp+0x18]
        push    ecx
        mov     [esp+0x20], eax
        push    edx
        jmp     call_dd10

    no_first_slash:
        call    edi
        push    0x0076B768
        mov     [esp+0x18], eax
        call    edi
        mov     ecx, [ebp+0x18]
        mov     [esp+0x1C], eax
        lea     eax, [esp+0x18]
        push    eax
        push    ecx

    call_dd10:
        call    FUN_0050dd10
        add     esp, 0x10

        push    0x5C
        push    0x00
        call    FUN_005004c0
        mov     esi, eax
        add     esp, 0x08
        test    esi, esi
        jne     loop_start

        pop     edi
        pop     ebp
        pop     ebx

    end:
        pop     esi
        add     esp, 0x08
        ret
    }
}
