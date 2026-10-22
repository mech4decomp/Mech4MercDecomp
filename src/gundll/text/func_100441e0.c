/*
 * FUN_100441e0 (295 B) — __cdecl.
 * Stream write helper: manages a byte-buffer object at ESI, returns a
 * 16-bit status.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10040ba9(void);
extern void __cdecl FUN_10040b65(void);
extern void __cdecl FUN_10040975(void);
extern void __cdecl FUN_1004089d(void);

extern char g_10054740;
extern char g_10054760;
extern int  g_10076aa0;
extern char g_100518b8;

__declspec(naked) void FUN_100441e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0x10]
        test    al, 0x82
        mov     dword ptr [ebp - 4], ecx
        jz      L_42f9
        test    al, 0x40
        jnz     L_42f9
        xor     ebx, ebx
        test    al, 1
        jz      L_421d
        test    al, 0x10
        mov     dword ptr [esi + 4], ebx
        jz      L_42f9
        mov     edx, dword ptr [esi + 8]
        and     al, 0xfe
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0xc], eax
    L_421d:
        mov     eax, dword ptr [esi + 0xc]
        mov     dword ptr [esi + 4], ebx
        and     al, 0xef
        mov     dword ptr [ebp + 0xc], ebx
        or      al, 2
        test    ax, 0x10c
        mov     dword ptr [esi + 0xc], eax
        jnz     L_4258
        cmp     esi, offset g_10054740
        jz      L_4243
        cmp     esi, offset g_10054760
        jnz     L_424e
    L_4243:
        push    ecx
        call    FUN_10040ba9
        test    eax, eax
        pop     ecx
        jnz     L_4255
    L_424e:
        push    esi
        call    FUN_10040b65
        pop     ecx
    L_4255:
        mov     ecx, dword ptr [ebp - 4]
    L_4258:
        test    word ptr [esi + 0xc], 0x108
        push    edi
        jz      L_42c9
        mov     eax, dword ptr [esi + 8]
        mov     edi, dword ptr [esi]
        sub     edi, eax
        lea     edx, [eax + 2]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [esi + 0x18]
        dec     edx
        dec     edx
        cmp     edi, ebx
        mov     dword ptr [esi + 4], edx
        jle     L_4289
        push    edi
        push    eax
        push    ecx
        call    FUN_10040975
        add     esp, 0xc
        mov     dword ptr [ebp + 0xc], eax
        jmp     L_42be
    L_4289:
        cmp     ecx, -1
        jz      L_42a7
        mov     edx, ecx
        mov     eax, ecx
        sar     edx, 5
        and     eax, 0x1f
        mov     edx, dword ptr [edx*4 + g_10076aa0]
        lea     eax, [eax + eax*8]
        lea     eax, [edx + eax*4]
        jmp     L_42ac
    L_42a7:
        mov     eax, offset g_100518b8
    L_42ac:
        test    byte ptr [eax + 4], 0x20
        jz      L_42be
        push    2
        push    ebx
        push    ecx
        call    FUN_1004089d
        add     esp, 0xc
    L_42be:
        mov     eax, dword ptr [esi + 8]
        mov     ebx, dword ptr [ebp + 8]
        mov     word ptr [eax], bx
        jmp     L_42e4
    L_42c9:
        mov     ebx, dword ptr [ebp + 8]
        push    2
        pop     edi
        lea     eax, [ebp + 8]
        push    edi
        push    eax
        push    ecx
        mov     word ptr [ebp + 8], bx
        call    FUN_10040975
        add     esp, 0xc
        mov     dword ptr [ebp + 0xc], eax
    L_42e4:
        cmp     dword ptr [ebp + 0xc], edi
        pop     edi
        jz      L_42f0
        or      dword ptr [esi + 0xc], 0x20
        jmp     L_42fe
    L_42f0:
        mov     eax, ebx
        and     eax, 0xffff
        jmp     L_4303
    L_42f9:
        or      al, 0x20
        mov     dword ptr [esi + 0xc], eax
    L_42fe:
        mov     eax, 0xffff
    L_4303:
        pop     esi
        pop     ebx
        leave
        ret
    }
}
