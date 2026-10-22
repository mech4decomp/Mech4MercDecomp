/*
 * FUN_00411d60 (83 B) — __thiscall: FUN_00411a10(arg0); on success calls
 * FUN_0041f270(arg1) and returns 1. Otherwise, if arg2 is set, calls
 * error_log FUN_006fab90 with format string 0x76d1c4 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411a10(void);
extern void __cdecl FUN_0041f270(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00411d60(void)
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
        jz      L_411d87
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, eax
        call    FUN_0041f270
        pop     edi
        mov     al, 0x1
        pop     esi
        pop     ebp
        ret     0xc
L_411d87:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        jz      L_411dab
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
        jz      L_411dab
        int     3
L_411dab:
        pop     edi
        xor     al, al
        pop     esi
        pop     ebp
        ret     0xc
    }
}
