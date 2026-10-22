/* func_00721AE0.c -- in-.text data block 0x721AE0 (1283 B)
 * Disassembled from reference\MW4Mercs.exe.  Maps an NTSTATUS exception
 * code to a message string copied into the global buffer at 0x87CEB0.
 * Two jump tables (0x721FE4 / 0x722068) live outside this slice.
 */

extern char g_87ceb0[];                 /* global message buffer */
extern char g_7a53a4[];
extern char g_7a5384[];
extern char g_7a5374[];
extern char g_7a5368[];
extern char g_7a535c[];
extern char g_7a533c[];
extern char g_7a5328[];
extern char g_7a5314[];
extern char g_7a52f4[];
extern char g_7a52e8[];
extern char g_7a52c8[];
extern char g_7a52a0[];
extern char g_7a5288[];
extern char g_7a5268[];
extern char g_7a5250[];
extern char g_7a5240[];
extern char g_7a522c[];
extern char g_7a5214[];
extern char g_7a5204[];
extern char g_7a51f4[];
extern char g_7a51e4[];
extern char g_7a51d0[];
extern char g_7a51bc[];
extern char g_7a518c[];
extern char g_7a517c[];
extern char g_7a515c[];
extern unsigned char g_8aa9e4;         /* global byte */
extern void (__cdecl *g_76b420)(void);  /* IAT function pointer */
extern void (__cdecl *g_76b4f8)(void);  /* IAT function pointer */

__declspec(naked) void func_00721AE0(void)
{
    __asm {
        mov ecx, dword ptr [esp+4]
        mov eax, dword ptr [ecx]
        cmp eax, 0xc000008d
        push esi
        push edi
        ja loc_721dd1
        je loc_721da2
        cmp eax, 0xc0000006
        ja loc_721cc8
        je loc_721c99
        cmp eax, 0x80000003
        ja loc_721bb6
        je loc_721b87
        cmp eax, 0x80000001
        je loc_721b58
        cmp eax, 0x80000002
        jne loc_721fc5
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a53a4
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721b58:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5384
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721b87:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5374
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721bb6:
        cmp eax, 0x80000004
        je loc_721c6a
        cmp eax, 0xc0000005
        jne loc_721fc5
        mov al, byte ptr [g_8aa9e4]
        test al, al
        je loc_721c3b
        mov eax, dword ptr [ecx+0x18]
        test eax, eax
        je loc_721c0c
        mov edx, dword ptr [ecx+0x14]
        test edx, edx
        mov ecx, offset g_7a5368
        jne loc_721bed
        mov ecx, offset g_7a535c
loc_721bed:
        push eax
        push ecx
        push offset g_7a533c
        push offset g_87ceb0
        call dword ptr [g_76b420]
        add esp, 0x10
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721c0c:
        mov eax, dword ptr [ecx+0x14]
        test eax, eax
        mov eax, offset g_7a5368
        jne loc_721c1d
        mov eax, offset g_7a535c
loc_721c1d:
        push eax
        push offset g_7a5328
        push offset g_87ceb0
        call dword ptr [g_76b420]
        add esp, 0xc
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721c3b:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5314
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721c6a:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a52f4
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721c99:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a52e8
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721cc8:
        lea ecx, [eax+0x3fffffe3]
        cmp ecx, 0x6f
        ja loc_721fc5
        xor edx, edx
        mov dl, byte ptr [ecx+0x721ff8]
        /* __emit: FF 24 95 jump-table dispatch; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xE4
        __emit 0x1F
        __emit 0x72
        __emit 0x00
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a52c8
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721d15:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a52a0
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721d44:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5288
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721d73:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5268
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721da2:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5250
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721dd1:
        lea ecx, [eax+0x3fffff72]
        cmp ecx, 0x6f
        ja loc_721fc5
        xor edx, edx
        mov dl, byte ptr [ecx+0x722094]
        /* __emit: FF 24 95 jump-table dispatch; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x68
        __emit 0x20
        __emit 0x72
        __emit 0x00
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5240
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721e1e:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a522c
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721e4d:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5214
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721e7c:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a5204
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721eab:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a51f4
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721eda:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a51e4
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721f09:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a51d0
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721f38:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a51bc
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721f67:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a518c
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721f96:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_7a517c
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_87ceb0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
loc_721fc5:
        push eax
        push offset g_7a515c
        push offset g_87ceb0
        call dword ptr [g_76b4f8]
        add esp, 0xc
        pop edi
        mov eax, offset g_87ceb0
        pop esi
        ret 4
    }
}
