/*
 * FUN_0068f450 (62 B) — __fastcall helper.
 *
 * If [esi+0x25] == 0, converts four float args (via _ftol) and stores the
 * resulting longs into [esi+0x14], [esi+0x18], [esi+0x1c], [esi+0x20].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern long __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0068f450(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x25]
        test    al, al
        jnz     L_end
        fld     dword ptr [esp + 0x8]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x14], eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x18], eax
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x1c], eax
        call    FUN_0075db4a
        mov     dword ptr [esi + 0x20], eax
    L_end:
        pop     esi
        ret     0x10
    }
}
