/*
 * FUN_004C8A50 (57 B) — Setter for field at this+0x140.
 *
 * __thiscall (ECX = this), RET 4.
 * Frees old value via FUN_00416130, sets new value,
 * ORs 0x400 into flags at this+0x18, calls vtable+0x40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416130(void *ptr);

__declspec(naked) void __stdcall FUN_004c8a50(int new_val)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x140]
        test    eax, eax
        jz      l_skip_free
        _emit 0x8B
        _emit 0x0D
        _emit 0x38
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        push    eax
        call    FUN_00416130

    l_skip_free:
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esi + 0x140], eax
        mov     eax, dword ptr [esi + 0x18]
        or      eax, 0x400
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x40]
        pop     esi
        ret     4
    }
}
