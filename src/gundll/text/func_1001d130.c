/*
 * FUN_1001d130 (32 B) - __fastcall. Sets *this = 0x44584d4c ("LMXD" tag),
 * frees this->0x10 and this->0x14 via FUN_10001d60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001d130(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        mov     dword ptr [esi], 0x44584d4c
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x14]
        push    ecx
        call    FUN_10001d60
        add     esp, 8
        pop     esi
        ret
    }
}
