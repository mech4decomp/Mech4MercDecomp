/*
 * FUN_10047e30 (8 B) - __thiscall (ECX=this).
 * Tail-call thunk: loads `this` from caller's frame slot [ebp-0x10] and
 * tail-jumps to shared ctor FUN_1001c750.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_10047e30(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
