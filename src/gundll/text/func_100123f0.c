/*
 * FUN_100123F0 (152 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then dispatches vtable[5] (call [ecx+0x14]) with g_10075060 and GUIDs
 * 0x10049bd4 / 0x10049be0, storing +0x24/+0x28 on success.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100123F0(void)
{
    __asm {
        sub     esp, 8
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        mov     dword ptr [esp + 8], 0
        jne     L_1241b
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     0x4
L_1241b:
        push    esi
        call    FUN_1001c8d0
        test    eax, eax
        jl      L_12481
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bd4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        je      L_1244a
        test    eax, eax
        jl      L_12481
L_1244a:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049be0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        jne     L_1246f
        xor     eax, eax
        jmp     L_12473
L_1246f:
        test    eax, eax
        jl      L_12481
L_12473:
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x28], edx
L_12481:
        pop     esi
        add     esp, 8
        ret     0x4
    }
}
