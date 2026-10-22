/* func_0074FDB0.c -- in-.text data block 0x74FDB0 (1352 B)
 * Disassembled from reference\MW4Mercs.exe.  Flag-bit driven string
 * concatenation into the global buffer at 0x8B9E94 (one string per bit).
 */

extern char g_8b9e94[];                 /* global string buffer */
extern char g_7acc18[];
extern char g_7acc00[];
extern char g_7acbf0[];
extern char g_7acbd4[];
extern char g_7acbc4[];
extern char g_7acbb8[];
extern char g_7acba0[];
extern char g_7acb90[];
extern char g_7acb74[];
extern char g_7ab834[];
extern char g_7acb60[];
extern char g_7acb58[];
extern char g_7acb50[];
extern char g_7acb44[];
extern char g_7acb38[];
extern char g_7acb24[];
extern char g_7acb1c[];
extern char g_7acb0c[];
extern char g_7acb04[];
extern char g_7acaf4[];
extern char g_7abec8[];
extern char g_7acae8[];
extern char g_7acacc[];
extern char g_7acab4[];
extern char g_7aca98[];
extern char g_7aca84[];
extern void (__cdecl *g_76b420)(void);  /* IAT function pointer */

__declspec(naked) void func_0074FDB0(void)
{
    __asm {
        push ebx
        mov ebx, dword ptr [esp+8]
        test bl, 1
        push esi
        push edi
        mov byte ptr [g_8b9e94], 0
        je loc_74fdf0
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acc18
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74fdf0:
        test bl, 2
        je loc_74fe22
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acc00
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74fe22:
        test bl, 4
        je loc_74fe54
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acbf0
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74fe54:
        test bl, 8
        je loc_74fe86
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acbd4
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74fe86:
        test bl, 0x10
        je loc_74feb8
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acbc4
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74feb8:
        test bl, 0x20
        je loc_74feea
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acbb8
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74feea:
        test bl, 0x40
        je loc_74ff1c
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acba0
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74ff1c:
        test bl, 0x80
        je loc_74ff4e
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb90
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74ff4e:
        test bh, 1
        je loc_74ff80
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb74
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74ff80:
        test bh, 2
        je loc_74ffb2
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7ab834
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_74ffb2:
        test bh, 4
        je loc_74ffe3
        mov eax, dword ptr [esp+0x14]
        mov ecx, dword ptr [eax+0x50]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_8b9e94
        repne scasb
        not ecx
        dec ecx
        add ecx, offset g_8b9e94
        push offset g_7acb60
        push ecx
        call dword ptr [g_76b420]
        add esp, 0xc
loc_74ffe3:
        test bh, 8
        je loc_750015
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb58
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_750015:
        test bh, 0x10
        je loc_750047
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb50
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_750047:
        test ebx, 0x2000000
        je loc_75007c
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb44
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_75007c:
        test bh, 0x20
        je loc_7500ae
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb38
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_7500ae:
        test bh, 0x40
        je loc_7500e0
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb24
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_7500e0:
        test bh, 0x80
        je loc_750112
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb1c
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_750112:
        test ebx, 0x10000
        je loc_750147
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb0c
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_750147:
        test ebx, 0x20000
        je loc_75017c
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acb04
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_75017c:
        test ebx, 0x40000
        je loc_7501b1
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acaf4
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_7501b1:
        test ebx, 0x1000000
        je loc_7501e6
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7abec8
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_7501e6:
        test ebx, 0x80000
        je loc_75021b
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acae8
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_75021b:
        test ebx, 0x100000
        je loc_750250
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acacc
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_750250:
        test ebx, 0x200000
        je loc_750285
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7acab4
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_750285:
        test ebx, 0x400000
        je loc_7502ba
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7aca98
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_7502ba:
        test ebx, 0x800000
        je loc_7502ef
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7aca84
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xffffffff
        mov esi, edi
        mov edi, offset g_8b9e94
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
loc_7502ef:
        pop edi
        pop esi
        mov eax, offset g_8b9e94
        pop ebx
        ret 8
    }
}
