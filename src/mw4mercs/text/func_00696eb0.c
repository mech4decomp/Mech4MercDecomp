/*
 * FUN_00696eb0 (22 B) — __thiscall: copies two bytes from param1/param2
 * into the object at offsets 0 and 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00696eb0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp+8]
        mov     byte ptr [eax], dl
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax+1], dl
        ret     8
    }
}
