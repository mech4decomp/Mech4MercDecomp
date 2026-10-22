/*
 * FUN_10006E90 (75 B) - __stdcall, RET 0x8.  Dispatcher on arg2->field_0x04:
 * 0 -> tail-jump to FUN_10006ee0(arg1-0x20, arg2->field_0x10); 1 -> call
 * FUN_100073d0(arg1-0x20, arg2); 2 -> call FUN_10007450(arg1-0x20); else
 * return.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_10007450(void);   /* rel32 call, RET 0x4 (1 arg) */
extern void __stdcall FUN_100073d0(void);   /* rel32 call, RET 0x8 (2 args) */
extern void __stdcall FUN_10006ee0(void);   /* rel32 tail-jmp, RET 0x8 */

__declspec(naked) void __stdcall FUN_10006E90(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx + 4]
        xor     eax, eax
        sub     edx, eax
        je      L_6ec4
        dec     edx
        je      L_6eb3
        dec     edx
        jne     L_6eb0
        mov     eax, dword ptr [esp + 0x4]
        add     eax, -0x20
        push    eax
        call    FUN_10007450
L_6eb0:
        ret     0x8
L_6eb3:
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        add     ecx, -0x20
        push    ecx
        call    FUN_100073d0
        ret     0x8
L_6ec4:
        mov     edx, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [ecx + 0x10]
        add     edx, -0x20
        mov     dword ptr [esp + 0x8], ecx
        mov     dword ptr [esp + 0x4], edx
        jmp     FUN_10006ee0
    }
}
