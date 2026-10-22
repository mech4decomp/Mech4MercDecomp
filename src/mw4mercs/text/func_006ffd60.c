/*
 * FUN_006ffd60 (267 B) — IGunRowManager/IGunBrowser view-list setup. If
 * g_00856860 is null returns 0x80004005. Calls FUN_006fd260/FUN_006fd230,
 * then dispatches virtual methods on the objects at g_00856860+8 / +0x20,
 * setting g_00856844 on failure (with FUN_006fabf0 error logging) or
 * initializing the view object (param_1) and g_00856840 flags on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856860;
extern int g_00856844;
extern int g_007b6f10;
extern int g_00856840;
extern int __cdecl FUN_006fd260(void);
extern int __cdecl FUN_006fd230(void);
extern void * __cdecl FUN_0073e160(int);
extern int __cdecl FUN_006fabf0(char *, int, void *);
extern double __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_006ffd60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [g_00856860]
        test    ecx, ecx
        push    esi
        push    edi
        jnz     L_fd81
        pop     edi
        mov     dword ptr [g_00856844], 0x80004005
        xor     al, al
        pop     esi
        pop     ebp
        ret     0x4
L_fd81:
        call    FUN_006fd260
        mov     ecx, dword ptr [g_00856860]
        call    FUN_006fd230
        cmp     eax, 0x2
        jz      L_fda8
        pop     edi
        mov     dword ptr [g_00856844], 0x80004005
        xor     al, al
        pop     esi
        pop     ebp
        ret     0x4
L_fda8:
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [g_00856860]
        mov     eax, dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax]
        lea     edx, [esi + 0x4]
        push    edx
        push    0x7b6f98
        push    eax
        call    dword ptr [ecx]
        mov     edi, eax
        test    edi, edi
        jge     L_fdf3
        push    edi
        mov     dword ptr [g_00856844], edi
        call    FUN_0073e160
        push    eax
        push    edi
        push    0x7a102c
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_fe2f
        int     3
        pop     edi
        mov     byte ptr [esi + 0xc], 0x0
        xor     al, al
        pop     esi
        pop     ebp
        ret     0x4
L_fdf3:
        mov     eax, dword ptr [g_00856860]
        mov     eax, dword ptr [eax + 0x20]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        mov     byte ptr [g_007b6f10], 0x0
        call    dword ptr [ecx + 0xc]
        mov     edi, eax
        test    edi, edi
        jge     L_fe3b
        push    edi
        mov     dword ptr [g_00856844], edi
        call    FUN_0073e160
        push    eax
        push    edi
        push    0x7a0ffc
        call    FUN_006fabf0
        add     esp, 0xc
        test    eax, eax
        jz      L_fe2f
        int     3
L_fe2f:
        pop     edi
        mov     byte ptr [esi + 0xc], 0x0
        xor     al, al
        pop     esi
        pop     ebp
        ret     0x4
L_fe3b:
        cmp     dword ptr [esi], 0x0
        mov     eax, dword ptr [g_00856840]
        jnz     L_fe4a
        or      eax, 0x4
        jmp     L_fe4d
L_fe4a:
        or      eax, 0x2
L_fe4d:
        mov     dword ptr [g_00856840], eax
        mov     byte ptr [esi + 0xc], 0x1
        mov     dword ptr [esi + 0x18], 0xffffffff
        mov     dword ptr [esi + 0x1c], 0x0
        call    FUN_00707e90
        fst     qword ptr [esi + 0x20]
        pop     edi
        fstp    qword ptr [esi + 0x28]
        mov     al, 0x1
        pop     esi
        pop     ebp
        ret     0x4
    }
}
