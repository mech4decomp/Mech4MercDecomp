/*
 * FUN_004c80b0 (212 B) — MLR __thiscall. Reads a stack arg (param_1),
 * copies fields, calls FUN_0041c830 / FUN_0041fde0, does FPU math,
 * virtual calls via vtable, and copies a 12-dword block back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fde0(void);

__declspec(naked) void FUN_004c80b0(void)
{
    __asm {
        sub     esp, 0x60
        mov     eax, dword ptr [esp + 0x64]
        mov     edx, dword ptr [eax + 0x9c]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [eax + 0x8c]
        mov     eax, dword ptr [eax + 0xac]
        push    ebp
        mov     dword ptr [esp + 0x8], ecx
        mov     ecx, dword ptr [ebx + 0x10]
        push    esi
        push    edi
        add     ecx, 0x80
        mov     dword ptr [esp + 0x14], edx
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0041c830
        fld     dword ptr [ebx + 0x2c]
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebx + 0x3c]
        mov     ecx, dword ptr [ebx + 0x4c]
        fsub    st(0), st(1)
        lea     ebp, [ebx + 0x20]
        mov     dword ptr [esp + 0x2c], eax
        fstp    dword ptr [esp + 0x34]
        push    0x0
        mov     dword ptr [esp + 0x34], ecx
        fstp    st(0)
        push    0x1
        fld     dword ptr [esp + 0x28]
        mov     ecx, 0xc
        fsub    dword ptr [esp + 0x34]
        mov     esi, ebp
        lea     edi, [esp + 0x48]
        push    0x2
        fstp    dword ptr [esp + 0x44]
        lea     edx, [esp + 0x40]
        fld     dword ptr [esp + 0x30]
        rep movsd
        fsub    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x48]
        push    edx
        mov     ecx, ebp
        call    FUN_0041fde0
        mov     eax, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     eax, 0xffffffee
        or      eax, 0x4
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     ecx, ebx
        call    dword ptr [ebx + 0x1c]
        or      dword ptr [ebx + 0x18], 0x10
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x10]
        mov     edi, ebp
        mov     ecx, 0xc
        lea     esi, [esp + 0x40]
        rep movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x60
        ret     0x4
    }
}
