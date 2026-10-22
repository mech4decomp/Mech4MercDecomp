/*
 * FUN_004ef200 (81 B) — MLR/Adept application core. Looks up an object via
 * FUN_004f2250; if found, initializes it via FUN_004ef1b0 and returns it.
 * Otherwise allocates a 0x30-byte object (operator new FUN_004084d0) and
 * constructs it via FUN_004ef030 with the global DAT_007dc810.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f2250(void);
extern void __cdecl FUN_004ef1b0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004ef030(void);
extern int g_007dc810;

__declspec(naked) int FUN_004ef200(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        call    FUN_004f2250
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jz      L229
        push    edi
        mov     ecx, esi
        call    FUN_004ef1b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
L229:
        push    0x30
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L24b
        mov     ecx, dword ptr [g_007dc810]
        push    ebx
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_004ef030
        pop     edi
        pop     esi
        pop     ebx
        ret
L24b:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
