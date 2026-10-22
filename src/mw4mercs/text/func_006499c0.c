/*
 * FUN_006499c0 (273 B) — __cdecl, no args, returns AL (bool).
 * Reads a line from a buffer into a global line buffer, then logs it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8058d0;   /* 0x008058d0 */
extern unsigned int g_8058c8;   /* 0x008058c8 */
extern unsigned int g_8058c0;   /* 0x008058c0 */
extern char g_7b5a18;           /* 0x007b5a18 */
extern char g_7f4254[];         /* 0x007f4254 (line buffer) */
extern int g_76b420;            /* 0x0076b420 (IAT: sprintf) */

extern void __cdecl FUN_00649d70(void *p);

__declspec(naked) void __cdecl FUN_006499c0(void)
{
    __asm {
        mov     eax, dword ptr [g_8058d0]
        mov     ecx, dword ptr [eax + 0xC]
        mov     edx, dword ptr [eax + 0x8]
        sub     esp, 0x818
        cmp     ecx, edx
        push    esi
        jnc     L_ac7
        mov     esi, dword ptr [eax + 0x4]
        test    esi, esi
        mov     edx, 0x800
        mov     dword ptr [esp + 0x8], edx
        jz      L_ac7
        push    ebx
        mov     ebx, ecx
        push    edi
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, dword ptr [eax + 0x8]
        lea     edi, [ebx + 0x800]
        cmp     edi, ecx
        mov     dword ptr [esp + 0xC], 0x0
        jbe     L_a0f
        mov     edx, ecx
        sub     edx, ebx
L_a0f:
        push    ebp
        mov     ecx, edx
        mov     ebp, ecx
        shr     ecx, 0x2
        add     esi, ebx
        mov     edi, offset g_7f4254
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        add     ebx, edx
        cmp     edx, 0x800
        rep     movsb
        mov     dword ptr [eax + 0xC], ebx
        pop     ebp
        jnc     L_a3d
        test    edx, edx
        mov     esi, edx
        jle     L_a56
        jmp     L_a41
L_a3d:
        mov     esi, dword ptr [esp + 0x10]
L_a41:
        mov     ecx, dword ptr [esp + 0xC]
        mov     bl, 0xA
L_a47:
        cmp     byte ptr [ecx + g_7f4254], bl
        jz      L_a5a
        inc     ecx
        cmp     ecx, esi
        jl      L_a47
        jmp     L_a5a
L_a56:
        mov     ecx, dword ptr [esp + 0xC]
L_a5a:
        mov     esi, dword ptr [esp + 0x14]
        inc     ecx
        add     esi, ecx
        mov     byte ptr [ecx + g_7f4254], 0x0
        mov     ecx, dword ptr [eax + 0x8]
        cmp     esi, ecx
        pop     edi
        mov     dword ptr [eax + 0xC], esi
        pop     ebx
        jbe     L_a77
        mov     dword ptr [eax + 0xC], ecx
L_a77:
        test    edx, edx
        jz      L_ac7
        mov     ecx, dword ptr [g_8058c8]
        mov     al, byte ptr [g_7b5a18]
        inc     ecx
        test    al, al
        mov     dword ptr [g_8058c8], ecx
        jz      L_abd
        mov     edx, dword ptr [g_8058c0]
        push    offset g_7f4254
        push    edx
        mov     eax, ecx
        push    eax
        lea     ecx, [esp + 0x1C]
        push    0x7929d4
        push    ecx
        call    dword ptr [g_76b420]
        lea     edx, [esp + 0x24]
        push    edx
        call    FUN_00649d70
        add     esp, 0x18
L_abd:
        mov     al, 0x1
        pop     esi
        add     esp, 0x818
        ret
L_ac7:
        xor     al, al
        pop     esi
        add     esp, 0x818
        ret
    }
}
