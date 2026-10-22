/*
 * FUN_00412a00 (65 B) — refcounted-string read helper. Reads 4 bytes from
 * the object (vtable[8] = [*obj+0x20]) into the arg1 stack slot; if the
 * original arg1 is nonzero, calls FUN_004126e0(arg2, count) then reads
 * again via vtable[8] with the incremented count. Returns arg1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004126e0(void);

__declspec(naked) void FUN_00412a00(void)
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
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        jbe     L2
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_004126e0
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [esi]
        inc     eax
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    L2:
        mov     eax, esi
        pop     esi
        ret
    }
}
