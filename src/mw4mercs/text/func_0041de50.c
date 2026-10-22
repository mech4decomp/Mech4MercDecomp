/*
 * FUN_0041de50 (48 B) — __thiscall (ECX=this). Constructor: calls base
 * ctor FUN_0041e6d0 (ECX=this, 4 stack args incl. g_007b8ee8), sets the
 * vtable pointer at [this]=0x76d720 and zeroes fields at +0x24/+0x2c/+0x28.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8ee8;

extern void __cdecl FUN_0041e6d0(void);

__declspec(naked) void FUN_0041de50(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8ee8]
        push    esi
        push    0x0
        push    0x0
        push    0x0
        mov     esi, ecx
        push    eax
        call    FUN_0041e6d0
        mov     dword ptr [esi], 0x76d720
        mov     dword ptr [esi + 0x24], 0x0
        mov     byte ptr [esi + 0x2c], 0x0
        mov     dword ptr [esi + 0x28], 0x0
        mov     eax, esi
        pop     esi
        ret
    }
}
