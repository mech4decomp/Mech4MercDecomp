/*
 * FUN_00416970 (17 B) — __thiscall (ECX=this, 2 stack args): sets the
 * doubly-linked-list prev/next pointers this+0x10 / this+0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00416970(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     edx, dword ptr [esp+8]
        mov     dword ptr [ecx+0x10], eax
        mov     dword ptr [ecx+0x14], edx
        ret     8
    }
}
