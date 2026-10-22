/*
 * FUN_004159a0 (32 B) — __fastcall (ECX=this): walks to the rightmost
 * node of the BST at [[this+4]+0xc] and stores it at [this+0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004159a0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax+4]
        mov     ecx, dword ptr [ecx+0xc]
        test    ecx, ecx
        jz      L1
        mov     edx, dword ptr [ecx+0x10]
        test    edx, edx
        jz      L1
    L2:
        mov     ecx, edx
        mov     edx, dword ptr [ecx+0x10]
        test    edx, edx
        jnz     L2
    L1:
        mov     dword ptr [eax+0x10], ecx
        ret
    }
}
