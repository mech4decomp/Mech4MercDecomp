/*
 * FUN_006a8250 (48 B) - Allocates 0x20 bytes via FUN_004084d0; if the
 * resulting pointer + 0x10 is nonzero, copies 4 dwords from the input
 * param into it.
 *
 * __cdecl, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void __stdcall FUN_006a8250(void *param)
{
    __asm {
        push    0x20
        call    FUN_004084d0
        lea     ecx, [eax + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_done
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [edx]
        mov     dword ptr [ecx], esi
        mov     esi, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x4], esi
        mov     esi, dword ptr [edx + 0x8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [ecx + 0x8], esi
        mov     dword ptr [ecx + 0xc], edx
        pop     esi
L_done:
        ret     4
    }
}
