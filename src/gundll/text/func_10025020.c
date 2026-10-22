/*
 * FUN_10025020 (37 B) - __thiscall ctor.  Calls FUN_1001c9a0(this, 0x4601),
 * zeroes fields +0x1c/+0x20/+0x24/+0x28, sets vtable 0x1004abb8, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_10025020(void)
{
    __asm {
        push    esi
        push    0x4601
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004abb8
        mov     eax, esi
        pop     esi
        ret
    }
}
