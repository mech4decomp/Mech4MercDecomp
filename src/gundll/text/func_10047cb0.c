/*
 * FUN_10047cb0 (8 B) - __fastcall.
 * Tail-call thunk: loads `this` from local [ebp-0x10] and tail-jumps
 * to shared ctor FUN_1001ca00.
 *
 * gaptext provenance: missed by Ghidra, rides gaptext.bin (leading int3
 * padding at 0x10047ca2).
 *
 * CFLAGS: /O1
 */

extern void FUN_1001ca00(void);   /* __thiscall (ECX=this) */

__declspec(naked) void __fastcall FUN_10047cb0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001ca00
    }
}
