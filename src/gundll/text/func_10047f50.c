/*
 * FUN_10047F50 (8 B) - __fastcall.
 * Tail-call thunk: loads `this` from local [ebp-0x10] and tail-jumps
 * to shared ctor FUN_1001ca00.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin (leading int3
 * padding at 0x10047f42).
 *
 * CFLAGS: /O1
 */

extern void FUN_1001ca00(void);   /* __thiscall (ECX=this) */

__declspec(naked) void __fastcall FUN_10047f50(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001ca00
    }
}
