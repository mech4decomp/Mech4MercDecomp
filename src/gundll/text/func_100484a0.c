/*
 * FUN_100484A0 (8 B) - __fastcall.  thiscall dtor thunk: loads `this` from
 * local [ebp-0x10] into ECX, then tail-jumps to shared dtor FUN_1001c8a0.
 * (Transcribed from reference bytes; gaptext.  Leading int3 padding at
 * 0x10048492 skipped; real entry 0x100484a0.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_100484A0(void)
{
    __asm {
        mov     ecx, dword ptr [ebp - 0x10]
        jmp     FUN_1001c8a0
    }
}
