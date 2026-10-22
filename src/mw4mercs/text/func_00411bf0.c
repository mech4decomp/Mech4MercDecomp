/*
 * FUN_00411bf0 (80 B) — __thiscall: calls FUN_00411a10(arg0); on success
 * stores result+0x18 into *arg1 and returns 1. Otherwise, if arg2 is
 * set, calls error_log FUN_006fab90 with a format string (0x76d1c4) and
 * returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00411bf0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     esi, ecx
        push    edi
        call    FUN_00411a10
        test    eax, eax
        jz      L_411c14
        mov     eax, dword ptr [eax + 0x18]
        mov     ecx, dword ptr [ebp + 0xc]
        pop     edi
        mov     dword ptr [ecx], eax
        mov     al, 0x1
        pop     esi
        pop     ebp
        ret     0xc
L_411c14:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jz      L_411c38
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        push    edi
        push    edx
        push    ecx
        push    0x76d1c4
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      L_411c38
        int     3
L_411c38:
        pop     edi
        xor     al, al
        pop     esi
        pop     ebp
        ret     0xc
    }
}
