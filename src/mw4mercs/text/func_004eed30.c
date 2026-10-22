/*
 * FUN_004eed30 (81 B) — MLR/Adept application core. Looks up an object via
 * FUN_004f2250; if found, initializes it via FUN_004eec90 and returns it.
 * Otherwise allocates a 0x34-byte object (operator new FUN_004084d0) and
 * constructs it via FUN_004ee920 with the global DAT_007dc80c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f2250(void);
extern void __cdecl FUN_004eec90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004ee920(void);
extern int g_007dc80c;

__declspec(naked) int FUN_004eed30(void)
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
        jz      L59
        push    edi
        mov     ecx, esi
        call    FUN_004eec90
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
L59:
        push    0x34
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L7b
        mov     ecx, dword ptr [g_007dc80c]
        push    ebx
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_004ee920
        pop     edi
        pop     esi
        pop     ebx
        ret
L7b:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
