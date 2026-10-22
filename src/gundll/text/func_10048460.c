/*
 * FUN_10048460 (8 B) - __fastcall.  thiscall dtor thunk: loads `this` from
 * local [ebp-0x10] into ECX, then tail-jumps to shared dtor FUN_1001c750.
 * (Transcribed from reference bytes; gaptext.  Leading int3 padding at
 * 0x10048452 skipped; real entry 0x10048460.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_10048460(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
