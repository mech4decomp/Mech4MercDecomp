/*
 * FUN_10025140 (246 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20,
 * then dispatches vtable[5] (call [ecx+0x14]) with g_10075060 and GUIDs
 * 0x10049bc4/0x10049e04, then FUN_1002b210(obj, g_10075060, 0x10049e84,
 * &local0, this).  On success stores +0x1c/+0x20/+0x24/+0x28.  On failure
 * calls FUN_1002b420(local2, this, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);   /* rel32 call */
extern int __stdcall FUN_1002b210(int a, int b, int c, void *d, void *e);
extern void __cdecl FUN_1002b420(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10025140(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 8], 0
        jne     L_5175
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_5175:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_5210
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_5210
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e04
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_5210
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x18]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x10049e84
        push    edx
        push    eax
        call    FUN_1002b210
        mov     esi, eax
        test    esi, esi
        jl      L_5210
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x1c], ecx
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x20], edx
        mov     dword ptr [edi + 0x28], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
L_5210:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_522c
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002b420
L_522c:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
