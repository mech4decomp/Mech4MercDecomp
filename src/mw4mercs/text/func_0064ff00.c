/*
 * FUN_0064ff00 (79 B) — registers a library reference.
 *
 * Searches global array 0x80d9c0 (count at 0x80da30) for param+0x40;
 * if absent, appends it (with a "too many libraries" error via
 * FUN_00562f10 if count > 0x19).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00562f10(int a, char *msg);

extern int g_80da30;
extern int g_80d9c0;

__declspec(naked) void FUN_0064ff00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [g_80da30]
        push    esi
        mov     esi, dword ptr [eax + 0x40]
        xor     eax, eax
        test    ecx, ecx
        jle     L_after_search
        mov     edx, 0x80d9c0
    L_search:
        cmp     dword ptr [edx], esi
        jz      L_done
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        jl      L_search
    L_after_search:
        cmp     ecx, 0x19
        jle     L_store
        push    0x792e88
        push    0x0
        call    FUN_00562f10
        mov     ecx, dword ptr [g_80da30]
        add     esp, 0x8
    L_store:
        mov     dword ptr [ecx*4 + 0x80d9c0], esi
        inc     ecx
        mov     dword ptr [g_80da30], ecx
    L_done:
        pop     esi
        ret
    }
}
