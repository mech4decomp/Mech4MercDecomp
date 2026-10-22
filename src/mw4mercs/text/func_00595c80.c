/*
 * FUN_00595C80 (94 B) — __cdecl factory function, RET 0, 1 stack param.
 *
 * Creates a temporary object on the stack, allocates memory,
 * constructs an object in it, destroys the temporary, returns pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void);
extern void __stdcall FUN_004d2310(void);
extern void __cdecl FUN_006f4950(int);
extern void *__cdecl FUN_004084d0(int);
extern void *__stdcall FUN_00594d30(void);
extern void __cdecl FUN_006f49a0(void);
extern void __stdcall FUN_004d21c0(void);

__declspec(naked) void __cdecl FUN_00595c80(void)
{
    

extern int DAT_007f1fc8;
__asm {
mov     eax, [esp + 4]              ; eax = arg0
        sub     esp, 0x44
        push    esi
        push    1
        push    eax
        lea     ecx, [esp + 0x0C]           ; ecx = &stack_buf
        call    FUN_004d1f80
        lea     ecx, [esp + 4]              ; ecx = &stack_buf
        call    FUN_004d2310
        mov ecx, dword ptr [DAT_007f1fc8]
        push    ecx
        call    FUN_006f4950
        push    0x60
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_fail
        lea     edx, [esp + 4]              ; edx = &stack_buf
        push    edx
        mov     ecx, eax                    ; ecx = ptr
        call    FUN_00594d30
        mov     esi, eax
        jmp     L_cleanup

    L_fail:
        xor     esi, esi

    L_cleanup:
        call    FUN_006f49a0
        lea     ecx, [esp + 4]              ; ecx = &stack_buf
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret
    }


}
