/*
 * FUN_00755870 (182 B) — Constructor that initializes a large object layout
 * (this in ECX) with a mix of float constants, 0x168, 0x7d0, 0xffffffff,
 * 0x40, and zeroed fields.
 *
 * __fastcall (ECX = this), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00755870(void *this)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     edx, 0x3F800000
        mov     dword ptr [eax + 0x5C], edx
        mov     dword ptr [eax + 0x64], edx
        mov     dword ptr [eax + 0x48], edx
        mov     edx, 0x168
        mov     dword ptr [eax + 0x60], ecx
        mov     dword ptr [eax + 0x68], ecx
        mov     dword ptr [eax + 0x6C], ecx
        mov     byte ptr [eax + 0x80], cl
        mov     dword ptr [eax + 0x70], ecx
        mov     byte ptr [eax + 0x81], cl
        mov     byte ptr [eax + 0x83], cl
        mov     byte ptr [eax + 0x82], cl
        mov     dword ptr [eax + 0x84], ecx
        mov     dword ptr [eax + 0x88], 0x7D0
        mov     dword ptr [eax + 0x8C], ecx
        mov     byte ptr [eax + 0xA0], cl
        mov     dword ptr [eax + 0x9C], 0xFFFFFFFF
        mov     dword ptr [eax + 0x1C], 0x40
        mov     dword ptr [eax + 0x4C], ecx
        mov     dword ptr [eax + 0x58], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x34], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x2C], ecx
        mov     dword ptr [eax + 0x44], ecx
        mov     dword ptr [eax + 0x40], ecx
        mov     dword ptr [eax + 0x38], edx
        mov     dword ptr [eax + 0x3C], edx
        mov     dword ptr [eax + 0x50], 0x41200000
        mov     dword ptr [eax + 0x54], 0x42C80000
        mov     byte ptr [eax + 0x76], cl
        mov     byte ptr [eax + 0x74], cl
        mov     byte ptr [eax + 0x75], 1
        mov     byte ptr [eax + 0x98], cl
        mov     byte ptr [eax + 0x99], cl
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        ret
    }
}
