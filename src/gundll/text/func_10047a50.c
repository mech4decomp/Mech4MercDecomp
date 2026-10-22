/*
 * FUN_10047A50 (8 B) - __thiscall.  Thunk: loads this (ECX) from [ebp-0x10],
 * tail-jumps to shared ctor FUN_1001c750.  (Transcribed from reference bytes;
 * gaptext. Real entry after 14 leading int3 pads at 0x10047a42.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);   /* rel32 jmp (thiscall, ECX=this) */

__declspec(naked) void __fastcall FUN_10047A50(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
