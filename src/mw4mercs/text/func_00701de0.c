/*
 * FUN_00701de0 (318 B) — gosScript full shutdown/teardown. Frees the
 * gosScript object lists (g_008aaabc, g_008aaab8, g_008aab04, g_008aab0c,
 * g_008aab18, g_008aab1c) via the free function pointer at g_0076b2d0 and
 * FUN_006f4230, tears down the script engine (FUN_00742910, FUN_00740ec0,
 * FUN_00740db0, FUN_00740d10), and clears the gosScript globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aaabc;
extern int g_008aaae4;
extern char g_0087dd0a;
extern int g_008aaab8;
extern char g_008aaac1;
extern int g_008aab04;
extern int g_0076b2d0;
extern int g_008aaaf4;
extern int g_008aab0c;
extern int g_008aab18;
extern int g_008aab1c;
extern void __cdecl FUN_00701970(void);
extern void __cdecl FUN_00741120(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00742910(void);
extern void __cdecl FUN_00740ec0(void);
extern void __cdecl FUN_006f8a00(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00740d10(void);

__declspec(naked) void FUN_00701de0(void)
{
    __asm {
        push    ebx
        call    FUN_00701970
        mov     eax, dword ptr [g_008aaabc]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_10
        push    eax
        mov     eax, dword ptr [g_008aaae4]
        push    eax
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00741120
        mov     byte ptr [g_0087dd0a], bl
        mov     dword ptr [g_008aaabc], ebx
L_10:
        mov     eax, dword ptr [g_008aaab8]
        cmp     eax, ebx
        jz      L_25
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_008aaab8], ebx
L_25:
        cmp     byte ptr [g_008aaac1], bl
        jz      L_44
        call    FUN_00742910
        mov     ecx, dword ptr [g_008aaae4]
        push    ecx
        call    FUN_00740ec0
        mov     byte ptr [g_008aaac1], bl
L_44:
        call    FUN_006f8a00
        mov     eax, dword ptr [g_008aaae4]
        cmp     eax, ebx
        jz      L_75
        push    eax
        call    FUN_00740db0
        push    0x8aaae4
        push    0x7a2e00
        push    0x1
        push    ebx
        push    0x7a2e10
        mov     dword ptr [g_008aaae4], ebx
        call    FUN_00740d10
L_75:
        mov     eax, dword ptr [g_008aab04]
        cmp     eax, ebx
        push    esi
        push    edi
        mov     edi, dword ptr [g_0076b2d0]
        mov     dword ptr [g_008aaaf4], ebx
        mov     byte ptr [g_008aaac1], bl
        jz      L_c7
        push    ebp
L_93:
        mov     ebp, eax
        mov     esi, dword ptr [ebp + 0x54]
        cmp     esi, ebx
        jz      L_af
L_9c:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    edi
        add     esp, 0x4
        cmp     esi, ebx
        jnz     L_9c
        mov     eax, dword ptr [g_008aab04]
L_af:
        mov     edx, dword ptr [eax]
        push    ebp
        mov     dword ptr [g_008aab04], edx
        call    edi
        mov     eax, dword ptr [g_008aab04]
        add     esp, 0x4
        cmp     eax, ebx
        jnz     L_93
        pop     ebp
L_c7:
        mov     eax, dword ptr [g_008aab0c]
        cmp     eax, ebx
        jz      L_e7
L_d0:
        mov     ecx, dword ptr [eax]
        push    eax
        mov     dword ptr [g_008aab0c], ecx
        call    edi
        mov     eax, dword ptr [g_008aab0c]
        add     esp, 0x4
        cmp     eax, ebx
        jnz     L_d0
L_e7:
        mov     esi, dword ptr [g_008aab18]
        cmp     esi, ebx
        jz      L_ff
L_f1:
        mov     eax, esi
        mov     esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        cmp     esi, ebx
        jnz     L_f1
L_ff:
        mov     eax, dword ptr [g_008aab1c]
        cmp     eax, ebx
        pop     edi
        mov     dword ptr [g_008aab18], ebx
        pop     esi
        jz      L_116
        push    eax
        call    FUN_006f4230
L_116:
        mov     dword ptr [g_008aab1c], ebx
        pop     ebx
        ret
    }
}
