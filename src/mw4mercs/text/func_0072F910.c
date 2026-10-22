/*
 * FUN_0072F910 (396 B) — __cdecl, RET 8 (2 stack args). Allocates a
 * 0x104-byte buffer via FUN_006F3C80, copies a struct from the args,
 * computes a hash (mul 0x431bde83 / shr 0x12), does FPU min/max on a
 * double (fcom/fstp), copies several arrays (rep movsd/movsb), and calls
 * FUN_007556C0 with a table-indexed arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F3C80(void);
extern void __cdecl FUN_007556C0(void);
extern unsigned long g_857f48[];
extern unsigned char g_87dd0a;

__declspec(naked) void func_0072F910(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        xor     edi, edi
        push    edi
        push    0x104
        mov     dword ptr [esp + 0x2c], esi
        call    FUN_006F3C80
        mov     ebp, eax
        mov     dword ptr [ebp + 0x48], edi
        lea     eax, [ebp + 0x48]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esp + 0x20]
        lea     ecx, [eax + 4]
        mov     dword ptr [esp + 0x20], ecx
        mov     ebx, dword ptr [ecx]
        mov     edx, ebp
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [ecx + 4]
        mov     dword ptr [edx + 4], ebx
        mov     ebx, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [edx + 8], ebx
        mov     ebx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [ebx + 0x1c]
        mov     dword ptr [edx + 0xc], ecx
        mov     ecx, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [ebx + 4]
        mov     dword ptr [ebp + 0x20], ecx
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [ebp + 0x2c], eax
        mov     eax, dword ptr [ebx + 0x2c]
        mov     dword ptr [ebp + 0x10], ecx
        mov     ecx, dword ptr [ebx + 0x18]
        mov     dword ptr [ebp + 0x14], edx
        mov     edx, dword ptr [ebx + 0xc]
        mov     dword ptr [ebp + 0x3c], eax
        mov     eax, dword ptr [ebx + 8]
        mov     dword ptr [ebp + 0x28], ecx
        mov     ecx, dword ptr [ebx + 0x34]
        mov     dword ptr [ebp + 0x1c], edx
        mov     edx, dword ptr [ebx + 0x14]
        mov     dword ptr [ebp + 0x18], eax
        mov     dword ptr [ebp + 0x44], ecx
        add     ecx, eax
        mov     dword ptr [ebp + 0x24], edx
        mov     eax, 0x431bde83
        mul     ecx
        shr     edx, 0x12
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], edi
        fild    qword ptr [esp + 0x14]
        fcom    qword ptr [esi + 0x10]
        __emit  0xDF            /* fnstsw ax: no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x41 */
        __emit  0xC4
        __emit  0x41
        jne     L_f9c2
        fstp    qword ptr [esi + 0x10]
        jmp     L_f9c4
L_f9c2:
        __emit  0xDD            /* fstp st(0): MSVC6 emits wrong encoding for fstp st(0) */
        __emit  0xD8
L_f9c4:
        mov     esi, dword ptr [ebx + 0x28]
        cmp     esi, edi
        je      L_f9df
        lea     eax, [ebp + 0x8c]
        mov     ecx, 5
        mov     edi, eax
        rep     movsd
        mov     dword ptr [ebp + 0x38], eax
        jmp     L_f9e2
L_f9df:
        mov     dword ptr [ebp + 0x38], edi
L_f9e2:
        mov     eax, dword ptr [ebx + 0x1c]
        mov     esi, dword ptr [ebx + 0x20]
        shl     eax, 2
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        lea     edi, [ebp + 0xa0]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     esi, dword ptr [ebx + 0x24]
        mov     ecx, eax
        shr     ecx, 2
        lea     edx, [ebp + 0xd0]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [ebx + 0x2c]
        mov     esi, dword ptr [ebx + 0x30]
        lea     eax, [ebp + 0xa0]
        mov     dword ptr [ebp + 0x30], eax
        mov     dword ptr [ebp + 0x34], edx
        mov     edx, ecx
        shr     ecx, 2
        lea     eax, [ebp + 0x4c]
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [ebp + 0x40], eax
        mov     eax, dword ptr [ecx]
        test    eax, eax
        je      L_fa56
        mov     dword ptr [ebp + 0x100], eax
        mov     dword ptr [ecx], ebp
        jmp     L_fa62
L_fa56:
        mov     dword ptr [ecx], ebp
        mov     dword ptr [ebp + 0x100], 0
L_fa62:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x20]
        push    0
        push    eax
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [eax*4 + g_857f48]
        push    ebx
        push    edx
        push    ecx
        mov     byte ptr [g_87dd0a], 1
        call    FUN_007556C0
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_87dd0a], 0
        mov     eax, 1
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
