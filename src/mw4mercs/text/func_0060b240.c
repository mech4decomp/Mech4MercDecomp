/*
 * FUN_0060b240 (42 B) — __thiscall, RET 8. If [this+4] is nonzero, call
 * FUN_005a3b90(*(param[1]), *(param[2])) with this = [this+0x9a4]. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a3b90(void);

__declspec(naked) void __stdcall FUN_0060b240(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      L_done
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x8]
        mov     edx, dword ptr [edx]
        mov     ecx, dword ptr [ecx + 0x4]
        push    edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x9a4]
        push    edx
        call    FUN_005a3b90
    L_done:
        mov     eax, 0x1
        ret     8
    }
}
