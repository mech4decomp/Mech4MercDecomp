/*
 * FUN_100483E0 (8 B) - __fastcall.  thiscall dtor thunk: loads `this` from
 * local [ebp-0x10] into ECX, then tail-jumps to shared dtor FUN_1001c750.
 * (Transcribed from reference bytes; gaptext.  Leading int3 padding at
 * 0x100483d2 skipped; real entry 0x100483e0.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_100483E0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c750
    }
}
