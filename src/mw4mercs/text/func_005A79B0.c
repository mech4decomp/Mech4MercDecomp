/*
 * FUN_005A79B0 (648 B) — __thiscall (RET 0x8). Gameplay object update:
 * validates a token, then builds/refreshes a set of sub-objects (0x188,
 * 0x180) copying matrix/vector data and calling into the object factory.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004F9400(void);
extern void __cdecl FUN_0041FD80(void);
extern void __cdecl FUN_005F07C0(void);
extern void __cdecl FUN_0041FCB0(void);
extern void __cdecl FUN_005FA480(void);
extern void __cdecl FUN_0041FCD0(void);
extern void __cdecl FUN_005A7E40(void);
extern void __cdecl FUN_00507F90(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040C410(void);
extern void __cdecl FUN_00766C60(void);
extern void __cdecl FUN_004E2F40(void);
extern void __cdecl FUN_0040CA40(void);
extern void __cdecl FUN_0040CBB0(void);
extern void __cdecl FUN_0041FDE0(void);
extern void __cdecl FUN_004DAA20(void);
extern void* g_007DAB44;
extern unsigned int g_007DAB40;
extern unsigned int g_007DC728;
extern float g_007B9550;
extern float g_0077D094;

__declspec(naked) void FUN_005A79B0(void)
{
    __asm {
        mov     eax, dword ptr [g_007DAB44]
        mov     eax, dword ptr [eax]
        sub     esp, 0xd4
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [g_007DAB40]
        mov     ebx, ecx
        xor     eax, esi
        mov     ecx, dword ptr [eax + 0x20]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004F9400
        test    al, al
        je      L5A7C2B
        lea     ebp, [ebx + 0x188]
        mov     ecx, ebp
        call    FUN_0041FD80
        test    eax, eax
        jne     L5A7A30
        mov     edx, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        mov     ecx, ebx
        mov     esi, eax
        call    FUN_005F07C0
        mov     ecx, ebp
        mov     edi, eax
        call    FUN_0041FCB0
        mov     eax, dword ptr [ebx + 0x17c]
        push    1
        push    eax
        add     esi, 0x38
        push    esi
        mov     ecx, edi
        call    FUN_005FA480
        push    eax
        mov     ecx, ebp
        call    FUN_0041FCD0
        mov     ecx, ebx
        call    FUN_005A7E40
L5A7A30:
        lea     edi, [ebx + 0x180]
        mov     ecx, edi
        mov     dword ptr [esp + 0x10], edi
        call    FUN_0041FD80
        test    eax, eax
        je      L5A7C2B
        mov     ecx, edi
        call    FUN_0041FD80
        fld     dword ptr [eax + 0x28]
        fcomp   dword ptr [g_007B9550]
        fnstsw  ax
        test    ah, 0x41
        jne     L5A7C2B
        mov     ecx, dword ptr [ebx + 0x17c]
        test    ecx, ecx
        je      L5A7C2B
        lea     edx, [esp + 0x78]
        push    edx
        call    FUN_00507F90
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esp + 0x14], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0x18], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0041FD80
        test    eax, eax
        je      L5A7AF8
        mov     ecx, ebp
        call    FUN_0041FD80
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x78]
        rep     movsd
        mov     ecx, ebp
        call    FUN_0041FD80
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x14], ecx
        mov     edx, dword ptr [eax + 0x1c]
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x7c]
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00428810
        mov     edi, dword ptr [esp + 0x10]
        jmp     L5A7B22
L5A7AF8:
        mov     ecx, dword ptr [ebx + 0x17c]
        lea     edx, [esp + 0x78]
        push    edx
        call    FUN_00507F90
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, eax
        call    FUN_00428730
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [g_0077D094]
        fstp    dword ptr [esp + 0x24]
L5A7B22:
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x60]
        call    FUN_0040C410
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_00766C60
        mov     ecx, ebx
        mov     dword ptr [esp + 0x74], 0x43fa0000
        call    FUN_005F07C0
        lea     ecx, [esp + 0x5c]
        mov     dword ptr [esp + 0x3c], eax
        lea     eax, [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [g_007DC728]
        lea     edx, [esp + 0xa8]
        push    eax
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x38], 0
        mov     dword ptr [esp + 0x44], 0xf000
        call    FUN_004E2F40
        mov     eax, dword ptr [esp + 0x2c]
        fld     dword ptr [eax + 0x18]
        push    ecx
        mov     esi, eax
        add     eax, 0xc
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0040CA40
        lea     ecx, [esp + 0x50]
        push    ecx
        push    esi
        lea     ecx, [esp + 0x4c]
        call    FUN_0040CBB0
        mov     ecx, edi
        call    FUN_0041FD80
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [edx + 0x18]
        mov     dword ptr [eax + 0x28], ecx
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edx + 0x18]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x48], eax
        call    FUN_0041FD80
        mov     esi, dword ptr [eax + 0xd8]
        push    0
        push    1
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0xbc]
        rep     movsd
        push    2
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0xc4]
        call    FUN_0041FDE0
        mov     esi, dword ptr [esp + 0x10]
        lea     edx, [esp + 0xb4]
        push    edx
        mov     ecx, esi
        call    FUN_0041FD80
        mov     ecx, eax
        call    FUN_004DAA20
        mov     ecx, esi
        call    FUN_0041FD80
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx + 0x48]
L5A7C2B:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xd4
        ret     8
    }
}
