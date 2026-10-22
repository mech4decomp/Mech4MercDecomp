/*
 * FUN_0041CC60 (10 B) -- thunk: load this-pointer 0x7b8da8 into ecx,
 * then tail-jump to FUN_0041CC70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041CC70(void);

__declspec(naked) void FUN_0041CC60(void)
{
    __asm {
        mov     ecx, 0x7B8DA8
        jmp     FUN_0041CC70
    }
}
