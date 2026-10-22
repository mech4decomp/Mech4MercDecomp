/*
 * FUN_1003f684 (469 B) - __cdecl.  Registry/INI init: reads three string
 * fields (0xe/0xf/0x10 bytes) via FUN_1004388f into g_100756bc/c0/c4, ORs
 * the results; on failure frees them and returns -1; on success stores them
 * into the g_10054c38 struct and sets the separator byte g_10051b94.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075684;
extern unsigned short g_100756ee;
extern void *g_100756bc;
extern void *g_100756c0;
extern void *g_100756c4;
extern void *g_10054c38;
extern int g_10051b98;
extern char g_10051b94;
extern void __cdecl FUN_1004388f(void);
extern void __cdecl FUN_1003f859(void);
extern void __cdecl FUN_1003c2dc(void);
extern void __cdecl FUN_1003c3c5(void);
extern void __cdecl FUN_1003c500(void);

__declspec(naked) void FUN_1003f684(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10075684], ebx
        push    ebp
        push    edi
        movzx   edi, word ptr [g_100756ee]
        je      L_f794
        push    esi
        push    0x100756bc
        push    0xe
        push    edi
        push    1
        pop     ebp
        push    ebp
        call    FUN_1004388f
        push    0x100756c0
        push    0xf
        push    edi
        push    ebp
        mov     esi, eax
        call    FUN_1004388f
        push    0x100756c4
        push    0x10
        push    edi
        push    ebp
        or      esi, eax
        call    FUN_1004388f
        push    dword ptr [g_100756c4]
        or      esi, eax
        call    FUN_1003f859
        add     esp, 0x34
        cmp     esi, ebx
        pop     esi
        je      L_f721
        push    dword ptr [g_100756bc]
        call    FUN_1003c2dc
        push    dword ptr [g_100756c0]
        call    FUN_1003c2dc
        push    dword ptr [g_100756c4]
        call    FUN_1003c2dc
        add     esp, 0xc
        mov     dword ptr [g_100756bc], ebx
        mov     dword ptr [g_100756c0], ebx
        mov     dword ptr [g_100756c4], ebx
L_f719:
        or      eax, 0xffffffff
        jmp     L_f855
L_f721:
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax]
        cmp     eax, 0x10054c00
        je      L_f752
        push    eax
        call    FUN_1003c2dc
        mov     eax, dword ptr [g_10054c38]
        push    dword ptr [eax + 4]
        call    FUN_1003c2dc
        mov     eax, dword ptr [g_10054c38]
        push    dword ptr [eax + 8]
        call    FUN_1003c2dc
        add     esp, 0xc
L_f752:
        mov     ecx, dword ptr [g_10054c38]
        mov     eax, dword ptr [g_100756bc]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_10054c38]
        mov     ecx, dword ptr [g_100756c0]
        mov     dword ptr [eax + 4], ecx
        mov     eax, dword ptr [g_10054c38]
        mov     ecx, dword ptr [g_100756c4]
        mov     dword ptr [eax + 8], ecx
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax]
        mov     al, byte ptr [eax]
        mov     dword ptr [g_10051b98], ebp
        mov     byte ptr [g_10051b94], al
        jmp     L_f853
L_f794:
        push    dword ptr [g_100756bc]
        call    FUN_1003c2dc
        push    dword ptr [g_100756c0]
        call    FUN_1003c2dc
        push    dword ptr [g_100756c4]
        call    FUN_1003c2dc
        push    2
        mov     dword ptr [g_100756bc], ebx
        mov     dword ptr [g_100756c0], ebx
        mov     dword ptr [g_100756c4], ebx
        call    FUN_1003c3c5
        mov     ecx, dword ptr [g_10054c38]
        add     esp, 0x10
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax]
        cmp     eax, ebx
        je      L_f719
        push    0x1004b710
        push    eax
        call    FUN_1003c500
        push    2
        call    FUN_1003c3c5
        mov     ecx, dword ptr [g_10054c38]
        add     esp, 0xc
        mov     dword ptr [ecx + 4], eax
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax + 4]
        cmp     eax, ebx
        je      L_f719
        push    2
        mov     byte ptr [eax], bl
        call    FUN_1003c3c5
        pop     ecx
        mov     ecx, dword ptr [g_10054c38]
        mov     dword ptr [ecx + 8], eax
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax + 8]
        cmp     eax, ebx
        je      L_f719
        mov     byte ptr [eax], bl
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax]
        mov     al, byte ptr [eax]
        mov     dword ptr [g_10051b98], 1
        mov     byte ptr [g_10051b94], al
L_f853:
        xor     eax, eax
L_f855:
        pop     edi
        pop     ebp
        pop     ebx
        ret
    }
}
