/*
 * FUN_006662e0 (204 B) — Allocates a 0x70-byte object via
 * FUN_004084d0, initializes it, inserts it into a global vector
 * (DAT_0080da7c), copies a string into it (repne scasb / rep movsd /
 * rep movsb), lowercases it via _strlwr (IAT 0x0076b304), and calls
 * FUN_006504f0. Returns the vector index.
 *
 * __cdecl (3 params), RET (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_80da7c;   /* DAT_0080da7c */
extern void *g_76b304;   /* IAT _strlwr */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00667680(void);
extern void __cdecl FUN_006504f0(void);

__declspec(naked) int __cdecl FUN_006662e0(char *param_1, int param_2, int param_3)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x70
        call    FUN_004084d0
        xor     esi, esi
        add     esp, 0x4
        cmp     eax, esi
        jz      L_666303
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 0x68], esi
        mov     dword ptr [eax + 0x6c], esi
        mov     byte ptr [eax + 0x4], 0x0
        jmp     L_666305
L_666303:
        xor     eax, eax
L_666305:
        mov     ecx, dword ptr [g_80da7c]
        mov     dword ptr [esp + 0x10], eax
        mov     edx, dword ptr [ecx]
        mov     ebp, dword ptr [ecx + 0x4]
        mov     edi, dword ptr [ecx + 0x8]
        sub     ebp, edx
        mov     edx, dword ptr [ecx + 0x4]
        sar     ebp, 0x2
        cmp     edx, edi
        jz      L_666331
        cmp     edx, esi
        jz      L_666329
        mov     dword ptr [edx], eax
L_666329:
        add     edx, 0x4
        mov     dword ptr [ecx + 0x4], edx
        jmp     L_66633e
L_666331:
        push    0x1
        lea     eax, [esp + 0x14]
        push    eax
        push    edx
        call    FUN_00667680
L_66633e:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x18]
        mov     dword ptr [ecx], ebp
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x6c], eax
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx + 0x68], edx
        mov     eax, dword ptr [esp + 0x10]
        or      ecx, 0xffffffff
        lea     edx, [eax + 0x4]
        mov     ebx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        push    edx
        mov     byte ptr [ebx + 0x67], 0x0
        call    dword ptr [g_76b304]
        mov     ecx, dword ptr [esp + 0x14]
        push    0x0
        push    0x8
        add     ecx, 0x4
        push    ebp
        push    ecx
        call    FUN_006504f0
        add     esp, 0x14
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
