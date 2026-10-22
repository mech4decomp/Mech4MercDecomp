/*
 * FUN_1001e550 (110 B) - __stdcall, RET 0x1c (7 args).  If this->obj(+0xc)
 * is non-null return 0xc112000d; else call FUN_1001c760(this, arg2); on
 * success clone arg7 via FUN_10001dd0 (on failure return 0x8007000e),
 * then store args 3..6 into this->+0x20/+0x24/+0x28/+0x2c, the clone into
 * +0x30, set this+4=1, and return 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c760(void *, void *);   /* rel32 call */
extern void __stdcall FUN_10001dd0(void);            /* rel32 call */

__declspec(naked) void __stdcall FUN_1001e550(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L567
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x1c
L567:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001c760
        test    eax, eax
        jl      L5b9
        mov     edi, dword ptr [esp + 0x24]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L592
        test    edi, edi
        je      L592
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x1c
L592:
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x20], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x24], edx
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x28], edx
        mov     edx, dword ptr [esp + 0x20]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x30], eax
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x2c], edx
        mov     eax, ecx
L5b9:
        pop     edi
        pop     esi
        ret     0x1c
    }
}
