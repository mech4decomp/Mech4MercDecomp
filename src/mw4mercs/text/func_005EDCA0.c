/*
 * FUN_005EDCA0 (85 B) — __cdecl (1 stack arg, RET). If bit 0x13 of
 * [arg->0x10] is clear and [arg->0x128] is set, calls FUN_004FEB00 with a
 * callback 0x5EDD00 and several args; else calls FUN_004179B0 on
 * [arg->0x23C] and increments [arg->0x244].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004FEB00(void);
extern void __cdecl FUN_004179B0(void);

__declspec(naked) void FUN_005EDCA0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 1
        jne     loc_5edcf4
        mov     ecx, dword ptr [eax + 0x128]
        test    ecx, ecx
        je      loc_5edcdc
        mov     edx, dword ptr [eax + 0xd8]
        add     edx, 0x80
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    0x5edd00
        push    edx
        call    FUN_004FEB00
        ret
loc_5edcdc:
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    eax
        lea     ecx, [esi + 0x23c]
        call    FUN_004179B0
        inc     dword ptr [esi + 0x244]
        pop     esi
loc_5edcf4:
        ret
    }
}
