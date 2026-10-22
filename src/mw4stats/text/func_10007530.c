/*
 * FUN_10007530 (39 B) - __stdcall release helper. Calls vtable[1] on the
 * object (*param_1) with arg 0, then vtable[1] on the sub-object at
 * (*param_1)+0x4c passing *param_1, then nulls *param_1.
 *
 * __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10007530(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        push    0
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        mov     edi, dword ptr [ecx + 0x4c]
        call    dword ptr [eax + 4]
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 4]
        mov     dword ptr [esi], 0
        pop     edi
        pop     esi
        ret     4
    }
}
