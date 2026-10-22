/*
 * FUN_00718300 (269 B) — __cdecl, no args, returns pointer. Manages a
 * linked list of nodes (DAT_008aab18/1c), calls FUN_00701f20/007426f0 to
 * build a message, and returns a node or a static buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8aaac1;
extern int g_85b4a0;
extern int g_8aab1c;
extern char g_87bc35;
extern char g_8aab0c[];
extern int g_8aab18;
extern char g_87c6ac[];
extern char g_87c6c5[];
extern int g_87c6c1;

extern int __stdcall FUN_00701f20(int a, int b, int c);
extern void __stdcall FUN_007426f0(int a, int b, int c);
extern void __stdcall FUN_006f4230(int a);
extern int __stdcall FUN_0070e220(int a, int b);
extern void __stdcall FUN_0070e230(int a, int b);
extern void __stdcall FUN_0070e1b0(int a, int b, int c);
extern void __stdcall FUN_0070e1d0(int a, int b);

__declspec(naked) void __stdcall FUN_00718300(void)
{
    __asm {
        mov     al, byte ptr [g_8aaac1]
        push    esi
        push    edi
        xor     edi, edi
        test    al, al
        jz      L_183a3
        mov     esi, dword ptr [g_85b4a0]
        cmp     esi, 0x1
        jz      L_183ac
        mov     eax, dword ptr [g_8aab1c]
        test    eax, eax
        jz      L_1838a
        cmp     byte ptr [eax + 0x18], 0xf1
        jnz     L_1837a
        mov     eax, dword ptr [eax + 0x4]
        push    ebx
        mov     bl, byte ptr [g_87bc35]
        push    eax
        push    edi
        push    edi
        push    eax
        push    0x9
        mov     byte ptr [g_87bc35], 0x1
        mov     dword ptr [g_85b4a0], 0x2
        call    FUN_00701f20
        push    eax
        push    0x7
        call    FUN_00701f20
        push    eax
        push    offset g_8aab0c
        call    FUN_007426f0
        mov     eax, dword ptr [g_8aab1c]
        mov     byte ptr [g_87bc35], bl
        mov     dword ptr [g_85b4a0], esi
        pop     ebx
L_1837a:
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_8aab1c], 0x0
L_1838a:
        mov     eax, dword ptr [g_8aab18]
        test    eax, eax
        jz      L_183a3
        mov     ecx, dword ptr [eax]
        mov     dword ptr [g_8aab1c], eax
        mov     dword ptr [g_8aab18], ecx
        lea     edi, [eax + 0x4]
L_183a3:
        cmp     dword ptr [g_85b4a0], 0x1
        jnz     L_183e5
L_183ac:
        push    0x9
        push    0x10
        call    FUN_0070e220
        test    eax, eax
        jz      L_183e0
        push    eax
        push    offset g_87c6ac
        call    FUN_0070e230
        mov     ecx, dword ptr [g_87c6c1]
        test    ecx, ecx
        mov     eax, offset g_87c6ac
        jz      L_1840a
        pop     edi
        mov     dword ptr [g_87c6c1], offset g_87c6c5
        pop     esi
        ret
L_183e0:
        pop     edi
        xor     eax, eax
        pop     esi
        ret
L_183e5:
        test    edi, edi
        jnz     L_183f8
        push    0x9
        push    0x10
        push    edi
        call    FUN_0070e1b0
        mov     eax, edi
        pop     edi
        pop     esi
        ret
L_183f8:
        xor     edx, edx
        mov     dx, word ptr [edi + 0x12]
        add     edx, 0x19
        push    edx
        push    edi
        call    FUN_0070e1d0
        mov     eax, edi
L_1840a:
        pop     edi
        pop     esi
        ret
    }
}
