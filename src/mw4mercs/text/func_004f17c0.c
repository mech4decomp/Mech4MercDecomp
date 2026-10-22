/*
 * FUN_004f17c0 (60 B) — Adept::Channel component-list walker (__thiscall,
 * RET 0xc, 3 params). Iterates a linked list at [this+0x18]; for each node
 * whose component type id (at [*node+4]) equals 0x21e, calls FUN_004f08f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f08f0(void);

__declspec(naked) void FUN_004f17c0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [ecx + 0x18]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        test    esi, esi
        jz      L17f5
L17d3:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L17f5
        mov     eax, dword ptr [ecx + 0x4]
        cmp     dword ptr [eax], 0x21e
        __emit 0x75   /* __emit: MSVC6 miscomputes backward JNZ rel by 4 (call-reloc between branch and target); ref = 75 E8 */
        __emit 0xE8
        push    edi
        push    ebx
        push    ebp
        call    FUN_004f08f0
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward JMP rel by 4 (call-reloc between branch and target); ref = EB DE */
        __emit 0xDE
L17f5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
