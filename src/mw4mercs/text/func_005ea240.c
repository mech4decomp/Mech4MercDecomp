/*
 * FUN_005ea240 (208 B) — __thiscall initializer, RET 0x4 (one stack param,
 * unused). Zeroes a large run of fields on this (ECX) and sets three
 * float fields (0x1f0, 0x1f4, 0x1d8) to 1.0f (0x3f800000).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ea240(void)
{
    __asm {
        xor     eax, eax
        mov     edx, 0x3f800000
        mov     dword ptr [ecx + 0x1d0], eax
        mov     dword ptr [ecx + 0x1c8], eax
        mov     dword ptr [ecx + 0x1cc], eax
        mov     dword ptr [ecx + 0x204], eax
        mov     dword ptr [ecx + 0x208], eax
        mov     dword ptr [ecx + 0x20c], eax
        mov     dword ptr [ecx + 0x1bc], eax
        mov     dword ptr [ecx + 0x1c0], eax
        mov     dword ptr [ecx + 0x198], eax
        mov     dword ptr [ecx + 0x19c], eax
        mov     dword ptr [ecx + 0x1d4], eax
        mov     dword ptr [ecx + 0x210], eax
        mov     dword ptr [ecx + 0x214], eax
        mov     dword ptr [ecx + 0x218], eax
        mov     byte ptr [ecx + 0x21c], al
        mov     byte ptr [ecx + 0x1dc], al
        mov     dword ptr [ecx + 0x1e0], eax
        mov     dword ptr [ecx + 0x1e4], eax
        mov     dword ptr [ecx + 0x1e8], eax
        mov     dword ptr [ecx + 0x1ec], eax
        mov     dword ptr [ecx + 0x1f0], edx
        mov     dword ptr [ecx + 0x1f4], edx
        mov     dword ptr [ecx + 0x1f8], eax
        mov     dword ptr [ecx + 0x1fc], eax
        mov     dword ptr [ecx + 0x200], eax
        mov     dword ptr [ecx + 0x1d8], edx
        mov     dword ptr [ecx + 0x1a8], eax
        mov     dword ptr [ecx + 0x1a0], eax
        mov     dword ptr [ecx + 0x1ac], eax
        mov     dword ptr [ecx + 0x1a4], eax
        mov     dword ptr [ecx + 0x1b0], eax
        mov     dword ptr [ecx + 0x1b4], eax
        mov     dword ptr [ecx + 0x1c4], eax
        ret     0x4
    }
}
