/*
 * FUN_5e01e7b0 (301 B) — __thiscall (ECX = this), RET 0x18.
 * Constructor-ish: stores params, converts two to float, and computes a
 * format/shift value via a switch (jump table at 0x5e01e8e0 + byte table
 * at 0x5e01e8f4). Updates globals 0x5e77a824..0x5e77a830 when this == 0x5e77a574.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_5e01e8f4[];
extern void* g_5e01e8e0[];
extern int g_5e77a574;
extern int g_5e77a824;
extern int g_5e77a828;
extern int g_5e77a82c;
extern int g_5e77a830;
extern int __cdecl FUN_5e01e6e0(unsigned int);

__declspec(naked) void FUN_5e01e7b0(void)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esp + 0x1c]
        xor     ecx, ecx
        push    edi
        mov     edi, dword ptr [esp + 0x2c]
        mov     dword ptr [esi + 0x28], eax
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esi + 0x30], eax
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], ecx
        lea     ebp, [eax - 0x1]
        mov     eax, dword ptr [esp + 0x24]
        fstp    dword ptr [esi + 0x38]
        fild    qword ptr [esp + 0x10]
        cmp     eax, 0x20
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x40], ebp
        fstp    dword ptr [esi + 0x3c]
        ja      L_e84a
        jz      L_e841
        lea     ecx, [eax - 0x2]
        cmp     ecx, 0xe
        ja      L_e881
        xor     edx, edx
        mov     dl, byte ptr [ecx + g_5e01e8f4]
        jmp     dword ptr [edx*4 + g_5e01e8e0]
    L_e81d:
        mov     dword ptr [esi + 0x48], 0xd
        jmp     L_e89c
    L_e826:
        mov     dword ptr [esi + 0x48], 0xe
        jmp     L_e89c
    L_e82f:
        mov     dword ptr [esi + 0x48], 0xf
        jmp     L_e89c
    L_e838:
        mov     dword ptr [esi + 0x48], 0x10
        jmp     L_e89c
    L_e841:
        mov     dword ptr [esi + 0x48], 0xc
        jmp     L_e89c
    L_e84a:
        cmp     eax, 0x100
        ja      L_e87a
        jz      L_e871
        mov     ecx, eax
        sub     ecx, 0x40
        jz      L_e868
        sub     ecx, 0x40
        jnz     L_e881
        mov     dword ptr [esi + 0x48], 0xa
        jmp     L_e89c
    L_e868:
        mov     dword ptr [esi + 0x48], 0xb
        jmp     L_e89c
    L_e871:
        mov     dword ptr [esi + 0x48], 0x9
        jmp     L_e89c
    L_e87a:
        cmp     eax, 0x200
        jz      L_e895
    L_e881:
        shr     eax, 0x1
        push    eax
        call    FUN_5e01e6e0
        mov     ecx, 0x10
        sub     ecx, eax
        mov     dword ptr [esi + 0x48], ecx
        jmp     L_e89c
    L_e895:
        mov     dword ptr [esi + 0x48], 0x8
    L_e89c:
        mov     edx, dword ptr [esi + 0x48]
        mov     ecx, 0x10
        sub     ecx, edx
        lea     eax, [edi - 0x1]
        shl     eax, cl
        cmp     dword ptr [g_5e77a574], esi
        mov     dword ptr [esi + 0x44], eax
        jnz     L_e8cd
        mov     dword ptr [g_5e77a824], ebx
        mov     dword ptr [g_5e77a828], ebp
        mov     dword ptr [g_5e77a830], eax
        mov     dword ptr [g_5e77a82c], edx
    L_e8cd:
        mov     eax, dword ptr [esi]
        pop     edi
        or      al, 0x4
        mov     dword ptr [esi], eax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x18
    }
}
