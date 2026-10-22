/*
 * FUN_00401A10 (357 B, __stdcall RET 0xc) - in-.text data block transcription
 * (wave U). Copies several global strings into a fixed buffer (0x7B7970)
 * using strlen+rep movsd/movsb loops, then calls FUN_00401B80 and
 * conditionally FUN_00401C30.
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

extern int  g_007b7e00;
extern int  g_007b7e7c;
extern int  g_007b7dfc;
extern char g_007b7968;
extern int  g_007b7e08;
extern char g_007b796a;
extern int  g_007b7e04;
extern int  g_007b796c;
extern int  g_007b7e54;
extern char g_007b7969;
extern char g_007b7a06;
extern int  g_007b7960;
extern int  g_007b7e2c;
extern int  g_007b7e30;
extern int  g_007b7e74;
extern int  g_007b7e34;
extern int  g_007b7e38;
extern char g_007b7a39;
extern void __cdecl FUN_00401b80(void);
extern void __cdecl FUN_00401c30(void);

__declspec(naked) void FUN_00401A10(void)
{
    __asm {
        mov     edx, dword ptr [g_007b7e00]
        push    ebx
        mov     ebx, dword ptr [g_007b7e7c]
        push    esi
        mov     esi, dword ptr [g_007b7dfc]
        test    esi, esi
        setne   al
        test    edx, edx
        setne   cl
        mov     byte ptr [g_007b7968], al
        mov     eax, dword ptr [g_007b7e08]
        mov     byte ptr [g_007b796a], cl
        mov     ecx, dword ptr [g_007b7e04]
        test    ecx, ecx
        setne   dl
        mov     dword ptr [g_007b796c], eax
        mov     eax, dword ptr [g_007b7e54]
        test    eax, eax
        setne   cl
        mov     byte ptr [g_007b7969], dl
        push    edi
        mov     byte ptr [g_007b7a06], cl
        mov     dword ptr [g_007b7960], 0x10005
        mov     edx, 0x7b7970
    L401a74:
        mov     edi, dword ptr [ebx]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        add     edx, 0x1e
        add     ebx, 4
        cmp     edx, 0x7b7a06
        rep movsb
        jl      L401a74
        mov     ecx, dword ptr [g_007b7e2c]
        mov     edx, dword ptr [g_007b7e30]
        mov     edi, dword ptr [ecx + edx*4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7b7a07
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [g_007b7e74]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7b7a39
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [g_007b7e34]
        or      ecx, 0xffffffff
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7b7a9d
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     edi, dword ptr [g_007b7e38]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x7b7b01
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        push    0x7b7a39
        rep movsb
        call    FUN_00401b80
        add     esp, 4
        test    al, al
        pop     edi
        pop     esi
        pop     ebx
        jne     L401b5a
        or      eax, 0xffffffff
        ret     0xc
    L401b5a:
        mov     al, byte ptr [g_007b7a39]
        test    al, al
        je      L401b70
        push    0x7b7960
        call    FUN_00401c30
        add     esp, 4
    L401b70:
        xor     eax, eax
        ret     0xc
    }
}
