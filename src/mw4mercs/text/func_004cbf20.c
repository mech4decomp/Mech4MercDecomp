/*
 * FUN_004cbf20 (307 B) — __cdecl, no args, returns char. Loads rasapi32.dll
 * (g_0076b0c0 = LoadLibraryA), resolves RAS entry points via GetProcAddress
 * (g_0076b0c8), stores them into g_007dac50..70, and validates all are
 * non-null; on failure calls FUN_004cc060.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cc060(void);
extern char  g_007dac4c;
extern int*  g_007dac48;
extern int*  g_007dac50;
extern int*  g_007dac54;
extern int*  g_007dac58;
extern int*  g_007dac5c;
extern int*  g_007dac60;
extern int*  g_007dac64;
extern int*  g_007dac68;
extern int*  g_007dac6c;
extern int*  g_007dac70;
extern int*  g_0076b0c0;   /* LoadLibraryA */
extern int*  g_0076b0c8;   /* GetProcAddress */

__declspec(naked) void FUN_004cbf20(void)
{
    __asm {
        mov     al, byte ptr [g_007dac4c]
        test    al, al
        jz      L_bf2c
        mov     al, 0x1
        ret
    L_bf2c:
        push    0x7719a8
        call    dword ptr [g_0076b0c0]
        test    eax, eax
        mov     dword ptr [g_007dac48], eax
        jz      L_bf47
        mov     byte ptr [g_007dac4c], 0x1
    L_bf47:
        push    esi
        mov     esi, dword ptr [g_0076b0c8]
        push    0x77198c
        push    eax
        call    esi
        mov     dword ptr [g_007dac50], eax
        mov     eax, dword ptr [g_007dac48]
        push    0x771980
        push    eax
        call    esi
        mov     ecx, dword ptr [g_007dac48]
        push    0x77196c
        push    ecx
        mov     dword ptr [g_007dac54], eax
        call    esi
        mov     edx, dword ptr [g_007dac48]
        push    0x77195c
        push    edx
        mov     dword ptr [g_007dac58], eax
        call    esi
        mov     dword ptr [g_007dac5c], eax
        mov     eax, dword ptr [g_007dac48]
        push    0x77194c
        push    eax
        call    esi
        mov     ecx, dword ptr [g_007dac48]
        push    0x771934
        push    ecx
        mov     dword ptr [g_007dac60], eax
        call    esi
        mov     edx, dword ptr [g_007dac48]
        push    0x77191c
        push    edx
        mov     dword ptr [g_007dac64], eax
        call    esi
        mov     dword ptr [g_007dac68], eax
        mov     eax, dword ptr [g_007dac48]
        push    0x771904
        push    eax
        call    esi
        mov     ecx, dword ptr [g_007dac48]
        push    0x7718f8
        push    ecx
        mov     dword ptr [g_007dac6c], eax
        call    esi
        mov     ecx, dword ptr [g_007dac50]
        test    ecx, ecx
        mov     dword ptr [g_007dac70], eax
        pop     esi
        jz      L_cc045
        mov     ecx, dword ptr [g_007dac54]
        test    ecx, ecx
        jz      L_cc045
        mov     ecx, dword ptr [g_007dac58]
        test    ecx, ecx
        jz      L_cc045
        mov     ecx, dword ptr [g_007dac5c]
        test    ecx, ecx
        jz      L_cc045
        mov     ecx, dword ptr [g_007dac60]
        test    ecx, ecx
        jz      L_cc045
        mov     ecx, dword ptr [g_007dac64]
        test    ecx, ecx
        jz      L_cc045
        mov     ecx, dword ptr [g_007dac68]
        test    ecx, ecx
        jz      L_cc045
        mov     ecx, dword ptr [g_007dac6c]
        test    ecx, ecx
        jz      L_cc045
        test    eax, eax
        jnz     L_cc04d
    L_cc045:
        call    FUN_004cc060
        xor     al, al
        ret
    L_cc04d:
        mov     al, byte ptr [g_007dac4c]
        ret
    }
}
