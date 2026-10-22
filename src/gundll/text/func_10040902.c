/*
 * FUN_10040902 (115 B) — __cdecl.
 * File-handle helper: opens via FUN_10043e8f, seeks via SetFilePointer
 * (IAT 0x1004917c), clears a bit in the handle table (0x10076aa0) on
 * success, and reports errors via FUN_1004277d / GetLastError /
 * FUN_1004270a. Returns the file pointer or -1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10043e8f(void);
extern void __cdecl FUN_1004277d(void);
extern void __cdecl FUN_1004270a(void);
extern void *g_1004917c;
extern void *g_100490e4;
extern unsigned char g_10076aa0;

__declspec(naked) void FUN_10040902(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        push    esi
        call    FUN_10043e8f
        cmp     eax, -1
        pop     ecx
        jnz     L921
        call    FUN_1004277d
        mov     dword ptr [eax], 0x9
        jmp     L94e
    L921:
        push    dword ptr [esp + 0x14]
        push    0
        push    dword ptr [esp + 0x18]
        push    eax
        call    dword ptr [g_1004917c]
        mov     edi, eax
        cmp     edi, -1
        jnz     L941
        call    dword ptr [g_100490e4]
        jmp     L943
    L941:
        xor     eax, eax
    L943:
        test    eax, eax
        jz      L953
        push    eax
        call    FUN_1004270a
        pop     ecx
    L94e:
        or      eax, 0xffffffff
        jmp     L972
    L953:
        mov     ecx, esi
        and     esi, 0x1f
        sar     ecx, 0x5
        mov     eax, esi
        mov     ecx, dword ptr [ecx*4 + g_10076aa0]
        lea     eax, [eax + eax*8]
        and     byte ptr [ecx + eax*4 + 0x4], 0xfd
        lea     eax, [ecx + eax*4 + 0x4]
        mov     eax, edi
    L972:
        pop     edi
        pop     esi
        ret
    }
}
