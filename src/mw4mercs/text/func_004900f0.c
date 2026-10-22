/*
 * FUN_004900f0 (531 B) — MLR light-object factory by name (__cdecl, 1 param).
 * Reads the light type string, compares against known names via _stricmp
 * (IAT through EBX), and constructs the matching light subclass.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004827e0(void);
extern void __cdecl FUN_00482560(void);
extern void __cdecl FUN_00481b00(void);
extern void __cdecl FUN_00481490(void);
extern void __cdecl FUN_00430ad0(void);
extern void __cdecl FUN_0042acd0(void);
extern void __cdecl FUN_00429ce0(void);
extern void __cdecl FUN_006fab90(void);
extern int g_007b9584;
extern int g_0076b2ac;
extern int g_007da6a8;
extern int g_0076ffd0;
extern int g_0076ffc8;
extern int g_0076ffbc;
extern int g_0076ffb4;
extern int g_0076ffac;
extern int g_0076ffa4;
extern int g_0076ff9c;
extern int g_0076ff94;
extern int g_0076ff84;

__declspec(naked) void FUN_004900f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [g_007b9584]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     edi, dword ptr [ebp + 8]
        push    1
        lea     ecx, [ebp - 4]
        push    ecx
        push    offset g_0076ffd0
        mov     ecx, edi
        call    FUN_00411bf0
        mov     edx, dword ptr [ebp - 4]
        mov     ebx, dword ptr [g_0076b2ac]
        push    offset g_0076ffc8
        push    edx
        xor     esi, esi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_infinite
        push    0x80
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        push    edi
        mov     ecx, eax
        call    FUN_004827e0
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_ret0:
        xor     esi, esi
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_infinite:
        mov     eax, dword ptr [ebp - 4]
        push    offset g_0076ffbc
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_point
        push    0x80
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        mov     ecx, dword ptr [g_007da6a8]
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_00482560
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_point:
        mov     edx, dword ptr [ebp - 4]
        push    offset g_0076ffb4
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_spot
        push    0x90
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        push    edi
        mov     ecx, eax
        call    FUN_00481b00
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_spot:
        mov     eax, dword ptr [ebp - 4]
        push    offset g_0076ffac
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_lookup
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        push    edi
        mov     ecx, eax
        call    FUN_00481490
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_lookup:
        mov     ecx, dword ptr [ebp - 4]
        push    offset g_0076ffa4
        push    ecx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_project
        push    0xe0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        push    edi
        mov     ecx, eax
        call    FUN_00430ad0
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_project:
        mov     edx, dword ptr [ebp - 4]
        push    offset g_0076ff9c
        push    edx
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_shadow
        push    0x128
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        push    edi
        mov     ecx, eax
        call    FUN_0042acd0
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_shadow:
        mov     eax, dword ptr [ebp - 4]
        push    offset g_0076ff94
        push    eax
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     L_default
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ret0
        push    edi
        mov     ecx, eax
        call    FUN_00429ce0
        mov     esi, eax
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

    L_default:
        push    offset g_0076ff84
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_default_ret
        int     3
    L_default_ret:
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
