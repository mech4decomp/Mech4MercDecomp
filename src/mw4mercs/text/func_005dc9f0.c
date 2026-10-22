/*
 * FUN_005DC9F0 (145 B) — Copies a block of fields from the struct at
 * the stack param into `this` at various offsets (0x17C..0x1B4, 0x30C).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005dc9f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x34]
        mov     edx, dword ptr [eax + 0x28]
        mov     dword ptr [ecx + 0x188], ebx
        mov     ebx, dword ptr [eax + 0x38]
        mov     dword ptr [ecx + 0x18C], ebx
        mov     ebx, dword ptr [eax + 0x3C]
        mov     dword ptr [ecx + 0x190], ebx
        mov     ebx, dword ptr [eax + 0x40]
        mov     dword ptr [ecx + 0x194], ebx
        mov     ebx, dword ptr [eax + 0x44]
        push    esi
        mov     esi, dword ptr [eax + 0x2C]
        mov     dword ptr [ecx + 0x198], ebx
        mov     ebx, dword ptr [eax + 0x48]
        push    edi
        mov     edi, dword ptr [eax + 0x30]
        mov     dword ptr [ecx + 0x19C], ebx
        mov     ebx, dword ptr [eax + 0x4C]
        mov     dword ptr [ecx + 0x184], edi
        mov     dword ptr [ecx + 0x1A0], ebx
        mov     ebx, dword ptr [eax + 0x50]
        mov     dword ptr [ecx + 0x1B4], edi
        pop     edi
        mov     dword ptr [ecx + 0x30C], eax
        mov     eax, dword ptr [eax + 0x54]
        mov     dword ptr [ecx + 0x180], esi
        mov     dword ptr [ecx + 0x1B0], esi
        pop     esi
        mov     dword ptr [ecx + 0x1A4], ebx
        mov     dword ptr [ecx + 0x17C], edx
        mov     dword ptr [ecx + 0x1A8], eax
        mov     dword ptr [ecx + 0x1AC], edx
        pop     ebx
        ret     4
    }
}
