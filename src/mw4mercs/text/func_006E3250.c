/*
 * FUN_006E3250 (67 B) — .text data block (block 0x6E3241). Calls
 * FUN_006E27B0, stores [eax] into [ebx], and if the stack arg is non-null
 * calls FUN_006E2890 then copies the buffer (rep movsd + rep movsb).
 * Returns ebx.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006E27B0(void);
extern void __cdecl FUN_006E2890(void);

__declspec(naked) void FUN_006E3250(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        call    FUN_006E27B0
        mov     esi, dword ptr [esp+0x10]
        test    esi, esi
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebx], eax
        je      L_328c
        push    edi
        push    esi
        mov     ecx, ebx
        call    FUN_006E2890
        mov     edi, dword ptr [ebx]
        mov     ecx, esi
        mov     esi, dword ptr [esp+0x10]
        mov     edx, ecx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     8
    L_328c:
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
