/*
 * FUN_006540f0 (44 B) — __fastcall initializer.
 *
 * Initializes fields of the object pointed to by ECX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006540f0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     edx, 0x3f800000
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0x4], cl
        mov     dword ptr [eax + 0x18], 0xffffffff
        mov     dword ptr [eax + 0x24], edx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax + 0x1c], 0xffffffff
        ret
    }
}
