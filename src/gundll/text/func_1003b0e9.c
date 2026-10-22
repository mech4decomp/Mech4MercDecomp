/*
 * FUN_1003b0e9 (78 B) - __cdecl. String trim/rewrite helper using the
 * separator byte g_10051b94: skips a leading token, trims trailing '0'
 * chars, and compacts the remainder. (Transcribed from reference bytes;
 * gaptext.)
 *
 * CFLAGS: /O1
 */

extern char g_10051b94;   /* module data byte */

__declspec(naked) void __cdecl FUN_1003b0e9(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dl, byte ptr [g_10051b94]
        mov     cl, byte ptr [eax]
        test    cl, cl
        je      L_105
L_f9:
        cmp     cl, dl
        je      L_105
        mov     cl, byte ptr [eax + 0x1]
        inc     eax
        test    cl, cl
        jne     L_f9
L_105:
        mov     cl, byte ptr [eax]
        inc     eax
        test    cl, cl
        je      L_136
L_10c:
        mov     cl, byte ptr [eax]
        test    cl, cl
        je      L_11f
        cmp     cl, 0x65
        je      L_11f
        cmp     cl, 0x45
        je      L_11f
        inc     eax
        jmp     L_10c
L_11f:
        mov     ecx, eax
L_121:
        dec     eax
        cmp     byte ptr [eax], 0x30
        je      L_121
        cmp     byte ptr [eax], dl
        jne     L_12c
        dec     eax
L_12c:
        mov     dl, byte ptr [ecx]
        inc     eax
        inc     ecx
        test    dl, dl
        mov     byte ptr [eax], dl
        jne     L_12c
L_136:
        ret
    }
}
