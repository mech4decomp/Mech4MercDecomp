/*
 * FUN_1001CB40 (4 B) - __fastcall (this in ecx), __cdecl ret.  Returns
 * this->+0xc.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1001CB40(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        ret
    }
}
