/*
 * FUN_00521490 (48 B) — __stdcall.
 * Pushes 6 dword values from [arg+0x18], [arg+0x14],
 * [arg+0x10], [arg+0xC], [arg+8], [arg+4] (each is a
 * pointer that is dereferenced), then calls FUN_00520F80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00520F80(void);

__declspec(naked) int __stdcall FUN_00521490(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 0x18]
        mov     edx, dword ptr [edx]
        push    edx
        mov     edx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [edx]
        push    edx
        mov     edx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [edx]
        push    edx
        mov     edx, dword ptr [eax + 0xC]
        mov     edx, dword ptr [edx]
        push    edx
        mov     edx, dword ptr [eax + 8]
        mov     edx, dword ptr [edx]
        mov     eax, dword ptr [eax + 4]
        push    edx
        mov     edx, dword ptr [eax]
        push    edx
        call    FUN_00520F80
        ret     8
    }
}
