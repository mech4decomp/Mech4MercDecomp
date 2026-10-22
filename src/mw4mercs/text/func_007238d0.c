/*
 * FUN_007238d0 (200 B) — __stdcall (RET 0x8, 2 params).
 *
 * Sets a bit in a global bitmap (0x0087ddc4) indexed by param_1>>3, then
 * maintains a global keyboard-state ring buffer / value (0x0087e5f4) using
 * GetKeyboardType (function pointer at 0x0076b468) and a helper FUN_007238a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_0087ddc4[];
extern unsigned int g_0087e5f4;
extern unsigned char g_0087bc34;
extern unsigned int g_0087dde4;
extern unsigned int g_0087dde8;
extern unsigned int g_0087ddec[];
extern unsigned int g_008aaea4;
extern unsigned int g_0076b468;   /* GetKeyboardType function pointer */
extern void __cdecl FUN_007238a0(unsigned int);

__declspec(naked) void __stdcall FUN_007238d0(unsigned int param_1, unsigned int param_2)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        mov     ecx, ebx
        and     ecx, 0x7
        mov     dl, 0x1
        shl     dl, cl
        mov     eax, ebx
        shr     eax, 0x3
        mov     cl, byte ptr [eax + g_0087ddc4]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        or      cl, dl
        cmp     ebx, 0x6
        push    edi
        mov     byte ptr [eax + g_0087ddc4], cl
        jnc     L_723904
        test    esi, esi
        jz      L_723992
    L_723904:
        mov     edx, dword ptr [g_0087e5f4]
        test    edx, edx
        jz      L_72394a
        mov     al, byte ptr [g_0087bc34]
        test    al, al
        jz      L_723944
        mov     ecx, dword ptr [g_0087dde4]
        mov     edi, dword ptr [g_0087dde8]
        lea     eax, [ecx + 0x1]
        and     eax, 0xff
        cmp     eax, edi
        jz      L_72393b
        mov     dword ptr [ecx*4 + g_0087ddec], edx
        mov     dword ptr [g_0087dde4], eax
    L_72393b:
        mov     eax, dword ptr [g_008aaea4]
        test    eax, eax
        jz      L_72394a
    L_723944:
        push    edx
        call    FUN_007238a0
    L_72394a:
        mov     edi, dword ptr [g_0076b468]
        push    0x0
        call    edi
        cmp     eax, 0x7
        jnz     L_723978
        push    0x1
        call    edi
        and     eax, 0xffffff00
        cmp     eax, 0xd00
        jnz     L_723978
        xor     eax, eax
        mov     ah, bl
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [g_0087e5f4], eax
        ret     0x8
    L_723978:
        and     ebx, 0xff
        shr     esi, 0x8
        shl     ebx, 0x8
        and     esi, 0x10000
        add     ebx, esi
        mov     dword ptr [g_0087e5f4], ebx
    L_723992:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
