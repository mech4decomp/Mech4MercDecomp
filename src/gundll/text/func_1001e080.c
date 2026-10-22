/*
 * FUN_1001e080 (30 B) - __fastcall thiscall ctor. Calls base ctor
 * FUN_1001c6e0(this, 0xc101), stores vtable 0x1004a99c at this+0 and 0
 * at this+0x20, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001e080(void)
{
    __asm {
        push    esi
        push    0xc101
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004a99c
        mov     dword ptr [esi + 0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
