/*
 * FUN_006FFC90 (194 B) — Game list protocol filter.
 *
 * __cdecl, RET 4 (1 stack param).
 * Iterates game list, checks each entry's "Protocol" field against
 * a reference string at 0x79fb30, and calls FUN_006ffc00 on match.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006f89f0(void);
extern int  __cdecl FUN_006f8430(void);
extern int  __cdecl FUN_006f7970(int, int *);
extern int  __cdecl FUN_006fabf0(const char *, ...);
extern char *__cdecl FUN_006f5b80(int, const char *);
extern void __cdecl FUN_006ffc00(int, int);

__declspec(naked) void __cdecl FUN_006FFC90(int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x0c
        push    ebx
        push    esi
        push    edi
        call    FUN_006f89f0
        mov     ebx, eax
        test    ebx, ebx
        jz      l_done
        mov     esi, [ebx + 0x3c]
        mov     ecx, esi
        mov     [ebp - 8], esi
        call    FUN_006f8430
        xor     edi, edi
        test    eax, eax
        mov     [ebp - 0x0c], eax
        jle     l_done
        jmp     l_loop_entry

    l_loop:
        mov     esi, [ebp - 8]
    l_loop_entry:
        lea     eax, [ebp - 4]
        push    eax
        push    edi
        mov     ecx, esi
        call    FUN_006f7970
        test    al, al
        jnz     l_check_protocol
        push    edi
        push    0x7a0e64
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_next
        int     3
        jmp     l_next
    l_check_protocol:
        mov     ecx, [ebp - 4]
        push    0x79fad4
        push    ecx
        mov     ecx, ebx
        call    FUN_006f5b80
        test    eax, eax
        jz      l_next
        mov     esi, 0x79fb30
    l_strcmp_loop:
        mov     dl, [eax]
        mov     cl, dl
        cmp     dl, [esi]
        jnz     l_strcmp_diff
        test    cl, cl
        jz      l_strcmp_eq
        mov     dl, [eax + 1]
        mov     cl, dl
        cmp     dl, [esi + 1]
        jnz     l_strcmp_diff
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     l_strcmp_loop
    l_strcmp_eq:
        xor     eax, eax
        jmp     l_strcmp_done
    l_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
    l_strcmp_done:
        test    eax, eax
        jnz     l_next
        mov     eax, [ebp - 4]
        mov     ecx, [ebp + 8]
        push    eax
        push    ecx
        call    FUN_006ffc00
    l_next:
        mov     eax, [ebp - 0x0c]
        inc     edi
        cmp     edi, eax
        jl      l_loop
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
