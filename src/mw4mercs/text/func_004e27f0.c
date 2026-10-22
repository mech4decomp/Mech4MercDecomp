/*
 * FUN_004e27f0 (95 B) — MLR/Adept: convert grid indices back to world
 * coordinates. __thiscall (ECX = this), RET 0x10 (4 stack args).
 * Computes float coords from byte indices via FPU division.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004e27f0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx + 0x16c]
        mov     dword ptr [edx], eax
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x16a]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0xc], eax
        fild    dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx + 0x174]
        fdiv    dword ptr [ecx + 0x170]
        fadd    dword ptr [ecx + 0x16c]
        fstp    dword ptr [edx]
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx], eax
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x16b]
        mov     dword ptr [esp + 0xc], eax
        fild    dword ptr [esp + 0xc]
        fdiv    dword ptr [ecx + 0x178]
        fadd    dword ptr [ecx + 0x174]
        mov     ecx, dword ptr [esp + 0x8]
        fstp    dword ptr [ecx]
        ret     0x10
    }
}
