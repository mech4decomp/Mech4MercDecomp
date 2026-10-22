/*
 * FUN_005846A0 (208 B) — in-.text data block function (block 0x584694).
 * Fills a 47-entry table at 0x7f25d0 with -1, walks a linked list calling
 * FUN_0066c3c0, then does vtable dispatch on a member object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066c3c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0066b3f0(void);
extern void __cdecl FUN_00603cd0(void);

extern int  g_007f25d0[];   /* table @ 0x7f25d0 (47 dwords) */
extern char g_007f1f7c;     /* byte @ 0x7f1f7c */
extern char g_007f1f7d;     /* byte @ 0x7f1f7d */

__declspec(naked) void FUN_005846A0(void)
{
    __asm {
        push    ecx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp + 0x398]
        or      eax, 0xffffffff
        mov     ecx, 0x2f
        mov     edi, offset g_007f25d0
        rep stosd
        xor     edi, edi
L46BD:
        test    esi, esi
        je      L470D
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 4]
        je      L470D
        mov     edx, dword ptr [eax + 0x2c]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x14], 0
        call    FUN_0066c3c0
        add     esp, 8
        cmp     eax, -1
        je      L46EF
        mov     dword ptr [eax*4 + g_007f25d0], edi
L46EF:
        mov     eax, dword ptr [esp + 0xc]
        inc     edi
        test    eax, eax
        je      L46BD
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L46BD
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L46BD
L470D:
        mov     eax, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [eax + 4]
        mov     cl, byte ptr [eax + 0x88]
        add     eax, 0x88
        test    cl, cl
        je      L474B
        mov     ecx, dword ptr [ebp + 0x2f4]
        mov     dl, byte ptr [ecx + 0x1c]
        test    dl, dl
        jne     L474B
        xor     edx, edx
        mov     dl, byte ptr [g_007f1f7c]
        push    edx
        push    eax
        call    FUN_0066b3f0
        mov     al, byte ptr [g_007f1f7c]
        mov     byte ptr [g_007f1f7d], al
L474B:
        mov     esi, dword ptr [ebp + 0x2f4]
        mov     ecx, esi
        call    FUN_00603cd0
        mov     edx, dword ptr [esi]
        xor     eax, eax
        mov     al, byte ptr [g_007f1f7d]
        push    0
        mov     ecx, esi
        push    eax
        push    0xa
        call    dword ptr [edx + 8]
        pop     edi
        pop     esi
        pop     ebp
        pop     ecx
        ret
    }
}
