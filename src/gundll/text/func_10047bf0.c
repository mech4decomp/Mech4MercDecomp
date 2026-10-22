/*
 * FUN_10047BF0 (8 B) - __fastcall.  Thunk: loads this from stack slot
 * [ebp-0x10] into ECX, tail-jumps into thiscall FUN_1001c750 (destructor).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c750(void);   /* __thiscall (ECX=this) */

__declspec(naked) void __fastcall FUN_10047BF0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
