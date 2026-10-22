/*
 * FUN_0041de80 (60 B) — __thiscall (ECX=this), RET 0x8 (2 stack args).
 * Constructor: calls base ctor FUN_0041e6d0 (ECX=this, 4 stack args incl.
 * g_007b8ee8), sets vtable ptr [this]=0x76d720, zeroes +0x24/+0x2c, then
 * calls FUN_0041dee0 (ECX=this) with the two incoming args (reversed).
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8ee8;

extern void __cdecl FUN_0041e6d0(void);
extern void __cdecl FUN_0041dee0(void);

__declspec(naked) void FUN_0041de80(void)
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
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esi], 0x76d720
        mov     dword ptr [esi + 0x24], 0x0
        mov     byte ptr [esi + 0x2c], 0x0
        call    FUN_0041dee0
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
