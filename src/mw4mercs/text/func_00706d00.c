/*
 * FUN_00706d00 (121 B) — Constructor.
 *
 * __cdecl, RET (no stack cleanup). Allocates 0x19b8 bytes via
 * FUN_004084d0; on success zeroes fields, copies the string at
 * 0x7a137c into +0x4a, sets vtables at +0/+0x74/+0x78, calls
 * FUN_006f88c0, and returns 1. Returns 0 on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __stdcall FUN_006f88c0(void);
extern char g_7a137c[];

__declspec(naked) void __cdecl FUN_00706d00(void)
{
    __asm {
        push    0x19b8
        call    FUN_004084d0
        mov     edx, eax
        xor     eax, eax
        add     esp, 0x4
        cmp     edx, eax
        jz      loc_76
        push    ebx
        or      ecx, 0xffffffff
        push    esi
        push    edi
        mov     edi, offset g_7a137c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     dword ptr [edx + 0x20], eax
        mov     byte ptr [edx + 0x4], al
        mov     dword ptr [edx + 0x24], eax
        mov     dword ptr [edx + 0x28], eax
        mov     dword ptr [edx + 0x68], eax
        mov     byte ptr [edx + 0x70], al
        mov     dword ptr [edx + 0x1874], eax
        mov     byte ptr [edx + 0x2c], al
        mov     eax, ecx
        shr     ecx, 0x2
        lea     ebx, [edx + 0x4a]
        mov     esi, edi
        mov     dword ptr [edx], 0x7a1348
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        push    edx
        mov     dword ptr [edx + 0x78], 0x79fb3c
        mov     dword ptr [edx + 0x74], 0x7a2e20
        call    FUN_006f88c0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret
loc_76:
        xor     al, al
        ret
    }
}
