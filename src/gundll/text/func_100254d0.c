/*
 * FUN_100254D0 (300 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20,
 * then dispatches vtable[5]/[4]/[5] (call [ecx+0x14]/[ecx+0x10]) with
 * g_10075060 and GUIDs 0x10049bc4/0x10049e50/0x10049c2c, then
 * FUN_1002b4f0(obj, g_10075060, 0x10049e64, &local1, this).  On success
 * stores +0x1c/+0x20/+0x24/+0x28/+0x2c.  On failure frees local3 via
 * FUN_10001d60 and calls FUN_1002b6d0(local2, this, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);   /* rel32 call */
extern void __stdcall FUN_1002b4f0(void);
extern void __stdcall FUN_1002b6d0(void);
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100254D0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x10], ebx
        jne     L_54ff
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
L_54ff:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        cmp     esi, ebx
        jl      L_55c6
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_55c6
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e50
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_55c6
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c2c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_55c6
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x20]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x10049e64
        push    edx
        push    eax
        call    FUN_1002b4f0
        mov     esi, eax
        cmp     esi, ebx
        jl      L_55c6
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [edi + 0x20], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], ecx
        mov     dword ptr [edi + 0x2c], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_55c6:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_55d7
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_55d7:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_55f1
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        cmp     dword ptr [edi + 0xc], ebx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002b6d0
L_55f1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
