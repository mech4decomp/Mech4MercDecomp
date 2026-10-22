/*
 * FUN_005f0040 (57 B) — __thiscall, RET 8 (two stack params).
 *
 * Calls virtual method at [*param1+0x14](0x70), then
 * FUN_005f06f0(param1, param2), then virtual [*param1+4](),
 * and writes 0x70 / this->0x184 into the returned object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f06f0(void);

__declspec(naked) void __stdcall FUN_005f0040(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x70
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_005f06f0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [edi + 0x184]
        pop     edi
        mov     dword ptr [eax], 0x70
        mov     dword ptr [eax + 0x6c], ecx
        pop     esi
        ret     8
    }
}
