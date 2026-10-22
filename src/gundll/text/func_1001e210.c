/*
 * FUN_1001e210 (23 B) - __fastcall thiscall ctor. Calls base ctor
 * FUN_1001c6e0(this, 0xc102), stores vtable 0x1004a9a8 at this+0,
 * returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001e210(void)
{
    __asm {
        push    esi
        push    0xc102
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004a9a8
        mov     eax, esi
        pop     esi
        ret
    }
}
