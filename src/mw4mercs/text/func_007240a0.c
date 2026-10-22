/*
 * FUN_007240A0 (490 B) — Image buffer setup/teardown. Depending on param_1,
 * either copies the source buffer (DAT_0087e634) into a destination or
 * zero-fills it, then tears down via FUN_00735440/FUN_00753930.
 *
 * __stdcall RET 4 (one char param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_87e690;
extern int g_87e694;
extern int g_87e68c;
extern int g_87e60c;
extern int g_87e634;
extern int g_87e620;
extern int g_87e608;

extern void __cdecl FUN_0074a2c0(void);
extern void __cdecl FUN_007358e0(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_00753930(void);

__declspec(naked) void __stdcall FUN_007240a0(char param_1)
{
    __asm {
        mov     eax, dword ptr [g_87e690]
        sub     esp, 0x8c
        test    eax, eax
        jz      L_281
        mov     eax, dword ptr [g_87e694]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_0074a2c0
        mov     al, byte ptr [esp + 0xa0]
        test    al, al
        mov     dword ptr [g_87e694], 0
        jz      L_1c7
        push    0
        push    0x801
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [g_87e68c]
        push    0
        push    0
        push    0
        mov     dword ptr [esp + 0x38], 0x7c
        call    FUN_007358e0
        push    eax
        call    FUN_007353f0
        mov     eax, dword ptr [g_87e60c]
        mov     edx, dword ptr [g_87e634]
        mov     esi, dword ptr [esp + 0x30]
        mov     ebp, dword ptr [g_87e620]
        lea     ecx, [eax + eax*1]
        mov     dword ptr [esp + 0x10], ecx
        mov     ebx, ecx
        shr     ecx, 2
        xor     eax, eax
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [esp + 0x44]
        mov     edi, edx
        rep stosd
        mov     ecx, ebx
        and     ecx, 3
        rep stosb
        mov     edi, dword ptr [g_87e608]
        sar     esi, 1
        xor     eax, eax
        sar     ebp, 1
        dec     edi
        imul    edi, esi
        mov     ecx, ebx
        shr     ecx, 2
        lea     edi, [edx + edi*2]
        rep stosd
        mov     ecx, ebx
        and     ecx, 3
        rep stosb
        mov     ecx, dword ptr [g_87e608]
        dec     ecx
        cmp     ecx, 1
        jbe     L_251
        lea     eax, [ebp + ebp*1]
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esi + esi*1]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, ebx
        mov     ebx, dword ptr [esp + 0x1c]
        add     eax, -2
        dec     ecx
        mov     dword ptr [esp + 0x10], ecx
    L_18a:
        mov     ecx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        add     edx, ecx
        add     ebx, esi
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 2
        lea     esi, [ebx + 2]
        lea     edi, [edx + 2]
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
        mov     ecx, dword ptr [esp + 0x10]
        dec     ecx
        mov     word ptr [edx], 0
        mov     word ptr [eax + edx*1], 0
        mov     dword ptr [esp + 0x10], ecx
        jnz     L_18a
        jmp     L_251
    L_1c7:
        push    0
        push    0x801
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, dword ptr [g_87e68c]
        push    0
        push    0
        push    0
        mov     dword ptr [esp + 0x38], 0x7c
        call    FUN_007358e0
        push    eax
        call    FUN_007353f0
        mov     ecx, dword ptr [g_87e620]
        mov     esi, dword ptr [esp + 0x30]
        mov     ebx, dword ptr [g_87e608]
        mov     eax, dword ptr [g_87e634]
        mov     edx, dword ptr [esp + 0x44]
        sar     ecx, 1
        sar     esi, 1
        test    ebx, ebx
        jbe     L_251
        mov     edi, dword ptr [g_87e60c]
        add     edi, edi
        add     ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esi + esi*1]
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], ecx
    L_22c:
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebp, ecx
        shr     ecx, 2
        mov     esi, eax
        mov     edi, edx
        rep movsd
        mov     ecx, ebp
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        add     eax, edi
        add     edx, esi
        dec     ebx
        jnz     L_22c
    L_251:
        mov     ecx, dword ptr [g_87e68c]
        push    0
        push    0
        push    0
        call    FUN_007358e0
        push    eax
        call    FUN_00735440
        mov     ecx, dword ptr [g_87e68c]
        call    FUN_00753930
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_87e68c], 0
        pop     ebx
    L_281:
        add     esp, 0x8c
        ret     4
    }
}
