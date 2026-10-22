/*
 * FUN_004C2890 (52 B) — Thiscall refcount transfer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c2890(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     ecx, dword ptr [esi + 0x174]
        test    ecx, ecx
        jz      l_skip_decref

        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], 0
        jnz     l_skip_decref

        test    ecx, ecx
        jz      l_skip_decref
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

    l_skip_decref:
        mov     eax, dword ptr [esp + 8]
        inc     word ptr [eax + 0x10]
        mov     dword ptr [esi + 0x174], eax

        pop     esi
        ret     4
    }
}
