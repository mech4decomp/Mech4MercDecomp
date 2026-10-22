/*
 * FUN_005b41c0 (63 B) — __thiscall. Calls vtable method [*param_1+0x14]
 * with 0x138, then FUN_005f79d0(param_1, param_1), then vtable method
 * [*param_1+4]; writes 0x138 and this->[0x540] into the returned object.
 * RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f79d0(void);

__declspec(naked) void __stdcall FUN_005b41c0(void *param_1, void *param_2)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x138
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_005f79d0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edi + 0x540]
        pop     edi
        mov     dword ptr [eax], 0x138
        mov     dword ptr [eax + 0x134], ecx
        pop     esi
        ret     8
    }
}
