/*
 * FUN_00416a50 (36 B) — __thiscall (ECX=this, 1 stack arg): returns the
 * data pointer (node+0xc) of the index-th node in the list at this+0xc,
 * or 0 if out of range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416a50(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0xc]
        xor     edx, edx
        test    eax, eax
        jz      L_16a69
        mov     ecx, dword ptr [esp+4]
    L_16a5d:
        cmp     edx, ecx
        jz      L_16a6e
        mov     eax, dword ptr [eax+0x10]
        inc     edx
        test    eax, eax
        jnz     L_16a5d
    L_16a69:
        xor     eax, eax
        ret     4
    L_16a6e:
        mov     eax, dword ptr [eax+0xc]
        ret     4
    }
}
