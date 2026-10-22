/*
 * FUN_00416610 (57 B) — database item/pool helper. __fastcall (this in ECX).
 * If [this+0x14] is non-null, calls its vtable[0x18/4]; if non-zero calls
 * vtable[0x10/4]; then re-checks vtable[0x18/4] and if zero calls
 * FUN_00416840([this+0x10]+1) (thiscall). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416840(void);

__declspec(naked) void FUN_00416610(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x14]
        test    esi, esi
        jz      L16644
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        test    eax, eax
        jz      L1662D
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x10]
L1662D:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x18]
        test    eax, eax
        jnz     L16644
        mov     ecx, dword ptr [edi + 0x10]
        inc     ecx
        push    ecx
        mov     ecx, edi
        call    FUN_00416840
L16644:
        mov     eax, edi
        pop     edi
        pop     esi
        ret
    }
}
