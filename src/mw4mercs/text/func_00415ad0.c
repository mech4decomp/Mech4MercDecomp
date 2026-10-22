/*
 * FUN_00415ad0 (15 B) — __fastcall (ECX=this): if the BST root node
 * ([this+0x10]) exists, call its virtual method at vtable+0x4 with arg 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00415ad0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx+0x10]
        test    ecx, ecx
        jz      L_ret
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax+0x4]
    L_ret:
        ret
    }
}
