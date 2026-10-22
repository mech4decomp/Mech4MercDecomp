/*
 * FUN_100211D0 (115 B) - __stdcall, RET 0x20.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls FUN_1001c8b0,
 * duplicates a string via FUN_10001dd0, and stores the handles at
 * +0x24/+0x28/+0x2c/+0x30/+0x34 and sets the +0x4 flag.  Returns
 * 0x8007000E on alloc failure.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);
extern void __stdcall FUN_10001dd0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100211D0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      L_1e7
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x20
L_1e7:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        test    eax, eax
        jl      L_23e
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     L_217
        test    edi, edi
        je      L_217
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x20
L_217:
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esi + 0x24], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esi + 0x28], edx
        mov     edx, dword ptr [esp + 0x24]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x34], eax
        mov     byte ptr [esi + 0x4], 1
        mov     dword ptr [esi + 0x30], edx
        mov     eax, ecx
L_23e:
        pop     edi
        pop     esi
        ret     0x20
    }
}
