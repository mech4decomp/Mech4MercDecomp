/*
 * FUN_0050de50 (165 B) — Replicator mode initialization.
 *
 * Reads a config value ("ReplicatorMode"), compares against "Independent"
 * and "Hermit" strings, and sets a mode field accordingly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl _stricmp(const char *, const char *);
extern void FUN_00411bf0(void);

__declspec(naked) void FUN_0050de50(void)
{
    

extern int DAT_0076b2ac;
__asm {
push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x0c]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x1c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x04]
        mov     esi, eax
        mov     eax, dword ptr [edi + 0x0c]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [edi + 0x08]
        xor     ecx, ecx
        inc     word ptr [eax + 0x02]
        push    ecx
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [esi + 0x0c], ecx
        mov     byte ptr [esi + 0x18], cl
        mov     dword ptr [esi + 0x14], ecx
        mov     ecx, dword ptr [edi + 0x04]
        push    0x00777e6c
        mov     dword ptr [esi], 0x1c
        mov     dword ptr [esi + 0x04], 0x02
        mov     dword ptr [esi + 0x08], 0x02
        mov     dword ptr [esi + 0x10], edx
        mov     word ptr [esi + 0x1a], 0x01
        call    FUN_00411bf0
        test    al, al
        jz      l_end
        mov     ecx, dword ptr [esp + 0x0c]
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x00777e60
        push    ecx
        call    edi
        add     esp, 0x08
        test    eax, eax
        jnz     l_check_hermit
        pop     edi
        mov     dword ptr [esi + 0x14], 0x01
        pop     esi
        ret

    l_check_hermit:
        mov     edx, dword ptr [esp + 0x0c]
        push    0x00777e58
        push    edx
        call    edi
        add     esp, 0x08
        test    eax, eax
        jnz     l_end
        mov     dword ptr [esi + 0x14], 0x02

    l_end:
        pop     edi
        pop     esi
        ret
    }


}
