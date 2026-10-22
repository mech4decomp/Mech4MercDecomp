/*
 * FUN_00648560 (36 B) — Allocates 0x18 bytes via FUN_004084d0; if
 * (result+0x10) is non-null, copies an 8-byte struct from param to it.
 *
 * __cdecl, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void __stdcall FUN_00648560(void *param)
{
    __asm {
        push    0x18
        call    FUN_004084d0
        lea     ecx, [eax + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      l_done
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [edx]
        mov     edx, dword ptr [edx + 0x4]
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 0x4], edx
        pop     esi
    l_done:
        ret     0x4
    }
}
