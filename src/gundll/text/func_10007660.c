/*
 * FUN_10007660 (208 B) - __stdcall, RET 0xc.  Crypto helper with a 0x4008
 * stack frame (via stack-probe FUN_10037940): derives a key via
 * FUN_10007b90, calls an IAT crypto routine (0x10049008), then
 * FUN_1000c140, optionally writes an output pointer, and frees via
 * FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049008;   /* IAT: crypto routine (CryptEncrypt-family) */
extern void *g_100490e4;   /* IAT: GetLastError */
extern void __cdecl FUN_10037940(void);     /* rel32 call (stack probe) */
extern void __stdcall FUN_10007b90(void);   /* rel32 call, RET 0x4 (1 arg) */
extern void __stdcall FUN_1000c140(void);   /* rel32 call, RET 0xc (3 args) */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10007660(void)
{
    __asm {
        mov     eax, 0x4008
        call    FUN_10037940
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x4014]
        push    edi
        mov     dword ptr [esp + 0xc], 0
        call    FUN_10007b90
        mov     esi, eax
        test    esi, esi
        jl      L_7716
        mov     ecx, dword ptr [esp + 0x4018]
        xor     eax, eax
        test    ecx, ecx
        setne   al
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        push    0
        mov     dword ptr [esp + 0x18], 0x4000
        add     eax, 6
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        push    0
        push    eax
        call    dword ptr [g_10049008]
        test    eax, eax
        jne     L_76e3
        call    dword ptr [g_100490e4]
        test    eax, eax
        jge     L_76cf
        mov     esi, eax
        jmp     L_7716
L_76cf:
        jg      L_76d5
        mov     esi, eax
        jmp     L_7716
L_76d5:
        and     eax, 0xffff
        or      eax, 0x80070000
        mov     esi, eax
        jmp     L_7716
L_76e3:
        mov     edx, dword ptr [esp + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_1000c140
        mov     esi, eax
        test    esi, esi
        jl      L_7716
        mov     eax, dword ptr [esp + 0x401c]
        test    eax, eax
        je      L_7716
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esp + 8], 0
L_7716:
        mov     edx, dword ptr [esp + 8]
        push    edx
        call    FUN_10001d60
        add     esp, 4
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0x4008
        ret     0xc
    }
}
