/*
 * FUN_00571590 (151 B) — __cdecl (no args, RET 0). Reads a byte from the
 * string at [0x805918], calls FUN_0064DB40, then computes a value from
 * [0x7DAB44]/[0x7DAB40] and calls FUN_004FCB30/FUN_005B7E40, storing the
 * result into the buffer at [0x80592C].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_805918;
extern int g_805908;
extern int g_80592c;
extern int g_7dab44;
extern int g_7dab40;
extern int g_805928;
extern int g_80d9bc;
extern void __cdecl FUN_0064DB40(void);
extern void __cdecl FUN_004FCB30(void);
extern void __cdecl FUN_005B7E40(void);
extern void __cdecl FUN_00563060(void);

__declspec(naked) void FUN_00571590(void)
{
    __asm {
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    esi
        inc     eax
        push    edi
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064DB40
        mov     eax, dword ptr [g_80592c]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_7dab44]
        sub     eax, 4
        mov     dword ptr [g_80592c], eax
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004FCB30
        mov     ecx, eax
        call    FUN_005B7E40
        mov     esi, dword ptr [g_80592c]
        mov     edi, eax
        mov     eax, dword ptr [g_805928]
        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax
        mov     dword ptr [g_80592c], esi
        jb      loc_571609
        push    0
        call    FUN_00563060
        add     esp, 4
loc_571609:
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        mov     dword ptr [esi], edi
        inc     eax
        pop     edi
        mov     dword ptr [g_805918], eax
        mov     eax, dword ptr [g_80d9bc]
        mov     dword ptr [g_805908], ecx
        pop     esi
        ret
    }
}
