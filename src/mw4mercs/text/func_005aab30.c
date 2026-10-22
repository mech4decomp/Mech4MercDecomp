/*
 * FUN_005aab30 (57 B) — __thiscall, RET 8.
 *
 * Calls a virtual method (offset 0x14) on param_1 with arg 0x70, then
 * FUN_005f06f0(param_1, param_1), then a virtual method (offset 0x4)
 * returning a pointer that is initialized to {0x70, ..., this->0x17c}.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005f06f0(void);

__declspec(naked) void FUN_005aab30(void)
{
    __asm {
        push    esi
        mov     esi, [esp + 0x8]
        mov     eax, [esi]
        push    edi
        mov     edi, ecx
        push    0x70
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ecx, [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_005f06f0
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     ecx, [edi + 0x17c]
        pop     edi
        mov     dword ptr [eax], 0x70
        mov     [eax + 0x6c], ecx
        pop     esi
        ret     0x8
    }
}
