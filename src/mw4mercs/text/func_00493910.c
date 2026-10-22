/*
 * FUN_00493910 (45 B) — __cdecl.
 * Reads param_1 via vtable method +0x20, then dispatches to another
 * vtable method at +0x18 via a global table indexed by param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8c0c;

__declspec(naked) void FUN_00493910(int *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        _emit 0xA1  /* mov eax, [0x007b8c0c] */
        _emit 0x0C
        _emit 0x8C
        _emit 0x7B
        _emit 0x00
        mov     eax, dword ptr [eax + edx * 4]
        push    ecx
        push    esi
        call    dword ptr [eax + 0x18]
        add     esp, 8
        pop     esi
        ret
    }
}
