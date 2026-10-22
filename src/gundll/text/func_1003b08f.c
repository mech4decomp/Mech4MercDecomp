/*
 * FUN_1003b08f (90 B) — __cdecl.
 * String transform: scans for a terminator char via FUN_10037cc8 /
 * FUN_100399db, then rotates bytes through the string.
 *
 * CFLAGS: /O1
 */

extern int g_10051b90;
extern char *g_10051984;
extern char g_10051b94;
extern void __cdecl FUN_10037cc8(void);
extern void __cdecl FUN_100399db(void);

__declspec(naked) void __cdecl FUN_1003b08f(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        movsx   eax, byte ptr [esi]
        push    eax
        call    FUN_10037cc8
        cmp     eax, 0x65
        pop     ecx
        jz      L_1003b0cf
    L_1003b0a3:
        inc     esi
        cmp     dword ptr [g_10051b90], 0x1
        jle     L_1003b0bc
        movsx   eax, byte ptr [esi]
        push    0x4
        push    eax
        call    FUN_100399db
        pop     ecx
        pop     ecx
        jmp     L_1003b0cb
    L_1003b0bc:
        movsx   eax, byte ptr [esi]
        mov     ecx, dword ptr [g_10051984]
        mov     al, byte ptr [ecx + eax*2]
        and     eax, 0x4
    L_1003b0cb:
        test    eax, eax
        jnz     L_1003b0a3
    L_1003b0cf:
        mov     cl, byte ptr [g_10051b94]
        mov     al, byte ptr [esi]
        mov     byte ptr [esi], cl
        inc     esi
    L_1003b0da:
        mov     cl, byte ptr [esi]
        mov     byte ptr [esi], al
        mov     al, cl
        mov     cl, byte ptr [esi]
        inc     esi
        test    cl, cl
        jnz     L_1003b0da
        pop     esi
        ret
    }
}
