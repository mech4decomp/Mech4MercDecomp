/*
 * FUN_1001CB30 (8 B) - __fastcall (this in ecx), __cdecl ret.  Sets
 * this->+0xc = 0.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1001CB30(void)
{
    __asm {
        mov     dword ptr [ecx + 0xc], 0
        ret
    }
}
