/*
 * FUN_004F88F0 (16 B) — Fastcall getter: reads vtable method at
 * [ECX+0x78], calls it, returns byte at [EAX+0x104].
 *
 * __fastcall (ECX = this), no stack params.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned char __fastcall FUN_004f88f0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x78]
        add     ecx, 0x78
        call    dword ptr [eax + 4]
        mov     al, byte ptr [eax + 0x104]
        ret
    }
}
