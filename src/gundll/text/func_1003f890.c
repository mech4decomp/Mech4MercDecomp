/*
 * FUN_1003f890 (203 B) - __cdecl.  Registry/object init: allocates a 0x30-byte
 * object (FUN_1003c027), initializes it (FUN_1003f95b / FUN_1003fab4 +
 * FUN_1003c2dc), copies the g_10054c38 struct fields, and stores it in
 * g_100756c8 / g_10054c38.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075680;
extern void *g_100756c8;
extern void *g_10054c38;
extern void *g_10054c08;
extern void *g_10054c0c;
extern void *g_10054c10;
extern void __cdecl FUN_1003c027(void);
extern void __cdecl FUN_1003f95b(void);
extern void __cdecl FUN_1003fab4(void);
extern void __cdecl FUN_1003c2dc(void);

__declspec(naked) void FUN_1003f890(void)
{
    __asm {
        cmp     dword ptr [g_10075680], 0
        push    esi
        je      L_f910
        push    0x30
        push    1
        call    FUN_1003c027
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jne     L_f8b0
L_f8ab:
        push    1
        pop     eax
        pop     esi
        ret
L_f8b0:
        push    esi
        call    FUN_1003f95b
        test    eax, eax
        pop     ecx
        je      L_f8cb
        push    esi
        call    FUN_1003fab4
        push    esi
        call    FUN_1003c2dc
        pop     ecx
        pop     ecx
        jmp     L_f8ab
L_f8cb:
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [esi + 4], eax
        mov     eax, dword ptr [g_10054c38]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esi + 8], eax
        push    dword ptr [g_100756c8]
        mov     dword ptr [g_10054c38], esi
        call    FUN_1003fab4
        push    dword ptr [g_100756c8]
        call    FUN_1003c2dc
        pop     ecx
        mov     dword ptr [g_100756c8], esi
        pop     ecx
        jmp     L_f957
L_f910:
        mov     eax, dword ptr [g_10054c38]
        push    dword ptr [g_100756c8]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [g_10054c08], ecx
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [g_10054c0c], ecx
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [g_10054c10], eax
        mov     dword ptr [g_10054c38], 0x10054c08
        call    FUN_1003fab4
        push    dword ptr [g_100756c8]
        call    FUN_1003c2dc
        and     dword ptr [g_100756c8], 0
        pop     ecx
        pop     ecx
L_f957:
        xor     eax, eax
        pop     esi
        ret
    }
}
