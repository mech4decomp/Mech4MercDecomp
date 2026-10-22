/*
 * FUN_0069ACA0 (38 B) — Two adjacent __thiscall helpers:
 *   [0xACA0] reads a pointer field and stores it through arg1 (ret 4).
 *   [0xACB0] copies a struct {int; byte} from arg1 to this (ret 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069ACA0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     4
        nop
        nop
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax + 4], dl
        ret     8
    }
}
