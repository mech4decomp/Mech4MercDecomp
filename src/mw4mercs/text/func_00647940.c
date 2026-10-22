/*
 * FUN_00647940 (13 B) — __thiscall (ECX = this), RET 4.
 *
 * Copies the dword pointed to by the stack arg into *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00647940(void *this, void *src)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     4
    }
}
