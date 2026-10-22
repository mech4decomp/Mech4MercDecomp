/*
 * FUN_0059b800 (91 B) — __cdecl factory function, RET 0, 1 stack param.
 *
 * Creates a temporary object on the stack, allocates memory,
 * constructs an object in it, destroys the temporary, returns pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d2000(void);
extern void __stdcall FUN_004d2310(void);
extern void *__cdecl FUN_004084d0(int);
extern void *__stdcall FUN_0059b6f0(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __cdecl FUN_0059b800(void)
{
    __asm {
        mov     eax, [esp + 4]              ; eax = arg0
        sub     esp, 0x44
        push    esi
        push    0
        push    eax
        lea     ecx, [esp + 0x0C]           ; ecx = &stack_buf
        call    FUN_004d2000
        lea     ecx, [esp + 4]              ; ecx = &stack_buf
        call    FUN_004d2310
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_fail
        lea     ecx, [esp + 4]              ; ecx = &stack_buf
        push    ecx
        mov     ecx, eax                    ; ecx = ptr
        call    FUN_0059b6f0
        lea     ecx, [esp + 4]              ; ecx = &stack_buf
        mov     esi, eax                    ; esi = result
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

    L_fail:
        lea     ecx, [esp + 4]              ; ecx = &stack_buf
        xor     esi, esi
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }
}
