/*
 * FUN_006663B0 (131 B) — __cdecl, RET (four params). Allocates a 0x70-byte
 * object via FUN_004084d0, initializes it, stores it into a global array at
 * index param_2, copies param_1 (a string) into it, then calls an IAT
 * function and FUN_006504f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_80da7c;   /* DAT_0080da7c */
extern void *g_76b304;   /* IAT 0x0076b304 */

extern void FUN_004084d0(void);
extern void FUN_006504f0(void);

__declspec(naked) void __cdecl FUN_006663b0(void)
{
    __asm {
        push    0x70
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 4
        cmp     eax, edx
        jz      L_cd
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x68], edx
        mov     dword ptr [eax + 0x6c], edx
        mov     byte ptr [eax + 4], dl
        mov     edx, eax
L_cd:
        mov     eax, dword ptr [g_80da7c]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + ebp*4], edx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x68], ecx
        or      ecx, 0FFFFFFFFh
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [edx + 0x6c], eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     ebx, [edx + 4]
        shr     ecx, 2
        mov     esi, edi
        mov     dword ptr [edx], ebp
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        push    ebx
        mov     byte ptr [edx + 0x67], 0
        call    dword ptr [g_76b304]
        push    0
        push    8
        push    ebp
        push    ebx
        call    FUN_006504f0
        add     esp, 0x14
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret
    }
}
