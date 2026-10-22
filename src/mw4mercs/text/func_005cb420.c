/*
 * FUN_005cb420 (21 B) — Copy byte from param1 and dword from param2 into this.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005cb420(void *this, void *a, void *b)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp + 8]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     8
    }
}
