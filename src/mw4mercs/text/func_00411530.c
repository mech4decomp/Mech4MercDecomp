/*
 * FUN_00411530 (43 B) — Allocate + initialize a tree node from a key.
 *   Byte-identical to FUN_00411500 (same body, distinct entry point).
 *
 *   __stdcall, RET 4 (1 arg: param_1 = pointer to key string struct).
 *
 *   Callee: FUN_004084d0 (__cdecl allocator, 1 arg)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void __stdcall FUN_00411530(void)
{
    __asm {
        push    0x18
        call    FUN_004084d0
        lea     edx, [eax + 0x10]
        add     esp, 0x4
        test    edx, edx
        jz      L_411558
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     dword ptr [edx], ecx
        jz      L_411551
        inc     byte ptr [ecx - 0x1]
L_411551:
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [edx + 0x4], ecx
        pop     esi
L_411558:
        ret     0x4
    }
}
