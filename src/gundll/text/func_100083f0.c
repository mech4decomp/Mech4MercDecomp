/*
 * FUN_100083f0 (125 B) — __fastcall. Drains a stream object (vtable calls
 * at +0x10/+0x8), releases members via vtable +0x38, frees via
 * FUN_10001d60. Returns 0xc1120008 if no stream.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __fastcall FUN_100083f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        jz      L_466
        push    edi
        mov     byte ptr [esi + 0xc], 1
        lea     edi, [esi + 0x14]
    L_402:
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jge     L_402
        mov     al, byte ptr [esi + 0xd]
        test    al, al
        mov     byte ptr [esi + 0xc], 0
        jz      L_461
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        mov     byte ptr [esi + 0xe], 1
        jz      L_444
    L_426:
        mov     eax, dword ptr [esi + 8]
        mov     edx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [edx + 0x10]
        test    eax, eax
        jge     L_426
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esi + 8], 0
    L_444:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jz      L_458
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x38]
        mov     dword ptr [esi + 0x1c], 0
    L_458:
        push    esi
        call    FUN_10001d60
        add     esp, 4
    L_461:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
    L_466:
        mov     eax, 0xc1120008
        pop     esi
        ret
    }
}
