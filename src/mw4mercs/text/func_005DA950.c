/*
 * func_005DA950 - stdcall copy loop (ret 0xc)
 * Copies ecx dwords from [esp+0xc] to [esp+4] (skipping null dest)
 */

__declspec(naked) void func_005DA950()
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        test    ecx, ecx
        mov     eax, dword ptr [esp + 4]
        jbe     skip
        mov     edx, dword ptr [esp + 0xc]
        push    esi
    loop_start:
        test    eax, eax
        je      no_copy
        mov     esi, dword ptr [edx]
        mov     dword ptr [eax], esi
    no_copy:
        add     eax, 4
        dec     ecx
        jne     loop_start
        pop     esi
    skip:
        ret
    }
}
