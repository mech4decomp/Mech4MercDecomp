/*
 * FUN_100038d0 (19 B) - ctor: this[0]=arg, this[1]=this[2]=0.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_100038d0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     [eax], ecx
        xor     ecx, ecx
        mov     [eax + 4], ecx
        mov     [eax + 8], ecx
        ret     4
    }
}
