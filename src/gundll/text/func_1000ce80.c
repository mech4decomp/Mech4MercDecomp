/*
 * FUN_1000CE80 (131 B) - __stdcall, RET 0x14.  Registration helper: if
 * this->obj(+0xc) is non-null returns 0xC112000D; else calls
 * FUN_1001c8b0(this, arg2, arg3) then FUN_1002e1c0(&local, arg5); on
 * success sets this->+4=1 and stores +0x24/+0x28.  On failure calls
 * FUN_1002e220(handle, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_1001c8b0(int a, int b, int c);
extern int __stdcall FUN_1002e1c0(void **, void *);
extern void __stdcall FUN_1002e220(int, void *);

__declspec(naked) void __stdcall FUN_1000CE80(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        je      L_cea1
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        pop     ecx
        ret     0x14
L_cea1:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        call    FUN_1001c8b0
        mov     esi, eax
        test    esi, esi
        jl      L_cee4
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        call    FUN_1002e1c0
        mov     esi, eax
        test    esi, esi
        jl      L_cee4
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 8]
        mov     byte ptr [edi + 4], 1
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        pop     esi
        pop     ecx
        ret     0x14
L_cee4:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_cefb
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002e220
L_cefb:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x14
    }
}
