/*
 * FUN_004D2A40 — Database destructor body (66 B).
 *
 * Called by vtable 0x77260C slot 0 (FUN_004D3210, vtable_dtor_0).
 * The slot-0 wrapper does: call FUN_004D2A40; if (flags & 1) free(this); return this;.
 *
 * This destructor body:
 *   1. Sets vtable to 0x77260C
 *   2. Closes and frees archive handle at this+0x10 (if non-null)
 *   3. Closes and frees archive handle at this+0x14 (if non-null)
 *   4. Calls base-class destructor FUN_00415380
 *
 * __thiscall (ECX = this), no stack params, void return.
 * CFLAGS: /O1
 */

/* ---- external functions ---- */
extern void __fastcall FUN_004148f0(void);
extern void __stdcall FUN_004084e0(void *ptr);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall database_dtor_body_0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x10]
        test    edi, edi
        mov     dword ptr [esi], 0x77260c
        jz      l_skip_archive1

        mov     ecx, edi
        call    FUN_004148f0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4

    l_skip_archive1:
        mov     edi, dword ptr [esi + 0x14]
        test    edi, edi
        jz      l_skip_archive2

        mov     ecx, edi
        call    FUN_004148f0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4

    l_skip_archive2:
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
