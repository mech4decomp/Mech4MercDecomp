/*
 * FUN_006235f0 (76 B) — __thiscall (ECX = this), RET 0x10.
 *
 * Copies 4 dword args into [this+4/+8/+0xc], copies a byte+word from the
 * arg at [esp+8] into [this+0x18]/[this+0x1a], zeroes several fields, and
 * sets [this+0x10]=0xfffffffe, [this+0x20]=0xffffffff.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006235f0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x10]
        xor     edx, edx
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    ebx
        mov     bl, byte ptr [ecx]
        mov     cx, word ptr [ecx + 0x2]
        mov     byte ptr [eax + 0x18], dl
        mov     word ptr [eax + 0x1a], dx
        mov     dword ptr [eax], edx
        mov     byte ptr [eax + 0x18], bl
        mov     word ptr [eax + 0x1a], cx
        mov     byte ptr [eax + 0x1c], dl
        mov     dword ptr [eax + 0x10], 0xfffffffe
        mov     dword ptr [eax + 0x20], 0xffffffff
        mov     byte ptr [eax + 0x24], dl
        pop     ebx
        ret     0x10
    }
}
