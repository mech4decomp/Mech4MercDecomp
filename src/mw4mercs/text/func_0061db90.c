/*
 * FUN_0061db90 (231 B) — Allocates a 0x40-byte object, initializes
 * it, calls FUN_0061c960 with 6 args, and on success registers the
 * object in a global table. Returns 0 on success, -1/-2 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *ptr);
extern int  __cdecl FUN_0061c960(void *a, void *b, void *c, void *d, void *e, void *f);
extern void __cdecl FUN_0064c620(void);
extern void *__cdecl FUN_0064aff0(int i);
extern void __cdecl FUN_00562f30(int a, void *b, void *c);
extern void __cdecl FUN_0064b7b0(void *p);

extern void *g_80d988;   /* 0x0080d988 */
extern int   g_80d97c;   /* 0x0080d97c */
extern void *g_80d98c;   /* 0x0080d98c */
extern int   g_7f2998;   /* 0x007f2998 */
extern int   g_7dde28;   /* 0x007dde28 */

__declspec(naked) int __stdcall FUN_0061db90(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x40
        call    FUN_004084d0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 4
        cmp     esi, ebx
        jz      L_24
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x10]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    ecx
        push    edi
        mov     dword ptr [esi], 0xffffffff
        mov     byte ptr [esi + 4], bl
        mov     dword ptr [esi + 0x20], 0xffffffff
        mov     dword ptr [esi + 0x24], ebx
        mov     byte ptr [esi + 0x2c], bl
        mov     dword ptr [esi + 0x30], ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x38], ebx
        mov     byte ptr [esi + 0x3c], bl
        mov     byte ptr [esi + 0x3d], bl
        mov     byte ptr [esi + 0x3e], bl
        mov     byte ptr [esi + 0x3f], bl
        mov     dword ptr [g_80d988], esi
        call    FUN_0061c960
        mov     edx, dword ptr [g_80d97c]
        add     esp, 0x18
        dec     edx
        cmp     eax, edx
        jge     L_2d
        mov     ecx, esi
        call    FUN_0064c620
        push    esi
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        mov     dword ptr [g_80d988], ebx
        or      eax, 0xffffffff
        pop     ebx
        ret
L_24:
        pop     edi
        pop     esi
        mov     eax, 0xfffffffe
        pop     ebx
        ret
L_2d:
        push    eax
        mov     ecx, esi
        call    FUN_0064aff0
        push    0x78c93c
        push    eax
        cmp     eax, ebx
        setz    al
        push    eax
        call    FUN_00562f30
        add     esp, 0xc
        push    edi
        mov     ecx, esi
        call    FUN_0064b7b0
        mov     eax, dword ptr [g_7f2998]
        mov     ecx, dword ptr [g_80d98c]
        mov     dword ptr [ecx + eax*4], esi
        pop     edi
        inc     eax
        pop     esi
        mov     dword ptr [g_80d988], ebx
        mov     dword ptr [g_7f2998], eax
        mov     dword ptr [g_7dde28], ebx
        xor     eax, eax
        pop     ebx
        ret
    }
}
