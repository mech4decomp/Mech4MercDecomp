/*
 * FUN_005d93b0 (40 B) — Object initializer: zero fields and set vtable
 * pointer. RET 0x4.
 *
 * __fastcall (ECX = this), one stack param, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005d93b0(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax], 0x78829c
        mov     byte ptr [eax + 0x1d], cl
        mov     dword ptr [eax + 0x8], ecx
        mov     byte ptr [eax + 0xc], cl
        mov     byte ptr [eax + 0x1c], cl
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x28], ecx
        ret     0x4
    }
}
