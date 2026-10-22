/*
 * FUN_00419e70 (45 B) — initialize a 3x3 identity matrix (12 dwords) at ECX.
 * __fastcall (ECX=this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00419e70(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     edx, 0x3f800000
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], ecx
        mov     dword ptr [eax+0xc], ecx
        mov     dword ptr [eax+0x10], ecx
        mov     dword ptr [eax+0x14], edx
        mov     dword ptr [eax+0x18], ecx
        mov     dword ptr [eax+0x1c], ecx
        mov     dword ptr [eax+0x20], ecx
        mov     dword ptr [eax+0x24], ecx
        mov     dword ptr [eax+0x28], edx
        mov     dword ptr [eax+0x2c], ecx
        ret
    }
}
