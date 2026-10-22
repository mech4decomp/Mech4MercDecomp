/*
 * FUN_1003f115 (145 B) - __cdecl.  Registry/object init: allocates a 0xac-byte
 * object (FUN_1003c027), initializes it (FUN_1003f1a6 / FUN_1003f4f4 +
 * FUN_1003c2dc), and stores it in g_100756b8 / g_10054b48.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075688;
extern void *g_100756b8;
extern void *g_10054b48;
extern void __cdecl FUN_1003c027(void);
extern void __cdecl FUN_1003f1a6(void);
extern void __cdecl FUN_1003f4f4(void);
extern void __cdecl FUN_1003c2dc(void);

__declspec(naked) void FUN_1003f115(void)
{
    __asm {
        cmp     dword ptr [g_10075688], 0
        push    esi
        je      L_f179
        push    0xac
        push    1
        call    FUN_1003c027
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jne     L_f138
L_f133:
        push    1
        pop     eax
        pop     esi
        ret
L_f138:
        push    esi
        call    FUN_1003f1a6
        test    eax, eax
        pop     ecx
        je      L_f153
        push    esi
        call    FUN_1003f4f4
        push    esi
        call    FUN_1003c2dc
        pop     ecx
        pop     ecx
        jmp     L_f133
L_f153:
        push    dword ptr [g_100756b8]
        mov     dword ptr [g_10054b48], esi
        call    FUN_1003f4f4
        push    dword ptr [g_100756b8]
        call    FUN_1003c2dc
        pop     ecx
        mov     dword ptr [g_100756b8], esi
        pop     ecx
        jmp     L_f1a2
L_f179:
        push    dword ptr [g_100756b8]
        mov     dword ptr [g_10054b48], 0x10054b50
        call    FUN_1003f4f4
        push    dword ptr [g_100756b8]
        call    FUN_1003c2dc
        and     dword ptr [g_100756b8], 0
        pop     ecx
        pop     ecx
L_f1a2:
        xor     eax, eax
        pop     esi
        ret
    }
}
