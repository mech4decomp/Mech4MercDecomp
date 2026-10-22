/*
 * FUN_006c6070 (627 B) — Font/texture object constructor (__thiscall, RET 4).
 *
 * Builds a font object at ECX, allocates two sub-objects via FUN_006f3c80,
 * copies the name string, and links them into a global list (g_83a208).
 *
 * __thiscall (ECX = this), RET 4 (one stack param: name string).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_006f3c80(unsigned int size, unsigned int flag);
extern void __cdecl FUN_00733680(void *a, void *b, void *c);
extern void __cdecl FUN_00733700(void *a, void *b);

extern unsigned int g_82e220;
extern unsigned int g_83a208;

__declspec(naked) void __stdcall FUN_006c6070(void *param)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        push    ebp
        mov     ebp, ecx
        xor     ebx, ebx
        push    esi
        mov     eax, 0x3f800000
        push    edi
        mov     edi, dword ptr [esp + 0x58]
        mov     dword ptr [ebp + 0x14], eax
        mov     dword ptr [ebp + 0x10], eax
        mov     eax, dword ptr [g_82e220]
        or      ecx, 0xffffffff
        push    eax
        mov     dword ptr [ebp + 0x8], ecx
        xor     eax, eax
        repne   scasb
        not     ecx
        add     ecx, 0x24
        lea     esi, [ebp + 0x3c]
        push    ecx
        mov     dword ptr [ebp + 0x20], ebx
        mov     dword ptr [ebp + 0x1c], ebx
        mov     dword ptr [ebp + 0x18], ebx
        mov     dword ptr [ebp + 0x2c], ebx
        mov     dword ptr [ebp + 0x28], ebx
        mov     dword ptr [ebp + 0x24], ebx
        mov     dword ptr [ebp + 0x38], ebx
        mov     dword ptr [ebp + 0x34], ebx
        mov     dword ptr [ebp + 0x30], ebx
        mov     dword ptr [ebp + 0xc], 0x1
        mov     byte ptr [ebp + 0x48], bl
        mov     dword ptr [esi], ebx
        mov     dword ptr [ebp + 0x40], ebx
        call    FUN_006f3c80
        mov     edi, dword ptr [esp + 0x58]
        mov     dword ptr [ebp + 0x44], eax
        push    edi
        lea     eax, [ebp + 0x40]
        push    eax
        push    esi
        call    FUN_00733680
        mov     edx, dword ptr [esi]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        call    FUN_00733700
        mov     ecx, dword ptr [esp + 0x50]
        cmp     ecx, ebx
        jnz     L_610e
        mov     ecx, 0x20
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x4c], ecx
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x40], ecx
L_610e:
        mov     eax, dword ptr [ebp + 0x44]
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x4c]
        mov     dword ptr [eax + 0x14], ecx
        mov     edx, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [ebp + 0x4], ecx
        mov     dword ptr [eax], ebx
        or      ecx, 0xffffffff
        mov     dword ptr [eax + 0x18], 0x1
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [ebp], edx
        lea     edx, [eax + 0x20]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [g_82e220]
        push    ecx
        push    0x90
        call    FUN_006f3c80
        mov     dword ptr [eax + 0x88], ebx
        mov     dx, word ptr [esp + 0x4c]
        mov     word ptr [eax + 0x8c], dx
        mov     cx, word ptr [esp + 0x50]
        mov     edx, dword ptr [ebp + 0x40]
        mov     word ptr [eax + 0x8e], cx
        mov     dword ptr [eax + 0x84], edx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax + 0x20], ebx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebx
        fstp    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x10], edx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebx
        fstp    dword ptr [eax + 0x40]
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esp + 0x10], ecx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebx
        fstp    dword ptr [eax + 0x44]
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x10], edx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x64], ebx
        mov     dword ptr [eax + 0x18], ebx
        mov     dword ptr [eax + 0x1c], ebx
        fstp    dword ptr [eax + 0x60]
        mov     dword ptr [eax + 0x38], ebx
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        fidiv   dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebx
        fstp    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x10], ecx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], ebx
        fidiv   dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], ebx
        pop     edi
        pop     esi
        fstp    dword ptr [eax + 0x58]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x8], ecx
        fild    qword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x8], edx
        mov     dword ptr [esp + 0xc], ebx
        fidiv   dword ptr [esp + 0x8]
        mov     dword ptr [esp + 0xc], ebx
        fstp    dword ptr [eax + 0x5c]
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x8], ecx
        fild    qword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x8], edx
        mov     dword ptr [esp + 0xc], ebx
        or      ecx, 0xffffffff
        fidiv   dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x70], ecx
        mov     dword ptr [eax + 0x50], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, 0x3f800000
        mov     dword ptr [eax + 0x6c], ecx
        mov     dword ptr [eax + 0x4c], ecx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [ebp + 0x44]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x7c], ebx
        mov     dword ptr [eax + 0x68], ebx
        mov     dword ptr [eax + 0x48], ebx
        mov     dword ptr [eax + 0x28], ebx
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0x74], ebx
        mov     dword ptr [eax + 0x54], ebx
        mov     dword ptr [eax + 0x34], ebx
        mov     dword ptr [eax + 0x14], ebx
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [eax + 0x80], edx
        fstp    dword ptr [eax + 0x78]
        mov     eax, dword ptr [g_83a208]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, ebp
        pop     ebp
        mov     dword ptr [g_83a208], ecx
        pop     ebx
        add     esp, 0x44
        ret     4
    }
}
