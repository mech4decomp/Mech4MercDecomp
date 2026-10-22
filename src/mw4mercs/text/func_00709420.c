/*
 * FUN_00709420 (305 B) — __stdcall, RET 8 (2 params).
 *
 * 64-bit accumulator arithmetic: initializes DAT_008aa220/224 if zero,
 * computes a 64-bit sum/difference across many global pairs, clamps
 * the result to >= 0, and updates DAT_008aa238/23c. Returns a 64-bit
 * value in EDX:EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_008aa220;
extern int DAT_008aa228;
extern int DAT_008aa224;
extern int DAT_008aa22c;
extern int DAT_00858f38;
extern int DAT_00858f3c;
extern int DAT_00858f40;
extern int DAT_00858f44;
extern int DAT_00858f48;
extern int DAT_00858f4c;
extern int DAT_00858f30;
extern int DAT_00858f34;
extern int DAT_0087e600;
extern int DAT_0087e604;
extern int DAT_008b79d8;
extern int DAT_008b79dc;
extern int DAT_008abd50;
extern int DAT_008abd54;
extern int DAT_008b69d0;
extern int DAT_008b69d4;
extern int DAT_00859b78;
extern int DAT_00859b7c;
extern int DAT_008aa230;
extern int DAT_008aa238;
extern int DAT_008aa234;
extern int DAT_008aa23c;

__declspec(naked) void __stdcall FUN_00709420(void)
{
    __asm {
        mov     eax, dword ptr [DAT_008aa220]
        test    eax, eax
        mov     ecx, dword ptr [DAT_008aa228]
        mov     edx, dword ptr [DAT_008aa224]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [DAT_008aa22c]
        jnz     L_9452
        test    edx, edx
        jnz     L_9452
        mov     eax, ecx
        mov     edx, edi
        mov     dword ptr [DAT_008aa220], eax
        mov     dword ptr [DAT_008aa224], edx
L_9452:
        mov     esi, dword ptr [DAT_00858f38]
        mov     ebx, dword ptr [DAT_00858f3c]
        mov     ebp, dword ptr [DAT_00858f40]
        sub     esi, eax
        sbb     ebx, edx
        add     esi, ebp
        adc     ebx, dword ptr [DAT_00858f44]
        add     esi, dword ptr [DAT_00858f48]
        adc     ebx, dword ptr [DAT_00858f4c]
        add     esi, dword ptr [DAT_00858f30]
        adc     ebx, dword ptr [DAT_00858f34]
        mov     ebp, dword ptr [esp + 0x18]
        add     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        adc     ebx, edi
        add     esi, ecx
        adc     ebx, ebp
        mov     ecx, dword ptr [DAT_0087e600]
        mov     ebp, dword ptr [DAT_0087e604]
        sub     esi, ecx
        sbb     ebx, ebp
        mov     ecx, dword ptr [DAT_008b79d8]
        mov     ebp, dword ptr [DAT_008b79dc]
        sub     esi, ecx
        sbb     ebx, ebp
        mov     ecx, dword ptr [DAT_008abd50]
        mov     ebp, dword ptr [DAT_008abd54]
        sub     esi, ecx
        sbb     ebx, ebp
        mov     ecx, dword ptr [DAT_008b69d0]
        mov     ebp, dword ptr [DAT_008b69d4]
        sub     esi, ecx
        sbb     ebx, ebp
        mov     ecx, dword ptr [DAT_00859b78]
        mov     ebp, dword ptr [DAT_00859b7c]
        add     esi, ecx
        adc     ebx, ebp
        mov     dword ptr [DAT_00859b78], esi
        mov     dword ptr [DAT_00859b7c], ebx
        mov     ecx, dword ptr [DAT_00859b78]
        xor     esi, esi
        cmp     dword ptr [DAT_00859b7c], esi
        jg      L_9516
        jl      L_950a
        cmp     ecx, esi
        jnc     L_9516
L_950a:
        mov     dword ptr [DAT_00859b78], esi
        mov     dword ptr [DAT_00859b7c], esi
L_9516:
        mov     ecx, dword ptr [DAT_008aa230]
        mov     ebp, dword ptr [DAT_008aa238]
        mov     esi, dword ptr [DAT_008aa234]
        mov     ebx, dword ptr [DAT_008aa23c]
        add     ebp, ecx
        adc     ebx, esi
        sub     eax, ecx
        sbb     edx, esi
        sub     eax, dword ptr [DAT_008aa228]
        sbb     edx, edi
        pop     edi
        pop     esi
        mov     dword ptr [DAT_008aa238], ebp
        pop     ebp
        mov     dword ptr [DAT_008aa23c], ebx
        pop     ebx
        ret     8
    }
}
