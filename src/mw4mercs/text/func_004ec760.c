/*
 * FUN_004ec760 (237 B) — __thiscall MLR/Adept audio-type dispatch. Reads a
 * type field at +0x78 (2/6/other), calls audio subsystem helpers, then a
 * common tail that updates a global counter and calls FUN_004f2b90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db0b8;
extern int g_007dc868;

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_004d2370(void);
extern void __cdecl FUN_007255f0(void);
extern void __cdecl FUN_004d2310(void);
extern void __cdecl FUN_00725660(void);
extern void __cdecl FUN_004d2330(void);
extern void __cdecl FUN_00725810(void);
extern void __cdecl FUN_004f2b90(void);

__declspec(naked) void FUN_004ec760(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x9c]
        test    eax, eax
        jnz     L_84a
        mov     eax, dword ptr [esi+0x78]
        sub     eax, 2
        push    ebx
        push    edi
        jz      L_7e1
        sub     eax, 4
        jz      L_79c
        push    0x77479c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_81b
        int     3
        jmp     L_81b
    L_79c:
        xor     eax, eax
        mov     ax, word ptr [esi+0x50]
        lea     ecx, [ebp-4]
        push    ecx
        mov     dword ptr [ebp-4], eax
        mov     eax, dword ptr [g_007db0b8]
        lea     ecx, [eax+0x14]
        call    FUN_00416f60
        mov     edx, dword ptr [eax+0x10]
        mov     al, byte ptr [esi+0x81]
        mov     edi, dword ptr [edx+0x10]
        mov     ebx, dword ptr [esi+0x38]
        test    al, al
        setz    al
        lea     ecx, [esi+0x10]
        push    eax
        call    FUN_004d2370
        push    eax
        push    edi
        push    ebx
        lea     ecx, [esi+0x7c]
        push    ecx
        call    FUN_007255f0
        jmp     L_81b
    L_7e1:
        lea     edi, [esi+0x10]
        mov     ecx, edi
        call    FUN_004d2310
        mov     dl, byte ptr [esi+0x81]
        mov     eax, dword ptr [esi+0x2c]
        mov     ebx, dword ptr [esi+0x38]
        test    dl, dl
        setz    dl
        mov     ecx, edi
        push    edx
        push    eax
        mov     eax, dword ptr [edi]
        call    dword ptr [eax+4]
        push    eax
        push    0
        push    ebx
        push    2
        lea     ecx, [esi+0x7c]
        push    ecx
        call    FUN_00725660
        mov     ecx, edi
        call    FUN_004d2330
    L_81b:
        mov     eax, dword ptr [esi+0x7c]
        lea     edx, [esi+0x54]
        push    edx
        push    eax
        call    FUN_00725810
        mov     al, byte ptr [esi+0x80]
        test    al, al
        pop     edi
        pop     ebx
        jz      L_84a
        mov     ecx, dword ptr [g_007dc868]
        mov     eax, dword ptr [ecx+0x74]
        mov     edx, dword ptr [esi+0x70]
        add     eax, edx
        mov     dword ptr [ecx+0x74], eax
        call    FUN_004f2b90
    L_84a:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
