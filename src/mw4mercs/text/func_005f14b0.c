/*
 * FUN_005f14b0 (92 B) — __thiscall destructor.
 *
 * Sets vtable pointer 0x78a250, calls FUN_005f1f50(1), frees three member
 * buffers (this+0x1d0/0x1c4/0x1b8) if non-null, then calls FUN_004f41e0().
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f1f50(int a);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_004f41e0(void);

__declspec(naked) void __stdcall FUN_005f14b0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        push    1
        mov     dword ptr [esi], 0x78A250
        call    FUN_005f1f50
        mov     eax, dword ptr [esi + 0x1D0]
        test    eax, eax
        mov     dword ptr [esp + 4], eax
        jz      L14D8
        push    eax
        call    FUN_004084e0
        add     esp, 4
L14D8:
        mov     eax, dword ptr [esi + 0x1C4]
        test    eax, eax
        mov     dword ptr [esp + 4], eax
        jz      L14EF
        push    eax
        call    FUN_004084e0
        add     esp, 4
L14EF:
        mov     eax, dword ptr [esi + 0x1B8]
        test    eax, eax
        jz      L1502
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1502:
        mov     ecx, esi
        call    FUN_004f41e0
        pop     esi
        pop     ecx
        ret
    }
}
