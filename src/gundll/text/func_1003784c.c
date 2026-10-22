/*
 * FUN_1003784C (34 B) - __cdecl, 4 args. If (arg1->+4 & 6) == 0 returns
 * 1; else writes arg2 through arg4 (out pointer) and returns 3.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003784C(void)
{
    __asm {
        mov     ecx, dword ptr [esp+4]
        test    dword ptr [ecx+4], 6
        mov     eax, 1
        je      L_ret
        mov     eax, dword ptr [esp+8]
        mov     edx, dword ptr [esp+0x10]
        mov     dword ptr [edx], eax
        mov     eax, 3
L_ret:
        ret
    }
}
