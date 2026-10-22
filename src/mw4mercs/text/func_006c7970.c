/*
 * FUN_006c7970 (391 B) — __thiscall (ECX = this), RET 0x24 (9 stack params).
 * Allocates a 0x90-byte float object via FUN_006f3c80, fills it with
 * FILD/FST/FSTP conversions of the integer params scaled by a global
 * divisor, and links it into a list at this+0x44.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_006f3c80(int size, int a);

extern int   g_0082e220;
extern float g_0076d064;

__declspec(naked) void __stdcall FUN_006c7970(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [g_0082e220]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        push    0x90
        mov     edi, ecx
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x3c]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [eax + 0x88], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [eax + 0x84], ecx
        xor     ecx, ecx
        mov     dword ptr [esp + 0x14], ecx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ecx
        add     ebp, esi
        fst     dword ptr [eax]
        add     ebx, edx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ecx
        mov     ebp, dword ptr [esp + 0x34]
        fst     dword ptr [esp + 0x24]
        mov     word ptr [eax + 0x8e], si
        fstp    dword ptr [eax + 0x4]
        add     esi, ebp
        mov     word ptr [eax + 0x8c], dx
        fstp    dword ptr [eax + 0x20]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ecx
        fst     dword ptr [eax + 0x24]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ecx
        fst     dword ptr [esp + 0x3c]
        mov     ebx, dword ptr [esp + 0x3c]
        fstp    dword ptr [eax + 0x40]
        mov     dword ptr [eax + 0x60], ebx
        mov     ebx, dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x44]
        mov     dword ptr [eax + 0x64], ebx
        mov     ebx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x10], ebx
        fild    qword ptr [esp + 0x10]
        mov     ebx, dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ecx
        fdivr   dword ptr [g_0076d064]
        add     edx, ebx
        fstp    dword ptr [esp + 0x3c]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ecx
        fmul    dword ptr [esp + 0x3c]
        fst     dword ptr [eax + 0x18]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], ecx
        fmul    dword ptr [esp + 0x3c]
        fst     dword ptr [esp + 0x24]
        fstp    dword ptr [eax + 0x1c]
        fstp    dword ptr [eax + 0x38]
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ecx
        fmul    dword ptr [esp + 0x3c]
        fst     dword ptr [eax + 0x3c]
        fild    qword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x3c]
        fst     dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x3c]
        fstp    dword ptr [eax + 0x58]
        fstp    dword ptr [eax + 0x5c]
        mov     dword ptr [eax + 0x68], ecx
        mov     dword ptr [eax + 0x48], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x74], ecx
        mov     dword ptr [eax + 0x54], ecx
        mov     dword ptr [eax + 0x34], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     ecx, 0x3f800000
        mov     dword ptr [eax + 0x78], edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x6c], ecx
        mov     dword ptr [eax + 0x4c], ecx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [edi + 0x44]
        pop     edi
        mov     dword ptr [eax + 0x7c], edx
        or      edx, 0xffffffff
        pop     esi
        mov     dword ptr [eax + 0x70], edx
        mov     dword ptr [eax + 0x50], edx
        mov     dword ptr [eax + 0x30], edx
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [ecx + 0x4]
        pop     ebp
        mov     dword ptr [eax + 0x80], edx
        mov     dword ptr [ecx + 0x4], eax
        pop     ebx
        add     esp, 0x8
        ret     0x24
    }
}
