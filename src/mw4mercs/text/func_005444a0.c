/*
 * FUN_005444A0 (60 B) — Array lookup / cache function.
 *
 * Reads a global table at 0x00358000, indexes by (param * 55),
 * then *8 for dword offset. If entry is NULL, calls FUN_00544530
 * to allocate. Returns entry.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_00544530(void);

__declspec(naked) void __stdcall func_005444a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        push    esi
        _emit   0x8B
        _emit   0xB4
        _emit   0xD1
        _emit   0x80
        _emit   0x35
        _emit   0x00
        _emit   0x00
        test    esi, esi
        jne     L1
        push    eax
        call    FUN_00544530
        pop     esi
        ret     4
L1:
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax + 0x0C]
        mov     dword ptr [esi + 8], 0xFFFFFFEC
        mov     eax, esi
        pop     esi
        ret     4
    }
}
