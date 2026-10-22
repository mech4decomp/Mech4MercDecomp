/*
 * FUN_10016120 (153 B) - __stdcall, RET 0x1c.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000D; else calls FUN_1001c8b0
 * (this, arg2, arg3), then FUN_1002ba50, storing results into this->+0x24/
 * +0x28/+0x2c/+0x30 and setting this->+4 = 1.  On failure frees via
 * FUN_1002bb80.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);
extern void __stdcall FUN_1002ba50(void);
extern void __stdcall FUN_1002bb80(void);

__declspec(naked) void __stdcall FUN_10016120(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0xc], 0
        je      L_16143
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x1c
L_16143:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    esi
        call    FUN_1001c8b0
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, eax
        test    edi, edi
        jl      L_16198
        mov     edx, dword ptr [esp + 0x2c]
        push    ebx
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_1002ba50
        mov     edi, eax
        test    edi, edi
        jl      L_16198
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x30], eax
        mov     eax, edi
        pop     edi
        mov     dword ptr [esi + 0x2c], ebx
        mov     byte ptr [esi + 4], 1
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x28], edx
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x1c
L_16198:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_161b0
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setne   cl
        push    ebx
        push    eax
        push    ecx
        call    FUN_1002bb80
L_161b0:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x1c
    }
}
