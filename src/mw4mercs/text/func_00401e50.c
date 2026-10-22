/*
 * FUN_00401e50 (790 B) — GetGameData callback. __stdcall, RET 0xC.
 * Reads a set of game-data fields (GameVersion, IpAddr, ServerPort, ...)
 * via FUN_006f5b80 into globals, parses Protocol/Flags with atoi, and
 * defaults missing fields to a shared buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f7970(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f5b80(void);

extern int (*g_atoi)(const char *);   /* 0x0076b318 */

extern int  g_007b7e58;
extern char g_invalid_args[];     /* 0x76b794 "Invalid number of arguments (%d) to GetGameData callback." */
extern char g_GameVersion[];      /* 0x79fa48 */
extern char g_IpAddr[];           /* 0x79fa18 */
extern char g_ServerPort[];       /* 0x79fa54 */
extern char g_GName[];            /* 0x79fa10 */
extern char g_0079fa24[];         /* 0x79fa24 */
extern char g_MaxPlayers[];       /* 0x79fa60 */
extern char g_PasswordProtected[];/* 0x79fa34 */
extern char g_MapType[];          /* 0x79fa2c */
extern char g_GameType[];         /* 0x79fa6c */
extern char g_Protocol[];         /* 0x79fad4 */
extern char g_Flags[];            /* 0x79fae0 */
extern char g_UnlimitedAmmo[];    /* 0x79fb0c */
extern char g_NoHeat[];           /* 0x79fb1c */
extern char g_NoRespawn[];        /* 0x79fb24 */

extern int g_007b7c70;
extern int g_007b7c74;
extern int g_007b7c78;
extern int g_007b7c7c;
extern int g_007b7c80;
extern int g_007b7c84;
extern int g_007b7c88;
extern int g_007b7c8c;
extern int g_007b7c90;
extern int g_007b7c94;
extern int g_007b7c98;
extern int g_007b7c9c;
extern int g_007b7ca0;
extern int g_007b7ca4;
extern int g_007b7ca8;
extern int g_007b7cac;
extern int g_007b7cb0;
extern int g_007b7cb4;
extern int g_007b7cb8;
extern int g_007b7cbc;
extern char g_007b7eb0[];         /* 0x7b7eb0 */

__declspec(naked) int __stdcall FUN_00401e50(int a, char *b, int *c)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x1
        push    ebx
        jz      L1E76
        push    eax
        push    offset g_invalid_args
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L1E6F
        int     3
L1E6F:
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0xc
L1E76:
        call    FUN_006f89f0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L1E86
        pop     ebx
        pop     ebp
        ret     0xc
L1E86:
        call    FUN_006f5ed0
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebx + 0x3c]
        lea     eax, [ebp + 0xc]
        push    eax
        mov     eax, dword ptr [edx]
        push    eax
        call    FUN_006f7970
        test    al, al
        jnz     L1EAF
        call    FUN_006f5ee0
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0xc
L1EAF:
        or      ecx, -1
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, dword ptr [g_007b7e58]
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     eax, dword ptr [ebp + 0xc]
        push    offset g_GameVersion
        push    eax
        mov     ecx, ebx
        call    FUN_006f5b80
        mov     ecx, dword ptr [ebp + 0xc]
        push    offset g_IpAddr
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [g_007b7c70], eax
        call    FUN_006f5b80
        mov     edx, dword ptr [ebp + 0xc]
        push    offset g_ServerPort
        push    edx
        mov     ecx, ebx
        mov     dword ptr [g_007b7c74], eax
        call    FUN_006f5b80
        mov     dword ptr [g_007b7c78], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    offset g_GName
        push    eax
        mov     ecx, ebx
        call    FUN_006f5b80
        mov     ecx, dword ptr [ebp + 0xc]
        push    offset g_0079fa24
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [g_007b7c7c], eax
        call    FUN_006f5b80
        mov     edx, dword ptr [ebp + 0xc]
        push    offset g_MaxPlayers
        push    edx
        mov     ecx, ebx
        mov     dword ptr [g_007b7c80], eax
        call    FUN_006f5b80
        mov     dword ptr [g_007b7c84], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    offset g_PasswordProtected
        push    eax
        mov     ecx, ebx
        call    FUN_006f5b80
        mov     ecx, dword ptr [ebp + 0xc]
        push    offset g_MapType
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [g_007b7c88], eax
        call    FUN_006f5b80
        mov     edx, dword ptr [ebp + 0xc]
        push    offset g_GameType
        push    edx
        mov     ecx, ebx
        mov     dword ptr [g_007b7c8c], eax
        call    FUN_006f5b80
        mov     dword ptr [g_007b7c90], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    offset g_Protocol
        push    eax
        mov     ecx, ebx
        call    FUN_006f5b80
        mov     ecx, dword ptr [ebp + 0xc]
        push    offset g_Flags
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [g_007b7c94], eax
        call    FUN_006f5b80
        mov     ecx, dword ptr [g_007b7c94]
        mov     esi, dword ptr [g_atoi]
        xor     edi, edi
        cmp     ecx, edi
        mov     dword ptr [g_007b7c9c], eax
        jz      L1FE0
        push    ecx
        call    esi
        mov     dword ptr [g_007b7c98], eax
        mov     eax, dword ptr [g_007b7c9c]
        add     esp, 0x4
        jmp     L1FEA
L1FE0:
        mov     dword ptr [g_007b7c98], -1
L1FEA:
        cmp     eax, edi
        jz      L204F
        push    eax
        call    esi
        mov     edx, dword ptr [g_007b7c9c]
        and     eax, 0xff
        push    edx
        mov     dword ptr [g_007b7ca0], eax
        call    esi
        shr     eax, 0x8
        and     eax, 0x1
        mov     dword ptr [g_007b7ca4], eax
        mov     eax, dword ptr [g_007b7c9c]
        push    eax
        call    esi
        mov     ecx, dword ptr [g_007b7c9c]
        shr     eax, 0x9
        and     eax, 0x1
        push    ecx
        mov     dword ptr [g_007b7ca8], eax
        call    esi
        mov     edx, dword ptr [g_007b7c9c]
        shr     eax, 0xa
        and     eax, 0x1
        push    edx
        mov     dword ptr [g_007b7cac], eax
        call    esi
        shr     eax, 0xb
        add     esp, 0x14
        and     eax, 0x1
        mov     dword ptr [g_007b7cb0], eax
        jmp     L206D
L204F:
        mov     dword ptr [g_007b7ca0], edi
        mov     dword ptr [g_007b7ca4], edi
        mov     dword ptr [g_007b7ca8], edi
        mov     dword ptr [g_007b7cac], edi
        mov     dword ptr [g_007b7cb0], edi
L206D:
        mov     eax, dword ptr [ebp + 0xc]
        push    offset g_UnlimitedAmmo
        push    eax
        mov     ecx, ebx
        call    FUN_006f5b80
        mov     ecx, dword ptr [ebp + 0xc]
        push    offset g_NoHeat
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [g_007b7cb4], eax
        call    FUN_006f5b80
        mov     edx, dword ptr [ebp + 0xc]
        push    offset g_NoRespawn
        push    edx
        mov     ecx, ebx
        mov     dword ptr [g_007b7cb8], eax
        call    FUN_006f5b80
        cmp     dword ptr [g_007b7c70], edi
        mov     dword ptr [g_007b7cbc], eax
        mov     ecx, offset g_007b7eb0
        jnz     L20BF
        mov     dword ptr [g_007b7c70], ecx
L20BF:
        cmp     dword ptr [g_007b7c74], edi
        jnz     L20CD
        mov     dword ptr [g_007b7c74], ecx
L20CD:
        cmp     dword ptr [g_007b7c78], edi
        jnz     L20DB
        mov     dword ptr [g_007b7c78], ecx
L20DB:
        cmp     dword ptr [g_007b7c7c], edi
        jnz     L20E9
        mov     dword ptr [g_007b7c7c], ecx
L20E9:
        cmp     dword ptr [g_007b7c80], edi
        jnz     L20F7
        mov     dword ptr [g_007b7c80], ecx
L20F7:
        cmp     dword ptr [g_007b7c84], edi
        jnz     L2105
        mov     dword ptr [g_007b7c84], ecx
L2105:
        cmp     dword ptr [g_007b7c88], edi
        jnz     L2113
        mov     dword ptr [g_007b7c88], ecx
L2113:
        cmp     dword ptr [g_007b7c8c], edi
        jnz     L2121
        mov     dword ptr [g_007b7c8c], ecx
L2121:
        cmp     dword ptr [g_007b7c90], edi
        jnz     L212F
        mov     dword ptr [g_007b7c90], ecx
L212F:
        cmp     dword ptr [g_007b7cb4], edi
        jnz     L213D
        mov     dword ptr [g_007b7cb4], ecx
L213D:
        cmp     dword ptr [g_007b7cb8], edi
        jnz     L214B
        mov     dword ptr [g_007b7cb8], ecx
L214B:
        cmp     eax, edi
        pop     edi
        pop     esi
        jnz     L2157
        mov     dword ptr [g_007b7cbc], ecx
L2157:
        call    FUN_006f5ee0
        mov     eax, 0x1
        pop     ebx
        pop     ebp
        ret     0xc
    }
}
