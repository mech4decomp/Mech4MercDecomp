/*
 * FUN_0050C990 (53 B)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0050c990(void)
{
    

extern int DAT_0076b420;
extern int DAT_007dd168;
__asm {
mov al, [ecx+0x74]
        test al, al
        jz set_zero
        mov eax, [ecx+0x8C]
        inc eax
        push eax
        push 0x0076B9A8
        push 0x007DD168
        call dword ptr [DAT_0076b420]
        add esp, 0x0C
        mov eax, 0x007DD168
        ret
set_zero:
        mov byte ptr [DAT_007dd168], 0x0
        mov eax, 0x007DD168
        ret
    }


}
