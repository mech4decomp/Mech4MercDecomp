/*
 * FUN_004C8A90 (51 B) — Fastcall cleanup with vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416130(void *this, int param);
extern int DAT_007daa38;

__declspec(naked) void __fastcall FUN_004c8a90(int param_1)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     eax, dword ptr [esi + 0x140]
        test    eax, eax
        jz      l_done

        mov     ecx, dword ptr [DAT_007daa38]

        push    eax
        call    FUN_00416130

        and     dword ptr [esi + 0x18], 0xfffffbff

        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x140], 0
        call    dword ptr [eax + 0x40]

    l_done:
        pop     esi
        ret
    }
}
