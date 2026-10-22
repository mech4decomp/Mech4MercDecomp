/*
 * FUN_004f0850 (81 B) - Adept/MLR factory. Looks up an object via
 * FUN_004f2250; if found, initializes it via FUN_004f0810 and returns it;
 * otherwise allocates a 0x2c-byte object and constructs it via
 * FUN_004f0740 (with g_7dc82c as a param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004f2250(void);
extern void __cdecl FUN_004f0810(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004f0740(void);
extern int g_7dc82c;   /* 0x007dc82c */

__declspec(naked) void *func_004f0850(void)
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
        jz      L_4f0879
        push    edi
        mov     ecx, esi
        call    FUN_004f0810
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    L_4f0879:
        push    0x2c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4f089b
        mov     ecx, dword ptr [g_7dc82c]
        push    ebx
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_004f0740
        pop     edi
        pop     esi
        pop     ebx
        ret
    L_4f089b:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
