/*
 * FUN_10038579 (160 B) — __cdecl.
 * TLS teardown: frees a chain of sub-objects (offsets 0x24..0x50) plus the
 * object itself, then clears the TLS slot.
 *
 * CFLAGS: /O1
 */

extern int g_100518b4;                 /* TLS index */
extern void *g_100491c0;               /* IAT: TlsGetValue */
extern void *g_100490d8;               /* IAT: TlsSetValue */
extern char g_10051de0;                /* sentinel address compared at +0x50 */
extern void __cdecl FUN_1003c2dc(void);

__declspec(naked) void __cdecl FUN_10038579(void)
{
    __asm {
        mov     eax, dword ptr [g_100518b4]
        cmp     eax, -1
        jz      L_618
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        test    esi, esi
        jnz     L_59d
        push    eax
        call    dword ptr [g_100491c0]
        mov     esi, eax
        test    esi, esi
        jz      L_609
    L_59d:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jz      L_5ab
        push    eax
        call    FUN_1003c2dc
        pop     ecx
    L_5ab:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      L_5b9
        push    eax
        call    FUN_1003c2dc
        pop     ecx
    L_5b9:
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        jz      L_5c7
        push    eax
        call    FUN_1003c2dc
        pop     ecx
    L_5c7:
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      L_5d5
        push    eax
        call    FUN_1003c2dc
        pop     ecx
    L_5d5:
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        jz      L_5e3
        push    eax
        call    FUN_1003c2dc
        pop     ecx
    L_5e3:
        mov     eax, dword ptr [esi + 0x44]
        test    eax, eax
        jz      L_5f1
        push    eax
        call    FUN_1003c2dc
        pop     ecx
    L_5f1:
        mov     eax, dword ptr [esi + 0x50]
        cmp     eax, offset g_10051de0
        jz      L_602
        push    eax
        call    FUN_1003c2dc
        pop     ecx
    L_602:
        push    esi
        call    FUN_1003c2dc
        pop     ecx
    L_609:
        push    0x0
        push    dword ptr [g_100518b4]
        call    dword ptr [g_100490d8]
        pop     esi
    L_618:
        ret
    }
}
