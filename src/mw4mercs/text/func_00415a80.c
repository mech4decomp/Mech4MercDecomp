/*
 * FUN_00415a80 (14 B) — __fastcall (ECX=this): returns the BST root node
 * ([this+0x10] then [+0xc]) or NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00415a80(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x10]
        test    eax, eax
        jz      L_null
        mov     eax, dword ptr [eax+0xc]
        ret
    L_null:
        xor     eax, eax
        ret
    }
}
