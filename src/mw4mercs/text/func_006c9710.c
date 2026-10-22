/*
 * FUN_006C9710 (52 B) — __stdcall, 4 params.
 *
 * Reads fields off the object pointed to by *param_1 and stores them into
 * the non-null out-pointers: *param_4 = obj[4], *param_2 = obj[2],
 * *param_3 = obj[3].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006c9710(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     ecx, dword ptr [esp + 4]
        jz      skip1
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 0x10]
        mov     dword ptr [eax], edx
skip1:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jz      skip2
        mov     edx, dword ptr [ecx]
        mov     edx, dword ptr [edx + 8]
        mov     dword ptr [eax], edx
skip2:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      skip3
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax], edx
skip3:
        ret     0x10
    }
}
